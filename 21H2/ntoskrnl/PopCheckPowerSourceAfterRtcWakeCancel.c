/*
 * XREFs of PopCheckPowerSourceAfterRtcWakeCancel @ 0x14038DCA8
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x1409920F4 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KeCancelTimer2 @ 0x14026DD80 (KeCancelTimer2.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 */

LONG PopCheckPowerSourceAfterRtcWakeCancel()
{
  LONG result; // eax
  LARGE_INTEGER Timeout; // [rsp+40h] [rbp+8h] BYREF

  Timeout.QuadPart = 0LL;
  result = KeWaitForSingleObject(&PopCheckPowerSourceAfterRtcWakeCompleted, Executive, 0, 0, &Timeout);
  if ( result )
  {
    if ( KeCancelTimer2((__int64)&PopCheckPowerSourceAfterRtcWakeTimer) )
      return KeSetEvent(&PopCheckPowerSourceAfterRtcWakeCompleted, 0, 0);
    else
      return KeWaitForSingleObject(&PopCheckPowerSourceAfterRtcWakeCompleted, Executive, 0, 0, 0LL);
  }
  return result;
}
