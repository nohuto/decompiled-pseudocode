/*
 * XREFs of RtlGetLastNtStatus @ 0x18007C580
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 RtlGetLastNtStatus()
{
  return NtCurrentTeb()->LastStatusValue;
}
