/*
 * XREFs of ?PnpPrepareHardware@FxPkgPnp@@IEAAJPEAEPEAW4FxCxCallbackProgress@@@Z @ 0x1C00217C0
 * Callers:
 *     ?PnpEventHardwareAvailable@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C0021720 (-PnpEventHardwareAvailable@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?PnpEventRestartHardwareAvailable@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C0084930 (-PnpEventRestartHardwareAvailable@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?PnpEventStartingFromStopped@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C0084A30 (-PnpEventStartingFromStopped@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0004FD4 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005028 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?InvokeStateful@FxPrePostCallback@@QEAAJPEAW4FxCxCallbackProgress@@W4FxCxCallbackCleanupAction@@@Z @ 0x1C001120C (-InvokeStateful@FxPrePostCallback@@QEAAJPEAW4FxCxCallbackProgress@@W4FxCxCallbackCleanupAction@@.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0019824 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     ?PnpAssignInterruptsSyncIrql@FxPkgPnp@@IEAAXXZ @ 0x1C00218D0 (-PnpAssignInterruptsSyncIrql@FxPkgPnp@@IEAAXXZ.c)
 *     ?PnpMatchResources@FxPkgPnp@@IEAAJXZ @ 0x1C0021924 (-PnpMatchResources@FxPkgPnp@@IEAAJXZ.c)
 *     WPP_IFR_SF_ @ 0x1C0028B14 (WPP_IFR_SF_.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0052DF0 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall FxPkgPnp::PnpPrepareHardware(
        FxPkgPnp *this,
        unsigned __int8 *ResourcesMatched,
        FxCxCallbackProgress *Progress)
{
  unsigned int v4; // eax
  int matched; // eax
  unsigned __int8 v8; // r8
  FxDeviceBase *m_DeviceBase; // rbp
  unsigned int v10; // ebx
  unsigned __int8 v11; // dl
  unsigned __int8 v12; // r8
  unsigned __int64 ObjectHandleUnchecked; // rax
  __int64 v14; // rdx
  __int64 v15; // r9
  __int64 v16; // r8
  int v17; // eax
  FxDeviceBase *v18; // rbx
  int v19; // esi
  unsigned __int8 v20; // r8
  unsigned __int8 v21; // dl
  unsigned __int8 v22; // r8
  __int64 result; // rax
  _DEVICE_OBJECT *m_DeviceObject; // rcx
  unsigned int v25; // edx
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  _FX_DRIVER_GLOBALS *v27; // rcx
  FxDeviceBase *v28; // rcx
  unsigned __int8 PreviousIrql; // [rsp+50h] [rbp+8h] BYREF

  v4 = this->m_PnpState.Value & 0xFFFFFAEF;
  *ResourcesMatched = 0;
  *Progress = FxCxCallbackProgressInitialized;
  this->m_PnpState.Value = v4 | 0xA20;
  matched = FxPkgPnp::PnpMatchResources(this);
  m_DeviceBase = this->m_DeviceBase;
  v10 = matched;
  if ( matched < 0 )
  {
    this->m_InternalFailure = 1;
    m_DeviceObject = m_DeviceBase->m_PhysicalDevice.m_DeviceObject;
    *ResourcesMatched = 0;
    IoInvalidateDeviceState(m_DeviceObject);
    result = v10;
    this->m_PendingPnPIrp->IoStatus.Status = v10;
  }
  else
  {
    *ResourcesMatched = 1;
    PreviousIrql = 0;
    FxNonPagedObject::Lock(m_DeviceBase, &PreviousIrql, v8);
    v11 = PreviousIrql;
    LOBYTE(m_DeviceBase[1].m_Globals) |= 1u;
    FxNonPagedObject::Unlock(m_DeviceBase, v11, v12);
    FxObject::GetObjectHandleUnchecked(this->m_Resources);
    FxObject::GetObjectHandleUnchecked(this->m_ResourcesRaw);
    ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
    *(_QWORD *)(v15 + 40) = v14;
    *(_QWORD *)(v15 + 48) = v16;
    *(_QWORD *)(v15 + 32) = ObjectHandleUnchecked;
    v17 = FxPrePostCallback::InvokeStateful((FxPrePostCallback *)v15, Progress, FxCxCleanupAfterPreFailure);
    v18 = this->m_DeviceBase;
    PreviousIrql = 0;
    v19 = v17;
    FxNonPagedObject::Lock(v18, &PreviousIrql, v20);
    v21 = PreviousIrql;
    LOBYTE(v18[1].m_Globals) &= ~1u;
    FxNonPagedObject::Unlock(v18, v21, v22);
    if ( v19 < 0 )
    {
      if ( v19 == -1073741637 )
      {
        WPP_IFR_SF_(this->m_Globals, 2u, 0xCu, 0x1Au, WPP_PnpStateMachine_cpp_Traceguids);
        m_Globals = this->m_Globals;
        if ( m_Globals->FxVerifierOn )
        {
          if ( _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(m_Globals, v25, 0xBu) || v27->FxVerifyDownlevel )
            FxVerifierDbgBreakPoint(v27);
        }
      }
      v28 = this->m_DeviceBase;
      this->m_InternalFailure = 1;
      IoInvalidateDeviceState(v28->m_PhysicalDevice.m_DeviceObject);
      this->m_PendingPnPIrp->IoStatus.Status = v19;
    }
    else
    {
      FxPkgPnp::PnpAssignInterruptsSyncIrql(this);
      return 0;
    }
    return (unsigned int)v19;
  }
  return result;
}
