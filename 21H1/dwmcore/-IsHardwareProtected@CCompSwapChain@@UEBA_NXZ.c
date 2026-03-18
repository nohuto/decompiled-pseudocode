/*
 * XREFs of ?IsHardwareProtected@CCompSwapChain@@UEBA_NXZ @ 0x1800DDC1C
 * Callers:
 *     ?IsHardwareProtected@CCompSwapChain@@$4PPPPPPPM@A@EBA_NXZ @ 0x1800EF720 (-IsHardwareProtected@CCompSwapChain@@$4PPPPPPPM@A@EBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CCompSwapChain::IsHardwareProtected(CCompSwapChain *this)
{
  return *((_BYTE *)this - 248);
}
