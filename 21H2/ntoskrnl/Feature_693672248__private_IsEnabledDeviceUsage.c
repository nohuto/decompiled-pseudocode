/*
 * XREFs of Feature_693672248__private_IsEnabledDeviceUsage @ 0x1403F8B50
 * Callers:
 *     SepCopyTokenAccessInformation @ 0x1406CB4E8 (SepCopyTokenAccessInformation.c)
 * Callees:
 *     Feature_693672248__private_IsEnabledFallback @ 0x1403F8B88 (Feature_693672248__private_IsEnabledFallback.c)
 */

__int64 Feature_693672248__private_IsEnabledDeviceUsage()
{
  if ( (Feature_693672248__private_featureState & 0x10) != 0 )
    return Feature_693672248__private_featureState & 1;
  else
    return Feature_693672248__private_IsEnabledFallback((unsigned int)Feature_693672248__private_featureState, 3LL);
}
