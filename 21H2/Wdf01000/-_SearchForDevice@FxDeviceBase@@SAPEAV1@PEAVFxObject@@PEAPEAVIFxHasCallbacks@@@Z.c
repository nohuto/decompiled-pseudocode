/*
 * XREFs of ?_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAVFxObject@@PEAPEAVIFxHasCallbacks@@@Z @ 0x1C00193BC
 * Callers:
 *     ?Initialize@FxWorkItem@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_WORKITEM_CONFIG@@PEAVFxObject@@PEAPEAUWDFWORKITEM__@@@Z @ 0x1C00191FC (-Initialize@FxWorkItem@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_WORKITEM_CONFIG@@PEAVFxObject@.c)
 *     ?Initialize@FxTimer@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_TIMER_CONFIG@@PEAVFxObject@@PEAPEAUWDFTIMER__@@@Z @ 0x1C001955C (-Initialize@FxTimer@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_TIMER_CONFIG@@PEAVFxObject@@PEAPE.c)
 *     ?InitializeWorker@FxInterrupt@@QEAAJPEAVFxObject@@PEAU_WDF_INTERRUPT_CONFIG@@@Z @ 0x1C001ED40 (-InitializeWorker@FxInterrupt@@QEAAJPEAVFxObject@@PEAU_WDF_INTERRUPT_CONFIG@@@Z.c)
 *     ?CreateQueue@FxPkgIo@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@PEAPEAVFxIoQueue@@@Z @ 0x1C0024C4C (-CreateQueue@FxPkgIo@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@P.c)
 *     ?_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C002D504 (-_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     imp_WdfDmaEnablerCreate @ 0x1C002D5E0 (imp_WdfDmaEnablerCreate.c)
 *     ?_Create@FxIoTargetRemote@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDeviceBase@@PEAPEAV1@@Z @ 0x1C002DEA4 (-_Create@FxIoTargetRemote@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDeviceBa.c)
 *     ?Initialize@FxDpc@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_DPC_CONFIG@@PEAVFxObject@@PEAPEAUWDFDPC__@@@Z @ 0x1C002F334 (-Initialize@FxDpc@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_DPC_CONFIG@@PEAVFxObject@@PEAPEAUWD.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qq @ 0x1C00134A8 (WPP_IFR_SF_qq.c)
 *     ?GetParentObjectReferenced@FxObject@@QEAAPEAV1@PEAX@Z @ 0x1C00194CC (-GetParentObjectReferenced@FxObject@@QEAAPEAV1@PEAX@Z.c)
 *     WPP_IFR_SF_q @ 0x1C00198E8 (WPP_IFR_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1C006E6F0 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 */

FxDeviceBase *__fastcall FxDeviceBase::_SearchForDevice(FxObject *Object, IFxHasCallbacks **Callbacks)
{
  FxDeviceBase *m_DeviceBase; // rsi
  FxObject *v3; // rdi
  unsigned int v6; // edx
  FxObject *ParentObjectReferenced; // rbx
  FxTagTracker *m_Lock; // rcx
  const void *_a1; // rax
  int v11; // eax
  const void *ObjectHandleUnchecked; // rax
  const void *_a2; // rdx
  FxQueryInterfaceParams cbParams; // [rsp+40h] [rbp-18h] BYREF

  m_DeviceBase = Object->m_DeviceBase;
  v3 = Object;
  cbParams.Object = (void **)Callbacks;
  cbParams.Type = 5379;
  *(_DWORD *)&cbParams.Offset = 0;
  *(&cbParams.Offset + 2) = 0;
  if ( m_DeviceBase )
  {
    if ( Callbacks )
    {
      *Callbacks = 0LL;
      v6 = _InterlockedIncrement(&Object->m_Refcnt);
      if ( SLOBYTE(Object->m_ObjectFlags) < 0 )
      {
        m_Lock = (FxTagTracker *)Object[-1].m_SpinLock.m_Lock;
        if ( m_Lock )
          FxTagTracker::UpdateTagHistory(
            m_Lock,
            v3,
            254,
            "minkernel\\wdf\\framework\\shared\\core\\fxdevicebase.cpp",
            TagAddRef,
            v6);
      }
      do
      {
        if ( v3->QueryInterface(v3, &cbParams) >= 0 )
        {
          v3->Release(v3, Object, 266, "minkernel\\wdf\\framework\\shared\\core\\fxdevicebase.cpp");
          return m_DeviceBase;
        }
        ParentObjectReferenced = FxObject::GetParentObjectReferenced(v3, Object);
        v3->Release(v3, Object, 276, "minkernel\\wdf\\framework\\shared\\core\\fxdevicebase.cpp");
        v3 = ParentObjectReferenced;
      }
      while ( ParentObjectReferenced );
      v11 = m_DeviceBase->QueryInterface(m_DeviceBase, &cbParams);
      if ( v11 < 0 )
      {
        FxObject::GetObjectHandleUnchecked(m_DeviceBase);
        ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(Object);
        WPP_IFR_SF_qq(Object->m_Globals, 2u, 0x14u, 0xCu, WPP_FxDeviceBase_cpp_Traceguids, ObjectHandleUnchecked, _a2);
      }
    }
    return m_DeviceBase;
  }
  else
  {
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(Object);
    WPP_IFR_SF_q(v3->m_Globals, 2u, 0x14u, 0xBu, WPP_FxDeviceBase_cpp_Traceguids, _a1);
    return 0LL;
  }
}
