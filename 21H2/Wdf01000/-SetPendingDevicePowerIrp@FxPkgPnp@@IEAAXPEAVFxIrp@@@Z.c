/*
 * XREFs of ?SetPendingDevicePowerIrp@FxPkgPnp@@IEAAXPEAVFxIrp@@@Z @ 0x1C000C8F8
 * Callers:
 *     ?DispatchDeviceSetPower@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C000C5C0 (-DispatchDeviceSetPower@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?DispatchDeviceSetPower@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C000C7CC (-DispatchDeviceSetPower@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?RaiseDevicePowerCompletion@FxPkgFdo@@SAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C000C8C0 (-RaiseDevicePowerCompletion@FxPkgFdo@@SAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FxPkgPnp::SetPendingDevicePowerIrp(FxPkgPnp *this, FxIrp *Irp)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rdx

  Irp->m_Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  this->m_PendingDevicePowerIrp = Irp->m_Irp;
  CurrentStackLocation = Irp->m_Irp->Tail.Overlay.CurrentStackLocation;
  if ( (int)CurrentStackLocation->Parameters.Read.ByteOffset.LowPart > 1 )
    this->m_SystemPowerAction = CurrentStackLocation->Parameters.SetFile.ReplaceIfExists;
}
