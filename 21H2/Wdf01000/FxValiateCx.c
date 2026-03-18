/*
 * XREFs of FxValiateCx @ 0x1C0065314
 * Callers:
 *     imp_WdfCxDeviceInitAllocate @ 0x1C0065380 (imp_WdfCxDeviceInitAllocate.c)
 *     imp_WdfCxDeviceInitAllocateContext @ 0x1C0065410 (imp_WdfCxDeviceInitAllocateContext.c)
 *     imp_WdfCxDeviceInitAssignWdmIrpPreprocessCallback @ 0x1C0065490 (imp_WdfCxDeviceInitAssignWdmIrpPreprocessCallback.c)
 *     imp_WdfCxDeviceInitGetTypedContextWorker @ 0x1C0065700 (imp_WdfCxDeviceInitGetTypedContextWorker.c)
 *     imp_WdfCxDeviceInitSetFileObjectConfig @ 0x1C0065780 (imp_WdfCxDeviceInitSetFileObjectConfig.c)
 *     imp_WdfCxDeviceInitSetIoInCallerContextCallback @ 0x1C0065950 (imp_WdfCxDeviceInitSetIoInCallerContextCallback.c)
 *     imp_WdfCxDeviceInitSetPnpPowerEventCallbacks @ 0x1C00659C0 (imp_WdfCxDeviceInitSetPnpPowerEventCallbacks.c)
 *     imp_WdfCxDeviceInitSetPowerPolicyEventCallbacks @ 0x1C0065BD0 (imp_WdfCxDeviceInitSetPowerPolicyEventCallbacks.c)
 *     imp_WdfCxDeviceInitSetRequestAttributes @ 0x1C0065D70 (imp_WdfCxDeviceInitSetRequestAttributes.c)
 * Callees:
 *     WPP_IFR_SF_qL @ 0x1C0013680 (WPP_IFR_SF_qL.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0052DF0 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
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
