/*
 * XREFs of Feature_CompatBuildInVb__private_IsEnabledDeviceUsage @ 0x1403F96BC
 * Callers:
 *     SdbpCheckMatchingFiles @ 0x1407544C0 (SdbpCheckMatchingFiles.c)
 *     SdbpMatchList @ 0x1407548A8 (SdbpMatchList.c)
 *     SdbpReleaseSearchDBContext @ 0x140754BFC (SdbpReleaseSearchDBContext.c)
 *     SdbMakeIndexKeyFromStringEx @ 0x14075A4D0 (SdbMakeIndexKeyFromStringEx.c)
 *     SdbpCreateSearchDBContext @ 0x14075AE40 (SdbpCreateSearchDBContext.c)
 *     SdbpCheckAttribute @ 0x1407B223C (SdbpCheckAttribute.c)
 *     SdbpCheckMatchingDir @ 0x140964370 (SdbpCheckMatchingDir.c)
 *     SdbpCheckMatchingWildcardFiles @ 0x140965080 (SdbpCheckMatchingWildcardFiles.c)
 *     SdbpMatchOne @ 0x140966000 (SdbpMatchOne.c)
 * Callees:
 *     Feature_CompatBuildInVb__private_IsEnabledFallback @ 0x1403F96F4 (Feature_CompatBuildInVb__private_IsEnabledFallback.c)
 */

__int64 Feature_CompatBuildInVb__private_IsEnabledDeviceUsage()
{
  if ( (Feature_CompatBuildInVb__private_featureState & 0x10) != 0 )
    return Feature_CompatBuildInVb__private_featureState & 1;
  else
    return Feature_CompatBuildInVb__private_IsEnabledFallback(
             (unsigned int)Feature_CompatBuildInVb__private_featureState,
             3LL);
}
