/*
 * XREFs of MiSetPfnLink @ 0x140322EDC
 * Callers:
 *     MiAllocateTopLevelPage @ 0x1406A7B04 (MiAllocateTopLevelPage.c)
 *     MiPfPrepareSequentialReadList @ 0x1407051B0 (MiPfPrepareSequentialReadList.c)
 *     MiPfPrepareReadList @ 0x140706CF0 (MiPfPrepareReadList.c)
 *     MiInitializeDynamicBitmap @ 0x140786A9C (MiInitializeDynamicBitmap.c)
 *     MiMapNewSession @ 0x14078724C (MiMapNewSession.c)
 *     MiCaptureSparsePages @ 0x1408D86C4 (MiCaptureSparsePages.c)
 * Callees:
 *     <none>
 */

void __fastcall MiSetPfnLink(_QWORD *a1, __int64 a2)
{
  *a1 = a2;
}
