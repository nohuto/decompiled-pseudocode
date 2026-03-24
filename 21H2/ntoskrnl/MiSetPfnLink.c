/*
 * XREFs of MiSetPfnLink @ 0x14031818C
 * Callers:
 *     MiAllocateTopLevelPage @ 0x1406D0824 (MiAllocateTopLevelPage.c)
 *     MiPfPrepareSequentialReadList @ 0x1406EDDD0 (MiPfPrepareSequentialReadList.c)
 *     MiPfPrepareReadList @ 0x1406EF910 (MiPfPrepareReadList.c)
 *     MiInitializeDynamicBitmap @ 0x1407868DC (MiInitializeDynamicBitmap.c)
 *     MiMapNewSession @ 0x14078708C (MiMapNewSession.c)
 *     MiCaptureSparsePages @ 0x1408D8564 (MiCaptureSparsePages.c)
 * Callees:
 *     <none>
 */

void __fastcall MiSetPfnLink(_QWORD *a1, __int64 a2)
{
  *a1 = a2;
}
