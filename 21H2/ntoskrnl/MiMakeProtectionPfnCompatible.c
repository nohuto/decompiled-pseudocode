/*
 * XREFs of MiMakeProtectionPfnCompatible @ 0x14023B9BC
 * Callers:
 *     MiFillSystemPtes @ 0x140226EF0 (MiFillSystemPtes.c)
 *     MiPrivateFixup @ 0x14028CA28 (MiPrivateFixup.c)
 *     MiInsertPhysicalPteMapping @ 0x140298318 (MiInsertPhysicalPteMapping.c)
 *     MiCopySinglePage @ 0x1402B4BC4 (MiCopySinglePage.c)
 *     MiZeroLargePage @ 0x1402B71F8 (MiZeroLargePage.c)
 *     MiZeroPhysicalPage @ 0x1402E6380 (MiZeroPhysicalPage.c)
 *     MiMapSinglePage @ 0x14036B104 (MiMapSinglePage.c)
 *     MiMapMemoryDumpMdl @ 0x140383A04 (MiMapMemoryDumpMdl.c)
 *     MiUpdateImagePfnImportRelocations @ 0x140397874 (MiUpdateImagePfnImportRelocations.c)
 *     MiInitializeNewUltraHugeContext @ 0x14039A6C4 (MiInitializeNewUltraHugeContext.c)
 *     MiTimeSingleLargePageZeroWorker @ 0x1403B0728 (MiTimeSingleLargePageZeroWorker.c)
 *     MiMapMdlCommon @ 0x1403C8C44 (MiMapMdlCommon.c)
 *     MiZeroWithSystemPtes @ 0x1403F5238 (MiZeroWithSystemPtes.c)
 *     MiZeroWithUltraSpace @ 0x1403F5518 (MiZeroWithUltraSpace.c)
 *     MmProtectMdlSystemAddress @ 0x1405321B0 (MmProtectMdlSystemAddress.c)
 *     MiInitializeSlowPte @ 0x140539AAC (MiInitializeSlowPte.c)
 *     MiDbgTranslatePhysicalAddress @ 0x1405461F0 (MiDbgTranslatePhysicalAddress.c)
 *     MiScrubNodeLargePageList @ 0x140556E38 (MiScrubNodeLargePageList.c)
 *     MiScrubPage @ 0x1405642F4 (MiScrubPage.c)
 *     MiRelocateImagePfn @ 0x1405FC260 (MiRelocateImagePfn.c)
 *     MiValidateImagePfn @ 0x14069BD04 (MiValidateImagePfn.c)
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
