/*
 * XREFs of Feature_3401902395__private_IsEnabledDeviceUsage @ 0x1403F7E54
 * Callers:
 *     PoDestroyReasonContext @ 0x140270E84 (PoDestroyReasonContext.c)
 *     PoStoreRequester @ 0x1402710E8 (PoStoreRequester.c)
 *     PoCaptureReasonContext @ 0x14027184C (PoCaptureReasonContext.c)
 *     PopCaptureReasonContext @ 0x140271AF0 (PopCaptureReasonContext.c)
 *     PopDiagTracePowerRequestCreate @ 0x140670078 (PopDiagTracePowerRequestCreate.c)
 *     PopAvlGetPowerRequestKey @ 0x1406706C4 (PopAvlGetPowerRequestKey.c)
 *     PopCreateUserPowerRequest @ 0x140670C38 (PopCreateUserPowerRequest.c)
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
