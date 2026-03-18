/*
 * XREFs of ?PnpSendStartDeviceDownTheStackOverload@FxPkgFdo@@EEAAEXZ @ 0x1C002F5F0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?CompletePnpRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z @ 0x1C0002DF8 (-CompletePnpRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z.c)
 *     ?SetCompletionRoutineEx@FxIrp@@QEAAXPEAU_DEVICE_OBJECT@@P6AJ0PEAU_IRP@@PEAX@Z2EEE@Z @ 0x1C00039DC (-SetCompletionRoutineEx@FxIrp@@QEAAXPEAU_DEVICE_OBJECT@@P6AJ0PEAU_IRP@@PEAX@Z2EEE@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x1C0006DE0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     ?PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z @ 0x1C001E240 (-PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z.c)
 *     ?BuildFromWdmList@FxCmResList@@QEAAJPEAU_CM_RESOURCE_LIST@@E@Z @ 0x1C0021B30 (-BuildFromWdmList@FxCmResList@@QEAAJPEAU_CM_RESOURCE_LIST@@E@Z.c)
 *     WPP_IFR_SF_d @ 0x1C00306F4 (WPP_IFR_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 *     ?CreateWdmList@FxCmResList@@QEAAPEAU_CM_RESOURCE_LIST@@_K@Z @ 0x1C0072290 (-CreateWdmList@FxCmResList@@QEAAPEAU_CM_RESOURCE_LIST@@_K@Z.c)
 *     ??_GFxFilteredStartContext@@QEAAPEAXI@Z @ 0x1C00899D8 (--_GFxFilteredStartContext@@QEAAPEAXI@Z.c)
 */

