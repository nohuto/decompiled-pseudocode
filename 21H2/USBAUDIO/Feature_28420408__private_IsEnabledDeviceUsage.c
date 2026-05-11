/*
 * XREFs of Feature_28420408__private_IsEnabledDeviceUsage @ 0x1C0004514
 * Callers:
 *     USBParseProcessUnit @ 0x1C0030A60 (USBParseProcessUnit.c)
 * Callees:
 *     Feature_28420408__private_IsEnabledFallback @ 0x1C00044F8 (Feature_28420408__private_IsEnabledFallback.c)
 */

__int64 Feature_28420408__private_IsEnabledDeviceUsage()
{
  if ( ((__int64)WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink & 0x10) != 0 )
    return (__int64)WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink & 1;
  else
    return Feature_28420408__private_IsEnabledFallback(LODWORD(WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink), 3u);
}
