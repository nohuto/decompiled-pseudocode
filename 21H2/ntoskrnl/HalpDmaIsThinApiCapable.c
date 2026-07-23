/*
 * XREFs of HalpDmaIsThinApiCapable @ 0x1403C7290
 * Callers:
 *     HalpDmaAllocateChildAdapterV3 @ 0x1407C3BC8 (HalpDmaAllocateChildAdapterV3.c)
 * Callees:
 *     <none>
 */

bool __fastcall HalpDmaIsThinApiCapable(__int64 a1)
{
  return *(_DWORD *)(a1 + 512) == 2 && *(_BYTE *)(a1 + 437) && *(_BYTE *)(a1 + 433) && *(_BYTE *)(a1 + 434);
}
