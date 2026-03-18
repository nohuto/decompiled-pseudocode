/*
 * XREFs of ?GetAdapterLuid@CCompSwapChain@@$4PPPPPPPM@A@EBA?AU_LUID@@XZ @ 0x1800F2680
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _LUID __fastcall CCompSwapChain::GetAdapterLuid(__int64 a1, _QWORD *a2)
{
  return CCompSwapChain::GetAdapterLuid((CCompSwapChain *)(a1 - *(int *)(a1 - 4)), a2);
}
