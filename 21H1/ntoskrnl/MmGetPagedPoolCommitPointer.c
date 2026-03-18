/*
 * XREFs of MmGetPagedPoolCommitPointer @ 0x1403234C8
 * Callers:
 *     KdInitSystem @ 0x1409B2160 (KdInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 *MmGetPagedPoolCommitPointer()
{
  return &qword_140C4EE68;
}
