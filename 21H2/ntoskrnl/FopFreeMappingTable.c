/*
 * XREFs of FopFreeMappingTable @ 0x1409F5308
 * Callers:
 *     FopFreeFontData @ 0x1409F5294 (FopFreeFontData.c)
 *     FopReadMappingTable @ 0x140A97050 (FopReadMappingTable.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x14039BEB0 (BgpFwFreeMemory.c)
 */

void __fastcall FopFreeMappingTable(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    BgpFwFreeMemory(v2);
  BgpFwFreeMemory(a1);
}
