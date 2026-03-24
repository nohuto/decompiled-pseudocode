/*
 * XREFs of HvpFreeBin @ 0x140725BD0
 * Callers:
 *     HvpRemapAndEnlistHiveBins @ 0x14070999C (HvpRemapAndEnlistHiveBins.c)
 *     HvHiveCleanup @ 0x140709C24 (HvHiveCleanup.c)
 *     HvFreeHivePartial @ 0x14072153C (HvFreeHivePartial.c)
 *     HvpAddBin @ 0x140722A58 (HvpAddBin.c)
 *     HvpDropPagedBins @ 0x14079F728 (HvpDropPagedBins.c)
 *     HvpAddDummyBinToHive @ 0x140873C48 (HvpAddDummyBinToHive.c)
 *     HvpMapHiveImage @ 0x140873E94 (HvpMapHiveImage.c)
 * Callees:
 *     CmpProtectPool @ 0x140363DB0 (CmpProtectPool.c)
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HvpFreeBin(__int64 a1, unsigned int a2, unsigned __int64 a3)
{
  CmpProtectPool(a3, a2);
  return (*(__int64 (__fastcall **)(unsigned __int64, _QWORD))(a1 + 32))(a3, a2);
}
