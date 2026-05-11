/*
 * XREFs of Feature_1615179064__private_IsEnabledDeviceUsage @ 0x1C00045BC
 * Callers:
 *     USBParseConvertInterfaceToDataRange @ 0x1C00318FC (USBParseConvertInterfaceToDataRange.c)
 * Callees:
 *     Feature_1615179064__private_IsEnabledFallback @ 0x1C00045A0 (Feature_1615179064__private_IsEnabledFallback.c)
 */

__int64 Feature_1615179064__private_IsEnabledDeviceUsage()
{
  if ( ((__int64)WPP_MAIN_CB.DeviceObjectExtension & 0x10) != 0 )
    return (__int64)WPP_MAIN_CB.DeviceObjectExtension & 1;
  else
    return Feature_1615179064__private_IsEnabledFallback(LODWORD(WPP_MAIN_CB.DeviceObjectExtension), 3u);
}
