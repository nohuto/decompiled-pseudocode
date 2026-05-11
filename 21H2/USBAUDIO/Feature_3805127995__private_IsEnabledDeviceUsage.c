/*
 * XREFs of Feature_3805127995__private_IsEnabledDeviceUsage @ 0x1C00044C0
 * Callers:
 *     USBParseMIDIElement @ 0x1C00313E0 (USBParseMIDIElement.c)
 * Callees:
 *     Feature_3805127995__private_IsEnabledFallback @ 0x1C00044A4 (Feature_3805127995__private_IsEnabledFallback.c)
 */

__int64 Feature_3805127995__private_IsEnabledDeviceUsage()
{
  if ( (Feature_3805127995__private_featureState & 0x10) != 0 )
    return Feature_3805127995__private_featureState & 1;
  else
    return Feature_3805127995__private_IsEnabledFallback((unsigned int)Feature_3805127995__private_featureState, 3u);
}
