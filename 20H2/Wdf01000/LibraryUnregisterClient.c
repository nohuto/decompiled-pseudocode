/*
 * XREFs of LibraryUnregisterClient @ 0x1C002D9C0
 * Callers:
 *     <none>
 * Callees:
 *     FxLibraryCommonUnregisterClient @ 0x1C004154C (FxLibraryCommonUnregisterClient.c)
 */

int __fastcall LibraryUnregisterClient(_WDF_BIND_INFO *Info, _WDF_DRIVER_GLOBALS *WdfDriverGlobals)
{
  return FxLibraryCommonUnregisterClient(Info, WdfDriverGlobals);
}
