/*
 * XREFs of Feature_1694225722__private_IsEnabledDeviceUsage @ 0x1403F93D4
 * Callers:
 *     EtwpTraceThreadRundown @ 0x1403AE970 (EtwpTraceThreadRundown.c)
 *     EtwTraceThread @ 0x14068FC44 (EtwTraceThread.c)
 * Callees:
 *     Feature_1694225722__private_IsEnabledFallback @ 0x1403F940C (Feature_1694225722__private_IsEnabledFallback.c)
 */

__int64 Feature_1694225722__private_IsEnabledDeviceUsage()
{
  if ( (Feature_1694225722__private_featureState & 0x10) != 0 )
    return Feature_1694225722__private_featureState & 1;
  else
    return Feature_1694225722__private_IsEnabledFallback((unsigned int)Feature_1694225722__private_featureState, 3LL);
}
