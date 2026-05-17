/*
 * XREFs of _RtlGetNtGlobalFlags@0 @ 0x4B307050
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __stdcall RtlGetNtGlobalFlags()
{
  return NtCurrentPeb()->NtGlobalFlag;
}
