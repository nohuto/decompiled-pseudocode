/*
 * XREFs of RaFlushDFxQueue @ 0x1C00342A4
 * Callers:
 *     StorPortAdapterDirectedPowerUpCompletion @ 0x1C0040580 (StorPortAdapterDirectedPowerUpCompletion.c)
 *     StorPortAdapterDirectedPowerUpRequestD0 @ 0x1C004064C (StorPortAdapterDirectedPowerUpRequestD0.c)
 *     StorPortUnitDirectedPowerUpCompletion @ 0x1C00416F0 (StorPortUnitDirectedPowerUpCompletion.c)
 *     StorPortUnitDirectedPowerUpRequestD0 @ 0x1C0041720 (StorPortUnitDirectedPowerUpRequestD0.c)
 * Callees:
 *     <none>
 */

void __fastcall RaFlushDFxQueue(struct _DEVICE_OBJECT *a1)
{
  struct _IO_WORKITEM *WorkItem; // r10
  _QWORD *DeviceExtension; // rax
  bool v4; // zf

  WorkItem = IoAllocateWorkItem(a1);
  if ( WorkItem )
  {
    DeviceExtension = a1->DeviceExtension;
    if ( *(_DWORD *)DeviceExtension )
    {
      if ( *(_DWORD *)DeviceExtension != 1 )
        return;
      v4 = DeviceExtension[415] == (_QWORD)(DeviceExtension + 415);
    }
    else
    {
      v4 = DeviceExtension[734] == (_QWORD)(DeviceExtension + 734);
    }
    if ( !v4 )
      IoQueueWorkItem(WorkItem, RaProcessDFxQueuedRequests, CriticalWorkQueue, WorkItem);
  }
}
