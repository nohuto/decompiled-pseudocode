/*
 * XREFs of ?GetDisplayAdapterLuid@CLegacySwapChain@@$4PPPPPPPM@BKI@EBA?AU_LUID@@XZ @ 0x18010A4B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _LUID __fastcall CLegacySwapChain::GetDisplayAdapterLuid(__int64 a1, _QWORD *a2)
{
  return CLegacySwapChain::GetDisplayAdapterLuid((CLegacySwapChain *)(a1 - *(int *)(a1 - 4) - 424), a2);
}
