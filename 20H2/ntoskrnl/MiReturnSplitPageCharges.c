/*
 * XREFs of MiReturnSplitPageCharges @ 0x1403CE3A8
 * Callers:
 *     MiInitializeDynamicBitmap @ 0x140782AFC (MiInitializeDynamicBitmap.c)
 *     MiDeleteSparseRange @ 0x1408DAF90 (MiDeleteSparseRange.c)
 * Callees:
 *     MiReturnCommit @ 0x140230300 (MiReturnCommit.c)
 *     MiReturnSystemCharges @ 0x140316A18 (MiReturnSystemCharges.c)
 */

unsigned __int64 __fastcall MiReturnSplitPageCharges(__int64 a1, unsigned __int64 a2, int a3)
{
  MiReturnCommit(a1, a2);
  return MiReturnSystemCharges(a1, a2, a3);
}
