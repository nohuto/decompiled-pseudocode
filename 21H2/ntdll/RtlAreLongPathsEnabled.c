/*
 * XREFs of RtlAreLongPathsEnabled @ 0x1800762E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char RtlAreLongPathsEnabled()
{
  return NtCurrentPeb()->BitField >> 7;
}
