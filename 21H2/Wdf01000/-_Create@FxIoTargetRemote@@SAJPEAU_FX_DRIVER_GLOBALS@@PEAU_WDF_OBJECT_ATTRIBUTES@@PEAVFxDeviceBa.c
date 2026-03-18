/*
 * XREFs of ?_Create@FxIoTargetRemote@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDeviceBase@@PEAPEAV1@@Z @ 0x1C002DEA4
 * Callers:
 *     imp_WdfIoTargetCreate @ 0x1C002DDF0 (imp_WdfIoTargetCreate.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0005610 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C0005B30 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C0006B70 (-FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OB.c)
 *     WPP_IFR_SF_qL @ 0x1C0013680 (WPP_IFR_SF_qL.c)
 *     ?_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAVFxObject@@PEAPEAVIFxHasCallbacks@@@Z @ 0x1C00193BC (-_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAVFxObject@@PEAPEAVIFxHasCallbacks@@@Z.c)
 *     ??0FxIoTargetRemote@@IEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002E008 (--0FxIoTargetRemote@@IEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_d @ 0x1C00306F4 (WPP_IFR_SF_d.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C0032F1C (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 *     WPP_IFR_SF_qqqd @ 0x1C00532C0 (WPP_IFR_SF_qqqd.c)
 */

__int64 __fastcall FxIoTargetRemote::_Create(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        FxDeviceBase *Device,
        FxIoTargetRemote **Target)
{
  FxIoTargetRemote *v8; // rax
  FxIoTarget *v9; // rax
  FxIoTargetRemote *v10; // rbx
  int _a1; // eax
  unsigned int v12; // esi
  void *ParentObject; // rdx
  FxDeviceBase *v15; // rax
  FxObject *v16; // r8
  const void *_a2; // rax
  unsigned int v18; // ebx
  __int64 _a3; // rdx
  FxPoolTypeOrPoolFlags v20; // [rsp+50h] [rbp-38h] BYREF
  FxObject *pParent; // [rsp+98h] [rbp+10h] BYREF
  void *hTarget; // [rsp+A8h] [rbp+20h] BYREF

  pParent = 0LL;
  *Target = 0LL;
  if ( Attributes && (ParentObject = Attributes->ParentObject) != 0LL )
  {
    FxObjectHandleGetPtr(FxDriverGlobals, (unsigned __int64)ParentObject, 0x1000u, (void **)&pParent);
    v15 = FxDeviceBase::_SearchForDevice(pParent, 0LL);
    if ( !v15 )
    {
      v18 = -1073741808;
      WPP_IFR_SF_qL(
        FxDriverGlobals,
        2u,
        0xEu,
        0xAu,
        WPP_FxIoTargetRemote_cpp_Traceguids,
        Attributes->ParentObject,
        0xC0000010);
      return v18;
    }
    if ( v15 != Device )
    {
      FxObject::GetObjectHandleUnchecked(Device);
      _a2 = (const void *)FxObject::GetObjectHandleUnchecked(v16);
      v18 = -1073741808;
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
      return v18;
    }
  }
  else
  {
    pParent = Device;
  }
  *(_QWORD *)&v20.UsePoolType = 0LL;
  v20.u.PoolFlags = 64LL;
  v8 = (FxIoTargetRemote *)FxObjectHandleAllocCommon(
                             FxDriverGlobals,
                             &v20,
                             0x1F8uLL,
                             0,
                             Attributes,
                             0,
                             FxObjectTypeExternal);
  if ( !v8 || (FxIoTargetRemote::FxIoTargetRemote(v8, FxDriverGlobals), (v10 = (FxIoTargetRemote *)v9) == 0LL) )
  {
    v18 = -1073741670;
    WPP_IFR_SF_d(FxDriverGlobals, 2u, 0xEu, 0xCu, WPP_FxIoTargetRemote_cpp_Traceguids, -1073741670);
    return v18;
  }
  v9->m_Driver = Device->m_Driver;
  v9->m_DeviceBase = Device;
  v9->m_InStackDevice = Device->m_DeviceObject.m_DeviceObject;
  Device->AddIoTarget(Device, v9);
  _a1 = FxObject::Commit(v10, (_FX_DRIVER_GLOBALS *)Attributes, &hTarget, pParent, 1u);
  v12 = _a1;
  if ( _a1 < 0 )
  {
    WPP_IFR_SF_d(FxDriverGlobals, 2u, 0xEu, 0xDu, WPP_FxIoTargetRemote_cpp_Traceguids, _a1);
    FxObject::ClearEvtCallbacks(v10);
    v10->DeleteObject(v10);
  }
  else
  {
    *Target = v10;
  }
  return v12;
}
