/*
 * XREFs of KeFlushMultipleRangeCurrentTb @ 0x1403AD40C
 * Callers:
 *     MiAgeWorkingSetTail @ 0x1402F3AD0 (MiAgeWorkingSetTail.c)
 *     MiFlushTbList @ 0x14032F1B0 (MiFlushTbList.c)
 * Callees:
 *     KiIsSecureProcessFlush @ 0x1402F3A88 (KiIsSecureProcessFlush.c)
 *     HvlFlushRangeListTb @ 0x14039DB1C (HvlFlushRangeListTb.c)
 *     KiPrepareFlushParameters @ 0x14039E48C (KiPrepareFlushParameters.c)
 *     KiFlushRangeTb @ 0x1403A22F0 (KiFlushRangeTb.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140435E00 (memset.c)
 *     VmFlushTb @ 0x14045F6DE (VmFlushTb.c)
 *     KiPrepareFlushCurrentAffinity @ 0x14056F6CC (KiPrepareFlushCurrentAffinity.c)
 *     ExFlushTb @ 0x14063F75C (ExFlushTb.c)
 */

char __fastcall KeFlushMultipleRangeCurrentTb(unsigned int a1, unsigned __int64 *a2, unsigned int a3)
{
  __int64 v5; // rdi
  unsigned __int64 v6; // rcx
  char result; // al
  __int64 v8; // r8
  __int64 v9; // r9
  char v10; // si
  char v11; // bl
  unsigned __int64 *v12; // rbx
  __int64 v13; // rsi
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r10
  unsigned __int8 v18; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v20; // r8
  int v21; // eax
  bool v22; // zf
  char v23[8]; // [rsp+40h] [rbp-158h] BYREF
  __int64 v24; // [rsp+48h] [rbp-150h] BYREF
  _BYTE v25[272]; // [rsp+50h] [rbp-148h] BYREF

  v24 = 0LL;
  v5 = a1;
  memset(v25, 0, 0x108uLL);
  v6 = *a2;
  v23[0] = 0;
  result = KiIsSecureProcessFlush(v6, a3);
  v10 = result;
  v11 = (HvlEnlightenments & 0x800000) != 0 && (HvlEnlightenments & 2) != 0;
  if ( !result && !v11
    || (KiPrepareFlushParameters(a3, (unsigned __int64 *)&v24, v23),
        KiPrepareFlushCurrentAffinity(v25),
        LOBYTE(v14) = v23[0],
        LOBYTE(v15) = v10,
        (result = HvlFlushRangeListTb(v24, (__int64)v25, v14, v15, v11, v5, (__int64)a2)) == 0) )
  {
    if ( (_DWORD)v5 )
    {
      v12 = a2;
      v13 = v5;
      do
      {
        result = KiFlushRangeTb(*v12++, a3, v8, v9);
        --v13;
      }
      while ( v13 );
    }
  }
  if ( VmTbFlushEnabled )
    result = VmFlushTb((unsigned int)v5, a2, a3);
  if ( ExTbFlushActive )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 0xFFFC;
    }
    ExFlushTb((unsigned int)v5, a2, a3);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v18 = KeGetCurrentIrql();
        if ( v18 <= 0xFu && CurrentIrql <= 0xFu && v18 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v20 = CurrentPrcb->SchedulerAssist;
          v21 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v22 = (v21 & v20[5]) == 0;
          v20[5] &= v21;
          if ( v22 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
