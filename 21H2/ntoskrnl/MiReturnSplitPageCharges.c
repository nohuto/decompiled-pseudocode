/*
 * XREFs of MiReturnSplitPageCharges @ 0x1403CEF04
 * Callers:
 *     MiInitializeDynamicBitmap @ 0x140786A9C (MiInitializeDynamicBitmap.c)
 *     MiDeleteSparseRange @ 0x1408D88B0 (MiDeleteSparseRange.c)
 * Callees:
 *     MiReturnSystemCharges @ 0x140237D28 (MiReturnSystemCharges.c)
 *     MiReturnCommit @ 0x140322FF0 (MiReturnCommit.c)
 */

unsigned __int64 __fastcall MiReturnSplitPageCharges(__int64 a1, unsigned __int64 a2, int a3)
{
  MiReturnCommit(a1, a2);
  return MiReturnSystemCharges(a1, a2, a3);
}
