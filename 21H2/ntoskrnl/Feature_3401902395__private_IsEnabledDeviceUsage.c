/*
 * XREFs of Feature_3401902395__private_IsEnabledDeviceUsage @ 0x1403F7E54
 * Callers:
 *     PoDestroyReasonContext @ 0x140282BD8 (PoDestroyReasonContext.c)
 *     PoStoreRequester @ 0x140282E3C (PoStoreRequester.c)
 *     PoCaptureReasonContext @ 0x14028363C (PoCaptureReasonContext.c)
 *     PopCaptureReasonContext @ 0x1402838E0 (PopCaptureReasonContext.c)
 *     PopAvlGetPowerRequestKey @ 0x14062BAEC (PopAvlGetPowerRequestKey.c)
 *     PopDiagTracePowerRequestCreate @ 0x14067C538 (PopDiagTracePowerRequestCreate.c)
 *     PopCreateUserPowerRequest @ 0x14067CD9C (PopCreateUserPowerRequest.c)
 * Callees:
 *     Feature_3401902395__private_IsEnabledFallback @ 0x1403F7E8C (Feature_3401902395__private_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_3401902395__private_IsEnabledDeviceUsage()
{
  if ( (Feature_3401902395__private_featureState & 0x10) != 0 )
    return Feature_3401902395__private_featureState & 1;
  else
    return Feature_3401902395__private_IsEnabledFallback((unsigned int)Feature_3401902395__private_featureState, 3LL);
}
