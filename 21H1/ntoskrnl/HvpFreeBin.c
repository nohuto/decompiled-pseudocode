/*
 * XREFs of HvpFreeBin @ 0x1406ECAD4
 * Callers:
 *     HvpAddBin @ 0x140685BBC (HvpAddBin.c)
 *     HvFreeHivePartial @ 0x140689874 (HvFreeHivePartial.c)
 *     HvHiveCleanup @ 0x140698314 (HvHiveCleanup.c)
 *     HvpRemapAndEnlistHiveBins @ 0x140698568 (HvpRemapAndEnlistHiveBins.c)
 *     HvpDropPagedBins @ 0x140781B74 (HvpDropPagedBins.c)
 *     HvpAddDummyBinToHive @ 0x14086ED1C (HvpAddDummyBinToHive.c)
 *     HvpMapHiveImage @ 0x14086EF68 (HvpMapHiveImage.c)
 * Callees:
 *     CmpProtectPool @ 0x140322614 (CmpProtectPool.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HvpFreeBin(__int64 a1, unsigned int a2, unsigned __int64 a3)
{
  CmpProtectPool(a3, a2);
  return (*(__int64 (__fastcall **)(unsigned __int64, _QWORD))(a1 + 32))(a3, a2);
}
