/*
 * XREFs of FxLibraryCommonDecommission @ 0x1C0041070
 * Callers:
 *     LibraryDecommission @ 0x1C002D7F0 (LibraryDecommission.c)
 * Callees:
 *     McGenEventUnregister_EtwUnregister @ 0x1C0041A9C (McGenEventUnregister_EtwUnregister.c)
 *     UninitializeTelemetryAssertsKM @ 0x1C008E3A4 (UninitializeTelemetryAssertsKM.c)
 *     FxUninitializeBugCheckDriverInfo @ 0x1C008FFF8 (FxUninitializeBugCheckDriverInfo.c)
 */

__int64 __fastcall FxLibraryCommonDecommission()
{
  REGHANDLE RegHandle; // rcx
  unsigned __int64 *v1; // rcx

  if ( WdfLdrDbgPrintOn )
  {
    DbgPrintEx(0x65u, 0, "%s: ", "Wdf01000");
    DbgPrintEx(0x65u, 0, "LibraryDecommission: enter\n");
  }
  if ( unk_1C00A9F61 )
  {
    IoWMIRegistrationControl(&WPP_GLOBAL_WDF_Control, 0x80000002);
    unk_1C00A9F61 = 0;
  }
  UninitializeTelemetryAssertsKM();
  RegHandle = Tlgg_TelemetryProviderProv.RegHandle;
  Tlgg_TelemetryProviderProv.RegHandle = 0LL;
  Tlgg_TelemetryProviderProv.LevelPlus1 = 0;
  EtwUnregister(RegHandle);
  McGenEventUnregister_EtwUnregister(v1);
  if ( stru_1C00A9F68.m_PoolToFree )
  {
    ExFreePoolWithTag(stru_1C00A9F68.m_PoolToFree, 0);
    stru_1C00A9F68.m_PoolToFree = 0LL;
  }
  stru_1C00A9F68.m_DriverUsage = 0LL;
  stru_1C00A9F68.m_Number = 0;
  FxUninitializeBugCheckDriverInfo();
  unk_1C00A9F00 = 0;
  if ( WdfLdrDbgPrintOn )
  {
    DbgPrintEx(0x65u, 0, "%s: ", "Wdf01000");
    DbgPrintEx(0x65u, 0, "LibraryDecommission: exit\n");
  }
  return 0LL;
}
