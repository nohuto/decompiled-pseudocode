/*
 * XREFs of ?GetDisplayAdapterLuid@CLegacySwapChain@@$4PPPPPPPM@A@EBA?AU_LUID@@XZ @ 0x180108E90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _LUID __fastcall CLegacySwapChain::GetDisplayAdapterLuid(__int64 a1, _QWORD *a2)
{
  return CLegacySwapChain::GetDisplayAdapterLuid((CLegacySwapChain *)(a1 - *(int *)(a1 - 4)), a2);
}
