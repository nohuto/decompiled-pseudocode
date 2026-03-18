/*
 * XREFs of MmGetPagedPoolCommitPointer @ 0x140331D98
 * Callers:
 *     KdInitSystem @ 0x1409B8160 (KdInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 *MmGetPagedPoolCommitPointer()
{
  return &qword_140C4EDA8;
}
