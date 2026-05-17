/*
 * XREFs of RtlpFcStartSubscriptionManager @ 0x180044EBC
 * Callers:
 *     RtlpFcEnsureSubscriptionManagerStarted @ 0x180009518 (RtlpFcEnsureSubscriptionManagerStarted.c)
 * Callees:
 *     RtlpSubscribeWnfStateChangeNotificationInternal @ 0x1800424EC (RtlpSubscribeWnfStateChangeNotificationInternal.c)
 *     RtlQueryWnfStateData @ 0x180044F70 (RtlQueryWnfStateData.c)
 *     __security_check_cookie @ 0x18008C340 (__security_check_cookie.c)
 */

__int64 RtlpFcStartSubscriptionManager()
{
  __int64 result; // rax
  int v1; // [rsp+50h] [rbp-28h] BYREF
  __int128 v2; // [rsp+58h] [rbp-20h] BYREF

  v2 = RtlpFcWnfTypeId;
  result = RtlQueryWnfStateData(
             (unsigned int)&v1,
             WNF_CMFC_FEATURE_CONFIGURATION_CHANGED,
             (unsigned int)WinSqmCheckEscalationSetString,
             0,
             (__int64)&v2);
  if ( (int)result >= 0 )
    return RtlpSubscribeWnfStateChangeNotificationInternal(
             &qword_18016AC08,
             WNF_CMFC_FEATURE_CONFIGURATION_CHANGED,
             v1,
             (int)RtlpFcWnfCallback,
             (__int64)&RtlpFcProcessManager,
             0LL,
             0,
             4,
             17);
  return result;
}
