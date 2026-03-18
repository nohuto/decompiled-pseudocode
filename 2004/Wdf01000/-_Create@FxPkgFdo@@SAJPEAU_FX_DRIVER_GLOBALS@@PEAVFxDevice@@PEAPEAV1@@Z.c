/*
 * XREFs of ?_Create@FxPkgFdo@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@PEAPEAV1@@Z @ 0x1C008488C
 * Callers:
 *     ?FdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C0050700 (-FdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_d @ 0x1C000A9D8 (WPP_IFR_SF_d.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C000BF84 (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D310 (_guard_dispatch_icall_nop.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C0059E9C (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 *     ??0FxPkgFdo@@AEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@@Z @ 0x1C0083EC0 (--0FxPkgFdo@@AEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@@Z.c)
 *     ?Initialize@FxEventQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C008AE38 (-Initialize@FxEventQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall FxPkgFdo::_Create(_FX_DRIVER_GLOBALS *DriverGlobals, FxDevice *Device, FxPkgFdo **PkgFdo)
{
  FxPkgFdo *v6; // rax
  _FX_DRIVER_GLOBALS *v7; // rdx
  FxPkgFdo *v8; // rax
  FxPkgFdo *v9; // rbx
  _FX_DRIVER_GLOBALS *v11; // rdx
  int v12; // edi
  _FX_DRIVER_GLOBALS *v13; // rdx

  v6 = (FxPkgFdo *)FxObjectHandleAlloc(
                     DriverGlobals,
                     ExDefaultNonPagedPoolType,
                     0x700uLL,
                     0,
                     0LL,
                     0,
                     FxObjectTypeInternal);
  if ( v6 )
  {
    FxPkgFdo::FxPkgFdo(v6, DriverGlobals, Device);
    v9 = v8;
  }
  else
  {
    v9 = 0LL;
  }
  if ( v9 )
  {
    v12 = FxEventQueue::Initialize(&v9->m_PnpMachine, v7);
    if ( v12 < 0
      || (v12 = FxEventQueue::Initialize(&v9->m_PowerMachine, v11), v12 < 0)
      || (v12 = FxEventQueue::Initialize(&v9->m_PowerPolicyMachine, v13), v12 < 0) )
    {
      FxObject::ClearEvtCallbacks(v9);
      v9->DeleteObject(v9);
    }
    else
    {
      *PkgFdo = v9;
    }
    return (unsigned int)v12;
  }
  else
  {
    WPP_IFR_SF_d(DriverGlobals, 2u, 0xDu, 0xAu, WPP_fxpkgfdo_cpp_Traceguids, -1073741670);
    return 3221225626LL;
  }
}
