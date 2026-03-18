/*
 * XREFs of MiMakeProtectionPfnCompatible @ 0x14022978C
 * Callers:
 *     MiFillSystemPtes @ 0x14021BC90 (MiFillSystemPtes.c)
 *     MiGetPageChain @ 0x1402A4CF0 (MiGetPageChain.c)
 *     MiZeroPhysicalPage @ 0x1402F50E4 (MiZeroPhysicalPage.c)
 *     MiPrivateFixup @ 0x140314F08 (MiPrivateFixup.c)
 *     MiInsertPhysicalPteMapping @ 0x1403381C8 (MiInsertPhysicalPteMapping.c)
 *     MiCopySinglePage @ 0x14033F9B4 (MiCopySinglePage.c)
 *     MiZeroLargePage @ 0x140349124 (MiZeroLargePage.c)
 *     MiMapSinglePage @ 0x140368E74 (MiMapSinglePage.c)
 *     MiMapMemoryDumpMdl @ 0x140381734 (MiMapMemoryDumpMdl.c)
 *     MiUpdateImagePfnImportRelocations @ 0x140394F3C (MiUpdateImagePfnImportRelocations.c)
 *     MiInitializeNewUltraHugeContext @ 0x140397DD4 (MiInitializeNewUltraHugeContext.c)
 *     MiTimeSingleLargePageZeroWorker @ 0x1403A7E38 (MiTimeSingleLargePageZeroWorker.c)
 *     MiMapMdlCommon @ 0x1403C56B4 (MiMapMdlCommon.c)
 *     MiZeroWithSystemPtes @ 0x1403EF588 (MiZeroWithSystemPtes.c)
 *     MiZeroWithUltraSpace @ 0x1403EF868 (MiZeroWithUltraSpace.c)
 *     MmProtectMdlSystemAddress @ 0x14052CCE0 (MmProtectMdlSystemAddress.c)
 *     MiInitializeSlowPte @ 0x1405345DC (MiInitializeSlowPte.c)
 *     MiDbgTranslatePhysicalAddress @ 0x140540D20 (MiDbgTranslatePhysicalAddress.c)
 *     MiScrubNodeLargePageList @ 0x140551998 (MiScrubNodeLargePageList.c)
 *     MiScrubPage @ 0x14055EE54 (MiScrubPage.c)
 *     MiRelocateImagePfn @ 0x1405FC710 (MiRelocateImagePfn.c)
 *     MiValidateImagePfn @ 0x1406EBA64 (MiValidateImagePfn.c)
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
