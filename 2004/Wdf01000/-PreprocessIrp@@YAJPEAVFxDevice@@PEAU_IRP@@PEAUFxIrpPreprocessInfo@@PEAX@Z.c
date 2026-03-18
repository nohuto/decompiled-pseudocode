/*
 * XREFs of ?PreprocessIrp@@YAJPEAVFxDevice@@PEAU_IRP@@PEAUFxIrpPreprocessInfo@@PEAX@Z @ 0x1C0052438
 * Callers:
 *     ?DispatchWorker@@YAJPEAVFxDevice@@PEAU_IRP@@PEAX@Z @ 0x1C00136D0 (-DispatchWorker@@YAJPEAVFxDevice@@PEAU_IRP@@PEAX@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?_RequiresRemLock@FxDevice@@SA?AW4FxDeviceRemLockAction@@EE@Z @ 0x1C0013798 (-_RequiresRemLock@FxDevice@@SA-AW4FxDeviceRemLockAction@@EE@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D310 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PreprocessIrp(FxDevice *Device, _IRP *Irp, FxIrpPreprocessInfo *Info, void *DispatchContext)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned __int8 MajorFunction; // bp
  unsigned __int8 MinorFunction; // r14
  __int64 v9; // rdx
  unsigned __int64 ObjectHandleUnchecked; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r10
  unsigned int v14; // eax
  unsigned int v15; // esi

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  MajorFunction = CurrentStackLocation->MajorFunction;
  MinorFunction = CurrentStackLocation->MinorFunction;
  ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(Device);
  if ( *(_BYTE *)(v11 + 688) )
    v14 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, __int64))(v11 + 8 * v12 + 16))(
            ObjectHandleUnchecked,
            v9,
            v13);
  else
    v14 = (*(__int64 (__fastcall **)(unsigned __int64))(v11 + 8 * v12 + 16))(ObjectHandleUnchecked);
  v15 = v14;
  if ( (unsigned int)FxDevice::_RequiresRemLock(MajorFunction, MinorFunction) == 1 )
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)&Device->m_DeviceObject.m_DeviceObject[1], Irp, 0x20u);
  return v15;
}
