/*
 * XREFs of MiFreeVadEventBitmapCharges @ 0x1406D804C
 * Callers:
 *     MiReleaseVadEventBlocks @ 0x1407B97B0 (MiReleaseVadEventBlocks.c)
 *     MiFreeVadEventBitmap @ 0x14096D778 (MiFreeVadEventBitmap.c)
 * Callees:
 *     PsReturnProcessNonPagedPoolQuota @ 0x1403107C0 (PsReturnProcessNonPagedPoolQuota.c)
 */

__int64 __fastcall MiFreeVadEventBitmapCharges(struct _KPROCESS *a1, __int64 a2)
{
  return PsReturnProcessNonPagedPoolQuota(
           a1,
           8 * ((*(_QWORD *)(a2 + 8) >> 6) + ((*(_QWORD *)(a2 + 8) & 0x3F) != 0) + 9LL));
}
