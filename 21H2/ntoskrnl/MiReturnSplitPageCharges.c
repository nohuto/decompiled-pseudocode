/*
 * XREFs of MiReturnSplitPageCharges @ 0x1403CED94
 * Callers:
 *     MiInitializeDynamicBitmap @ 0x1407868DC (MiInitializeDynamicBitmap.c)
 *     MiDeleteSparseRange @ 0x1408D8750 (MiDeleteSparseRange.c)
 * Callees:
 *     MiReturnSystemCharges @ 0x1402B9B18 (MiReturnSystemCharges.c)
 *     MiReturnCommit @ 0x1403182A0 (MiReturnCommit.c)
 */

unsigned __int64 __fastcall MiReturnSplitPageCharges(__int64 a1, unsigned __int64 a2, int a3)
{
  MiReturnCommit(a1, a2);
  return MiReturnSystemCharges(a1, a2, a3);
}
