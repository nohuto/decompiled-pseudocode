/*
 * XREFs of HalpDmaIsThinDmarCapable @ 0x1403CD4C4
 * Callers:
 *     HalpDmaAllocateChildAdapterV3 @ 0x14084685C (HalpDmaAllocateChildAdapterV3.c)
 * Callees:
 *     <none>
 */

bool __fastcall HalpDmaIsThinDmarCapable(__int64 a1)
{
  return *(_DWORD *)(a1 + 512) == 3 && *(_BYTE *)(a1 + 437) && *(_BYTE *)(a1 + 433) && *(_BYTE *)(a1 + 434);
}
