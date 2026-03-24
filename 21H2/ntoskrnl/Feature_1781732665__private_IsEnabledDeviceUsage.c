/*
 * XREFs of Feature_1781732665__private_IsEnabledDeviceUsage @ 0x1403F0908
 * Callers:
 *     FsRtlAddBaseMcbEntryEx @ 0x14029D580 (FsRtlAddBaseMcbEntryEx.c)
 * Callees:
 *     Feature_1781732665__private_IsEnabledFallback @ 0x1403F0940 (Feature_1781732665__private_IsEnabledFallback.c)
 */

__int64 Feature_1781732665__private_IsEnabledDeviceUsage()
{
  if ( (Feature_1781732665__private_featureState & 0x10) != 0 )
    return Feature_1781732665__private_featureState & 1;
  else
    return Feature_1781732665__private_IsEnabledFallback((unsigned int)Feature_1781732665__private_featureState, 3LL);
}
