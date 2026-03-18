/*
 * XREFs of MiReturnSplitPageCharges @ 0x1403CB788
 * Callers:
 *     MiInitializeDynamicBitmap @ 0x1407744FC (MiInitializeDynamicBitmap.c)
 *     MiDeleteSparseRange @ 0x1408D5150 (MiDeleteSparseRange.c)
 * Callees:
 *     MiReturnCommit @ 0x140224390 (MiReturnCommit.c)
 *     MiReturnSystemCharges @ 0x1403456C8 (MiReturnSystemCharges.c)
 */

unsigned __int64 __fastcall MiReturnSplitPageCharges(__int64 a1, unsigned __int64 a2, int a3)
{
  MiReturnCommit(a1, a2);
  return MiReturnSystemCharges(a1, a2, a3);
}
