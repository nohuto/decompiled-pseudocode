/*
 * XREFs of _RtlpFcStartSubscriptionManager@4 @ 0x4B2AE8E5
 * Callers:
 *     _RtlpFcEnsureSubscriptionManagerStarted@4 @ 0x4B2B222D (_RtlpFcEnsureSubscriptionManagerStarted@4.c)
 * Callees:
 *     _RtlQueryWnfStateData@24 @ 0x4B2AE840 (_RtlQueryWnfStateData@24.c)
 *     _RtlpSubscribeWnfStateChangeNotificationInternal@40 @ 0x4B2B068F (_RtlpSubscribeWnfStateChangeNotificationInternal@40.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 */

int RtlpFcStartSubscriptionManager()
{
  int result; // eax
  int v1; // [esp+8h] [ebp-18h] BYREF
  _DWORD v2[4]; // [esp+Ch] [ebp-14h] BYREF

  v2[0] = RtlpFcWnfTypeId[0];
  v2[1] = RtlpFcWnfTypeId[1];
  v2[2] = RtlpFcWnfTypeId[2];
  v2[3] = RtlpFcWnfTypeId[3];
  result = RtlQueryWnfStateData(
             &v1,
             WNF_CMFC_FEATURE_CONFIGURATION_CHANGED,
             41943854,
             (int (__thiscall *)(_DWORD, int, int, int, int, int, _DWORD *, int))RtlpFcNoopCallback,
             0,
             (int)v2);
  if ( result >= 0 )
    return RtlpSubscribeWnfStateChangeNotificationInternal(
             RtlpFcWnfCallback,
             &RtlpFcProcessManager,
             0,
             0,
             4,
             17,
             WNF_CMFC_FEATURE_CONFIGURATION_CHANGED,
             41943854);
  return result;
}
