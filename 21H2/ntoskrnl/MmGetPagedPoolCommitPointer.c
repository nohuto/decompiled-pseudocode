/*
 * XREFs of MmGetPagedPoolCommitPointer @ 0x1402522A8
 * Callers:
 *     KdInitSystem @ 0x1409B6160 (KdInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 *MmGetPagedPoolCommitPointer()
{
  return &qword_140C4EF68;
}
