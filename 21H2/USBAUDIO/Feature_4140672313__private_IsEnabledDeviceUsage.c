/*
 * XREFs of Feature_4140672313__private_IsEnabledDeviceUsage @ 0x1C000446C
 * Callers:
 *     USBParseExtensionUnit @ 0x1C0030D70 (USBParseExtensionUnit.c)
 * Callees:
 *     Feature_4140672313__private_IsEnabledFallback @ 0x1C0004450 (Feature_4140672313__private_IsEnabledFallback.c)
 */

__int64 Feature_4140672313__private_IsEnabledDeviceUsage()
{
  if ( ((__int64)WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink & 0x10) != 0 )
    return (__int64)WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink & 1;
  else
    return Feature_4140672313__private_IsEnabledFallback(LODWORD(WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink), 3u);
}
