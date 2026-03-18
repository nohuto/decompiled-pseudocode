/*
 * XREFs of CmpReleaseGlobalQuota @ 0x14069E60C
 * Callers:
 *     HvpAddBin @ 0x140638040 (HvpAddBin.c)
 *     CmpAllocate @ 0x14063B6B0 (CmpAllocate.c)
 *     HvFreeHivePartial @ 0x14063BCF4 (HvFreeHivePartial.c)
 *     CmpDeleteHive @ 0x140644B4C (CmpDeleteHive.c)
 *     CmpFree @ 0x14069E040 (CmpFree.c)
 *     HvHiveCleanup @ 0x14069E3E4 (HvHiveCleanup.c)
 *     HvpRemapAndEnlistHiveBins @ 0x14069E638 (HvpRemapAndEnlistHiveBins.c)
 *     HvpDropPagedBins @ 0x1407874F8 (HvpDropPagedBins.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
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
