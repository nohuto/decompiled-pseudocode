/*
 * XREFs of ?GetVidPnSourceId@CLegacySwapChain@@UEBAIXZ @ 0x1800DDAC8
 * Callers:
 *     ?GetVidPnSourceId@CLegacySwapChain@@$4PPPPPPPM@A@EBAIXZ @ 0x1800EEBC0 (-GetVidPnSourceId@CLegacySwapChain@@$4PPPPPPPM@A@EBAIXZ.c)
 *     ?GetVidPnSourceId@CLegacySwapChain@@$4PPPPPPPM@BI@EBAIXZ @ 0x1800EF060 (-GetVidPnSourceId@CLegacySwapChain@@$4PPPPPPPM@BI@EBAIXZ.c)
 *     ?GetVidPnSourceId@CLegacySwapChain@@$4PPPPPPPM@BKI@EBAIXZ @ 0x1800EF400 (-GetVidPnSourceId@CLegacySwapChain@@$4PPPPPPPM@BKI@EBAIXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CLegacySwapChain::GetVidPnSourceId(CLegacySwapChain *this)
{
  return *((unsigned int *)this - 43);
}
