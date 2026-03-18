/*
 * XREFs of ?RaiseDevicePower@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C000C934
 * Callers:
 *     ?DispatchDeviceSetPower@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C000C7CC (-DispatchDeviceSetPower@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z.c)
 * Callees:
 *     ?SetCompletionRoutineEx@FxIrp@@QEAAXPEAU_DEVICE_OBJECT@@P6AJ0PEAU_IRP@@PEAX@Z2EEE@Z @ 0x1C00039DC (-SetCompletionRoutineEx@FxIrp@@QEAAXPEAU_DEVICE_OBJECT@@P6AJ0PEAU_IRP@@PEAX@Z2EEE@Z.c)
 */

__int64 __fastcall FxPkgFdo::RaiseDevicePower(FxPkgFdo *this, FxIrp *Irp)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // r8

  Irp->m_Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  CurrentStackLocation = Irp->m_Irp->Tail.Overlay.CurrentStackLocation;
  *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
  *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
  *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.SetQuota
                                                                             + 6);
  CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
  CurrentStackLocation[-1].Control = 0;
  FxIrp::SetCompletionRoutineEx(
    Irp,
    this->m_DeviceBase->m_DeviceObject.m_DeviceObject,
    (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))FxPkgFdo::RaiseDevicePowerCompletion,
    this);
  PoCallDriver(this->m_DeviceBase->m_AttachedDevice.m_DeviceObject, Irp->m_Irp);
  return 259LL;
}
