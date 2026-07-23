/*
 * XREFs of _RtlGetLastNtStatus@0 @ 0x4B2ECAA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS RtlGetLastNtStatus(void)
{
  return NtCurrentTeb()->LastStatusValue;
}
