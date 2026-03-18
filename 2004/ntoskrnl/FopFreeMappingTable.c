/*
 * XREFs of FopFreeMappingTable @ 0x1409F1308
 * Callers:
 *     FopFreeFontData @ 0x1409F1294 (FopFreeFontData.c)
 *     FopReadMappingTable @ 0x140A93560 (FopReadMappingTable.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x140398FD0 (BgpFwFreeMemory.c)
 */

void __fastcall FopFreeMappingTable(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    BgpFwFreeMemory(v2);
  BgpFwFreeMemory(a1);
}
