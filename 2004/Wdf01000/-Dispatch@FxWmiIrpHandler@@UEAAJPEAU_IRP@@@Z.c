/*
 * XREFs of ?Dispatch@FxWmiIrpHandler@@UEAAJPEAU_IRP@@@Z @ 0x1C0017FF0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     FX_TRACK_DRIVER @ 0x1C0004734 (FX_TRACK_DRIVER.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000C8E0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000C960 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C000CA80 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     ?FindProviderLocked@FxWmiIrpHandler@@IEAAPEAVFxWmiProvider@@PEAU_GUID@@@Z @ 0x1C00181B0 (-FindProviderLocked@FxWmiIrpHandler@@IEAAPEAVFxWmiProvider@@PEAU_GUID@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D310 (_guard_dispatch_icall_nop.c)
 *     ?GetInstanceReferencedLocked@FxWmiProvider@@QEAAPEAVFxWmiInstance@@KPEAX@Z @ 0x1C003E328 (-GetInstanceReferencedLocked@FxWmiProvider@@QEAAPEAVFxWmiInstance@@KPEAX@Z.c)
 *     WPP_IFR_SF_qqcq @ 0x1C0040E60 (WPP_IFR_SF_qqcq.c)
 */

__int64 __fastcall FxWmiIrpHandler::Dispatch(FxWmiIrpHandler *this, _IRP *Irp)
{
  unsigned __int8 v4; // r8
  _IO_STACK_LOCATION *CurrentStackLocation; // r14
  FxWmiProvider *ProviderLocked; // rsi
  FxWmiInstance *InstanceReferencedLocked; // r13
  unsigned __int8 _a3; // bl
  unsigned __int64 v9; // r15
  $99FDDFE1AE555F2B517E5E907CADBFF3 *v10; // r12
  unsigned __int8 v11; // r8
  NTSTATUS Status; // ebx
  char v13; // r14
  int (__fastcall *Handler)(FxWmiIrpHandler *, _IRP *, FxWmiProvider *, FxWmiInstance *); // rax
  const void *_a1; // rax
  __int64 v17; // r8
  _FX_DRIVER_GLOBALS *v18; // r10
  _NAMED_PIPE_CREATE_PARAMETERS *Parameters; // rax
  _DEVICE_OBJECT *m_DeviceObject; // rcx
  unsigned __int8 irql; // [rsp+90h] [rbp+8h] BYREF
  char v22; // [rsp+98h] [rbp+10h]
  char v23; // [rsp+A0h] [rbp+18h]

  irql = 0;
  FX_TRACK_DRIVER(this->m_Globals);
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  ProviderLocked = 0LL;
  InstanceReferencedLocked = 0LL;
  v23 = 0;
  v22 = 0;
  _a3 = CurrentStackLocation->MinorFunction;
  v9 = _a3;
  v10 = &this->96;
  if ( this->m_Globals->FxVerboseOn )
  {
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(v10->m_DeviceBase);
    WPP_IFR_SF_qqcq(v18, 5u, 0xDu, 0xEu, WPP_FxWmiIrpHandler_cpp_Traceguids, _a1, *(const void **)(v17 + 144), _a3, Irp);
  }
  if ( _a3 > 9u && _a3 != 11
    || (_DEVICE_OBJECT *)CurrentStackLocation->Parameters.WMI.ProviderId != v10->m_DeviceBase->m_DeviceObject.m_DeviceObject )
  {
LABEL_32:
    m_DeviceObject = this->m_DeviceBase->m_AttachedDevice.m_DeviceObject;
    if ( m_DeviceObject )
    {
      ++Irp->CurrentLocation;
      ++Irp->Tail.Overlay.CurrentStackLocation;
      Status = IofCallDriver(m_DeviceObject, Irp);
      goto LABEL_19;
    }
LABEL_34:
    Status = Irp->IoStatus.Status;
    IofCompleteRequest(Irp, 0);
    goto LABEL_19;
  }
  if ( _a3 == 8 || _a3 == 11 )
  {
    Status = 0;
    v13 = 0;
LABEL_29:
    if ( Status < 0 )
      goto $Done_6;
    goto LABEL_12;
  }
  FxNonPagedObject::Lock(this, &irql, v4);
  ProviderLocked = FxWmiIrpHandler::FindProviderLocked(
                     this,
                     (_GUID *)CurrentStackLocation->Parameters.QueryDirectory.FileName);
  if ( ProviderLocked )
  {
    Status = 0;
    if ( !FxWmiIrpHandler::m_WmiDispatchTable[v9].CheckInstance
      || (Parameters = CurrentStackLocation->Parameters.CreatePipe.Parameters, (Parameters[1].ReadMode & 0x80u) != 0)
      && (InstanceReferencedLocked = FxWmiProvider::GetInstanceReferencedLocked(
                                       ProviderLocked,
                                       Parameters[1].MaximumInstances,
                                       (void *)v9)) != 0LL )
    {
      FxObject::AddRef(
        ProviderLocked,
        (void *)v9,
        735,
        "minkernel\\wdf\\framework\\kmdf\\src\\irphandlers\\wmi\\fxwmiirphandler.cpp");
      goto LABEL_10;
    }
    Status = -1073741162;
  }
  else
  {
    Status = -1073741163;
  }
  ProviderLocked = 0LL;
LABEL_10:
  FxNonPagedObject::Unlock(this, irql, v11);
  if ( Status < 0 )
  {
    Irp->IoStatus.Status = Status;
    v13 = 1;
    goto LABEL_29;
  }
  v13 = v22;
LABEL_12:
  Handler = FxWmiIrpHandler::m_WmiDispatchTable[v9].Handler;
  if ( Handler )
  {
    Status = Handler(this, Irp, ProviderLocked, InstanceReferencedLocked);
    v23 = 1;
  }
$Done_6:
  if ( InstanceReferencedLocked )
    InstanceReferencedLocked->Release(
      InstanceReferencedLocked,
      (void *)v9,
      765,
      "minkernel\\wdf\\framework\\kmdf\\src\\irphandlers\\wmi\\fxwmiirphandler.cpp");
  if ( ProviderLocked )
    ProviderLocked->Release(
      ProviderLocked,
      (void *)v9,
      770,
      "minkernel\\wdf\\framework\\kmdf\\src\\irphandlers\\wmi\\fxwmiirphandler.cpp");
  if ( !v23 )
  {
    if ( v13 )
      goto LABEL_34;
    goto LABEL_32;
  }
LABEL_19:
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)&v10->m_DeviceBase->m_DeviceObject.m_DeviceObject[1], Irp, 0x20u);
  return (unsigned int)Status;
}
