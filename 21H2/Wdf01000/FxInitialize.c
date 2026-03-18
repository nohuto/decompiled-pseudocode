/*
 * XREFs of FxInitialize @ 0x1C0027E24
 * Callers:
 *     imp_WdfDriverCreate @ 0x1C0027650 (imp_WdfDriverCreate.c)
 * Callees:
 *     FxCacheBugCheckDriverInfo @ 0x1C0027910 (FxCacheBugCheckDriverInfo.c)
 *     FxRegisterBugCheckCallback @ 0x1C0027A6C (FxRegisterBugCheckCallback.c)
 *     FxRegistrySettingsInitialize @ 0x1C0027EF4 (FxRegistrySettingsInitialize.c)
 *     ?FxIFRStart@@YAXPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU_DRIVER_OBJECT@@@Z @ 0x1C0028A10 (-FxIFRStart@@YAXPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU_DRIVER_OBJECT@@@Z.c)
 *     ?IsCorrectVersionRegistered@_FX_DRIVER_GLOBALS@@QEAAEPEBU_UNICODE_STRING@@@Z @ 0x1C0028D68 (-IsCorrectVersionRegistered@_FX_DRIVER_GLOBALS@@QEAAEPEBU_UNICODE_STRING@@@Z.c)
 *     ?FxPoolInitialize@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@@Z @ 0x1C002FCA8 (-FxPoolInitialize@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 *     ?FxIFRStop@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C005B6A4 (-FxIFRStop@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     LockVerifierSection @ 0x1C006C0F8 (LockVerifierSection.c)
 *     WPP_IFR_SF_Z @ 0x1C006C210 (WPP_IFR_SF_Z.c)
 *     ?AllocateThreadTable@FxVerifierLock@@SAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C006D554 (-AllocateThreadTable@FxVerifierLock@@SAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?RegisterClientVersion@_FX_DRIVER_GLOBALS@@QEAAXPEBU_UNICODE_STRING@@@Z @ 0x1C006EFEC (-RegisterClientVersion@_FX_DRIVER_GLOBALS@@QEAAXPEBU_UNICODE_STRING@@@Z.c)
 */

__int64 __fastcall FxInitialize(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _DRIVER_OBJECT *DriverObject,
        const _UNICODE_STRING *RegistryPath,
        _WDF_DRIVER_CONFIG *a4)
{
  unsigned __int8 v7; // si
  const _UNICODE_STRING *v8; // rdx
  const _UNICODE_STRING *v9; // rdx
  _DRIVER_OBJECT *v10; // r8
  int v11; // esi
  const _UNICODE_STRING *v12; // rdx

  v7 = 0;
  if ( MmIsDriverVerifying(DriverObject) && FxLibraryGlobals.VfIsRuleClassEnabled )
    v7 = FxLibraryGlobals.VfIsRuleClassEnabled(0x21u);
  FxRegistrySettingsInitialize(FxDriverGlobals, v8, v7);
  FxIFRStart(FxDriverGlobals, v9, v10);
  if ( FxDriverGlobals->FxVerboseOn )
    WPP_IFR_SF_Z(FxDriverGlobals, 5u, 0x11u, 0xDu, WPP_globals_cpp_Traceguids, RegistryPath);
  v11 = FxPoolInitialize(FxDriverGlobals, &FxDriverGlobals->FxPoolFrameworks);
  if ( v11 < 0 )
  {
    FxIFRStop(FxDriverGlobals);
    return (unsigned int)v11;
  }
  else
  {
    if ( FxDriverGlobals->FxVerifierLock )
    {
      FxDriverGlobals->ThreadTableLock.m_Lock = 0LL;
      FxDriverGlobals->ThreadTableLock.m_DbgFlagIsInitialized = 1;
      FxVerifierLock::AllocateThreadTable(FxDriverGlobals);
    }
    FxCacheBugCheckDriverInfo(FxDriverGlobals);
    FxRegisterBugCheckCallback(FxDriverGlobals, DriverObject);
    if ( RegistryPath && !_FX_DRIVER_GLOBALS::IsCorrectVersionRegistered(FxDriverGlobals, v12) )
      _FX_DRIVER_GLOBALS::RegisterClientVersion(FxDriverGlobals, RegistryPath);
    if ( FxDriverGlobals->FxVerifierOn )
      LockVerifierSection(FxDriverGlobals, RegistryPath);
    return 0LL;
  }
}
