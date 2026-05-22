/*
 * XREFs of ?TraceDriverTypeToString@@YAPEBDW4TraceDriverType@@@Z @ 0x180166228
 * Callers:
 *     ?DevicePropertyCacheMiss_@HolographicDriverClientTrace@@QEAAXW4TraceDriverType@@AEBU_GUID@@1_N@Z @ 0x18015B7C0 (-DevicePropertyCacheMiss_@HolographicDriverClientTrace@@QEAAXW4TraceDriverType@@AEBU_GUID@@1_N@Z.c)
 *     ?DevicePropertyRequestAdded_@HolographicDriverClientTrace@@QEAAXW4TraceDriverType@@AEBU_GUID@@1@Z @ 0x18015B878 (-DevicePropertyRequestAdded_@HolographicDriverClientTrace@@QEAAXW4TraceDriverType@@AEBU_GUID@@1@.c)
 *     ?DevicePropertyRequestFailed_@HolographicDriverClientTrace@@QEAAXW4TraceDriverType@@AEBU_GUID@@1J@Z @ 0x18015B918 (-DevicePropertyRequestFailed_@HolographicDriverClientTrace@@QEAAXW4TraceDriverType@@AEBU_GUID@@1.c)
 *     ?DriverCompatibilityDetermined_@HolographicDriverClientTrace@@QEAAXW4TraceDriverType@@UHOLOGRAPHIC_DEVICE_SUPPORTED_DDI_LEVELS@@1_N@Z @ 0x18015B9CC (-DriverCompatibilityDetermined_@HolographicDriverClientTrace@@QEAAXW4TraceDriverType@@UHOLOGRAPH.c)
 *     ?GetErrorStatuses_@HolographicDriverClientTrace@@QEAAXW4TraceDriverType@@QEB_WAEBUHOLOGRAPHIC_DEVICE_ERROR_STATUSES@@@Z @ 0x18015C9D8 (-GetErrorStatuses_@HolographicDriverClientTrace@@QEAAXW4TraceDriverType@@QEB_WAEBUHOLOGRAPHIC_DE.c)
 *     ?PrecachePropertiesElapsedTime_@HolographicDriverClientTrace@@QEAAXW4TraceDriverType@@AEBU_GUID@@_K@Z @ 0x180161AB4 (-PrecachePropertiesElapsedTime_@HolographicDriverClientTrace@@QEAAXW4TraceDriverType@@AEBU_GUID@.c)
 *     ?PropertyCache_Cleared_@HolographicDriverClientTrace@@QEAAXW4TraceDriverType@@AEBU_GUID@@@Z @ 0x1801623B8 (-PropertyCache_Cleared_@HolographicDriverClientTrace@@QEAAXW4TraceDriverType@@AEBU_GUID@@@Z.c)
 *     ?PropertyCache_RemoveValue_@HolographicDriverClientTrace@@QEAAXW4TraceDriverType@@AEBU_GUID@@1@Z @ 0x18016243C (-PropertyCache_RemoveValue_@HolographicDriverClientTrace@@QEAAXW4TraceDriverType@@AEBU_GUID@@1@Z.c)
 *     ?PropertyCache_SetValue_@HolographicDriverClientTrace@@QEAAXW4TraceDriverType@@AEBU_GUID@@1PEBX_K@Z @ 0x1801624DC (-PropertyCache_SetValue_@HolographicDriverClientTrace@@QEAAXW4TraceDriverType@@AEBU_GUID@@1PEBX_.c)
 *     ?RegisterPropertiesUpdateCallback_@HolographicDriverClientTrace@@QEAAXW4TraceDriverType@@PEBX11@Z @ 0x180162E9C (-RegisterPropertiesUpdateCallback_@HolographicDriverClientTrace@@QEAAXW4TraceDriverType@@PEBX11@.c)
 *     ?StartActivity@CloseHolographicDevice@HolographicDriverClientTrace@@QEAAXPEB_WW4TraceDriverType@@AEBU_GUID@@@Z @ 0x180164224 (-StartActivity@CloseHolographicDevice@HolographicDriverClientTrace@@QEAAXPEB_WW4TraceDriverType@.c)
 *     ?StartActivity@OpenHolographicDevice@HolographicDriverClientTrace@@QEAAXPEB_WW4TraceDriverType@@AEBU_GUID@@@Z @ 0x180164558 (-StartActivity@OpenHolographicDevice@HolographicDriverClientTrace@@QEAAXPEB_WW4TraceDriverType@@.c)
 *     ?StartActivity@TelemetryCloseHolographicDevice@HolographicDriverClientTrace@@QEAAXPEB_WW4TraceDriverType@@AEBU_GUID@@@Z @ 0x180164648 (-StartActivity@TelemetryCloseHolographicDevice@HolographicDriverClientTrace@@QEAAXPEB_WW4TraceDr.c)
 *     ?StartActivity@TelemetryOpenHolographicDevice@HolographicDriverClientTrace@@QEAAXPEB_WW4TraceDriverType@@AEBU_GUID@@@Z @ 0x180164750 (-StartActivity@TelemetryOpenHolographicDevice@HolographicDriverClientTrace@@QEAAXPEB_WW4TraceDri.c)
 * Callees:
 *     <none>
 */

const char *__fastcall TraceDriverTypeToString(int a1)
{
  if ( !a1 )
    return "Display";
  if ( a1 == 1 )
    return "SpatialGraph";
  return "(unknown)";
}
