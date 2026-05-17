/*
 * XREFs of Feature_2482235707__private_IsEnabledDeviceUsage @ 0x18009CD18
 * Callers:
 *     RtlQueryAtomInAtomTable @ 0x180059250 (RtlQueryAtomInAtomTable.c)
 * Callees:
 *     <none>
 */

__int64 Feature_2482235707__private_IsEnabledDeviceUsage()
{
  __int64 v1; // [rsp+8h] [rbp+8h]

  LODWORD(v1) = Feature_2482235707__private_featureState;
  if ( (Feature_2482235707__private_featureState & 0x10) != 0 )
    return Feature_2482235707__private_featureState & 1;
  else
    return Feature_2482235707__private_IsEnabledFallback(v1, 3LL);
}
