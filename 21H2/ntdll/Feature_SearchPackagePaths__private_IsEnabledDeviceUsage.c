/*
 * XREFs of Feature_SearchPackagePaths__private_IsEnabledDeviceUsage @ 0x18009BC90
 * Callers:
 *     RtlpComputeExePath @ 0x18006D490 (RtlpComputeExePath.c)
 *     RtlpComputeSearchPath @ 0x18006D520 (RtlpComputeSearchPath.c)
 *     RtlpComputeDllPath @ 0x18006D700 (RtlpComputeDllPath.c)
 * Callees:
 *     <none>
 */

__int64 Feature_SearchPackagePaths__private_IsEnabledDeviceUsage()
{
  __int64 v1; // [rsp+8h] [rbp+8h]

  LODWORD(v1) = Feature_SearchPackagePaths__private_featureState;
  if ( (Feature_SearchPackagePaths__private_featureState & 0x10) != 0 )
    return Feature_SearchPackagePaths__private_featureState & 1;
  else
    return Feature_SearchPackagePaths__private_IsEnabledFallback(v1, 3LL);
}
