/*
 * XREFs of ?IsHardwareProtected@CDDASwapChain@@UEBA_NXZ @ 0x1800DDBC8
 * Callers:
 *     ?IsHardwareProtected@CDDASwapChain@@$4PPPPPPPM@A@EBA_NXZ @ 0x1800EF670 (-IsHardwareProtected@CDDASwapChain@@$4PPPPPPPM@A@EBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CDDASwapChain::IsHardwareProtected(CDDASwapChain *this)
{
  return *((_BYTE *)this - 128);
}
