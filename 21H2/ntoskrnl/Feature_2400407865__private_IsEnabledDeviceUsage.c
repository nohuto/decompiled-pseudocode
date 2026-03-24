/*
 * XREFs of Feature_2400407865__private_IsEnabledDeviceUsage @ 0x1403F3544
 * Callers:
 *     KiSetFeatureBits @ 0x14099CB6C (KiSetFeatureBits.c)
 * Callees:
 *     Feature_2400407865__private_IsEnabledFallback @ 0x1403F357C (Feature_2400407865__private_IsEnabledFallback.c)
 */

__int64 Feature_2400407865__private_IsEnabledDeviceUsage()
{
  if ( (Feature_2400407865__private_featureState & 0x10) != 0 )
    return Feature_2400407865__private_featureState & 1;
  else
    return Feature_2400407865__private_IsEnabledFallback((unsigned int)Feature_2400407865__private_featureState, 3LL);
}
