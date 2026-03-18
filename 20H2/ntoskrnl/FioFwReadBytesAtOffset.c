/*
 * XREFs of FioFwReadBytesAtOffset @ 0x1403AD6FC
 * Callers:
 *     FioFwReadUlongAtOffset @ 0x1403AB8FC (FioFwReadUlongAtOffset.c)
 *     RaspLoadBearings @ 0x1403AD10C (RaspLoadBearings.c)
 *     FioFwReadUshortAtOffset @ 0x1403AD2FC (FioFwReadUshortAtOffset.c)
 *     RaspInitializeGlyphData @ 0x1403AD330 (RaspInitializeGlyphData.c)
 *     RaspInitializeCompositeGlyphData @ 0x1405C45E4 (RaspInitializeCompositeGlyphData.c)
 *     FopReadMappingTable @ 0x140A991C0 (FopReadMappingTable.c)
 *     FopValidateFontNameTable @ 0x140A99398 (FopValidateFontNameTable.c)
 *     FopReadCmapTable @ 0x140A99524 (FopReadCmapTable.c)
 *     BgpRasInitializeRasterizer @ 0x140A99688 (BgpRasInitializeRasterizer.c)
 *     FopReadNamingTable @ 0x140A998A0 (FopReadNamingTable.c)
 *     FopReadNameRecord @ 0x140A999C8 (FopReadNameRecord.c)
 *     FopGetTableOffsetAndSize @ 0x140A99A38 (FopGetTableOffsetAndSize.c)
 * Callees:
 *     memmove @ 0x140411040 (memmove.c)
 */

__int64 __fastcall FioFwReadBytesAtOffset(__int64 a1, unsigned int a2, unsigned int a3, void *a4)
{
  if ( a2 + a3 > *(_DWORD *)(a1 + 8) )
    return 3221225485LL;
  memmove(a4, (const void *)(*(_QWORD *)a1 + a2), a3);
  return 0LL;
}
