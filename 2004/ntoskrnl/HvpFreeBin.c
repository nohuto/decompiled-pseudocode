/*
 * XREFs of HvpFreeBin @ 0x1407105B4
 * Callers:
 *     HvpAddBin @ 0x140638040 (HvpAddBin.c)
 *     HvFreeHivePartial @ 0x14063BCF4 (HvFreeHivePartial.c)
 *     HvHiveCleanup @ 0x14069E3E4 (HvHiveCleanup.c)
 *     HvpRemapAndEnlistHiveBins @ 0x14069E638 (HvpRemapAndEnlistHiveBins.c)
 *     HvpDropPagedBins @ 0x1407874F8 (HvpDropPagedBins.c)
 *     HvpAddDummyBinToHive @ 0x14087080C (HvpAddDummyBinToHive.c)
 *     HvpMapHiveImage @ 0x140870A58 (HvpMapHiveImage.c)
 * Callees:
 *     CmpProtectPool @ 0x14035FF24 (CmpProtectPool.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HvpFreeBin(__int64 a1, unsigned int a2, unsigned __int64 a3)
{
  CmpProtectPool(a3, a2);
  return (*(__int64 (__fastcall **)(unsigned __int64, _QWORD))(a1 + 32))(a3, a2);
}
