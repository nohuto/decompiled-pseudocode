/*
 * XREFs of HvlGetQpcBias @ 0x140365410
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 HvlGetQpcBias()
{
  return *((_QWORD *)HvlpReferenceTscPage + 3);
}
