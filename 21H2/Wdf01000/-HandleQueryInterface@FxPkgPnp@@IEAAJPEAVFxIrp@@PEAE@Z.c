/*
 * XREFs of ?HandleQueryInterface@FxPkgPnp@@IEAAJPEAVFxIrp@@PEAE@Z @ 0x1C001C450
 * Callers:
 *     ?_PnpQueryInterface@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C001C3B0 (-_PnpQueryInterface@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 *     ?_PnpQueryInterface@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C0030CC0 (-_PnpQueryInterface@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?SendIrpSynchronously@FxIrp@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C001AB80 (-SendIrpSynchronously@FxIrp@@QEAAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     FxIsEqualGuid @ 0x1C001C72C (FxIsEqualGuid.c)
 *     ?IsPdo@FxDevice@@QEAAEXZ @ 0x1C001C758 (-IsPdo@FxDevice@@QEAAEXZ.c)
 *     ?HandleQueryInterfaceForReenumerate@FxPkgPdo@@QEAAJPEAVFxIrp@@PEAE@Z @ 0x1C0033340 (-HandleQueryInterfaceForReenumerate@FxPkgPdo@@QEAAJPEAVFxIrp@@PEAE@Z.c)
 *     ?PnpPassThroughQI@@YAJPEAVFxDevice@@PEAVFxIrp@@@Z @ 0x1C00344E0 (-PnpPassThroughQI@@YAJPEAVFxDevice@@PEAVFxIrp@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0036E00 (memmove.c)
 *     ?HandleQueryInterfaceForSecureDriver@FxCompanionTarget@@QEAAJPEAVFxIrp@@PEAE@Z @ 0x1C0061130 (-HandleQueryInterfaceForSecureDriver@FxCompanionTarget@@QEAAJPEAVFxIrp@@PEAE@Z.c)
 *     ?HandleQueryInterfaceForPowerThread@FxPkgPnp@@AEAAJPEAVFxIrp@@PEAE@Z @ 0x1C00886A4 (-HandleQueryInterfaceForPowerThread@FxPkgPnp@@AEAAJPEAVFxIrp@@PEAE@Z.c)
 */

int __fastcall FxPkgPnp::HandleQueryInterface(FxPkgPnp *this, FxIrp *Irp, unsigned __int8 *CompleteRequest)
{
  _IRP *m_Irp; // rax
  _SINGLE_LIST_ENTRY *v7; // rbx
  _SINGLE_LIST_ENTRY *v8; // rbp
  _QWORD *QuadPart; // r13
  const _GUID *InterfaceType; // rdi
  FxCompanionTarget *v11; // rcx
  int Status; // edi
  _SINGLE_LIST_ENTRY *Next; // r15
  char v14; // r15
  unsigned __int64 ObjectHandleUnchecked; // rax
  __int64 v17; // rdx
  int v18; // eax
  void (__fastcall *v19)(_QWORD); // rax
  _SINGLE_LIST_ENTRY *v20; // rdx
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  size_t Next_low; // r8
  _IO_STACK_LOCATION *v23; // rcx
  NTSTATUS v24; // eax
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
LABEL_4:
    Status = Irp->m_Irp->IoStatus.Status;
    KeEnterCriticalRegion();
    if ( KeWaitForSingleObject(&this->m_QueryInterfaceLock, Executive, 0, 0, 0LL) == 258 )
      KeLeaveCriticalRegion();
    else
      this->m_QueryInterfaceLock.m_OwningThread = KeGetCurrentThread();
    Next = this->m_QueryInterfaceHead.Next;
    if ( Next )
    {
      while ( 1 )
      {
        v8 = Next - 5;
        if ( RtlCompareMemory(
               Irp->m_Irp->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext,
               &Next[-5],
               0x10uLL) == 16 )
          break;
        Next = Next->Next;
        if ( !Next )
          goto LABEL_9;
      }
      v20 = v8[2].Next;
      CurrentStackLocation = Irp->m_Irp->Tail.Overlay.CurrentStackLocation;
      QuadPart = (_QWORD *)CurrentStackLocation->Parameters.Read.ByteOffset.QuadPart;
      Parameters = CurrentStackLocation->Parameters.CreatePipe.Parameters;
      if ( v20 )
      {
        Next_low = LOWORD(v20->Next);
        if ( (unsigned __int16)Next_low > CurrentStackLocation->Parameters.QueryInterface.Size
          || WORD1(v20->Next) > CurrentStackLocation->Parameters.QueryInterface.Version )
        {
          Status = -1073741306;
LABEL_9:
          v8 = 0LL;
          goto LABEL_10;
        }
        if ( !LOBYTE(v8[6].Next) )
          memmove(QuadPart, v20, Next_low);
      }
      v7 = v8[4].Next;
      Status = 0;
      v14 = BYTE1(v8[6].Next);
    }
    else
    {
LABEL_10:
      v14 = 0;
    }
    this->m_QueryInterfaceLock.m_OwningThread = 0LL;
    KeSetEvent(&this->m_QueryInterfaceLock.m_Event.m_Event, 0, 0);
    KeLeaveCriticalRegion();
    if ( Status >= 0 )
    {
      if ( !v8 )
        return Status;
      ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
      if ( v7 )
      {
        v18 = ((__int64 (__fastcall *)(unsigned __int64, __int64, _QWORD *, _NAMED_PIPE_CREATE_PARAMETERS *))v7)(
                ObjectHandleUnchecked,
                v17,
                QuadPart,
                Parameters);
        Status = v18;
        if ( v18 < 0 && v18 != -1073741637 )
          goto LABEL_22;
      }
      else
      {
        Status = 0;
      }
      if ( v14 )
      {
        v24 = PnpPassThroughQI(this->m_Device, Irp);
      }
      else
      {
        v19 = (void (__fastcall *)(_QWORD))QuadPart[2];
        if ( v19 )
          v19(QuadPart[1]);
        if ( FxDevice::IsPdo(this->m_Device) )
          goto LABEL_22;
        Irp->m_Irp->IoStatus.Status = Status;
        v23 = Irp->m_Irp->Tail.Overlay.CurrentStackLocation;
        *(_OWORD *)&v23[-1].MajorFunction = *(_OWORD *)&v23->MajorFunction;
        *(_OWORD *)&v23[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v23->Parameters.NotifyDirectoryEx.CompletionFilter;
        *(_OWORD *)(&v23[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v23->Parameters.SetQuota + 6);
        v23[-1].FileObject = v23->FileObject;
        v23[-1].Control = 0;
        v24 = FxIrp::SendIrpSynchronously(Irp, this->m_DeviceBase->m_AttachedDevice.m_DeviceObject);
      }
      Status = v24;
    }
    else if ( !v8 )
    {
      return Status;
    }
LABEL_22:
    *CompleteRequest = 1;
    return Status;
  }
  if ( !FxIsEqualGuid(InterfaceType, &GUID_SECURE_DRIVER_INTERFACE) || !this->m_CompanionTarget )
    goto LABEL_4;
  return FxCompanionTarget::HandleQueryInterfaceForSecureDriver(v11, Irp, CompleteRequest);
}
