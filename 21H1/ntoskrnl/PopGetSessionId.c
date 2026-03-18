/*
 * XREFs of PopGetSessionId @ 0x1406CF5C8
 * Callers:
 *     PopPowerSourceChangeCallback @ 0x1403A9F30 (PopPowerSourceChangeCallback.c)
 * Callees:
 *     PsGetProcessSessionIdEx @ 0x14030B480 (PsGetProcessSessionIdEx.c)
 */

__int64 PopGetSessionId()
{
  return PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
}
