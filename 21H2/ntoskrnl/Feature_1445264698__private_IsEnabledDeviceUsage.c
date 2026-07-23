/*
 * XREFs of Feature_1445264698__private_IsEnabledDeviceUsage @ 0x1403F9524
 * Callers:
 *     EtwpSetProviderTraitsCommon @ 0x14063804C (EtwpSetProviderTraitsCommon.c)
 * Callees:
 *     Feature_1445264698__private_IsEnabledFallback @ 0x1403F955C (Feature_1445264698__private_IsEnabledFallback.c)
 */

__int64 Feature_1445264698__private_IsEnabledDeviceUsage()
{
  if ( (Feature_1445264698__private_featureState & 0x10) != 0 )
    return Feature_1445264698__private_featureState & 1;
  else
    return Feature_1445264698__private_IsEnabledFallback((unsigned int)Feature_1445264698__private_featureState, 3LL);
}
