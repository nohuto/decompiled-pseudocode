/*
 * XREFs of Feature_3207179578__private_IsEnabledDeviceUsage @ 0x1C0004610
 * Callers:
 *     USBParseBuildSourceIdArray @ 0x1C002FF10 (USBParseBuildSourceIdArray.c)
 *     USBParseTerminalUnit @ 0x1C002FF90 (USBParseTerminalUnit.c)
 *     USBParseMixerUnit @ 0x1C00301E0 (USBParseMixerUnit.c)
 *     USBParseSelectorUnit @ 0x1C0030560 (USBParseSelectorUnit.c)
 *     USBParseFeatureUnit @ 0x1C0030740 (USBParseFeatureUnit.c)
 *     USBParseProcessUnit @ 0x1C0030A60 (USBParseProcessUnit.c)
 *     USBParseExtensionUnit @ 0x1C0030D70 (USBParseExtensionUnit.c)
 * Callees:
 *     Feature_3207179578__private_IsEnabledFallback @ 0x1C00045F4 (Feature_3207179578__private_IsEnabledFallback.c)
 */

__int64 Feature_3207179578__private_IsEnabledDeviceUsage()
{
  if ( (WPP_MAIN_CB.DeviceLock.Header.Type & 0x10) != 0 )
    return WPP_MAIN_CB.DeviceLock.Header.Type & 1;
  else
    return Feature_3207179578__private_IsEnabledFallback((unsigned int)WPP_MAIN_CB.DeviceLock.Header.Lock, 3u);
}
