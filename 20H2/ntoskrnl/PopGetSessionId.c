/*
 * XREFs of PopGetSessionId @ 0x14071C0A4
 * Callers:
 *     PopPowerSourceChangeCallback @ 0x1403C9A40 (PopPowerSourceChangeCallback.c)
 * Callees:
 *     PsGetProcessSessionIdEx @ 0x1403614B0 (PsGetProcessSessionIdEx.c)
 */

__int64 PopGetSessionId()
{
  return PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
}
