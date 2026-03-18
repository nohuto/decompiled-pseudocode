/*
 * XREFs of FxValiateCx @ 0x1C004B084
 * Callers:
 *     imp_WdfCxDeviceInitSetPowerPolicyEventCallbacks @ 0x1C001B180 (imp_WdfCxDeviceInitSetPowerPolicyEventCallbacks.c)
 *     imp_WdfCxDeviceInitAllocate @ 0x1C004B0F0 (imp_WdfCxDeviceInitAllocate.c)
 *     imp_WdfCxDeviceInitAllocateContext @ 0x1C004B180 (imp_WdfCxDeviceInitAllocateContext.c)
 *     imp_WdfCxDeviceInitAssignWdmIrpPreprocessCallback @ 0x1C004B200 (imp_WdfCxDeviceInitAssignWdmIrpPreprocessCallback.c)
 *     imp_WdfCxDeviceInitGetTypedContextWorker @ 0x1C004B420 (imp_WdfCxDeviceInitGetTypedContextWorker.c)
 *     imp_WdfCxDeviceInitSetFileObjectConfig @ 0x1C004B4A0 (imp_WdfCxDeviceInitSetFileObjectConfig.c)
 *     imp_WdfCxDeviceInitSetIoInCallerContextCallback @ 0x1C004B670 (imp_WdfCxDeviceInitSetIoInCallerContextCallback.c)
 *     imp_WdfCxDeviceInitSetPnpPowerEventCallbacks @ 0x1C004B6E0 (imp_WdfCxDeviceInitSetPnpPowerEventCallbacks.c)
 *     imp_WdfCxDeviceInitSetRequestAttributes @ 0x1C004B8F0 (imp_WdfCxDeviceInitSetRequestAttributes.c)
 * Callees:
 *     WPP_IFR_SF_qL @ 0x1C000B0E4 (WPP_IFR_SF_qL.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002E5DC (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall FxValiateCx(_FX_DRIVER_GLOBALS *FxDriverGlobals, _FX_DRIVER_GLOBALS *CxDriverGlobals)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( FxDriverGlobals == CxDriverGlobals )
  {
    v2 = -1073741808;
    WPP_IFR_SF_qL(
      FxDriverGlobals,
      2u,
      0x12u,
      0xAu,
      WPP_FxCxDeviceInitApi_cpp_Traceguids,
      CxDriverGlobals->Public.Driver,
      0xC0000010);
    FxVerifierDbgBreakPoint(FxDriverGlobals);
  }
  return v2;
}
