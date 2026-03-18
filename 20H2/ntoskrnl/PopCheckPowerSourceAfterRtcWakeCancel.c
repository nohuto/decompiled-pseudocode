/*
 * XREFs of PopCheckPowerSourceAfterRtcWakeCancel @ 0x14038D438
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x1409940F4 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KeSetEvent @ 0x140219280 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x14021B560 (KeWaitForSingleObject.c)
 *     KeCancelTimer2 @ 0x14033C240 (KeCancelTimer2.c)
 */

LONG PopCheckPowerSourceAfterRtcWakeCancel()
{
  LONG result; // eax
  __int64 v1; // r8
  _DWORD *v2; // r9
  LARGE_INTEGER Timeout; // [rsp+40h] [rbp+8h] BYREF

  Timeout.QuadPart = 0LL;
  result = KeWaitForSingleObject(&PopCheckPowerSourceAfterRtcWakeCompleted, Executive, 0, 0, &Timeout);
  if ( result )
  {
    if ( KeCancelTimer2((__int64)&PopCheckPowerSourceAfterRtcWakeTimer, 0LL, v1, v2) )
      return KeSetEvent(&PopCheckPowerSourceAfterRtcWakeCompleted, 0, 0);
    else
      return KeWaitForSingleObject(&PopCheckPowerSourceAfterRtcWakeCompleted, Executive, 0, 0, 0LL);
  }
  return result;
}
