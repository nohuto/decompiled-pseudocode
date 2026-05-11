/*
 * XREFs of Feature_853910841__private_IsEnabledDeviceUsage @ 0x1C0004418
 * Callers:
 *     USBParseMIDIElement @ 0x1C00313E0 (USBParseMIDIElement.c)
 * Callees:
 *     Feature_853910841__private_IsEnabledFallback @ 0x1C00043FC (Feature_853910841__private_IsEnabledFallback.c)
 */

__int64 Feature_853910841__private_IsEnabledDeviceUsage()
{
  if ( (Feature_853910841__private_featureState & 0x10) != 0 )
    return Feature_853910841__private_featureState & 1;
  else
    return Feature_853910841__private_IsEnabledFallback((unsigned int)Feature_853910841__private_featureState, 3u);
}
