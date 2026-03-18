/*
 * XREFs of ?_Create@FxIoTargetRemote@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDeviceBase@@PEAPEAV1@@Z @ 0x1C0066D48
 * Callers:
 *     imp_WdfIoTargetCreate @ 0x1C0062A90 (imp_WdfIoTargetCreate.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_d @ 0x1C000A9D8 (WPP_IFR_SF_d.c)
 *     WPP_IFR_SF_qL @ 0x1C000B0E4 (WPP_IFR_SF_qL.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C000B520 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C000BE90 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C000BF84 (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     ?_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAVFxObject@@PEAPEAVIFxHasCallbacks@@@Z @ 0x1C0014000 (-_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAVFxObject@@PEAPEAVIFxHasCallbacks@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001CA60 (_guard_dispatch_icall_nop.c)
 *     WPP_IFR_SF_qqqd @ 0x1C002E200 (WPP_IFR_SF_qqqd.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C00595BC (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 *     ??0FxIoTargetRemote@@IEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0066100 (--0FxIoTargetRemote@@IEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall FxIoTargetRemote::_Create(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        FxDeviceBase *Device,
        FxIoTargetRemote **Target)
{
  void *ParentObject; // rdx
  FxDeviceBase *v9; // rax
  unsigned int v10; // ebx
  FxObject *v12; // r8
  const void *_a2; // rax
  __int64 _a3; // rdx
  FxIoTargetRemote *v15; // rax
  FxIoTargetRemote *v16; // rax
  FxIoTargetRemote *v17; // rbx
  int _a1; // eax
  unsigned int v19; // esi
  FxObject *pParent; // [rsp+88h] [rbp+10h] BYREF
  void *hTarget; // [rsp+98h] [rbp+20h] BYREF

  pParent = 0LL;
  *Target = 0LL;
  if ( Attributes && (ParentObject = Attributes->ParentObject) != 0LL )
  {
    FxObjectHandleGetPtr(FxDriverGlobals, (unsigned __int64)ParentObject, 0x1000u, (void **)&pParent);
    v9 = FxDeviceBase::_SearchForDevice(pParent, 0LL);
    if ( !v9 )
    {
      v10 = -1073741808;
      WPP_IFR_SF_qL(
        FxDriverGlobals,
        2u,
        0xEu,
        0xAu,
        WPP_FxIoTargetRemote_cpp_Traceguids,
        Attributes->ParentObject,
        0xC0000010);
      return v10;
    }
    if ( v9 != Device )
    {
      FxObject::GetObjectHandleUnchecked(Device);
      _a2 = (const void *)FxObject::GetObjectHandleUnchecked(v12);
      v10 = -1073741808;
      WPP_IFR_SF_qqqd(
        FxDriverGlobals,
        2u,
        0xEu,
        0xBu,
        WPP_FxIoTargetRemote_cpp_Traceguids,
        Attributes->ParentObject,
        _a2,
        _a3,
        -1073741808);
      return v10;
    }
  }
  else
  {
    pParent = Device;
  }
  v15 = (FxIoTargetRemote *)FxObjectHandleAlloc(
                              FxDriverGlobals,
                              ExDefaultNonPagedPoolType,
                              0x1F8uLL,
                              0,
                              Attributes,
                              0,
                              FxObjectTypeExternal);
  if ( v15 )
  {
    FxIoTargetRemote::FxIoTargetRemote(v15, FxDriverGlobals);
    v17 = v16;
  }
  else
  {
    v17 = 0LL;
  }
  if ( !v17 )
  {
    v10 = -1073741670;
    WPP_IFR_SF_d(FxDriverGlobals, 2u, 0xEu, 0xCu, WPP_FxIoTargetRemote_cpp_Traceguids, -1073741670);
    return v10;
  }
  v17->m_Driver = Device->m_Driver;
  v17->m_DeviceBase = Device;
  v17->m_InStackDevice = Device->m_DeviceObject.m_DeviceObject;
  Device->AddIoTarget(Device, v17);
  _a1 = FxObject::Commit(v17, (_FX_DRIVER_GLOBALS *)Attributes, &hTarget, pParent, 1u);
  v19 = _a1;
  if ( _a1 < 0 )
  {
    WPP_IFR_SF_d(FxDriverGlobals, 2u, 0xEu, 0xDu, WPP_FxIoTargetRemote_cpp_Traceguids, _a1);
    FxObject::ClearEvtCallbacks(v17);
    v17->DeleteObject(v17);
  }
  else
  {
    *Target = v17;
  }
  return v19;
}
