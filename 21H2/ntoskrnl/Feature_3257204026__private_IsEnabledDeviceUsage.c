/*
 * XREFs of Feature_3257204026__private_IsEnabledDeviceUsage @ 0x1403F92A8
 * Callers:
 *     EtwpValidateFlagExtension @ 0x1406DD7E0 (EtwpValidateFlagExtension.c)
 * Callees:
 *     Feature_3257204026__private_IsEnabledFallback @ 0x1403F92E0 (Feature_3257204026__private_IsEnabledFallback.c)
 */

__int64 Feature_3257204026__private_IsEnabledDeviceUsage()
{
  if ( (Feature_3257204026__private_featureState & 0x10) != 0 )
    return Feature_3257204026__private_featureState & 1;
  else
    return Feature_3257204026__private_IsEnabledFallback((unsigned int)Feature_3257204026__private_featureState, 3LL);
}
