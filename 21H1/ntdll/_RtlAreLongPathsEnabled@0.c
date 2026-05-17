/*
 * XREFs of _RtlAreLongPathsEnabled@0 @ 0x4B2E4D20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __stdcall RtlAreLongPathsEnabled()
{
  return NtCurrentPeb()->BitField >> 7;
}
