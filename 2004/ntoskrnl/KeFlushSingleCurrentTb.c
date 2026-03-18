/*
 * XREFs of KeFlushSingleCurrentTb @ 0x1403875C8
 * Callers:
 *     MiStackTheftIsr @ 0x140530F90 (MiStackTheftIsr.c)
 *     MiDbgReleaseAddress @ 0x140540BEC (MiDbgReleaseAddress.c)
 *     MiDbgTranslatePhysicalAddress @ 0x140540D20 (MiDbgTranslatePhysicalAddress.c)
 *     MiDbgUnTranslatePhysicalAddress @ 0x1405410F4 (MiDbgUnTranslatePhysicalAddress.c)
 *     MiDbgWriteCheck @ 0x1405411EC (MiDbgWriteCheck.c)
 *     MmReadProcessPageTables @ 0x140542930 (MmReadProcessPageTables.c)
 *     MmInvalidateDumpAddresses @ 0x140994798 (MmInvalidateDumpAddresses.c)
 * Callees:
 *     KiIsSecureProcessFlush @ 0x14023A380 (KiIsSecureProcessFlush.c)
 *     HvlFlushRangeListTb @ 0x14038D59C (HvlFlushRangeListTb.c)
 *     KiPrepareFlushParameters @ 0x14038E36C (KiPrepareFlushParameters.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSetUserTbFlushPending @ 0x1403F82A0 (KiSetUserTbFlushPending.c)
 *     memset @ 0x14040A280 (memset.c)
 *     KiPrepareFlushCurrentAffinity @ 0x140514654 (KiPrepareFlushCurrentAffinity.c)
 *     VmFlushTb @ 0x14059D27C (VmFlushTb.c)
 *     ExFlushTb @ 0x1405B1C88 (ExFlushTb.c)
 */

__int64 __fastcall KeFlushSingleCurrentTb(unsigned __int64 a1, unsigned int a2)
{
  bool IsSecureProcessFlush; // al
  __int64 v5; // rdx
  bool v6; // r14
  char v7; // di
  __int64 result; // rax
  unsigned __int64 v9; // rbx
  int v10; // r8d
  int v11; // r9d
  __int64 v12; // rcx
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v15; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v17; // r8
  int v18; // eax
  bool v19; // zf
  char v20[8]; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v21; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v22; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v23; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v24; // [rsp+60h] [rbp-A0h]
  _BYTE v25[176]; // [rsp+70h] [rbp-90h] BYREF

  v22 = 0LL;
  memset(v25, 0, 0xA8uLL);
  v20[0] = 0;
  IsSecureProcessFlush = KiIsSecureProcessFlush(a1, a2);
  v6 = IsSecureProcessFlush;
  v7 = (HvlEnlightenments & 0x800000) != 0 && (HvlEnlightenments & 2) != 0;
  if ( !IsSecureProcessFlush && !v7
    || (KiPrepareFlushParameters(a2, &v22, v20),
        KiPrepareFlushCurrentAffinity(v25),
        LOBYTE(v10) = v20[0],
        LOBYTE(v11) = v6,
        v23 = a1 & 0xFFFFFFFFFFFFF000uLL,
        result = HvlFlushRangeListTb(v22, (unsigned int)v25, v10, v11, v7, 1, (__int64)&v23),
        !(_BYTE)result) )
  {
    result = (unsigned int)(1 << a2);
    if ( (result & 0xA) != 0 )
    {
      if ( KiFlushPcid )
      {
        result = (__int64)KeGetCurrentThread();
        v12 = *(_QWORD *)(result + 184);
        if ( !*(_BYTE *)(v12 + 912) )
        {
          if ( (KiFlushPcid & 2) != 0 )
          {
            *(_QWORD *)&v24 = 1LL;
            *((_QWORD *)&v24 + 1) = a1;
            result = 0LL;
            __asm { invpcid eax, [rsp+150h+var_F0] }
          }
          else
          {
            result = KiSetUserTbFlushPending(v12, v5);
          }
        }
      }
    }
    __invlpg((void *)a1);
  }
  v9 = a1 & 0xFFFFFFFFFFFFF000uLL;
  if ( VmTbFlushEnabled )
  {
    v21 = v9;
    result = VmFlushTb(1LL, &v21, a2);
  }
  if ( ExTbFlushActive )
  {
    v21 = v9;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 0xFFFC;
    }
    ExFlushTb(1LL, &v21, a2);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v15 = KeGetCurrentIrql();
        if ( v15 <= 0xFu && CurrentIrql <= 0xFu && v15 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v17 = CurrentPrcb->SchedulerAssist;
          v18 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v19 = (v18 & v17[5]) == 0;
          v17[5] &= v18;
          if ( v19 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
