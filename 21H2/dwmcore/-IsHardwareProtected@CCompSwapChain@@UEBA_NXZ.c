/*
 * XREFs of ?IsHardwareProtected@CCompSwapChain@@UEBA_NXZ @ 0x1800FC41C
 * Callers:
 *     ?IsHardwareProtected@CCompSwapChain@@$4PPPPPPPM@A@EBA_NXZ @ 0x1801095F0 (-IsHardwareProtected@CCompSwapChain@@$4PPPPPPPM@A@EBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CCompSwapChain::IsHardwareProtected(CCompSwapChain *this)
{
  return *((_BYTE *)this - 276);
}
