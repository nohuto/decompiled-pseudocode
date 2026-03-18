/*
 * XREFs of ?HandleQueryInterface@FxPkgPnp@@IEAAJPEAVFxIrp@@PEAE@Z @ 0x1C0080824
 * Callers:
 *     ?_PnpQueryInterface@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C0079A50 (-_PnpQueryInterface@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 *     ?_PnpQueryInterface@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C0084A00 (-_PnpQueryInterface@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 * Callees:
 *     ?IsPdo@FxDevice@@QEAAEXZ @ 0x1C00019B8 (-IsPdo@FxDevice@@QEAAEXZ.c)
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z @ 0x1C000EC9C (-AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D310 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C001D440 (memmove.c)
 *     FxIsEqualGuid @ 0x1C0039B4C (FxIsEqualGuid.c)
 *     ?SendIrpSynchronously@FxIrp@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C0041304 (-SendIrpSynchronously@FxIrp@@QEAAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?HandleQueryInterfaceForSecureDriver@FxCompanionTarget@@QEAAJPEAVFxIrp@@PEAE@Z @ 0x1C00436E4 (-HandleQueryInterfaceForSecureDriver@FxCompanionTarget@@QEAAJPEAVFxIrp@@PEAE@Z.c)
 *     ?HandleQueryInterfaceForReenumerate@FxPkgPdo@@QEAAJPEAVFxIrp@@PEAE@Z @ 0x1C0079010 (-HandleQueryInterfaceForReenumerate@FxPkgPdo@@QEAAJPEAVFxIrp@@PEAE@Z.c)
 *     ?HandleQueryInterfaceForPowerThread@FxPkgPnp@@AEAAJPEAVFxIrp@@PEAE@Z @ 0x1C0080AC4 (-HandleQueryInterfaceForPowerThread@FxPkgPnp@@AEAAJPEAVFxIrp@@PEAE@Z.c)
 *     ?PnpPassThroughQI@@YAJPEAVFxDevice@@PEAVFxIrp@@@Z @ 0x1C008192C (-PnpPassThroughQI@@YAJPEAVFxDevice@@PEAVFxIrp@@@Z.c)
 */

