/*
 * XREFs of HvpFreeBin @ 0x1406E27F0
 * Callers:
 *     HvpAddBin @ 0x1405DB258 (HvpAddBin.c)
 *     HvFreeHivePartial @ 0x1405DEEF4 (HvFreeHivePartial.c)
 *     HvHiveCleanup @ 0x140706744 (HvHiveCleanup.c)
 *     HvpRemapAndEnlistHiveBins @ 0x140706998 (HvpRemapAndEnlistHiveBins.c)
 *     HvpDropPagedBins @ 0x140795208 (HvpDropPagedBins.c)
 *     HvpAddDummyBinToHive @ 0x140876364 (HvpAddDummyBinToHive.c)
 *     HvpMapHiveImage @ 0x1408765B0 (HvpMapHiveImage.c)
 * Callees:
 *     CmpProtectPool @ 0x140330DB4 (CmpProtectPool.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HvpFreeBin(__int64 a1, unsigned int a2, unsigned __int64 a3)
{
  CmpProtectPool(a3, a2);
  return (*(__int64 (__fastcall **)(unsigned __int64, _QWORD))(a1 + 32))(a3, a2);
}
