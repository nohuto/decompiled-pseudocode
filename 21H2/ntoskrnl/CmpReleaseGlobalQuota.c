/*
 * XREFs of CmpReleaseGlobalQuota @ 0x14072122C
 * Callers:
 *     CmpDeleteHive @ 0x1405E0094 (CmpDeleteHive.c)
 *     CmpFree @ 0x1406073E0 (CmpFree.c)
 *     CmpAllocate @ 0x1406F8250 (CmpAllocate.c)
 *     HvFreeHivePartial @ 0x1406F8D94 (HvFreeHivePartial.c)
 *     HvpAddBin @ 0x1406FAA84 (HvpAddBin.c)
 *     HvpRemapAndEnlistHiveBins @ 0x140720D7C (HvpRemapAndEnlistHiveBins.c)
 *     HvHiveCleanup @ 0x140721004 (HvHiveCleanup.c)
 *     HvpDropPagedBins @ 0x14079F928 (HvpDropPagedBins.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
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
