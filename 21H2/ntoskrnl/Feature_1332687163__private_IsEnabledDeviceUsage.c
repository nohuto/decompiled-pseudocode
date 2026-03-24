/*
 * XREFs of Feature_1332687163__private_IsEnabledDeviceUsage @ 0x1403F860C
 * Callers:
 *     RtlQueryAtomInAtomTable @ 0x14061B790 (RtlQueryAtomInAtomTable.c)
 * Callees:
 *     Feature_1332687163__private_IsEnabledFallback @ 0x1403F8644 (Feature_1332687163__private_IsEnabledFallback.c)
 */

__int64 Feature_1332687163__private_IsEnabledDeviceUsage()
{
  if ( (Feature_1332687163__private_featureState & 0x10) != 0 )
    return Feature_1332687163__private_featureState & 1;
  else
    return Feature_1332687163__private_IsEnabledFallback((unsigned int)Feature_1332687163__private_featureState, 3LL);
}
