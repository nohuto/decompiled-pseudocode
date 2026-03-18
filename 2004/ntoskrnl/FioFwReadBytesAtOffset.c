/*
 * XREFs of FioFwReadBytesAtOffset @ 0x1403AAD0C
 * Callers:
 *     FioFwReadUlongAtOffset @ 0x1403A8F0C (FioFwReadUlongAtOffset.c)
 *     RaspLoadBearings @ 0x1403AA71C (RaspLoadBearings.c)
 *     FioFwReadUshortAtOffset @ 0x1403AA90C (FioFwReadUshortAtOffset.c)
 *     RaspInitializeGlyphData @ 0x1403AA940 (RaspInitializeGlyphData.c)
 *     RaspInitializeCompositeGlyphData @ 0x1405C0964 (RaspInitializeCompositeGlyphData.c)
 *     FopReadMappingTable @ 0x140A93560 (FopReadMappingTable.c)
 *     FopValidateFontNameTable @ 0x140A93738 (FopValidateFontNameTable.c)
 *     FopReadCmapTable @ 0x140A938C4 (FopReadCmapTable.c)
 *     BgpRasInitializeRasterizer @ 0x140A93A28 (BgpRasInitializeRasterizer.c)
 *     FopReadNamingTable @ 0x140A93C40 (FopReadNamingTable.c)
 *     FopReadNameRecord @ 0x140A93D68 (FopReadNameRecord.c)
 *     FopGetTableOffsetAndSize @ 0x140A93DD8 (FopGetTableOffsetAndSize.c)
 * Callees:
 *     memmove @ 0x140409FC0 (memmove.c)
 */

__int64 __fastcall FioFwReadBytesAtOffset(__int64 a1, unsigned int a2, unsigned int a3, void *a4)
{
  if ( a2 + a3 > *(_DWORD *)(a1 + 8) )
    return 3221225485LL;
  memmove(a4, (const void *)(*(_QWORD *)a1 + a2), a3);
  return 0LL;
}
