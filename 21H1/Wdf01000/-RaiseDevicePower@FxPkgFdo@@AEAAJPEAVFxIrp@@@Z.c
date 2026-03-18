/*
 * XREFs of ?RaiseDevicePower@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C0010F84
 * Callers:
 *     ?DispatchDeviceSetPower@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C00110C0 (-DispatchDeviceSetPower@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z.c)
 * Callees:
 *     ?SetCompletionRoutineEx@FxIrp@@QEAAXPEAU_DEVICE_OBJECT@@P6AJ0PEAU_IRP@@PEAX@Z2EEE@Z @ 0x1C001102C (-SetCompletionRoutineEx@FxIrp@@QEAAXPEAU_DEVICE_OBJECT@@P6AJ0PEAU_IRP@@PEAX@Z2EEE@Z.c)
 */

__int64 __fastcall FxPkgFdo::RaiseDevicePower(FxPkgFdo *this, FxIrp *Irp)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // r8
  unsigned __int8 v6; // [rsp+20h] [rbp-28h]
  unsigned __int8 v7; // [rsp+28h] [rbp-20h]
  unsigned __int8 v8; // [rsp+30h] [rbp-18h]

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
    FxPkgFdo::RaiseDevicePowerCompletion,
    this,
    v6,
    v7,
    v8);
  PoCallDriver(this->m_DeviceBase->m_AttachedDevice.m_DeviceObject, Irp->m_Irp);
  return 259LL;
}
