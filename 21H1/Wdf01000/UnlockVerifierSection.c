/*
 * XREFs of UnlockVerifierSection @ 0x1C0058844
 * Callers:
 *     FxLibraryCommonUnregisterClient @ 0x1C0041E1C (FxLibraryCommonUnregisterClient.c)
 *     FxDestroy @ 0x1C0056D1C (FxDestroy.c)
 * Callees:
 *     WPP_IFR_SF_dq @ 0x1C002E9AC (WPP_IFR_SF_dq.c)
 */

void __fastcall UnlockVerifierSection(_FX_DRIVER_GLOBALS *FxDriverGlobals)
{
  int _a1; // ebx

  if ( FxLibraryGlobals.VerifierSectionHandle )
  {
    _a1 = _InterlockedDecrement(&FxLibraryGlobals.VerifierSectionHandleRefCount);
    MmUnlockPagableImageSection(FxLibraryGlobals.VerifierSectionHandle);
    WPP_IFR_SF_dq(FxDriverGlobals, 4u, 0x11u, 0xCu, WPP_globals_cpp_Traceguids, _a1, FxDriverGlobals);
  }
}
