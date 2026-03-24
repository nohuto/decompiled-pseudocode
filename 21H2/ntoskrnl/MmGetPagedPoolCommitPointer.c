/*
 * XREFs of MmGetPagedPoolCommitPointer @ 0x1402D4038
 * Callers:
 *     KdInitSystem @ 0x1409B5160 (KdInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 *MmGetPagedPoolCommitPointer()
{
  return &qword_140C4EF28;
}
