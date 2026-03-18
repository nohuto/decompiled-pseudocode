/*
 * XREFs of ?PnpQueryResourceRequirements@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C001FD38
 * Callers:
 *     ?_PnpQueryResourceRequirements@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C001FD20 (-_PnpQueryResourceRequirements@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?CompletePnpRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z @ 0x1C0002DF8 (-CompletePnpRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C0005B30 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C0006B70 (-FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OB.c)
 *     ?AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z @ 0x1C0017090 (-AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z.c)
 *     ?CreateWdmList@FxIoResReqList@@QEAAPEAU_IO_RESOURCE_REQUIREMENTS_LIST@@XZ @ 0x1C001D6D0 (-CreateWdmList@FxIoResReqList@@QEAAPEAU_IO_RESOURCE_REQUIREMENTS_LIST@@XZ.c)
 *     ?Register@FxDeviceInterface@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C001E91C (-Register@FxDeviceInterface@@QEAAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     ??0FxIoResReqList@@IEAA@PEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C0020940 (--0FxIoResReqList@@IEAA@PEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     WPP_IFR_SF_qqd @ 0x1C0030604 (WPP_IFR_SF_qqd.c)
 *     WPP_IFR_SF_d @ 0x1C00306F4 (WPP_IFR_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall FxPkgPdo::PnpQueryResourceRequirements(FxPkgPdo *this, _FX_DRIVER_GLOBALS *Irp)
{
  FxWaitLockInternal *p_m_DeviceInterfaceLock; // r15
  NTSTATUS _a3; // ebx
  _SINGLE_LIST_ENTRY *i; // rsi
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  FxIoResReqList *v9; // rax
  unsigned __int8 v10; // r8
  FxObject *v11; // rax
  FxIoResReqList *v12; // rsi
  unsigned __int64 ObjectHandleUnchecked; // rcx
  int (__fastcall *m_Method)(WDFDEVICE__ *, WDFIORESREQLIST__ *); // rax
  const void *_a1; // rax
  __int64 v16; // rdx
  _IO_RESOURCE_REQUIREMENTS_LIST *WdmList; // rax
  FxPoolTypeOrPoolFlags v18; // [rsp+40h] [rbp-38h] BYREF
  WDFIORESREQLIST__ *reqlist; // [rsp+80h] [rbp+8h] BYREF

  p_m_DeviceInterfaceLock = &this->m_DeviceInterfaceLock;
  _a3 = 0;
  FxWaitLockInternal::AcquireLock(&this->m_DeviceInterfaceLock, Irp, 0LL);
  LOBYTE(this->m_DeviceBase[1].m_ChildEntry.Blink) = 1;
  for ( i = this->m_DeviceInterfaceHead.Next; i; i = i->Next )
  {
    if ( i[-1].Next )
    {
      RtlFreeUnicodeString((PUNICODE_STRING)&i[-2]);
      *(_OWORD *)&i[-2].Next = 0LL;
    }
    _a3 = FxDeviceInterface::Register((FxDeviceInterface *)&i[-6], this->m_DeviceBase->m_PhysicalDevice.m_DeviceObject);
    if ( _a3 < 0 )
    {
      _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
      WPP_IFR_SF_qqd(
        this->m_Globals,
        2u,
        0xCu,
        0xAu,
        WPP_FxPkgPdoKM_cpp_Traceguids,
        _a1,
        *(const void **)(v16 + 144),
        _a3);
      break;
    }
  }
  p_m_DeviceInterfaceLock->m_OwningThread = 0LL;
  KeSetEvent(&p_m_DeviceInterfaceLock->m_Event.m_Event, 0, 0);
  KeLeaveCriticalRegion();
  if ( _a3 >= 0 && this->m_DeviceResourceRequirementsQuery.m_Method )
  {
    m_Globals = this->m_Globals;
    *(_QWORD *)&v18.UsePoolType = 0LL;
    v18.u.PoolFlags = 64LL;
    v9 = (FxIoResReqList *)FxObjectHandleAllocCommon(m_Globals, &v18, 0xA0uLL, 0, 0LL, 0, FxObjectTypeExternal);
    if ( !v9 || (FxIoResReqList::FxIoResReqList(v9, m_Globals, v10), (v12 = (FxIoResReqList *)v11) == 0LL) )
    {
      _a3 = -1073741670;
      WPP_IFR_SF_d(m_Globals, 2u, 0x12u, 0xDu, WPP_FxResource_hpp_Traceguids_0, -1073741670);
      return FxPkgPnp::CompletePnpRequest(this, (FxIrp *)Irp, _a3);
    }
    reqlist = 0LL;
    FxObject::Commit(v11, 0LL, (void **)&reqlist, 0LL, 1u);
    ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
    m_Method = this->m_DeviceResourceRequirementsQuery.m_Method;
    if ( m_Method )
    {
      _a3 = m_Method((WDFDEVICE__ *)ObjectHandleUnchecked, reqlist);
      if ( _a3 < 0 )
      {
LABEL_12:
        v12->DeleteObject(v12);
        return FxPkgPnp::CompletePnpRequest(this, (FxIrp *)Irp, _a3);
      }
    }
    else
    {
      _a3 = 0;
    }
    if ( v12->m_Count )
    {
      WdmList = FxIoResReqList::CreateWdmList(v12);
      if ( WdmList )
        Irp->Linkage.Flink[3].Blink = (_LIST_ENTRY *)WdmList;
      else
        _a3 = -1073741670;
    }
    else
    {
      _a3 = (NTSTATUS)Irp->Linkage.Flink[3].Flink;
    }
    goto LABEL_12;
  }
  return FxPkgPnp::CompletePnpRequest(this, (FxIrp *)Irp, _a3);
}
