/*
 * XREFs of PsGetWorkOnBehalfThread @ 0x14025A200
 * Callers:
 *     IoReferenceIoAttributionFromThread @ 0x1402355A8 (IoReferenceIoAttributionFromThread.c)
 *     IopQueueWorkItemProlog @ 0x14025B18C (IopQueueWorkItemProlog.c)
 *     PsGetEffectiveContainerId @ 0x140305640 (PsGetEffectiveContainerId.c)
 *     AlpcpCaptureAttributes @ 0x14060EA80 (AlpcpCaptureAttributes.c)
 *     NtQueryInformationThread @ 0x140610870 (NtQueryInformationThread.c)
 *     AlpcpCaptureWorkOnBehalfAttribute @ 0x1406D0A30 (AlpcpCaptureWorkOnBehalfAttribute.c)
 *     NtAlpcImpersonateClientContainerOfPort @ 0x1408BDC70 (NtAlpcImpersonateClientContainerOfPort.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14025A2D0 (ObfReferenceObjectWithTag.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14027D690 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x1402814C0 (ExAcquireSpinLockShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 */

PVOID __fastcall PsGetWorkOnBehalfThread(struct _KTHREAD *a1, _DWORD *a2)
{
  PVOID Object; // rbx
  KIRQL v6; // al
  unsigned __int64 v7; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v11; // edx
  bool v12; // zf

  Object = a1[1].WaitBlock[1].Object;
  *a2 = 0;
  if ( Object && a1 != KeGetCurrentThread() )
  {
    v6 = ExAcquireSpinLockShared(&PspThreadWorkOnBehalfLock);
    Object = a1[1].WaitBlock[1].Object;
    v7 = v6;
    if ( Object )
    {
      ObfReferenceObjectWithTag(a1[1].WaitBlock[1].Object, 0x746C6644u);
      *a2 = 1;
    }
    ExReleaseSpinLockSharedFromDpcLevel(&PspThreadWorkOnBehalfLock);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v7 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v11 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
          v12 = (v11 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v11;
          if ( v12 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v7);
  }
  return Object;
}
