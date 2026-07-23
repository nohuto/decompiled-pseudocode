/*
 * XREFs of FioFwReadBytesAtOffset @ 0x1403B376C
 * Callers:
 *     FioFwReadUlongAtOffset @ 0x1403B196C (FioFwReadUlongAtOffset.c)
 *     RaspLoadBearings @ 0x1403B317C (RaspLoadBearings.c)
 *     FioFwReadUshortAtOffset @ 0x1403B336C (FioFwReadUshortAtOffset.c)
 *     RaspInitializeGlyphData @ 0x1403B33A0 (RaspInitializeGlyphData.c)
 *     RaspInitializeCompositeGlyphData @ 0x1405C6044 (RaspInitializeCompositeGlyphData.c)
 *     FopReadMappingTable @ 0x140A97050 (FopReadMappingTable.c)
 *     FopValidateFontNameTable @ 0x140A97228 (FopValidateFontNameTable.c)
 *     FopReadCmapTable @ 0x140A973B4 (FopReadCmapTable.c)
 *     BgpRasInitializeRasterizer @ 0x140A97518 (BgpRasInitializeRasterizer.c)
 *     FopReadNamingTable @ 0x140A97730 (FopReadNamingTable.c)
 *     FopReadNameRecord @ 0x140A97858 (FopReadNameRecord.c)
 *     FopGetTableOffsetAndSize @ 0x140A978C8 (FopGetTableOffsetAndSize.c)
 * Callees:
 *     memmove @ 0x140414040 (memmove.c)
 */

__int64 __fastcall FioFwReadBytesAtOffset(__int64 a1, unsigned int a2, unsigned int a3, void *a4)
{
  if ( a2 + a3 > *(_DWORD *)(a1 + 8) )
    return 3221225485LL;
  memmove(a4, (const void *)(*(_QWORD *)a1 + a2), a3);
  return 0LL;
}
