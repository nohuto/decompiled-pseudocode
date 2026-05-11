/*
 * XREFs of Feature_1212525881__private_IsEnabledDeviceUsage @ 0x1C0004568
 * Callers:
 *     USBParseGetMIDIStreamingEndpointDescriptor @ 0x1C002F8B4 (USBParseGetMIDIStreamingEndpointDescriptor.c)
 * Callees:
 *     Feature_1212525881__private_IsEnabledFallback @ 0x1C000454C (Feature_1212525881__private_IsEnabledFallback.c)
 */

__int64 Feature_1212525881__private_IsEnabledDeviceUsage()
{
  if ( (Feature_1212525881__private_featureState & 0x10) != 0 )
    return Feature_1212525881__private_featureState & 1;
  else
    return Feature_1212525881__private_IsEnabledFallback((unsigned int)Feature_1212525881__private_featureState, 3u);
}
