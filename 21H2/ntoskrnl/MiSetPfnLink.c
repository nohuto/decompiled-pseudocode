/*
 * XREFs of MiSetPfnLink @ 0x140313D14
 * Callers:
 *     MiPfPrepareSequentialReadList @ 0x1407BCB30 (MiPfPrepareSequentialReadList.c)
 *     MiPfPrepareReadList @ 0x1407BD420 (MiPfPrepareReadList.c)
 *     MiAllocateTopLevelPage @ 0x1407F1AF8 (MiAllocateTopLevelPage.c)
 *     MiInitializeDynamicBitmap @ 0x14082B1B4 (MiInitializeDynamicBitmap.c)
 *     MiCaptureSparsePages @ 0x14097E614 (MiCaptureSparsePages.c)
 * Callees:
 *     <none>
 */

void __fastcall MiSetPfnLink(_QWORD *a1, __int64 a2)
{
  *a1 = a2;
}
