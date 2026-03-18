/*
 * XREFs of MiMakeProtectionPfnCompatible @ 0x14026C61C
 * Callers:
 *     MiInsertPhysicalPteMapping @ 0x140213558 (MiInsertPhysicalPteMapping.c)
 *     MiZeroPhysicalPage @ 0x1402359C4 (MiZeroPhysicalPage.c)
 *     MiPrivateFixup @ 0x14024076C (MiPrivateFixup.c)
 *     MiInitializeNewUltraHugeContext @ 0x14025BDC8 (MiInitializeNewUltraHugeContext.c)
 *     MiZeroLargePage @ 0x14026A28C (MiZeroLargePage.c)
 *     MiCopySinglePage @ 0x14026BE94 (MiCopySinglePage.c)
 *     MiMapSinglePage @ 0x14026C124 (MiMapSinglePage.c)
 *     MiZeroWithUltraSpace @ 0x14026C4CC (MiZeroWithUltraSpace.c)
 *     MiUpdateImagePfnImportRelocations @ 0x1402DAEB0 (MiUpdateImagePfnImportRelocations.c)
 *     MiFillSystemPtes @ 0x140308F00 (MiFillSystemPtes.c)
 *     MiGetPageChain @ 0x140323D70 (MiGetPageChain.c)
 *     MiMapMemoryDumpMdl @ 0x14038C4CC (MiMapMemoryDumpMdl.c)
 *     MiTimeSingleLargePageZeroWorker @ 0x1403D452C (MiTimeSingleLargePageZeroWorker.c)
 *     MiMapMdlCommon @ 0x1403D77D4 (MiMapMdlCommon.c)
 *     MmProtectMdlSystemAddress @ 0x140585D50 (MmProtectMdlSystemAddress.c)
 *     MiInitializeSlowPte @ 0x14059508C (MiInitializeSlowPte.c)
 *     MiCopyMemoryPagefileData @ 0x140599780 (MiCopyMemoryPagefileData.c)
 *     MiDbgTranslatePhysicalAddress @ 0x1405A4C68 (MiDbgTranslatePhysicalAddress.c)
 *     MiScrubNodeLargePageList @ 0x1405AF6F0 (MiScrubNodeLargePageList.c)
 *     MiZeroWithSystemPtes @ 0x1405B2A90 (MiZeroWithSystemPtes.c)
 *     MiScrubPage @ 0x1405C573C (MiScrubPage.c)
 *     MiValidateImagePfn @ 0x1406F3408 (MiValidateImagePfn.c)
 *     MiRelocateImagePfn @ 0x1407BF070 (MiRelocateImagePfn.c)
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
