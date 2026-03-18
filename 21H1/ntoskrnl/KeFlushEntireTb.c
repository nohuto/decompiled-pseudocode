/*
 * XREFs of KeFlushEntireTb @ 0x1403AD4C0
 * Callers:
 *     MiRebaseDynamicRelocationRegions @ 0x140A431FC (MiRebaseDynamicRelocationRegions.c)
 * Callees:
 *     KxFlushEntireTb @ 0x140277720 (KxFlushEntireTb.c)
 *     KiPreprocessFlushTb @ 0x140293880 (KiPreprocessFlushTb.c)
 *     KiFlushAddressSpaceTb @ 0x14038CC7C (KiFlushAddressSpaceTb.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     ExFlushTb @ 0x1405B1568 (ExFlushTb.c)
 */

__int64 KeFlushEntireTb()
{
  __int64 v0; // r8
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r10
  unsigned __int8 v4; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v6; // r8
  int v7; // eax
  bool v8; // zf
  char v9; // [rsp+50h] [rbp+18h] BYREF
  unsigned __int8 v10; // [rsp+58h] [rbp+20h] BYREF

  v9 = 0;
  v10 = 0;
  KiPreprocessFlushTb(1, 3u, 2, &v9, &v10);
  if ( v9 )
  {
    LOBYTE(v0) = 1;
    result = KiFlushAddressSpaceTb(0LL, 0LL, v0, 1);
  }
  else
  {
    result = KxFlushEntireTb(2);
  }
  if ( ExTbFlushActive )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 0xFFFC;
    }
    ExFlushTb(0LL, 0LL, 3LL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v4 = KeGetCurrentIrql();
        if ( v4 <= 0xFu && CurrentIrql <= 0xFu && v4 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v6 = CurrentPrcb->SchedulerAssist;
          v7 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v8 = (v7 & v6[5]) == 0;
          v6[5] &= v7;
          if ( v8 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
