/*
 * XREFs of RtlAreLongPathsEnabled @ 0x1800752B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char RtlAreLongPathsEnabled()
{
  return NtCurrentPeb()->BitField >> 7;
}
