/*
 * XREFs of RtlpFcEnsureSubscriptionManagerStarted @ 0x180009518
 * Callers:
 *     RtlRegisterFeatureConfigurationChangeNotification @ 0x1800093B0 (RtlRegisterFeatureConfigurationChangeNotification.c)
 * Callees:
 *     RtlRunOnceBeginInitialize @ 0x18000A530 (RtlRunOnceBeginInitialize.c)
 *     RtlRunOnceComplete @ 0x180043AF0 (RtlRunOnceComplete.c)
 *     RtlpFcStartSubscriptionManager @ 0x180044EBC (RtlpFcStartSubscriptionManager.c)
 */

__int64 RtlpFcEnsureSubscriptionManagerStarted()
{
  unsigned int v0; // ebx
  int started; // eax
  __int64 v3; // rdx

  v0 = RtlRunOnceBeginInitialize(&qword_18016AC00, 0LL, 0LL);
  if ( v0 )
  {
    started = RtlpFcStartSubscriptionManager();
    v3 = 4LL;
    v0 = started;
    if ( started >= 0 )
      v3 = 0LL;
    RtlRunOnceComplete(&qword_18016AC00, v3, 0LL);
  }
  return v0;
}
