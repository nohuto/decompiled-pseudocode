/*
 * XREFs of FopFreeMappingTable @ 0x1409F4308
 * Callers:
 *     FopFreeFontData @ 0x1409F4294 (FopFreeFontData.c)
 *     FopReadMappingTable @ 0x140A96050 (FopReadMappingTable.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x14039BD60 (BgpFwFreeMemory.c)
 */

void __fastcall FopFreeMappingTable(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  __int64 v5; // rcx

  v5 = *(_QWORD *)(a1 + 8);
  if ( v5 )
    BgpFwFreeMemory(v5, a2, a3, a4);
  BgpFwFreeMemory(a1, a2, a3, a4);
}
