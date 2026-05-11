/*
 * XREFs of Feature_1240224058__private_IsEnabledDeviceUsage @ 0x1C00046B8
 * Callers:
 *     USBParseCreateInterfaceList @ 0x1C002F1B4 (USBParseCreateInterfaceList.c)
 * Callees:
 *     Feature_1240224058__private_IsEnabledFallback @ 0x1C000469C (Feature_1240224058__private_IsEnabledFallback.c)
 */

__int64 Feature_1240224058__private_IsEnabledDeviceUsage()
{
  if ( (Feature_1240224058__private_featureState & 0x10) != 0 )
    return Feature_1240224058__private_featureState & 1;
  else
    return Feature_1240224058__private_IsEnabledFallback((unsigned int)Feature_1240224058__private_featureState, 3u);
}
