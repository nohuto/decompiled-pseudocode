/*
 * XREFs of Feature_1815603512__private_IsEnabledDeviceUsage @ 0x1403F9170
 * Callers:
 *     EtwpEventWriteFull @ 0x14027FA90 (EtwpEventWriteFull.c)
 *     EtwpWriteUserEvent @ 0x140690950 (EtwpWriteUserEvent.c)
 * Callees:
 *     Feature_1815603512__private_IsEnabledFallback @ 0x1403F91A8 (Feature_1815603512__private_IsEnabledFallback.c)
 */

__int64 Feature_1815603512__private_IsEnabledDeviceUsage()
{
  if ( (Feature_1815603512__private_featureState & 0x10) != 0 )
    return Feature_1815603512__private_featureState & 1;
  else
    return Feature_1815603512__private_IsEnabledFallback((unsigned int)Feature_1815603512__private_featureState, 3LL);
}
