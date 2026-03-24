/*
 * XREFs of Feature_1113055545__private_IsEnabledDeviceUsage @ 0x1403F1CD0
 * Callers:
 *     IopAllocateAndPopulateWriteIrp @ 0x1403F1D24 (IopAllocateAndPopulateWriteIrp.c)
 * Callees:
 *     Feature_1113055545__private_IsEnabledFallback @ 0x1403F1D08 (Feature_1113055545__private_IsEnabledFallback.c)
 */

__int64 Feature_1113055545__private_IsEnabledDeviceUsage()
{
  if ( (Feature_1113055545__private_featureState & 0x10) != 0 )
    return Feature_1113055545__private_featureState & 1;
  else
    return Feature_1113055545__private_IsEnabledFallback((unsigned int)Feature_1113055545__private_featureState, 3LL);
}
