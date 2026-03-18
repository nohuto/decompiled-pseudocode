/*
 * XREFs of ProcessDelayedSdc @ 0x1C0158390
 * Callers:
 *     PowerOnGdi @ 0x1C0158290 (PowerOnGdi.c)
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
__int64 ProcessDelayedSdc()
{
  __int64 result; // rax

  if ( gulDelayedSwitchAction && !gProtocolType )
    xxxUserSetDisplayConfig(0LL, 0LL, gulDelayedSwitchAction, 0LL);
  result = gulDelayedSwitchAction;
  gulDelayedSwitchAction = 0;
  return result;
}
