/*
 * XREFs of MiDeleteKernelStackNode @ 0x1405360AC
 * Callers:
 *     MiInPageSingleKernelStack @ 0x140295F90 (MiInPageSingleKernelStack.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x1402C1960 (ExAcquireSpinLockExclusive.c)
 *     RtlAvlRemoveNode @ 0x1402D9370 (RtlAvlRemoveNode.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeleteKernelStackNode(unsigned __int64 *P)
{
  unsigned __int64 v2; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v6; // eax
  bool v7; // zf

  v2 = ExAcquireSpinLockExclusive(&dword_140C4EC20);
  RtlAvlRemoveNode((unsigned __int64 *)&qword_140C4EC18, P);
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4EC20);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v2 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v6 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
        v7 = (v6 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v6;
        if ( v7 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v2);
  ExFreePoolWithTag(P, 0);
}
