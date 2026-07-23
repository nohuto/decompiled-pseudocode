/*
 * XREFs of Feature_1664289083__private_IsEnabledDeviceUsage @ 0x1403F96F8
 * Callers:
 *     NtPssCaptureVaSpaceBulk @ 0x14095C110 (NtPssCaptureVaSpaceBulk.c)
 * Callees:
 *     Feature_1664289083__private_IsEnabledFallback @ 0x1403F9730 (Feature_1664289083__private_IsEnabledFallback.c)
 */

__int64 Feature_1664289083__private_IsEnabledDeviceUsage()
{
  if ( (Feature_1664289083__private_featureState & 0x10) != 0 )
    return Feature_1664289083__private_featureState & 1;
  else
    return Feature_1664289083__private_IsEnabledFallback((unsigned int)Feature_1664289083__private_featureState, 3LL);
}