unsigned __int8 __fastcall FxPkgFdo::PnpSendStartDeviceDownTheStackOverload(FxPkgFdo *this)
{
  _IRP *m_PendingPnPIrp; // rbp
  char v3; // r12
  FxFilteredStartContext *v4; // rsi
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _CM_RESOURCE_LIST *AllocatedResources; // rdx
  _CM_RESOURCE_LIST *AllocatedResourcesTranslated; // r14
  FxPkgFdo *v8; // r9
  __int64 (__fastcall *v9)(_DEVICE_OBJECT *, _IRP *, FxPkgPnp *); // r8
  int _a1; // edi
  unsigned __int64 ObjectHandleUnchecked; // rcx
  int (__fastcall *m_Method)(WDFDEVICE__ *, WDFCMRESLIST__ *, WDFCMRESLIST__ *); // rax
  unsigned __int8 v14; // r8
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  void *v16; // rax
  FX_POOL **v17; // rax
  FxCmResList *m_ResourcesRaw; // rcx
  _CM_RESOURCE_LIST *WdmList; // rax
  unsigned int v20; // edx
  FxCmResList *m_Resources; // rcx
  _CM_RESOURCE_LIST *v22; // rax
  __m128i v23; // [rsp+40h] [rbp-38h] BYREF
  void *retaddr; // [rsp+78h] [rbp+0h]
  FxIrp irp; // [rsp+80h] [rbp+8h] BYREF

  m_PendingPnPIrp = this->m_PendingPnPIrp;
  this->m_PendingPnPIrp = 0LL;
  irp.m_Irp = m_PendingPnPIrp;
  v3 = 0;
  v4 = 0LL;
  CurrentStackLocation = m_PendingPnPIrp->Tail.Overlay.CurrentStackLocation;
  AllocatedResources = CurrentStackLocation->Parameters.StartDevice.AllocatedResources;
  AllocatedResourcesTranslated = CurrentStackLocation->Parameters.StartDevice.AllocatedResourcesTranslated;
  *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
  *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
  *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.SetQuota
                                                                             + 6);
  CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
  CurrentStackLocation[-1].Control = 0;
  if ( this->m_DeviceRemoveAddedResources.m_Method && AllocatedResources && AllocatedResourcesTranslated )
  {
    this->m_ResourcesRaw->m_Changed = 0;
    this->m_Resources->m_Changed = 0;
    _a1 = FxCmResList::BuildFromWdmList(this->m_ResourcesRaw, AllocatedResources, 3u);
    if ( _a1 < 0 )
      goto LABEL_14;
    _a1 = FxCmResList::BuildFromWdmList(this->m_Resources, AllocatedResourcesTranslated, 3u);
    if ( _a1 < 0 )
      goto LABEL_14;
    FxObject::GetObjectHandleUnchecked(this->m_Resources);
    FxObject::GetObjectHandleUnchecked(this->m_ResourcesRaw);
    ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
    m_Method = this->m_DeviceRemoveAddedResources.m_Method;
    if ( m_Method )
    {
      _a1 = ((__int64 (__fastcall *)(unsigned __int64))m_Method)(ObjectHandleUnchecked);
      if ( _a1 < 0 )
      {
LABEL_14:
        WPP_IFR_SF_d(this->m_Globals, 2u, 0xCu, 0x17u, WPP_fxpkgfdo_cpp_Traceguids, _a1);
        FxPkgPnp::PnpProcessEvent(this, PnpEventStartDeviceFailed, v14);
        FxPkgPnp::CompletePnpRequest(this, &irp, _a1);
        return 0;
      }
    }
    else
    {
      _a1 = 0;
    }
    if ( this->m_ResourcesRaw->m_Changed || this->m_Resources->m_Changed )
    {
      m_Globals = this->m_Globals;
      v16 = retaddr;
      v23.m128i_i64[0] = 0LL;
      v23.m128i_i64[1] = 64LL;
      if ( !m_Globals->FxPoolTrackingOn )
        v16 = 0LL;
      v17 = FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, &v23, 0x18uLL, m_Globals->Tag, v16);
      if ( v17 )
      {
        v17[1] = 0LL;
        v4 = (FxFilteredStartContext *)v17;
        v17[2] = 0LL;
        *v17 = (FX_POOL *)this;
        m_ResourcesRaw = this->m_ResourcesRaw;
        if ( (!m_ResourcesRaw->m_Count
           || (WdmList = FxCmResList::CreateWdmList(m_ResourcesRaw, 0x40uLL), (v4->ResourcesRaw = WdmList) != 0LL))
          && ((m_Resources = this->m_Resources, !m_Resources->m_Count)
           || (v22 = FxCmResList::CreateWdmList(m_Resources, 0x40uLL), (v4->ResourcesTranslated = v22) != 0LL)) )
        {
          v3 = 1;
          m_PendingPnPIrp->Tail.Overlay.CurrentStackLocation[-1].Parameters.WMI.ProviderId = (unsigned __int64)v4->ResourcesRaw;
          m_PendingPnPIrp->Tail.Overlay.CurrentStackLocation[-1].Parameters.QueryDirectory.FileName = (_UNICODE_STRING *)v4->ResourcesTranslated;
        }
        else
        {
          _a1 = -1073741670;
          FxFilteredStartContext::`scalar deleting destructor'(v4, v20);
        }
      }
    }
    if ( _a1 < 0 )
      goto LABEL_14;
  }
  if ( v3 )
  {
    v8 = (FxPkgFdo *)v4;
    v9 = (__int64 (__fastcall *)(_DEVICE_OBJECT *, _IRP *, FxPkgPnp *))FxPkgFdo::_PnpFilteredStartDeviceCompletionRoutine;
  }
  else
  {
    v8 = this;
    v9 = FxPkgFdo::_PnpStartDeviceCompletionRoutine;
  }
  FxIrp::SetCompletionRoutineEx(
    &irp,
    this->m_DeviceBase->m_DeviceObject.m_DeviceObject,
    (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))v9,
    v8);
  IofCallDriver(this->m_DeviceBase->m_AttachedDevice.m_DeviceObject, m_PendingPnPIrp);
  return 0;
}
