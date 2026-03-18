/*
 * XREFs of MiMakeProtectionPfnCompatible @ 0x1402827DC
 * Callers:
 *     MiGetPageChain @ 0x1402121E0 (MiGetPageChain.c)
 *     MiFillSystemPtes @ 0x140274CE0 (MiFillSystemPtes.c)
 *     MiInsertPhysicalPteMapping @ 0x1402FB198 (MiInsertPhysicalPteMapping.c)
 *     MiCopySinglePage @ 0x140302BB4 (MiCopySinglePage.c)
 *     MiZeroLargePage @ 0x14030B58C (MiZeroLargePage.c)
 *     MiPrivateFixup @ 0x140344248 (MiPrivateFixup.c)
 *     MiZeroPhysicalPage @ 0x1403510C0 (MiZeroPhysicalPage.c)
 *     MiMapSinglePage @ 0x1403684B4 (MiMapSinglePage.c)
 *     MiMapMemoryDumpMdl @ 0x140380EF4 (MiMapMemoryDumpMdl.c)
 *     MiUpdateImagePfnImportRelocations @ 0x14039436C (MiUpdateImagePfnImportRelocations.c)
 *     MiInitializeNewUltraHugeContext @ 0x1403971C4 (MiInitializeNewUltraHugeContext.c)
 *     MiTimeSingleLargePageZeroWorker @ 0x1403AE258 (MiTimeSingleLargePageZeroWorker.c)
 *     MiMapMdlCommon @ 0x1403C4744 (MiMapMdlCommon.c)
 *     MiZeroWithSystemPtes @ 0x1403EE228 (MiZeroWithSystemPtes.c)
 *     MiZeroWithUltraSpace @ 0x1403EE508 (MiZeroWithUltraSpace.c)
 *     MmProtectMdlSystemAddress @ 0x14052C690 (MmProtectMdlSystemAddress.c)
 *     MiInitializeSlowPte @ 0x140533F8C (MiInitializeSlowPte.c)
 *     MiDbgTranslatePhysicalAddress @ 0x1405406D0 (MiDbgTranslatePhysicalAddress.c)
 *     MiScrubNodeLargePageList @ 0x140551348 (MiScrubNodeLargePageList.c)
 *     MiScrubPage @ 0x14055E804 (MiScrubPage.c)
 *     MiRelocateImagePfn @ 0x140631750 (MiRelocateImagePfn.c)
 *     MiValidateImagePfn @ 0x1406CA7E4 (MiValidateImagePfn.c)
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
