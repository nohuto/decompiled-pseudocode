/*
 * XREFs of Feature_2546989371__private_IsEnabledDeviceUsage @ 0x1403F8FB0
 * Callers:
 *     SeValidSecurityDescriptor @ 0x1405F1FD0 (SeValidSecurityDescriptor.c)
 * Callees:
 *     Feature_2546989371__private_IsEnabledFallback @ 0x1403F8FE8 (Feature_2546989371__private_IsEnabledFallback.c)
 */

__int64 Feature_2546989371__private_IsEnabledDeviceUsage()
{
  if ( (Feature_2546989371__private_featureState & 0x10) != 0 )
    return Feature_2546989371__private_featureState & 1;
  else
    return Feature_2546989371__private_IsEnabledFallback((unsigned int)Feature_2546989371__private_featureState, 3LL);
}
