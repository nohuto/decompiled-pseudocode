/*
 * XREFs of RtlAreLongPathsEnabled @ 0x1800751B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char RtlAreLongPathsEnabled()
{
  return NtCurrentPeb()->BitField >> 7;
}
