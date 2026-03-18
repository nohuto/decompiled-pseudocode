/*
 * XREFs of PopCoalescingSetActiveState @ 0x140569784
 * Callers:
 *     PopCoalescingCallbackWorker @ 0x1408E31E0 (PopCoalescingCallbackWorker.c)
 * Callees:
 *     KeCancelTimer @ 0x1402C9300 (KeCancelTimer.c)
 *     PopCoalescingSetTimer @ 0x140569824 (PopCoalescingSetTimer.c)
 *     PopCheckResiliencyScenarios @ 0x1406A723C (PopCheckResiliencyScenarios.c)
 *     PopUpdateDiskIdleTimeoutSetting @ 0x14078229C (PopUpdateDiskIdleTimeoutSetting.c)
 *     PopDiagTraceIoCoalescingOff @ 0x1408E751C (PopDiagTraceIoCoalescingOff.c)
 *     PopDiagTraceIoCoalescingOn @ 0x1408E754C (PopDiagTraceIoCoalescingOn.c)
 */

__int64 __fastcall PopCoalescingSetActiveState(char a1)
{
  unsigned int v1; // ebx
  int v3; // edx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8

  v1 = 0;
  if ( a1 )
  {
    v3 = PopDppeCoalescingSpindownTimeout;
    if ( PopCoalescingEnforced )
      v3 = PopEnforcedCoalescingSpindownTimeout;
    PopCoalescingState |= 1u;
    PopCoalescingLastFlushTime = MEMORY[0xFFFFF78000000008];
    PopCurrentCoalescingSpindownTimeout = v3;
    PopCoalescingSetTimer();
  }
  else
  {
    PopCoalescingState &= ~1u;
    PopCurrentCoalescingSpindownTimeout = 0;
    KeCancelTimer(&PopCoalescingTimer);
    PopCheckResiliencyScenarios(v5, v4);
  }
  PopUpdateDiskIdleTimeoutSetting();
  if ( !a1 )
    return PopDiagTraceIoCoalescingOff();
  LOBYTE(v1) = PopCoalescingEnforced == 0;
  return PopDiagTraceIoCoalescingOn(v7, v6, v8, v1);
}
