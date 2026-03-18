/*
 * XREFs of MiFreeVadEventBitmapCharges @ 0x1406DD89C
 * Callers:
 *     MiReleaseVadEventBlocks @ 0x14062DF50 (MiReleaseVadEventBlocks.c)
 *     MiFreeVadEventBitmap @ 0x1408C3E08 (MiFreeVadEventBitmap.c)
 * Callees:
 *     PsReturnProcessNonPagedPoolQuota @ 0x1402799D0 (PsReturnProcessNonPagedPoolQuota.c)
 */

signed __int64 __fastcall MiFreeVadEventBitmapCharges(ULONG_PTR a1, __int64 a2)
{
  return PsReturnProcessNonPagedPoolQuota(
           a1,
           8 * ((*(_QWORD *)(a2 + 8) >> 6) + ((*(_QWORD *)(a2 + 8) & 0x3F) != 0) + 9LL));
}
