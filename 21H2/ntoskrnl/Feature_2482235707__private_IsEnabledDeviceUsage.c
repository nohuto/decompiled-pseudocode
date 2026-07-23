/*
 * XREFs of Feature_2482235707__private_IsEnabledDeviceUsage @ 0x1403F863C
 * Callers:
 *     RtlQueryAtomInAtomTable @ 0x1406853F0 (RtlQueryAtomInAtomTable.c)
 * Callees:
 *     Feature_2482235707__private_IsEnabledFallback @ 0x1403F8674 (Feature_2482235707__private_IsEnabledFallback.c)
 */

__int64 Feature_2482235707__private_IsEnabledDeviceUsage()
{
  if ( (Feature_2482235707__private_featureState & 0x10) != 0 )
    return Feature_2482235707__private_featureState & 1;
  else
    return Feature_2482235707__private_IsEnabledFallback((unsigned int)Feature_2482235707__private_featureState, 3LL);
}
