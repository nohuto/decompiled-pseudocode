/*
 * XREFs of MiFreeVadEventBitmapCharges @ 0x140610724
 * Callers:
 *     MiReleaseVadEventBlocks @ 0x140704770 (MiReleaseVadEventBlocks.c)
 *     MiFreeVadEventBitmap @ 0x1408C88B8 (MiFreeVadEventBitmap.c)
 * Callees:
 *     PsReturnProcessNonPagedPoolQuota @ 0x140323130 (PsReturnProcessNonPagedPoolQuota.c)
 */

__int64 __fastcall MiFreeVadEventBitmapCharges(struct _KPROCESS *a1, __int64 a2)
{
  return PsReturnProcessNonPagedPoolQuota(
           a1,
           8 * ((*(_QWORD *)(a2 + 8) >> 6) + ((*(_QWORD *)(a2 + 8) & 0x3F) != 0) + 9LL));
}
