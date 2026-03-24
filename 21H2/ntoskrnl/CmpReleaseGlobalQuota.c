/*
 * XREFs of CmpReleaseGlobalQuota @ 0x140709E4C
 * Callers:
 *     CmpFree @ 0x1406A9460 (CmpFree.c)
 *     HvpRemapAndEnlistHiveBins @ 0x14070999C (HvpRemapAndEnlistHiveBins.c)
 *     HvHiveCleanup @ 0x140709C24 (HvHiveCleanup.c)
 *     CmpDeleteHive @ 0x14071C6F4 (CmpDeleteHive.c)
 *     CmpAllocate @ 0x140720DE0 (CmpAllocate.c)
 *     HvFreeHivePartial @ 0x14072153C (HvFreeHivePartial.c)
 *     HvpAddBin @ 0x140722A58 (HvpAddBin.c)
 *     HvpDropPagedBins @ 0x14079F728 (HvpDropPagedBins.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 */

__int64 __fastcall CmpReleaseGlobalQuota(unsigned int a1)
{
  __int64 result; // rax

  result = a1;
  if ( a1 > (unsigned __int64)CmpGlobalQuotaUsed )
    KeBugCheckEx(0x51u, 0xDuLL, 1uLL, 0LL, 0LL);
  _InterlockedExchangeAdd((volatile signed __int32 *)&CmpGlobalQuotaUsed, -a1);
  return result;
}
