/*
 * XREFs of ?IsHardwareProtected@CDDASwapChain@@UEBA_NXZ @ 0x1800FC680
 * Callers:
 *     ?IsHardwareProtected@CDDASwapChain@@$4PPPPPPPM@A@EBA_NXZ @ 0x18010A970 (-IsHardwareProtected@CDDASwapChain@@$4PPPPPPPM@A@EBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CDDASwapChain::IsHardwareProtected(CDDASwapChain *this)
{
  return *((_BYTE *)this - 128);
}
