/*
 * XREFs of UnlockVerifierSection @ 0x1C006C19C
 * Callers:
 *     FxLibraryCommonUnregisterClient @ 0x1C00600AC (FxLibraryCommonUnregisterClient.c)
 *     FxDestroy @ 0x1C006B75C (FxDestroy.c)
 * Callees:
 *     WPP_IFR_SF_dq @ 0x1C005319C (WPP_IFR_SF_dq.c)
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
