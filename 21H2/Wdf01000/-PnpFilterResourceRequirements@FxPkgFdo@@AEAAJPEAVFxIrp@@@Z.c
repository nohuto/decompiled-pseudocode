/*
 * XREFs of ?PnpFilterResourceRequirements@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C001D298
 * Callers:
 *     ?_PnpFilterResourceRequirements@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C001D280 (-_PnpFilterResourceRequirements@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?CompletePnpRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z @ 0x1C0002DF8 (-CompletePnpRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C0005B30 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FilterResourceRequirements@FxPkgPnp@@IEAAJPEAPEAU_IO_RESOURCE_REQUIREMENTS_LIST@@@Z @ 0x1C001D430 (-FilterResourceRequirements@FxPkgPnp@@IEAAJPEAPEAU_IO_RESOURCE_REQUIREMENTS_LIST@@@Z.c)
 *     ?CreateWdmList@FxIoResReqList@@QEAAPEAU_IO_RESOURCE_REQUIREMENTS_LIST@@XZ @ 0x1C001D6D0 (-CreateWdmList@FxIoResReqList@@QEAAPEAU_IO_RESOURCE_REQUIREMENTS_LIST@@XZ.c)
 *     ?_CreateFromWdmList@FxIoResReqList@@SAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_IO_RESOURCE_REQUIREMENTS_LIST@@E@Z @ 0x1C001DCEC (-_CreateFromWdmList@FxIoResReqList@@SAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_IO_RESOURCE_REQUIREMENT.c)
 *     WPP_IFR_SF_ @ 0x1C0028B14 (WPP_IFR_SF_.c)
 *     WPP_IFR_SF_d @ 0x1C00306F4 (WPP_IFR_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall FxPkgFdo::PnpFilterResourceRequirements(FxPkgFdo *this, FxIrp *Irp, unsigned __int8 a3)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  int _a1; // ebx
  _IO_RESOURCE_REQUIREMENTS_LIST *Information; // r15
  FxIoResReqList *v8; // rax
  FxIoResReqList *v9; // rsi
  unsigned __int64 ObjectHandleUnchecked; // rcx
  int (__fastcall *m_Method)(WDFDEVICE__ *, WDFIORESREQLIST__ *); // rax
  _IO_RESOURCE_REQUIREMENTS_LIST *WdmList; // rbp
  int v13; // eax
  unsigned __int8 v14; // r8
  _FX_DRIVER_GLOBALS *v15; // rcx
  _IO_RESOURCE_REQUIREMENTS_LIST *v17; // r15
  FxIoResReqList *v18; // rax
  FxIoResReqList *v19; // rsi
  unsigned __int64 v20; // rcx
  int (__fastcall *v21)(WDFDEVICE__ *, WDFIORESREQLIST__ *); // rax
  _IO_RESOURCE_REQUIREMENTS_LIST *v22; // rax
  unsigned __int64 v23; // rbp
  WDFIORESREQLIST__ *reqlist; // [rsp+50h] [rbp+8h] BYREF

  reqlist = 0LL;
  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_(m_Globals, 5u, 0xCu, 0xAu, WPP_FxPkgFdoKm_cpp_Traceguids);
  if ( !this->m_DeviceFilterRemoveResourceRequirements.m_Method )
  {
LABEL_13:
    _a1 = this->SendIrpSynchronously(this, Irp);
    if ( _a1 >= 0 )
      goto LABEL_15;
    goto LABEL_14;
  }
  _a1 = -1073741670;
  Information = (_IO_RESOURCE_REQUIREMENTS_LIST *)Irp->m_Irp->IoStatus.Information;
  v8 = FxIoResReqList::_CreateFromWdmList(this->m_Globals, Information, a3);
  v9 = v8;
  if ( !v8 )
    goto LABEL_17;
  FxObject::Commit(v8, 0LL, (void **)&reqlist, 0LL, 1u);
  FxObject::GetObjectHandleUnchecked(v9);
  ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
  m_Method = this->m_DeviceFilterRemoveResourceRequirements.m_Method;
  if ( m_Method )
  {
    _a1 = ((__int64 (__fastcall *)(unsigned __int64))m_Method)(ObjectHandleUnchecked);
    if ( _a1 < 0 )
      goto LABEL_12;
  }
  else
  {
    _a1 = 0;
  }
  if ( v9->m_Changed )
  {
    WdmList = FxIoResReqList::CreateWdmList(v9);
    if ( WdmList )
    {
      if ( Information )
      {
        WdmList->BusNumber = Information->BusNumber;
        ExFreePoolWithTag(Information, 0);
      }
      Irp->m_Irp->IoStatus.Information = (unsigned __int64)WdmList;
    }
    else
    {
      _a1 = -1073741670;
    }
  }
LABEL_12:
  v9->DeleteObject(v9);
  if ( _a1 >= 0 )
    goto LABEL_13;
LABEL_14:
  if ( _a1 != -1073741637 )
    goto LABEL_17;
LABEL_15:
  v13 = FxPkgPnp::FilterResourceRequirements(this, (_IO_RESOURCE_REQUIREMENTS_LIST **)&Irp->m_Irp->IoStatus.Information);
  if ( v13 < 0 )
  {
    _a1 = v13;
    goto LABEL_17;
  }
  if ( !this->m_DeviceFilterAddResourceRequirements.m_Method )
    goto LABEL_17;
  v17 = (_IO_RESOURCE_REQUIREMENTS_LIST *)Irp->m_Irp->IoStatus.Information;
  v18 = FxIoResReqList::_CreateFromWdmList(this->m_Globals, v17, v14);
  v19 = v18;
  if ( v18 )
  {
    FxObject::Commit(v18, 0LL, (void **)&reqlist, 0LL, 1u);
    v20 = FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
    v21 = this->m_DeviceFilterAddResourceRequirements.m_Method;
    if ( v21 )
    {
      _a1 = v21((WDFDEVICE__ *)v20, reqlist);
      if ( _a1 < 0 )
      {
LABEL_34:
        v19->DeleteObject(v19);
        goto LABEL_17;
      }
    }
    else
    {
      _a1 = 0;
    }
    if ( v19->m_Changed )
    {
      v22 = FxIoResReqList::CreateWdmList(v19);
      v23 = (unsigned __int64)v22;
      if ( v22 )
      {
        if ( v17 )
        {
          v22->BusNumber = v17->BusNumber;
          ExFreePoolWithTag(v17, 0);
        }
        Irp->m_Irp->IoStatus.Information = v23;
      }
      else
      {
        _a1 = -1073741670;
      }
    }
    goto LABEL_34;
  }
  _a1 = -1073741670;
LABEL_17:
  FxPkgPnp::CompletePnpRequest(this, Irp, _a1);
  v15 = this->m_Globals;
  if ( v15->FxVerboseOn )
    WPP_IFR_SF_d(v15, 5u, 0xCu, 0xBu, WPP_FxPkgFdoKm_cpp_Traceguids, _a1);
  return (unsigned int)_a1;
}
