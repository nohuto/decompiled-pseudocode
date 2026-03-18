/*
 * XREFs of PoFxSendSystemLatencyUpdate @ 0x140224C34
 * Callers:
 *     PoNotifyVSyncChange @ 0x140224940 (PoNotifyVSyncChange.c)
 *     PopDeepSleepEvaluateCallback @ 0x1405D77A0 (PopDeepSleepEvaluateCallback.c)
 *     PopCheckResiliencyScenarios @ 0x1407EED48 (PopCheckResiliencyScenarios.c)
 *     PopEnforceResiliencyScenarios @ 0x1408083DC (PopEnforceResiliencyScenarios.c)
 *     PopWnfFullscreenVideoCallback @ 0x14098CB20 (PopWnfFullscreenVideoCallback.c)
 *     PoInitSystem @ 0x140B026CC (PoInitSystem.c)
 * Callees:
 *     PopFxGetLatencyLimitWithoutResiliency @ 0x140224CC0 (PopFxGetLatencyLimitWithoutResiliency.c)
 *     PpmIdleUsingStateSelection @ 0x140224CF8 (PpmIdleUsingStateSelection.c)
 *     PoFxSystemLatencyNotify @ 0x140224D54 (PoFxSystemLatencyNotify.c)
 *     PopDiagTraceSystemLatencyUpdate @ 0x140224DF0 (PopDiagTraceSystemLatencyUpdate.c)
 *     PpmGetExitSamplingCountdown @ 0x140224E64 (PpmGetExitSamplingCountdown.c)
 *     KeFlushProcessWriteBuffers @ 0x1402F374C (KeFlushProcessWriteBuffers.c)
 */

__int64 PoFxSendSystemLatencyUpdate()
{
  unsigned int LatencyLimitWithoutResiliency; // ebx
  __int64 result; // rax
  char v2; // di
  char v3; // si
  __int64 v4; // rcx
  signed __int32 v5[10]; // [rsp+0h] [rbp-28h] BYREF

  if ( byte_140C23414 && (!PopDeepSleepIsEnabled && PopPdcIdleResiliency || PopDeepSleepIsEngaged) )
    LatencyLimitWithoutResiliency = dword_140D053E4;
  else
    LatencyLimitWithoutResiliency = PopFxGetLatencyLimitWithoutResiliency();
  result = (unsigned int)PopFxSystemLatencyLimit;
  if ( LatencyLimitWithoutResiliency != PopFxSystemLatencyLimit )
  {
    if ( (unsigned int)PpmGetExitSamplingCountdown() )
    {
      v2 = 1;
      if ( LatencyLimitWithoutResiliency > PopFxSystemLatencyLimit )
      {
        PopFxSystemLatencyLimit = LatencyLimitWithoutResiliency;
        _InterlockedOr(v5, 0);
      }
    }
    else
    {
      v2 = 0;
    }
    PopDiagTraceSystemLatencyUpdate(0LL, LatencyLimitWithoutResiliency);
    PopFxSystemLatencyHint = LatencyLimitWithoutResiliency;
    v3 = PoFxSystemLatencyNotify(LatencyLimitWithoutResiliency);
    result = PpmIdleUsingStateSelection();
    if ( (_BYTE)result || v3 )
    {
      if ( v2 )
      {
        LOBYTE(v4) = 1;
        result = KeFlushProcessWriteBuffers(v4);
      }
    }
    PopFxSystemLatencyLimit = LatencyLimitWithoutResiliency;
  }
  return result;
}
