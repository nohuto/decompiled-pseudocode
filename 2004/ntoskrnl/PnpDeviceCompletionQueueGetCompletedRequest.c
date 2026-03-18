/*
 * XREFs of PnpDeviceCompletionQueueGetCompletedRequest @ 0x14037D628
 * Callers:
 *     PnpDeviceCompletionProcessCompletedRequests @ 0x1407275D8 (PnpDeviceCompletionProcessCompletedRequests.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14020B3A0 (KeWaitForSingleObject.c)
 *     KxReleaseSpinLock @ 0x14021E3C0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402D79F0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 PnpDeviceCompletionQueueGetCompletedRequest()
{
  KIRQL v0; // al
  __int64 v1; // rdi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rax
  _DWORD *SchedulerAssist; // r9
  int v8; // edx
  bool v9; // zf

  KeWaitForSingleObject(&byte_140C44988, Executive, 0, 0, 0LL);
  v0 = KeAcquireSpinLockRaiseToDpc(&qword_140C449A8);
  v1 = qword_140C44978;
  v2 = v0;
  v3 = *(_QWORD *)qword_140C44978;
  if ( *(__int64 **)(qword_140C44978 + 8) != &qword_140C44978 || *(_QWORD *)(v3 + 8) != qword_140C44978 )
    __fastfail(3u);
  qword_140C44978 = *(_QWORD *)qword_140C44978;
  *(_QWORD *)(v3 + 8) = &qword_140C44978;
  KxReleaseSpinLock(&qword_140C449A8);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v2 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v8 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
        v9 = (v8 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v8;
        if ( v9 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v2);
  return v1;
}
