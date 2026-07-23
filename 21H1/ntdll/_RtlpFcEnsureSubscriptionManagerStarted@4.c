/*
 * XREFs of _RtlpFcEnsureSubscriptionManagerStarted@4 @ 0x4B2B222D
 * Callers:
 *     _RtlRegisterFeatureConfigurationChangeNotification@16 @ 0x4B2B23D0 (_RtlRegisterFeatureConfigurationChangeNotification@16.c)
 * Callees:
 *     _RtlpFcStartSubscriptionManager@4 @ 0x4B2AE8E5 (_RtlpFcStartSubscriptionManager@4.c)
 *     _RtlRunOnceComplete@12 @ 0x4B2B1140 (_RtlRunOnceComplete@12.c)
 *     _RtlRunOnceBeginInitialize@12 @ 0x4B2B2320 (_RtlRunOnceBeginInitialize@12.c)
 */

NTSTATUS RtlpFcEnsureSubscriptionManagerStarted()
{
  NTSTATUS started; // esi
  ULONG v1; // eax

  started = RtlRunOnceBeginInitialize(&stru_4B3A4768, 0, 0);
  if ( started )
  {
    started = RtlpFcStartSubscriptionManager();
    if ( started < 0 )
      v1 = 4;
    else
      v1 = 0;
    RtlRunOnceComplete(&stru_4B3A4768, v1, 0);
  }
  return started;
}
