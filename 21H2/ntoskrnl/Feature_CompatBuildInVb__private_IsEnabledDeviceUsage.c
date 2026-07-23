/*
 * XREFs of Feature_CompatBuildInVb__private_IsEnabledDeviceUsage @ 0x1403F989C
 * Callers:
 *     SdbpCheckMatchingFiles @ 0x140754680 (SdbpCheckMatchingFiles.c)
 *     SdbpMatchList @ 0x140754A68 (SdbpMatchList.c)
 *     SdbpReleaseSearchDBContext @ 0x140754DBC (SdbpReleaseSearchDBContext.c)
 *     SdbMakeIndexKeyFromStringEx @ 0x14075A690 (SdbMakeIndexKeyFromStringEx.c)
 *     SdbpCreateSearchDBContext @ 0x14075B000 (SdbpCreateSearchDBContext.c)
 *     SdbpCheckAttribute @ 0x1407B23DC (SdbpCheckAttribute.c)
 *     SdbpCheckMatchingDir @ 0x140964550 (SdbpCheckMatchingDir.c)
 *     SdbpCheckMatchingWildcardFiles @ 0x140965260 (SdbpCheckMatchingWildcardFiles.c)
 *     SdbpMatchOne @ 0x1409661E0 (SdbpMatchOne.c)
 * Callees:
 *     Feature_CompatBuildInVb__private_IsEnabledFallback @ 0x1403F98D4 (Feature_CompatBuildInVb__private_IsEnabledFallback.c)
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
