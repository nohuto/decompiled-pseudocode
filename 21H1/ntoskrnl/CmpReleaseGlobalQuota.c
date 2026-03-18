/*
 * XREFs of CmpReleaseGlobalQuota @ 0x14069853C
 * Callers:
 *     CmpDeleteHive @ 0x14065B4F8 (CmpDeleteHive.c)
 *     HvpAddBin @ 0x140685BBC (HvpAddBin.c)
 *     CmpAllocate @ 0x140689230 (CmpAllocate.c)
 *     HvFreeHivePartial @ 0x140689874 (HvFreeHivePartial.c)
 *     CmpFree @ 0x140697F70 (CmpFree.c)
 *     HvHiveCleanup @ 0x140698314 (HvHiveCleanup.c)
 *     HvpRemapAndEnlistHiveBins @ 0x140698568 (HvpRemapAndEnlistHiveBins.c)
 *     HvpDropPagedBins @ 0x140781B74 (HvpDropPagedBins.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
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
