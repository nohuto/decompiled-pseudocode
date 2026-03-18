/*
 * XREFs of FioFwReadBytesAtOffset @ 0x1403B155C
 * Callers:
 *     FioFwReadUlongAtOffset @ 0x1403AF768 (FioFwReadUlongAtOffset.c)
 *     RaspLoadBearings @ 0x1403B0F6C (RaspLoadBearings.c)
 *     FioFwReadUshortAtOffset @ 0x1403B115C (FioFwReadUshortAtOffset.c)
 *     RaspInitializeGlyphData @ 0x1403B1190 (RaspInitializeGlyphData.c)
 *     RaspInitializeCompositeGlyphData @ 0x1405C0244 (RaspInitializeCompositeGlyphData.c)
 *     FopReadMappingTable @ 0x140A93E14 (FopReadMappingTable.c)
 *     FopValidateFontNameTable @ 0x140A93FEC (FopValidateFontNameTable.c)
 *     FopReadCmapTable @ 0x140A94178 (FopReadCmapTable.c)
 *     BgpRasInitializeRasterizer @ 0x140A942DC (BgpRasInitializeRasterizer.c)
 *     FopReadNamingTable @ 0x140A944F4 (FopReadNamingTable.c)
 *     FopReadNameRecord @ 0x140A9461C (FopReadNameRecord.c)
 *     FopGetTableOffsetAndSize @ 0x140A9468C (FopGetTableOffsetAndSize.c)
 * Callees:
 *     memmove @ 0x140408CC0 (memmove.c)
 */

__int64 __fastcall FioFwReadBytesAtOffset(__int64 a1, unsigned int a2, unsigned int a3, void *a4)
{
  if ( a2 + a3 > *(_DWORD *)(a1 + 8) )
    return 3221225485LL;
  memmove(a4, (const void *)(*(_QWORD *)a1 + a2), a3);
  return 0LL;
}
