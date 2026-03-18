/*
 * XREFs of HalpDmaIsThinApiCapable @ 0x1403C4370
 * Callers:
 *     HalpDmaAllocateChildAdapterV3 @ 0x1407B1368 (HalpDmaAllocateChildAdapterV3.c)
 * Callees:
 *     <none>
 */

bool __fastcall HalpDmaIsThinApiCapable(__int64 a1)
{
  return *(_DWORD *)(a1 + 512) == 2 && *(_BYTE *)(a1 + 437) && *(_BYTE *)(a1 + 433) && *(_BYTE *)(a1 + 434);
}
