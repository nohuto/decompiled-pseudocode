/*
 * XREFs of Feature_2797446457__private_IsEnabledDeviceUsage @ 0x1C0003C7C
 * Callers:
 *     USBHwGetMicArrayDescriptor @ 0x1C002E8D4 (USBHwGetMicArrayDescriptor.c)
 * Callees:
 *     Feature_2797446457__private_IsEnabledFallback @ 0x1C0003C60 (Feature_2797446457__private_IsEnabledFallback.c)
 */

__int64 Feature_2797446457__private_IsEnabledDeviceUsage()
{
  if ( (WPP_MAIN_CB.SectorSize & 0x10) != 0 )
    return WPP_MAIN_CB.SectorSize & 1;
  else
    return Feature_2797446457__private_IsEnabledFallback(*(unsigned int *)&WPP_MAIN_CB.SectorSize, 3u);
}
