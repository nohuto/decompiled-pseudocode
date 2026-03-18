/*
 * XREFs of MiSetPfnLink @ 0x14027AFCC
 * Callers:
 *     MiPfPrepareSequentialReadList @ 0x14062E990 (MiPfPrepareSequentialReadList.c)
 *     MiPfPrepareReadList @ 0x14062F350 (MiPfPrepareReadList.c)
 *     MiAllocateTopLevelPage @ 0x1406F10F0 (MiAllocateTopLevelPage.c)
 *     MiInitializeDynamicBitmap @ 0x1407720EC (MiInitializeDynamicBitmap.c)
 *     MiMapNewSession @ 0x14077289C (MiMapNewSession.c)
 *     MiCaptureSparsePages @ 0x1408D3C14 (MiCaptureSparsePages.c)
 * Callees:
 *     <none>
 */

void __fastcall MiSetPfnLink(_QWORD *a1, __int64 a2)
{
  *a1 = a2;
}
