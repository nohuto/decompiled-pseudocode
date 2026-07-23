/*
 * XREFs of KeFlushSingleCurrentTb @ 0x14038A028
 * Callers:
 *     MiStackTheftIsr @ 0x1405366A0 (MiStackTheftIsr.c)
 *     MiDbgReleaseAddress @ 0x1405462FC (MiDbgReleaseAddress.c)
 *     MiDbgTranslatePhysicalAddress @ 0x140546430 (MiDbgTranslatePhysicalAddress.c)
 *     MiDbgUnTranslatePhysicalAddress @ 0x140546804 (MiDbgUnTranslatePhysicalAddress.c)
 *     MiDbgWriteCheck @ 0x1405468FC (MiDbgWriteCheck.c)
 *     MmReadProcessPageTables @ 0x140548040 (MmReadProcessPageTables.c)
 *     MmInvalidateDumpAddresses @ 0x140998AE8 (MmInvalidateDumpAddresses.c)
 * Callees:
 *     KiIsSecureProcessFlush @ 0x140346230 (KiIsSecureProcessFlush.c)
 *     HvlFlushRangeListTb @ 0x1403900AC (HvlFlushRangeListTb.c)
 *     KiPrepareFlushParameters @ 0x140390E7C (KiPrepareFlushParameters.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSetUserTbFlushPending @ 0x1403FF6D0 (KiSetUserTbFlushPending.c)
 *     memset @ 0x140414300 (memset.c)
 *     KiPrepareFlushCurrentAffinity @ 0x140519D04 (KiPrepareFlushCurrentAffinity.c)
 *     VmFlushTb @ 0x1405A297C (VmFlushTb.c)
 *     ExFlushTb @ 0x1405B7448 (ExFlushTb.c)
 */

__int64 __fastcall KeFlushSingleCurrentTb(unsigned __int64 a1, unsigned int a2)
{
  bool IsSecureProcessFlush; // al
  __int64 v5; // rdx
  __int64 v6; // r8
  bool v7; // r14
  char v8; // di
  __int64 result; // rax
  unsigned __int64 v10; // rbx
  int v11; // r8d
  int v12; // r9d
  __int64 v13; // rcx
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v16; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v18; // r8
  int v19; // eax
  bool v20; // zf
  char v21[8]; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v22; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v23; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v24; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v25; // [rsp+60h] [rbp-A0h]
  _BYTE v26[176]; // [rsp+70h] [rbp-90h] BYREF

  v23 = 0LL;
  memset(v26, 0, 0xA8uLL);
  v21[0] = 0;
  IsSecureProcessFlush = KiIsSecureProcessFlush(a1, a2);
  v7 = IsSecureProcessFlush;
  v8 = (HvlEnlightenments & 0x800000) != 0 && (HvlEnlightenments & 2) != 0;
  if ( !IsSecureProcessFlush && !v8
    || (KiPrepareFlushParameters(a2, &v23, v21),
        KiPrepareFlushCurrentAffinity(v26),
        LOBYTE(v11) = v21[0],
        LOBYTE(v12) = v7,
        v24 = a1 & 0xFFFFFFFFFFFFF000uLL,
        result = HvlFlushRangeListTb(v23, (unsigned int)v26, v11, v12, v8, 1, (__int64)&v24),
        !(_BYTE)result) )
  {
    result = (unsigned int)(1 << a2);
    if ( (result & 0xA) != 0 )
    {
      if ( KiFlushPcid )
      {
        result = (__int64)KeGetCurrentThread();
        v13 = *(_QWORD *)(result + 184);
        if ( !*(_BYTE *)(v13 + 912) )
        {
          if ( (KiFlushPcid & 2) != 0 )
          {
            *(_QWORD *)&v25 = 1LL;
            *((_QWORD *)&v25 + 1) = a1;
            result = 0LL;
            __asm { invpcid eax, [rsp+150h+var_F0] }
          }
          else
          {
            result = KiSetUserTbFlushPending(v13, v5, v6);
          }
        }
      }
    }
    __invlpg((void *)a1);
  }
  v10 = a1 & 0xFFFFFFFFFFFFF000uLL;
  if ( VmTbFlushEnabled )
  {
    v22 = v10;
    result = VmFlushTb(1LL, &v22, a2);
  }
  if ( ExTbFlushActive )
  {
    v22 = v10;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 0xFFFC;
    }
    ExFlushTb(1LL, &v22, a2);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v16 = KeGetCurrentIrql();
        if ( v16 <= 0xFu && CurrentIrql <= 0xFu && v16 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v18 = CurrentPrcb->SchedulerAssist;
          v19 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v20 = (v19 & v18[5]) == 0;
          v18[5] &= v19;
          if ( v20 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
