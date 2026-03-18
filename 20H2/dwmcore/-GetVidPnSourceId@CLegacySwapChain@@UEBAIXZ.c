/*
 * XREFs of ?GetVidPnSourceId@CLegacySwapChain@@UEBAIXZ @ 0x1800DF198
 * Callers:
 *     ?GetVidPnSourceId@CLegacySwapChain@@$4PPPPPPPM@A@EBAIXZ @ 0x1800F17A0 (-GetVidPnSourceId@CLegacySwapChain@@$4PPPPPPPM@A@EBAIXZ.c)
 *     ?GetVidPnSourceId@CLegacySwapChain@@$4PPPPPPPM@BI@EBAIXZ @ 0x1800F1C40 (-GetVidPnSourceId@CLegacySwapChain@@$4PPPPPPPM@BI@EBAIXZ.c)
 *     ?GetVidPnSourceId@CLegacySwapChain@@$4PPPPPPPM@BKI@EBAIXZ @ 0x1800F1FE0 (-GetVidPnSourceId@CLegacySwapChain@@$4PPPPPPPM@BKI@EBAIXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CLegacySwapChain::GetVidPnSourceId(CLegacySwapChain *this)
{
  return *((unsigned int *)this - 43);
}
