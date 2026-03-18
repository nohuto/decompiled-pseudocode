/*
 * XREFs of CmpReleaseGlobalQuota @ 0x14070696C
 * Callers:
 *     HvpAddBin @ 0x1405DB258 (HvpAddBin.c)
 *     CmpAllocate @ 0x1405DE8B0 (CmpAllocate.c)
 *     HvFreeHivePartial @ 0x1405DEEF4 (HvFreeHivePartial.c)
 *     CmpDeleteHive @ 0x1406A3308 (CmpDeleteHive.c)
 *     CmpFree @ 0x1407063A0 (CmpFree.c)
 *     HvHiveCleanup @ 0x140706744 (HvHiveCleanup.c)
 *     HvpRemapAndEnlistHiveBins @ 0x140706998 (HvpRemapAndEnlistHiveBins.c)
 *     HvpDropPagedBins @ 0x140795208 (HvpDropPagedBins.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
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
