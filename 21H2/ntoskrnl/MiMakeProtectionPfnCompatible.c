/*
 * XREFs of MiMakeProtectionPfnCompatible @ 0x1402E020C
 * Callers:
 *     MiPrivateFixup @ 0x140209BC8 (MiPrivateFixup.c)
 *     MiInsertPhysicalPteMapping @ 0x140218D98 (MiInsertPhysicalPteMapping.c)
 *     MiCopySinglePage @ 0x140232D74 (MiCopySinglePage.c)
 *     MiZeroLargePage @ 0x1402353D8 (MiZeroLargePage.c)
 *     MiZeroPhysicalPage @ 0x1402976D0 (MiZeroPhysicalPage.c)
 *     MiFillSystemPtes @ 0x1402CB7F0 (MiFillSystemPtes.c)
 *     MiMapSinglePage @ 0x14036B2B4 (MiMapSinglePage.c)
 *     MiMapMemoryDumpMdl @ 0x140383BB4 (MiMapMemoryDumpMdl.c)
 *     MiUpdateImagePfnImportRelocations @ 0x1403979C4 (MiUpdateImagePfnImportRelocations.c)
 *     MiInitializeNewUltraHugeContext @ 0x14039A814 (MiInitializeNewUltraHugeContext.c)
 *     MiTimeSingleLargePageZeroWorker @ 0x1403B0898 (MiTimeSingleLargePageZeroWorker.c)
 *     MiMapMdlCommon @ 0x1403C8DE4 (MiMapMdlCommon.c)
 *     MiZeroWithSystemPtes @ 0x1403F5238 (MiZeroWithSystemPtes.c)
 *     MiZeroWithUltraSpace @ 0x1403F5518 (MiZeroWithUltraSpace.c)
 *     MmProtectMdlSystemAddress @ 0x1405323F0 (MmProtectMdlSystemAddress.c)
 *     MiInitializeSlowPte @ 0x140539CEC (MiInitializeSlowPte.c)
 *     MiDbgTranslatePhysicalAddress @ 0x140546430 (MiDbgTranslatePhysicalAddress.c)
 *     MiScrubNodeLargePageList @ 0x140557078 (MiScrubNodeLargePageList.c)
 *     MiScrubPage @ 0x140564534 (MiScrubPage.c)
 *     MiValidateImagePfn @ 0x1405FAEC4 (MiValidateImagePfn.c)
 *     MiRelocateImagePfn @ 0x1406EB9C0 (MiRelocateImagePfn.c)
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
