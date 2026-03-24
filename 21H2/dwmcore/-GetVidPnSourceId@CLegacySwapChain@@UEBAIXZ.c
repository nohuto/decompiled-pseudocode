/*
 * XREFs of ?GetVidPnSourceId@CLegacySwapChain@@UEBAIXZ @ 0x1800E35E8
 * Callers:
 *     ?GetVidPnSourceId@CLegacySwapChain@@$4PPPPPPPM@A@EBAIXZ @ 0x1800F75B0 (-GetVidPnSourceId@CLegacySwapChain@@$4PPPPPPPM@A@EBAIXZ.c)
 *     ?GetVidPnSourceId@CLegacySwapChain@@$4PPPPPPPM@BI@EBAIXZ @ 0x1800F7A50 (-GetVidPnSourceId@CLegacySwapChain@@$4PPPPPPPM@BI@EBAIXZ.c)
 *     ?GetVidPnSourceId@CLegacySwapChain@@$4PPPPPPPM@BKI@EBAIXZ @ 0x1800F7DF0 (-GetVidPnSourceId@CLegacySwapChain@@$4PPPPPPPM@BKI@EBAIXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CLegacySwapChain::GetVidPnSourceId(CLegacySwapChain *this)
{
  return *((unsigned int *)this - 43);
}
