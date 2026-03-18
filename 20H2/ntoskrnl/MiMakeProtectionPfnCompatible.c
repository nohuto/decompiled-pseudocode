/*
 * XREFs of MiMakeProtectionPfnCompatible @ 0x1402CA1DC
 * Callers:
 *     MiPrivateFixup @ 0x140239840 (MiPrivateFixup.c)
 *     MiCopySinglePage @ 0x1402516D4 (MiCopySinglePage.c)
 *     MiInsertPhysicalPteMapping @ 0x14025F5F8 (MiInsertPhysicalPteMapping.c)
 *     MiGetPageChain @ 0x140274030 (MiGetPageChain.c)
 *     MiFillSystemPtes @ 0x140286700 (MiFillSystemPtes.c)
 *     MiZeroLargePage @ 0x140319D50 (MiZeroLargePage.c)
 *     MiZeroPhysicalPage @ 0x1403332D4 (MiZeroPhysicalPage.c)
 *     MiMapSinglePage @ 0x14036AE54 (MiMapSinglePage.c)
 *     MiMapMemoryDumpMdl @ 0x140383414 (MiMapMemoryDumpMdl.c)
 *     MiUpdateImagePfnImportRelocations @ 0x1403973FC (MiUpdateImagePfnImportRelocations.c)
 *     MiInitializeNewUltraHugeContext @ 0x14039A254 (MiInitializeNewUltraHugeContext.c)
 *     MiTimeSingleLargePageZeroWorker @ 0x1403AA828 (MiTimeSingleLargePageZeroWorker.c)
 *     MiMapMdlCommon @ 0x1403C80A4 (MiMapMdlCommon.c)
 *     MiZeroWithSystemPtes @ 0x1403F39F8 (MiZeroWithSystemPtes.c)
 *     MiZeroWithUltraSpace @ 0x1403F3CD8 (MiZeroWithUltraSpace.c)
 *     MmProtectMdlSystemAddress @ 0x1405306B0 (MmProtectMdlSystemAddress.c)
 *     MiInitializeSlowPte @ 0x140537FAC (MiInitializeSlowPte.c)
 *     MiDbgTranslatePhysicalAddress @ 0x1405446F0 (MiDbgTranslatePhysicalAddress.c)
 *     MiScrubNodeLargePageList @ 0x140555368 (MiScrubNodeLargePageList.c)
 *     MiScrubPage @ 0x140562824 (MiScrubPage.c)
 *     MiRelocateImagePfn @ 0x1406818C0 (MiRelocateImagePfn.c)
 *     MiValidateImagePfn @ 0x1406BEE74 (MiValidateImagePfn.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiMakeProtectionPfnCompatible(char a1, __int64 a2)
{
  unsigned int v2; // ecx
  char v3; // al

  v2 = a1 & 7;
  v3 = *(_BYTE *)(a2 + 34) >> 6;
  if ( v3 )
  {
    if ( v3 == 2 )
      v2 |= 0x18u;
  }
  else
  {
    v2 |= 8u;
  }
  return v2;
}
