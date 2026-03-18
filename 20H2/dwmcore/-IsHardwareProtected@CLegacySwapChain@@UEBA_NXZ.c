/*
 * XREFs of ?IsHardwareProtected@CLegacySwapChain@@UEBA_NXZ @ 0x1800DF1A8
 * Callers:
 *     ?IsHardwareProtected@CLegacySwapChain@@$4PPPPPPPM@A@EBA_NXZ @ 0x1800F17D0 (-IsHardwareProtected@CLegacySwapChain@@$4PPPPPPPM@A@EBA_NXZ.c)
 *     ?IsHardwareProtected@CLegacySwapChain@@$4PPPPPPPM@BI@EBA_NXZ @ 0x1800F1C60 (-IsHardwareProtected@CLegacySwapChain@@$4PPPPPPPM@BI@EBA_NXZ.c)
 *     ?IsHardwareProtected@CLegacySwapChain@@$4PPPPPPPM@BKI@EBA_NXZ @ 0x1800F2040 (-IsHardwareProtected@CLegacySwapChain@@$4PPPPPPPM@BKI@EBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CLegacySwapChain::IsHardwareProtected(CLegacySwapChain *this)
{
  return *((_BYTE *)this - 140);
}
