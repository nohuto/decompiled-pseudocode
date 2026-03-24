/*
 * XREFs of MiFreeVadEventBitmapCharges @ 0x1406B1774
 * Callers:
 *     MiReleaseVadEventBlocks @ 0x1406ED390 (MiReleaseVadEventBlocks.c)
 *     MiFreeVadEventBitmap @ 0x1408C8758 (MiFreeVadEventBitmap.c)
 * Callees:
 *     PsReturnProcessNonPagedPoolQuota @ 0x1403183E0 (PsReturnProcessNonPagedPoolQuota.c)
 */

__int64 __fastcall MiFreeVadEventBitmapCharges(struct _KPROCESS *a1, __int64 a2)
{
  return PsReturnProcessNonPagedPoolQuota(
           a1,
           8 * ((*(_QWORD *)(a2 + 8) >> 6) + ((*(_QWORD *)(a2 + 8) & 0x3F) != 0) + 9LL));
}
