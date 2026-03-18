/*
 * XREFs of PopGetSessionId @ 0x1406F08C8
 * Callers:
 *     PopPowerSourceChangeCallback @ 0x1403A6260 (PopPowerSourceChangeCallback.c)
 * Callees:
 *     PsGetProcessSessionIdEx @ 0x140347CD0 (PsGetProcessSessionIdEx.c)
 */

__int64 PopGetSessionId()
{
  return PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
}
