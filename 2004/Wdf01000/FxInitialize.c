/*
 * XREFs of FxInitialize @ 0x1C0057038
 * Callers:
 *     imp_WdfDriverCreate @ 0x1C004BE30 (imp_WdfDriverCreate.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D310 (_guard_dispatch_icall_nop.c)
 *     ?FxIFRStart@@YAXPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU_DRIVER_OBJECT@@@Z @ 0x1C0039960 (-FxIFRStart@@YAXPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU_DRIVER_OBJECT@@@Z.c)
 *     ?FxIFRStop@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0039A80 (-FxIFRStop@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     FxRegistrySettingsInitialize @ 0x1C0057A70 (FxRegistrySettingsInitialize.c)
 *     LockVerifierSection @ 0x1C00587A0 (LockVerifierSection.c)
 *     WPP_IFR_SF_Z @ 0x1C00588B8 (WPP_IFR_SF_Z.c)
 *     ?FxPoolInitialize@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@@Z @ 0x1C0058DA0 (-FxPoolInitialize@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@@Z.c)
 *     ?IsCorrectVersionRegistered@_FX_DRIVER_GLOBALS@@QEAAEPEBU_UNICODE_STRING@@@Z @ 0x1C0059420 (-IsCorrectVersionRegistered@_FX_DRIVER_GLOBALS@@QEAAEPEBU_UNICODE_STRING@@@Z.c)
 *     ?RegisterClientVersion@_FX_DRIVER_GLOBALS@@QEAAXPEBU_UNICODE_STRING@@@Z @ 0x1C005961C (-RegisterClientVersion@_FX_DRIVER_GLOBALS@@QEAAXPEBU_UNICODE_STRING@@@Z.c)
 *     ?AllocateThreadTable@FxVerifierLock@@SAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C005A558 (-AllocateThreadTable@FxVerifierLock@@SAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     FxCacheBugCheckDriverInfo @ 0x1C0090498 (FxCacheBugCheckDriverInfo.c)
 *     FxRegisterBugCheckCallback @ 0x1C00907FC (FxRegisterBugCheckCallback.c)
 */

__int64 __fastcall FxInitialize(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _DRIVER_OBJECT *DriverObject,
        _UNICODE_STRING *RegistryPath,
        _WDF_DRIVER_CONFIG *a4)
{
  unsigned __int8 v7; // si
  _DRIVER_OBJECT *v8; // r8
  int v9; // esi

  v7 = 0;
  if ( MmIsDriverVerifying(DriverObject) && FxLibraryGlobals.VfIsRuleClassEnabled )
    v7 = FxLibraryGlobals.VfIsRuleClassEnabled(0x21u);
  FxRegistrySettingsInitialize(FxDriverGlobals, RegistryPath, v7);
  FxIFRStart(FxDriverGlobals, RegistryPath, v8);
  if ( FxDriverGlobals->FxVerboseOn )
    WPP_IFR_SF_Z(FxDriverGlobals, 5u, 0x11u, 0xDu, WPP_globals_cpp_Traceguids, RegistryPath);
  v9 = FxPoolInitialize(FxDriverGlobals, &FxDriverGlobals->FxPoolFrameworks);
  if ( v9 >= 0 )
  {
    if ( FxDriverGlobals->FxVerifierLock )
    {
      FxDriverGlobals->ThreadTableLock.m_Lock = 0LL;
      FxDriverGlobals->ThreadTableLock.m_DbgFlagIsInitialized = 1;
      FxVerifierLock::AllocateThreadTable(FxDriverGlobals);
    }
    FxCacheBugCheckDriverInfo(FxDriverGlobals);
    FxRegisterBugCheckCallback(FxDriverGlobals, DriverObject);
    if ( RegistryPath && !_FX_DRIVER_GLOBALS::IsCorrectVersionRegistered(FxDriverGlobals, RegistryPath) )
      _FX_DRIVER_GLOBALS::RegisterClientVersion(FxDriverGlobals, RegistryPath);
    if ( FxDriverGlobals->FxVerifierOn )
      LockVerifierSection(FxDriverGlobals, RegistryPath);
    return 0LL;
  }
  else
  {
    FxIFRStop(FxDriverGlobals);
    return (unsigned int)v9;
  }
}
