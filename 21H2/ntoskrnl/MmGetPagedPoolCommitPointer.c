/*
 * XREFs of MmGetPagedPoolCommitPointer @ 0x14025E93C
 * Callers:
 *     KdInitSystem @ 0x140A70470 (KdInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 *MmGetPagedPoolCommitPointer()
{
  return &qword_140C534A8;
}
