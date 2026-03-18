/*
 * XREFs of ?_CompletionRoutineForRemlockMaintenance@FxDevice@@CAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C0002F70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FxDevice::_CompletionRoutineForRemlockMaintenance(
        _DEVICE_OBJECT *DeviceObject,
        _IRP *Irp,
        void *Context)
{
  if ( Irp->PendingReturned && Irp->CurrentLocation <= Irp->StackCount )
    Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)&DeviceObject[1], Irp, 0x20u);
  return 0LL;
}
