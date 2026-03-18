/*
 * XREFs of MiFreeVadEventBitmapCharges @ 0x1407005BC
 * Callers:
 *     MiReleaseVadEventBlocks @ 0x1405F8F10 (MiReleaseVadEventBlocks.c)
 *     MiFreeVadEventBitmap @ 0x1408C5158 (MiFreeVadEventBitmap.c)
 * Callees:
 *     PsReturnProcessNonPagedPoolQuota @ 0x140220980 (PsReturnProcessNonPagedPoolQuota.c)
 */

__int64 __fastcall MiFreeVadEventBitmapCharges(struct _KPROCESS *a1, __int64 a2)
{
  return PsReturnProcessNonPagedPoolQuota(
           a1,
           8 * ((*(_QWORD *)(a2 + 8) >> 6) + ((*(_QWORD *)(a2 + 8) & 0x3F) != 0) + 9LL));
}
