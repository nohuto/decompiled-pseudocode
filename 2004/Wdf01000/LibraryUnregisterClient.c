/*
 * XREFs of LibraryUnregisterClient @ 0x1C002E290
 * Callers:
 *     <none>
 * Callees:
 *     FxLibraryCommonUnregisterClient @ 0x1C0041E1C (FxLibraryCommonUnregisterClient.c)
 */

int __fastcall LibraryUnregisterClient(_WDF_BIND_INFO *Info, _WDF_DRIVER_GLOBALS *WdfDriverGlobals)
{
  return FxLibraryCommonUnregisterClient(Info, WdfDriverGlobals);
}
