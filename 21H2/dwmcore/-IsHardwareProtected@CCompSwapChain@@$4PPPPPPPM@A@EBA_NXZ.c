/*
 * XREFs of ?IsHardwareProtected@CCompSwapChain@@$4PPPPPPPM@A@EBA_NXZ @ 0x1801095F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CCompSwapChain::IsHardwareProtected(__int64 a1)
{
  return CCompSwapChain::IsHardwareProtected((CCompSwapChain *)(a1 - *(int *)(a1 - 4)));
}
