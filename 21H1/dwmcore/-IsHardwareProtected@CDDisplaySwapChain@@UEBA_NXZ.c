/*
 * XREFs of ?IsHardwareProtected@CDDisplaySwapChain@@UEBA_NXZ @ 0x1800DD9F8
 * Callers:
 *     ?IsHardwareProtected@CDDisplaySwapChain@@$4PPPPPPPM@A@EBA_NXZ @ 0x1800EE750 (-IsHardwareProtected@CDDisplaySwapChain@@$4PPPPPPPM@A@EBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CDDisplaySwapChain::IsHardwareProtected(CDDisplaySwapChain *this)
{
  return *((_BYTE *)this - 192);
}
