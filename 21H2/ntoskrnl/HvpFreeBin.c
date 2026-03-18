/*
 * XREFs of HvpFreeBin @ 0x1406D16F8
 * Callers:
 *     HvFreeHivePartial @ 0x140689900 (HvFreeHivePartial.c)
 *     HvpRemapAndEnlistHiveBins @ 0x14068C544 (HvpRemapAndEnlistHiveBins.c)
 *     HvpAddBin @ 0x14068C820 (HvpAddBin.c)
 *     HvHiveCleanup @ 0x14079B518 (HvHiveCleanup.c)
 *     HvpDropPagedBins @ 0x14083D244 (HvpDropPagedBins.c)
 *     HvpAddDummyBinToHive @ 0x14091A928 (HvpAddDummyBinToHive.c)
 *     HvpMapHiveImage @ 0x14091AB6C (HvpMapHiveImage.c)
 * Callees:
 *     CmpProtectPool @ 0x14024DE3C (CmpProtectPool.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     MmFreeIndependentPages @ 0x14096ED20 (MmFreeIndependentPages.c)
 */

__int64 __fastcall HvpFreeBin(__int64 a1, unsigned int a2, __int64 a3)
{
  if ( (*(_DWORD *)(a1 + 160) & 0x2000000) != 0 )
    return MmFreeIndependentPages(a3, a2);
  CmpProtectPool(a3, a2, 4u);
  return (*(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 32))(a3, a2);
}
