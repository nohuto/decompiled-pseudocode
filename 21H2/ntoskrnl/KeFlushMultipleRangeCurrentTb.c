/*
 * XREFs of KeFlushMultipleRangeCurrentTb @ 0x1403C96BC
 * Callers:
 *     MiAgeWorkingSetTail @ 0x1402D2CB0 (MiAgeWorkingSetTail.c)
 *     MiDeleteVaTail @ 0x140345880 (MiDeleteVaTail.c)
 *     MiFlushTbList @ 0x140346270 (MiFlushTbList.c)
 * Callees:
 *     KiIsSecureProcessFlush @ 0x140346230 (KiIsSecureProcessFlush.c)
 *     HvlFlushRangeListTb @ 0x1403900AC (HvlFlushRangeListTb.c)
 *     KiPrepareFlushParameters @ 0x140390E7C (KiPrepareFlushParameters.c)
 *     KiFlushRangeTb @ 0x1403C97A0 (KiFlushRangeTb.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140414300 (memset.c)
 *     KiPrepareFlushCurrentAffinity @ 0x140519D04 (KiPrepareFlushCurrentAffinity.c)
 *     VmFlushTb @ 0x1405A297C (VmFlushTb.c)
 *     ExFlushTb @ 0x1405B7448 (ExFlushTb.c)
 */

char __fastcall KeFlushMultipleRangeCurrentTb(unsigned int a1, unsigned __int64 *a2, unsigned int a3)
{
  __int64 v5; // rdi
  unsigned __int64 v6; // rcx
  char result; // al
  char v8; // si
  char v9; // bl
  unsigned __int64 *v10; // rbx
  __int64 v11; // rsi
  int v12; // r8d
  int v13; // r9d
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r10
  unsigned __int8 v16; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v18; // r8
  int v19; // eax
  bool v20; // zf
  char v21[8]; // [rsp+40h] [rbp-F8h] BYREF
  unsigned __int64 v22; // [rsp+48h] [rbp-F0h] BYREF
  _BYTE v23[176]; // [rsp+50h] [rbp-E8h] BYREF

  v22 = 0LL;
  v5 = a1;
  memset(v23, 0, 0xA8uLL);
  v6 = *a2;
  v21[0] = 0;
  result = KiIsSecureProcessFlush(v6, a3);
  v8 = result;
  v9 = (HvlEnlightenments & 0x800000) != 0 && (HvlEnlightenments & 2) != 0;
  if ( !result && !v9
    || (KiPrepareFlushParameters(a3, &v22, v21),
        KiPrepareFlushCurrentAffinity(v23),
        LOBYTE(v12) = v21[0],
        LOBYTE(v13) = v8,
        (result = HvlFlushRangeListTb(v22, (__int64)v23, v12, v13, v9, v5, (__int64)a2)) == 0) )
  {
    if ( (_DWORD)v5 )
    {
      v10 = a2;
      v11 = v5;
      do
      {
        result = KiFlushRangeTb(*v10++, a3);
        --v11;
      }
      while ( v11 );
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
