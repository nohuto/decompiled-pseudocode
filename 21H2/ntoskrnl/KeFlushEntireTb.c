/*
 * XREFs of KeFlushEntireTb @ 0x1403B7260
 * Callers:
 *     MiRebaseDynamicRelocationRegions @ 0x140A50400 (MiRebaseDynamicRelocationRegions.c)
 * Callees:
 *     KxFlushEntireTb @ 0x1402D41D0 (KxFlushEntireTb.c)
 *     KiPreprocessFlushTb @ 0x1402D5F30 (KiPreprocessFlushTb.c)
 *     KiFlushAddressSpaceTb @ 0x1403902FC (KiFlushAddressSpaceTb.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     ExFlushTb @ 0x1405B7448 (ExFlushTb.c)
 */

__int64 KeFlushEntireTb()
{
  __int64 v0; // rdx
  __int64 v1; // r8
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r10
  unsigned __int8 v5; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v7; // r8
  int v8; // eax
  bool v9; // zf
  char v10; // [rsp+50h] [rbp+18h] BYREF
  unsigned __int8 v11; // [rsp+58h] [rbp+20h] BYREF

  v10 = 0;
  v11 = 0;
  KiPreprocessFlushTb(1, 3u, 2, &v10, &v11);
  if ( v10 )
  {
    LOBYTE(v1) = 1;
    result = KiFlushAddressSpaceTb(0LL, 0LL, v1, 1);
  }
  else
  {
    result = KxFlushEntireTb(2, v0);
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
        v5 = KeGetCurrentIrql();
        if ( v5 <= 0xFu && CurrentIrql <= 0xFu && v5 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v7 = CurrentPrcb->SchedulerAssist;
          v8 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v9 = (v8 & v7[5]) == 0;
          v7[5] &= v8;
          if ( v9 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
