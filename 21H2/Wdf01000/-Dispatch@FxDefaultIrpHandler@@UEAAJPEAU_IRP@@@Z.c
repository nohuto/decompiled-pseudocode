/*
 * XREFs of ?Dispatch@FxDefaultIrpHandler@@UEAAJPEAU_IRP@@@Z @ 0x1C0035060
 * Callers:
 *     <none>
 * Callees:
 *     ?_RequiresRemLock@FxDevice@@SA?AW4FxDeviceRemLockAction@@EE@Z @ 0x1C00350F0 (-_RequiresRemLock@FxDevice@@SA-AW4FxDeviceRemLockAction@@EE@Z.c)
 */

NTSTATUS __fastcall FxDefaultIrpHandler::Dispatch(FxDefaultIrpHandler *this, _IRP *Irp)
{
  char v4; // cl
  _IO_STACK_LOCATION *v5; // r8

  if ( FxDevice::_RequiresRemLock(
         Irp->Tail.Overlay.CurrentStackLocation->MajorFunction,
         Irp->Tail.Overlay.CurrentStackLocation->MinorFunction) == FxDeviceRemLockRequired )
  {
    if ( v4 == 22 )
      PoStartNextPowerIrp(Irp);
    Irp->IoStatus.Information = 0LL;
    Irp->IoStatus.Status = -1073741808;
    IofCompleteRequest(Irp, 0);
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)&this->m_DeviceBase->m_DeviceObject.m_DeviceObject[1], Irp, 0x20u);
    return -1073741808;
  }
  if ( !BYTE1(this->m_DeviceBase[1].m_Globals) )
  {
    Irp->IoStatus.Information = 0LL;
    Irp->IoStatus.Status = -1073741808;
    IofCompleteRequest(Irp, 0);
    return -1073741808;
  }
  ++Irp->CurrentLocation;
  Irp->Tail.Overlay.CurrentStackLocation = v5 + 1;
  return IofCallDriver(this->m_DeviceBase->m_AttachedDevice.m_DeviceObject, Irp);
}
