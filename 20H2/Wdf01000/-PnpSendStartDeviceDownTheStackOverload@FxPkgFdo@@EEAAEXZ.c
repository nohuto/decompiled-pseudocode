/*
 * XREFs of ?PnpSendStartDeviceDownTheStackOverload@FxPkgFdo@@EEAAEXZ @ 0x1C0083A10
 * Callers:
 *     <none>
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?CompletePnpRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z @ 0x1C0004B54 (-CompletePnpRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0009330 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_d @ 0x1C000A9D8 (WPP_IFR_SF_d.c)
 *     ?SetCompletionRoutineEx@FxIrp@@QEAAXPEAU_DEVICE_OBJECT@@P6AJ0PEAU_IRP@@PEAX@Z2EEE@Z @ 0x1C001102C (-SetCompletionRoutineEx@FxIrp@@QEAAXPEAU_DEVICE_OBJECT@@P6AJ0PEAU_IRP@@PEAX@Z2EEE@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001CA60 (_guard_dispatch_icall_nop.c)
 *     ?BuildFromWdmList@FxCmResList@@QEAAJPEAU_CM_RESOURCE_LIST@@E@Z @ 0x1C006089C (-BuildFromWdmList@FxCmResList@@QEAAJPEAU_CM_RESOURCE_LIST@@E@Z.c)
 *     ?CreateWdmList@FxCmResList@@QEAAPEAU_CM_RESOURCE_LIST@@W4_POOL_TYPE@@@Z @ 0x1C0060AA0 (-CreateWdmList@FxCmResList@@QEAAPEAU_CM_RESOURCE_LIST@@W4_POOL_TYPE@@@Z.c)
 *     ?PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z @ 0x1C007B2F8 (-PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z.c)
 *     ??_GFxFilteredStartContext@@QEAAPEAXI@Z @ 0x1C0083734 (--_GFxFilteredStartContext@@QEAAPEAXI@Z.c)
 */

unsigned __int8 __fastcall FxPkgFdo::PnpSendStartDeviceDownTheStackOverload(FxPkgFdo *this)
{
  _IRP *m_PendingPnPIrp; // r14
  FxFilteredStartContext *v2; // rsi
  char v3; // r15
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _CM_RESOURCE_LIST *AllocatedResources; // rdx
  _CM_RESOURCE_LIST *AllocatedResourcesTranslated; // rbp
  int v8; // edi
  unsigned __int64 ObjectHandleUnchecked; // rcx
  int (__fastcall *m_Method)(WDFDEVICE__ *, WDFCMRESLIST__ *, WDFCMRESLIST__ *); // rax
  FX_POOL **v11; // rax
  FxCmResList *m_ResourcesRaw; // rcx
  _CM_RESOURCE_LIST *WdmList; // rax
  FxCmResList *m_Resources; // rcx
  _CM_RESOURCE_LIST *v15; // rax
  FxPkgFdo *v16; // r9
  int (__fastcall *v17)(_DEVICE_OBJECT *, _IRP *, void *); // r8
  unsigned __int8 v18; // r8
  void *Caller; // [rsp+58h] [rbp+0h]
  FxIrp irp; // [rsp+60h] [rbp+8h] BYREF

  m_PendingPnPIrp = this->m_PendingPnPIrp;
  v2 = 0LL;
  this->m_PendingPnPIrp = 0LL;
  v3 = 0;
  irp.m_Irp = m_PendingPnPIrp;
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
    v8 = FxCmResList::BuildFromWdmList(this->m_ResourcesRaw, AllocatedResources, 3u);
    if ( v8 < 0 )
      goto LABEL_32;
    v8 = FxCmResList::BuildFromWdmList(this->m_Resources, AllocatedResourcesTranslated, 3u);
    if ( v8 < 0 )
      goto LABEL_32;
    FxObject::GetObjectHandleUnchecked(this->m_Resources);
    FxObject::GetObjectHandleUnchecked(this->m_ResourcesRaw);
    ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
    m_Method = this->m_DeviceRemoveAddedResources.m_Method;
    v8 = m_Method ? ((__int64 (__fastcall *)(unsigned __int64))m_Method)(ObjectHandleUnchecked) : 0;
    if ( v8 < 0 )
      goto LABEL_32;
    if ( this->m_ResourcesRaw->m_Changed || this->m_Resources->m_Changed )
    {
      v11 = FxPoolAllocator(
              this->m_Globals,
              &this->m_Globals->FxPoolFrameworks,
              ExDefaultNonPagedPoolType,
              0x18uLL,
              this->m_Globals->Tag,
              Caller);
      v2 = (FxFilteredStartContext *)v11;
      if ( v11 )
      {
        v11[1] = 0LL;
        v11[2] = 0LL;
      }
      else
      {
        v2 = 0LL;
      }
      if ( v2 )
      {
        v2->PkgFdo = this;
        m_ResourcesRaw = this->m_ResourcesRaw;
        if ( m_ResourcesRaw->m_Count )
        {
          WdmList = FxCmResList::CreateWdmList(m_ResourcesRaw, ExDefaultNonPagedPoolType);
          v2->ResourcesRaw = WdmList;
          if ( !WdmList )
            v8 = -1073741670;
        }
        if ( v8 < 0 )
          goto LABEL_25;
        m_Resources = this->m_Resources;
        if ( m_Resources->m_Count )
        {
          v15 = FxCmResList::CreateWdmList(m_Resources, ExDefaultNonPagedPoolType);
          v2->ResourcesTranslated = v15;
          if ( !v15 )
            v8 = -1073741670;
        }
        if ( v8 < 0 )
        {
LABEL_25:
          FxFilteredStartContext::`scalar deleting destructor'(v2);
        }
        else
        {
          v3 = 1;
          m_PendingPnPIrp->Tail.Overlay.CurrentStackLocation[-1].Parameters.WMI.ProviderId = (unsigned __int64)v2->ResourcesRaw;
          m_PendingPnPIrp->Tail.Overlay.CurrentStackLocation[-1].Parameters.QueryDirectory.FileName = (_UNICODE_STRING *)v2->ResourcesTranslated;
        }
      }
    }
  }
  else
  {
    v8 = 0;
  }
  if ( v8 < 0 )
  {
LABEL_32:
    WPP_IFR_SF_d(this->m_Globals, 2u, 0xCu, 0x17u, WPP_fxpkgfdo_cpp_Traceguids, v8);
    FxPkgPnp::PnpProcessEvent(this, PnpEventStartDeviceFailed, v18);
    FxPkgPnp::CompletePnpRequest(this, &irp, v8);
    return 0;
  }
  if ( v3 )
  {
    v16 = (FxPkgFdo *)v2;
    v17 = FxPkgFdo::_PnpFilteredStartDeviceCompletionRoutine;
  }
  else
  {
    v16 = this;
    v17 = FxPkgFdo::_PnpStartDeviceCompletionRoutine;
  }
  FxIrp::SetCompletionRoutineEx(&irp, this->m_DeviceBase->m_DeviceObject.m_DeviceObject, v17, v16);
  IofCallDriver(this->m_DeviceBase->m_AttachedDevice.m_DeviceObject, m_PendingPnPIrp);
  return 0;
}
