/*
 * XREFs of ?IsHardwareProtected@CCompSwapChain@@UEBA_NXZ @ 0x1800DF07C
 * Callers:
 *     ?IsHardwareProtected@CCompSwapChain@@$4PPPPPPPM@A@EBA_NXZ @ 0x1800F26B0 (-IsHardwareProtected@CCompSwapChain@@$4PPPPPPPM@A@EBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CCompSwapChain::IsHardwareProtected(CCompSwapChain *this)
{
  return *((_BYTE *)this - 248);
}
