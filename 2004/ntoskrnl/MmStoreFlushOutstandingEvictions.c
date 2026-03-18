/*
 * XREFs of MmStoreFlushOutstandingEvictions @ 0x140311254
 * Callers:
 *     SmStoreCompressionStart @ 0x1406D2974 (SmStoreCompressionStart.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14020B3A0 (KeWaitForSingleObject.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140212700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeSetEvent @ 0x140286AD0 (KeSetEvent.c)
 *     KeResetEvent @ 0x140297C10 (KeResetEvent.c)
 *     ExAcquireSpinLockExclusive @ 0x1402CF510 (ExAcquireSpinLockExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 */

NTSTATUS MmStoreFlushOutstandingEvictions()
{
  unsigned __int64 v0; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v5; // eax
  bool v6; // zf

  v0 = ExAcquireSpinLockExclusive(&dword_140C51020);
  if ( !dword_140C51010 )
    KeResetEvent(&Object);
  ++dword_140C51010;
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C51020);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v0 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v5 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v0 + 1));
        v6 = (v5 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v5;
        if ( v6 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v0);
  KeSetEvent(&stru_140C51030, 0, 0);
  return KeWaitForSingleObject(&Object, WrKernel, 0, 0, 0LL);
}
