/*
 * XREFs of MiSetPfnLink @ 0x1402301EC
 * Callers:
 *     MiPfPrepareSequentialReadList @ 0x1406253C0 (MiPfPrepareSequentialReadList.c)
 *     MiPfPrepareReadList @ 0x140680D90 (MiPfPrepareReadList.c)
 *     MiAllocateTopLevelPage @ 0x1406EDC28 (MiAllocateTopLevelPage.c)
 *     MiInitializeDynamicBitmap @ 0x140782AFC (MiInitializeDynamicBitmap.c)
 *     MiMapNewSession @ 0x1407832AC (MiMapNewSession.c)
 *     MiCaptureSparsePages @ 0x1408DADA4 (MiCaptureSparsePages.c)
 * Callees:
 *     <none>
 */

void __fastcall MiSetPfnLink(_QWORD *a1, __int64 a2)
{
  *a1 = a2;
}
