/*
 * XREFs of MiFreeVadEventBitmapCharges @ 0x1406D3850
 * Callers:
 *     MiReleaseVadEventBlocks @ 0x140624980 (MiReleaseVadEventBlocks.c)
 *     MiFreeVadEventBitmap @ 0x1408CAF98 (MiFreeVadEventBitmap.c)
 * Callees:
 *     PsReturnProcessNonPagedPoolQuota @ 0x140230440 (PsReturnProcessNonPagedPoolQuota.c)
 */

signed __int64 __fastcall MiFreeVadEventBitmapCharges(ULONG_PTR a1, __int64 a2)
{
  return PsReturnProcessNonPagedPoolQuota(
           a1,
           8 * ((*(_QWORD *)(a2 + 8) >> 6) + ((*(_QWORD *)(a2 + 8) & 0x3F) != 0) + 9LL));
}
