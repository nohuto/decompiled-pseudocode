/*
 * XREFs of PopTransitionCheckpointInit @ 0x140A70DC0
 * Callers:
 *     PoInitSystem @ 0x140A3BD5C (PoInitSystem.c)
 * Callees:
 *     <none>
 */

PVOID *PopTransitionCheckpointInit()
{
  PVOID *result; // rax

  qword_140C24E28 = 0LL;
  result = &PopTransitionCheckpoints;
  PopTransitionCheckpointLock = 0LL;
  qword_140C24E08 = (__int64)&PopTransitionCheckpoints;
  PopTransitionCheckpoints = &PopTransitionCheckpoints;
  return result;
}
