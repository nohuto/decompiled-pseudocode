/*
 * XREFs of _RtlGetNtGlobalFlags@0 @ 0x4B307050
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG RtlGetNtGlobalFlags(void)
{
  return NtCurrentPeb()->NtGlobalFlag;
}
