/*
 * XREFs of _RtlpFcStartSubscriptionManager@4 @ 0x4B2AE8E5
 * Callers:
 *     _RtlpFcEnsureSubscriptionManagerStarted@4 @ 0x4B2B222D (_RtlpFcEnsureSubscriptionManagerStarted@4.c)
 * Callees:
 *     _RtlQueryWnfStateData@24 @ 0x4B2AE840 (_RtlQueryWnfStateData@24.c)
 *     _RtlpSubscribeWnfStateChangeNotificationInternal@40 @ 0x4B2B068F (_RtlpSubscribeWnfStateChangeNotificationInternal@40.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 */

NTSTATUS RtlpFcStartSubscriptionManager()
{
  NTSTATUS result; // eax
  ULONG ChangeStamp; // [esp+8h] [ebp-18h] BYREF
  _WNF_TYPE_ID TypeId; // [esp+Ch] [ebp-14h] BYREF

  TypeId = *(_WNF_TYPE_ID *)RtlpFcWnfTypeId;
  result = RtlQueryWnfStateData(
             &ChangeStamp,
             WNF_CMFC_FEATURE_CONFIGURATION_CHANGED,
             (PWNF_USER_CALLBACK)RtlpFcNoopCallback,
             0,
             &TypeId);
  if ( result >= 0 )
    return RtlpSubscribeWnfStateChangeNotificationInternal(
             RtlpFcWnfCallback,
             &RtlpFcProcessManager,
             0,
             0,
             4,
             17,
             WNF_CMFC_FEATURE_CONFIGURATION_CHANGED.Data[0],
             WNF_CMFC_FEATURE_CONFIGURATION_CHANGED.Data[1]);
  return result;
}
