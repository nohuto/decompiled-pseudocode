/*
 * XREFs of ?GetVBlankMultiplier@CLegacySwapChain@@UEBAIXZ @ 0x1800FC328
 * Callers:
 *     ?GetVBlankMultiplier@CLegacySwapChain@@$4PPPPPPPM@A@EBAIXZ @ 0x180108F90 (-GetVBlankMultiplier@CLegacySwapChain@@$4PPPPPPPM@A@EBAIXZ.c)
 *     ?GetVBlankMultiplier@CLegacySwapChain@@$4PPPPPPPM@BI@EBAIXZ @ 0x180109F90 (-GetVBlankMultiplier@CLegacySwapChain@@$4PPPPPPPM@BI@EBAIXZ.c)
 *     ?GetVBlankMultiplier@CLegacySwapChain@@$4PPPPPPPM@BKI@EBAIXZ @ 0x18010A5B0 (-GetVBlankMultiplier@CLegacySwapChain@@$4PPPPPPPM@BKI@EBAIXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CLegacySwapChain::GetVBlankMultiplier(CLegacySwapChain *this)
{
  return *((unsigned int *)this - 42);
}
