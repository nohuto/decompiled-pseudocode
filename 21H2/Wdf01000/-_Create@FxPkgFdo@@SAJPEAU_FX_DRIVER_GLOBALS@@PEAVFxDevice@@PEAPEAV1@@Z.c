/*
 * XREFs of ?_Create@FxPkgFdo@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@PEAPEAV1@@Z @ 0x1C0022C90
 * Callers:
 *     ?FdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C002693C (-FdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 * Callees:
 *     ?FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C0006B70 (-FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OB.c)
 *     ?Initialize@FxEventQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0022D70 (-Initialize@FxEventQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ??0FxPkgFdo@@AEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@@Z @ 0x1C0022DA4 (--0FxPkgFdo@@AEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@@Z.c)
 *     WPP_IFR_SF_d @ 0x1C00306F4 (WPP_IFR_SF_d.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C0032F1C (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall FxPkgFdo::_Create(_FX_DRIVER_GLOBALS *DriverGlobals, FxDevice *Device, FxPkgFdo **PkgFdo)
{
  FxPkgFdo *v6; // rax
  FxEventQueue *v7; // rax
  _FX_DRIVER_GLOBALS *v8; // rdx
  FxPkgFdo *v9; // rbx
  _FX_DRIVER_GLOBALS *v10; // rdx
  int v11; // edi
  _FX_DRIVER_GLOBALS *v12; // rdx
  FxPoolTypeOrPoolFlags v14; // [rsp+40h] [rbp-18h] BYREF

  *(_QWORD *)&v14.UsePoolType = 0LL;
  v14.u.PoolFlags = 64LL;
  v6 = (FxPkgFdo *)FxObjectHandleAllocCommon(DriverGlobals, &v14, 0x700uLL, 0, 0LL, 0, FxObjectTypeInternal);
  if ( v6 && (FxPkgFdo::FxPkgFdo(v6, DriverGlobals, Device), (v9 = (FxPkgFdo *)v7) != 0LL) )
  {
    v11 = FxEventQueue::Initialize(v7 + 3, v8);
    if ( v11 < 0
      || (v11 = FxEventQueue::Initialize(&v9->m_PowerMachine, v10), v11 < 0)
      || (v11 = FxEventQueue::Initialize(&v9->m_PowerPolicyMachine, v12), v11 < 0) )
    {
      FxObject::ClearEvtCallbacks(v9);
      v9->DeleteObject(v9);
    }
    else
    {
      *PkgFdo = v9;
    }
    return (unsigned int)v11;
  }
  else
  {
    WPP_IFR_SF_d(DriverGlobals, 2u, 0xDu, 0xAu, WPP_fxpkgfdo_cpp_Traceguids, -1073741670);
    return 3221225626LL;
  }
}
