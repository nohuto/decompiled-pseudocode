/*
 * XREFs of HvpFreeBin @ 0x140621684
 * Callers:
 *     HvFreeHivePartial @ 0x1406F8D94 (HvFreeHivePartial.c)
 *     HvpAddBin @ 0x1406FAA84 (HvpAddBin.c)
 *     HvpRemapAndEnlistHiveBins @ 0x140720D7C (HvpRemapAndEnlistHiveBins.c)
 *     HvHiveCleanup @ 0x140721004 (HvHiveCleanup.c)
 *     HvpDropPagedBins @ 0x14079F928 (HvpDropPagedBins.c)
 *     HvpAddDummyBinToHive @ 0x140873DA8 (HvpAddDummyBinToHive.c)
 *     HvpMapHiveImage @ 0x140873FF4 (HvpMapHiveImage.c)
 * Callees:
 *     CmpProtectPool @ 0x1402513A4 (CmpProtectPool.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HvpFreeBin(__int64 a1, unsigned int a2, __int64 a3)
{
  CmpProtectPool(a3, a2);
  return (*(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 32))(a3, a2);
}
