/*
 * XREFs of Feature_3052163386__private_IsEnabledDeviceUsage @ 0x1C000470C
 * Callers:
 *     USBParseGetUnitString @ 0x1C002FD24 (USBParseGetUnitString.c)
 *     USBParseTerminalUnit @ 0x1C002FF90 (USBParseTerminalUnit.c)
 *     USBParseSelectorUnit @ 0x1C0030560 (USBParseSelectorUnit.c)
 *     USBParseFeatureUnit @ 0x1C0030740 (USBParseFeatureUnit.c)
 * Callees:
 *     Feature_3052163386__private_IsEnabledFallback @ 0x1C00046F0 (Feature_3052163386__private_IsEnabledFallback.c)
 */

__int64 Feature_3052163386__private_IsEnabledDeviceUsage()
{
  if ( (WPP_MAIN_CB.ActiveThreadCount & 0x10) != 0 )
    return WPP_MAIN_CB.ActiveThreadCount & 1;
  else
    return Feature_3052163386__private_IsEnabledFallback(WPP_MAIN_CB.ActiveThreadCount, 3u);
}
