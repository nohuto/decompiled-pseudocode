/*
 * XREFs of KeFlushSingleCurrentTb @ 0x140389ED8
 * Callers:
 *     MiStackTheftIsr @ 0x140536460 (MiStackTheftIsr.c)
 *     MiDbgReleaseAddress @ 0x1405460BC (MiDbgReleaseAddress.c)
 *     MiDbgTranslatePhysicalAddress @ 0x1405461F0 (MiDbgTranslatePhysicalAddress.c)
 *     MiDbgUnTranslatePhysicalAddress @ 0x1405465C4 (MiDbgUnTranslatePhysicalAddress.c)
 *     MiDbgWriteCheck @ 0x1405466BC (MiDbgWriteCheck.c)
 *     MmReadProcessPageTables @ 0x140547E00 (MmReadProcessPageTables.c)
 *     MmInvalidateDumpAddresses @ 0x140997AE8 (MmInvalidateDumpAddresses.c)
 * Callees:
 *     KiIsSecureProcessFlush @ 0x14033B4E0 (KiIsSecureProcessFlush.c)
 *     HvlFlushRangeListTb @ 0x14038FF5C (HvlFlushRangeListTb.c)
 *     KiPrepareFlushParameters @ 0x140390D2C (KiPrepareFlushParameters.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSetUserTbFlushPending @ 0x1403FF4F0 (KiSetUserTbFlushPending.c)
 *     memset @ 0x140414200 (memset.c)
 *     KiPrepareFlushCurrentAffinity @ 0x140519AC4 (KiPrepareFlushCurrentAffinity.c)
 *     VmFlushTb @ 0x1405A274C (VmFlushTb.c)
 *     ExFlushTb @ 0x1405B7218 (ExFlushTb.c)
 */

__int64 __fastcall KeFlushSingleCurrentTb(unsigned __int64 a1, unsigned int a2)
{
  bool IsSecureProcessFlush; // al
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  bool v8; // r14
  char v9; // di
  __int64 result; // rax
  unsigned __int64 v11; // rbx
  int v12; // r8d
  int v13; // r9d
  __int64 v14; // rcx
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v17; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v19; // r8
  int v20; // eax
  bool v21; // zf
  char v22[8]; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v23; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v24; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v25; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v26; // [rsp+60h] [rbp-A0h]
  _BYTE v27[176]; // [rsp+70h] [rbp-90h] BYREF

  v24 = 0LL;
  memset(v27, 0, 0xA8uLL);
  v22[0] = 0;
  IsSecureProcessFlush = KiIsSecureProcessFlush(a1, a2);
  v8 = IsSecureProcessFlush;
  v9 = (HvlEnlightenments & 0x800000) != 0 && (HvlEnlightenments & 2) != 0;
  if ( !IsSecureProcessFlush && !v9
    || (KiPrepareFlushParameters(a2, &v24, v22),
        KiPrepareFlushCurrentAffinity(v27),
        LOBYTE(v12) = v22[0],
        LOBYTE(v13) = v8,
        v25 = a1 & 0xFFFFFFFFFFFFF000uLL,
        result = HvlFlushRangeListTb(v24, (unsigned int)v27, v12, v13, v9, 1, (__int64)&v25),
        !(_BYTE)result) )
  {
    result = (unsigned int)(1 << a2);
    if ( (result & 0xA) != 0 )
    {
      if ( KiFlushPcid )
      {
        result = (__int64)KeGetCurrentThread();
        v14 = *(_QWORD *)(result + 184);
        if ( !*(_BYTE *)(v14 + 912) )
        {
          if ( (KiFlushPcid & 2) != 0 )
          {
            *(_QWORD *)&v26 = 1LL;
            *((_QWORD *)&v26 + 1) = a1;
            result = 0LL;
            __asm { invpcid eax, [rsp+150h+var_F0] }
          }
          else
          {
            result = KiSetUserTbFlushPending(v14, v5, v6, v7);
          }
        }
      }
    }
    __invlpg((void *)a1);
  }
  v11 = a1 & 0xFFFFFFFFFFFFF000uLL;
  if ( VmTbFlushEnabled )
  {
    v23 = v11;
    result = VmFlushTb(1LL, &v23, a2);
  }
  if ( ExTbFlushActive )
  {
    v23 = v11;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 0xFFFC;
    }
    ExFlushTb(1LL, &v23, a2);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v17 = KeGetCurrentIrql();
        if ( v17 <= 0xFu && CurrentIrql <= 0xFu && v17 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v19 = CurrentPrcb->SchedulerAssist;
          v20 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v21 = (v20 & v19[5]) == 0;
          v19[5] &= v20;
          if ( v21 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
