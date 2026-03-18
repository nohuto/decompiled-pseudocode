/*
 * XREFs of ?_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAVFxObject@@PEAPEAVIFxHasCallbacks@@@Z @ 0x1C0014000
 * Callers:
 *     ?Initialize@FxWorkItem@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_WORKITEM_CONFIG@@PEAVFxObject@@PEAPEAUWDFWORKITEM__@@@Z @ 0x1C0013BD4 (-Initialize@FxWorkItem@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_WORKITEM_CONFIG@@PEAVFxObject@.c)
 *     ?Initialize@FxTimer@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_TIMER_CONFIG@@PEAVFxObject@@PEAPEAUWDFTIMER__@@@Z @ 0x1C0014C7C (-Initialize@FxTimer@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_TIMER_CONFIG@@PEAVFxObject@@PEAPE.c)
 *     imp_WdfDmaEnablerCreate @ 0x1C002E4D0 (imp_WdfDmaEnablerCreate.c)
 *     ?Initialize@FxDpc@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_DPC_CONFIG@@PEAVFxObject@@PEAPEAUWDFDPC__@@@Z @ 0x1C0039B1C (-Initialize@FxDpc@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_DPC_CONFIG@@PEAVFxObject@@PEAPEAUWD.c)
 *     ?_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C004D2F0 (-_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ?_Create@FxIoTargetRemote@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDeviceBase@@PEAPEAV1@@Z @ 0x1C0066D48 (-_Create@FxIoTargetRemote@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDeviceBa.c)
 *     ?CreateQueue@FxPkgIo@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@PEAPEAVFxIoQueue@@@Z @ 0x1C0074448 (-CreateQueue@FxPkgIo@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@P.c)
 *     ?InitializeWorker@FxInterrupt@@QEAAJPEAVFxObject@@PEAU_WDF_INTERRUPT_CONFIG@@@Z @ 0x1C0088F08 (-InitializeWorker@FxInterrupt@@QEAAJPEAVFxObject@@PEAU_WDF_INTERRUPT_CONFIG@@@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C000CA80 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     WPP_IFR_SF_q @ 0x1C00138C0 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qq @ 0x1C0013E44 (WPP_IFR_SF_qq.c)
 *     _guard_dispatch_icall_nop @ 0x1C001CA60 (_guard_dispatch_icall_nop.c)
 *     ?GetParentObjectReferenced@FxObject@@QEAAPEAV1@PEAX@Z @ 0x1C00596BC (-GetParentObjectReferenced@FxObject@@QEAAPEAV1@PEAX@Z.c)
 */

FxDeviceBase *__fastcall FxDeviceBase::_SearchForDevice(FxObject *Object, IFxHasCallbacks **Callbacks)
{
  FxDeviceBase *m_DeviceBase; // rsi
  FxObject *v3; // rdi
  const void *_a1; // rax
  FxObject *ParentObjectReferenced; // rbx
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
      FxObject::AddRef(Object, Object, 254, "minkernel\\wdf\\framework\\shared\\core\\fxdevicebase.cpp");
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
      if ( m_DeviceBase->QueryInterface(m_DeviceBase, &cbParams) < 0 )
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
