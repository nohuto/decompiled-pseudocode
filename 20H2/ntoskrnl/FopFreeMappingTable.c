/*
 * XREFs of FopFreeMappingTable @ 0x1409F7308
 * Callers:
 *     FopFreeFontData @ 0x1409F7294 (FopFreeFontData.c)
 *     FopReadMappingTable @ 0x140A991C0 (FopReadMappingTable.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x14039B490 (BgpFwFreeMemory.c)
 */

void __fastcall FopFreeMappingTable(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    BgpFwFreeMemory(v2);
  BgpFwFreeMemory(a1);
}
