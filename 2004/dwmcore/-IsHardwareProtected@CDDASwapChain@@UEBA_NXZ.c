/*
 * XREFs of ?IsHardwareProtected@CDDASwapChain@@UEBA_NXZ @ 0x1800DF028
 * Callers:
 *     ?IsHardwareProtected@CDDASwapChain@@$4PPPPPPPM@A@EBA_NXZ @ 0x1800F2600 (-IsHardwareProtected@CDDASwapChain@@$4PPPPPPPM@A@EBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CDDASwapChain::IsHardwareProtected(CDDASwapChain *this)
{
  return *((_BYTE *)this - 128);
}