int __fastcall FxPkgPnp::HandleQueryInterface(FxPkgPnp *this, FxIrp *Irp, unsigned __int8 *CompleteRequest)
{
  _IRP *m_Irp; // rax
  _SINGLE_LIST_ENTRY *v7; // rbx
  _SINGLE_LIST_ENTRY *v8; // rbp
  _QWORD *QuadPart; // r13
  const _GUID *InterfaceType; // rdi
  _FX_DRIVER_GLOBALS *v12; // rdx
  FxCompanionTarget *v13; // rcx
  int Status; // edi
  _SINGLE_LIST_ENTRY *Next; // r15
  char v16; // r15
  unsigned __int64 ObjectHandleUnchecked; // rax
  __int64 v18; // rdx
  _SINGLE_LIST_ENTRY *v19; // rdx
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  size_t Next_low; // r8
  NTSTATUS v22; // eax
  void (__fastcall *v23)(_QWORD); // rax
  _IO_STACK_LOCATION *v24; // rcx
  _NAMED_PIPE_CREATE_PARAMETERS *Parameters; // [rsp+88h] [rbp+20h]

  m_Irp = Irp->m_Irp;
  *CompleteRequest = 0;
  Parameters = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  QuadPart = 0LL;
  InterfaceType = m_Irp->Tail.Overlay.CurrentStackLocation->Parameters.QueryInterface.InterfaceType;
  if ( FxIsEqualGuid(InterfaceType, &FxPkgPnp::GUID_POWER_THREAD_INTERFACE) )
    return FxPkgPnp::HandleQueryInterfaceForPowerThread(this, Irp, CompleteRequest);
  if ( FxIsEqualGuid(InterfaceType, &GUID_REENUMERATE_SELF_INTERFACE_STANDARD) )
  {
    if ( FxDevice::IsPdo(this->m_Device) )
      return FxPkgPdo::HandleQueryInterfaceForReenumerate((FxPkgPdo *)this, Irp, CompleteRequest);
  }
  else if ( FxIsEqualGuid(InterfaceType, &GUID_SECURE_DRIVER_INTERFACE) && this->m_CompanionTarget )
  {
    return FxCompanionTarget::HandleQueryInterfaceForSecureDriver(v13, Irp, CompleteRequest);
  }
  Status = Irp->m_Irp->IoStatus.Status;
  FxWaitLockInternal::AcquireLock(&this->m_QueryInterfaceLock, v12, 0LL);
  Next = this->m_QueryInterfaceHead.Next;
  if ( Next )
  {
    while ( 1 )
    {
      v8 = Next - 5;
      if ( FxIsEqualGuid(
             Irp->m_Irp->Tail.Overlay.CurrentStackLocation->Parameters.QueryInterface.InterfaceType,
             (const _GUID *)&Next[-5]) )
      {
        break;
      }
      Next = Next->Next;
      if ( !Next )
        goto LABEL_12;
    }
    v19 = v8[2].Next;
    CurrentStackLocation = Irp->m_Irp->Tail.Overlay.CurrentStackLocation;
    QuadPart = (_QWORD *)CurrentStackLocation->Parameters.Read.ByteOffset.QuadPart;
    Parameters = CurrentStackLocation->Parameters.CreatePipe.Parameters;
    if ( v19 )
    {
      Next_low = LOWORD(v19->Next);
      if ( (unsigned __int16)Next_low > CurrentStackLocation->Parameters.QueryInterface.Size
        || WORD1(v19->Next) > CurrentStackLocation->Parameters.QueryInterface.Version )
      {
        Status = -1073741306;
LABEL_12:
        v8 = 0LL;
        goto LABEL_13;
      }
      if ( !LOBYTE(v8[6].Next) )
        memmove(QuadPart, v19, Next_low);
    }
    v7 = v8[4].Next;
    Status = 0;
    v16 = BYTE1(v8[6].Next);
  }
  else
  {
LABEL_13:
    v16 = 0;
  }
  this->m_QueryInterfaceLock.m_OwningThread = 0LL;
  KeSetEvent(&this->m_QueryInterfaceLock.m_Event.m_Event, 0, 0);
  KeLeaveCriticalRegion();
  if ( Status < 0 )
    goto $Done_62;
  if ( v8 )
  {
    ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
    if ( v7 )
      Status = ((__int64 (__fastcall *)(unsigned __int64, __int64, _QWORD *, _NAMED_PIPE_CREATE_PARAMETERS *))v7)(
                 ObjectHandleUnchecked,
                 v18,
                 QuadPart,
                 Parameters);
    else
      Status = 0;
    if ( (int)(Status + 0x80000000) < 0 || Status == -1073741637 )
    {
      if ( v16 )
      {
        v22 = PnpPassThroughQI(this->m_Device, Irp);
      }
      else
      {
        v23 = (void (__fastcall *)(_QWORD))QuadPart[2];
        if ( v23 )
          v23(QuadPart[1]);
        if ( FxDevice::IsPdo(this->m_Device) )
          goto $Done_62;
        Irp->m_Irp->IoStatus.Status = Status;
        v24 = Irp->m_Irp->Tail.Overlay.CurrentStackLocation;
        *(_OWORD *)&v24[-1].MajorFunction = *(_OWORD *)&v24->MajorFunction;
        *(_OWORD *)&v24[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v24->Parameters.NotifyDirectoryEx.CompletionFilter;
        *(_OWORD *)(&v24[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v24->Parameters.SetQuota + 6);
        v24[-1].FileObject = v24->FileObject;
        v24[-1].Control = 0;
        v22 = FxIrp::SendIrpSynchronously(Irp, this->m_DeviceBase->m_AttachedDevice.m_DeviceObject);
      }
      Status = v22;
    }
$Done_62:
    if ( v8 )
      *CompleteRequest = 1;
  }
  return Status;
}
