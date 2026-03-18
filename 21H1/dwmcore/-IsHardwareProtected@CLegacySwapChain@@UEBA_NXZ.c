/*
 * XREFs of ?IsHardwareProtected@CLegacySwapChain@@UEBA_NXZ @ 0x1800DDAD8
 * Callers:
 *     ?IsHardwareProtected@CLegacySwapChain@@$4PPPPPPPM@A@EBA_NXZ @ 0x1800EEBF0 (-IsHardwareProtected@CLegacySwapChain@@$4PPPPPPPM@A@EBA_NXZ.c)
 *     ?IsHardwareProtected@CLegacySwapChain@@$4PPPPPPPM@BI@EBA_NXZ @ 0x1800EF080 (-IsHardwareProtected@CLegacySwapChain@@$4PPPPPPPM@BI@EBA_NXZ.c)
 *     ?IsHardwareProtected@CLegacySwapChain@@$4PPPPPPPM@BKI@EBA_NXZ @ 0x1800EF460 (-IsHardwareProtected@CLegacySwapChain@@$4PPPPPPPM@BKI@EBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CLegacySwapChain::IsHardwareProtected(CLegacySwapChain *this)
{
  return *((_BYTE *)this - 140);
}
