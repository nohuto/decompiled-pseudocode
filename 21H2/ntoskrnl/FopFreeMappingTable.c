/*
 * XREFs of FopFreeMappingTable @ 0x140AAED14
 * Callers:
 *     FopFreeFontData @ 0x140AAECA0 (FopFreeFontData.c)
 *     FopReadMappingTable @ 0x140B565BC (FopReadMappingTable.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x1403A8CB4 (BgpFwFreeMemory.c)
 */

void __fastcall FopFreeMappingTable(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    BgpFwFreeMemory(v2);
  BgpFwFreeMemory(a1);
}
