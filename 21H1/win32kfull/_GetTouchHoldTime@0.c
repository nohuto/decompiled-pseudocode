/*
 * XREFs of _GetTouchHoldTime@0 @ 0x16FC0B
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall GetTouchHoldTime()
{
  return GetTouchTimeFromCPLValue(1000, 1000, 8, 0);
}
