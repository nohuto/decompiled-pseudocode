/*
 * XREFs of _RtlGetLastWin32Error@0 @ 0x4B3630B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LONG RtlGetLastWin32Error(void)
{
  return NtCurrentTeb()->LastErrorValue;
}
