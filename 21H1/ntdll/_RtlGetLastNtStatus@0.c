/*
 * XREFs of _RtlGetLastNtStatus@0 @ 0x4B2ECAA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __stdcall RtlGetLastNtStatus()
{
  return NtCurrentTeb()->LastStatusValue;
}
