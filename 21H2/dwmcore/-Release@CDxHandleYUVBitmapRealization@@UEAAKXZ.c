/*
 * XREFs of ?Release@CDxHandleYUVBitmapRealization@@UEAAKXZ @ 0x18007E4A0
 * Callers:
 *     ?Release@CD2DResource@@$4PPPPPPPM@FI@EAAKXZ @ 0x180108270 (-Release@CD2DResource@@$4PPPPPPPM@FI@EAAKXZ.c)
 *     ?Release@CDummyRemotingSwapChain@@$4PPPPPPPM@BAA@EAAKXZ @ 0x180108BF0 (-Release@CDummyRemotingSwapChain@@$4PPPPPPPM@BAA@EAAKXZ.c)
 *     ?Release@CLegacySwapChain@@$4PPPPPPPM@BFA@EAAKXZ @ 0x180109130 (-Release@CLegacySwapChain@@$4PPPPPPPM@BFA@EAAKXZ.c)
 *     ?Release@CD2DResource@@$4PPPPPPPM@GI@EAAKXZ @ 0x1801093B0 (-Release@CD2DResource@@$4PPPPPPPM@GI@EAAKXZ.c)
 *     ?Release@CD2DResource@@$4PPPPPPPM@GA@EAAKXZ @ 0x1801094B0 (-Release@CD2DResource@@$4PPPPPPPM@GA@EAAKXZ.c)
 *     ?Release@CLegacyStereoSwapChain@@$4PPPPPPPM@BGI@EAAKXZ @ 0x18010A150 (-Release@CLegacyStereoSwapChain@@$4PPPPPPPM@BGI@EAAKXZ.c)
 *     ?Release@CConversionSwapChain@@$4PPPPPPPM@CPI@EAAKXZ @ 0x18010A770 (-Release@CConversionSwapChain@@$4PPPPPPPM@CPI@EAAKXZ.c)
 *     ?Release@CHolographicClient@@WBA@EAAKXZ @ 0x18010AD50 (-Release@CHolographicClient@@WBA@EAAKXZ.c)
 *     ?Release@CBitmapRealization@@$4PPPPPPPM@BFI@EAAKXZ @ 0x18010B370 (-Release@CBitmapRealization@@$4PPPPPPPM@BFI@EAAKXZ.c)
 *     ?Release@CGDISectionBitmapRealization@@$4PPPPPPPM@BMA@EAAKXZ @ 0x18010B390 (-Release@CGDISectionBitmapRealization@@$4PPPPPPPM@BMA@EAAKXZ.c)
 *     ?Release@CSectionBitmapRealization@@WBFA@EAAKXZ @ 0x18010B3B0 (-Release@CSectionBitmapRealization@@WBFA@EAAKXZ.c)
 *     ?Release@CSectionBitmapRealization@@$4PPPPPPPM@BKA@EAAKXZ @ 0x18010B3D0 (-Release@CSectionBitmapRealization@@$4PPPPPPPM@BKA@EAAKXZ.c)
 *     ?Release@CWICBitmapRealization@@WGA@EAAKXZ @ 0x18010B490 (-Release@CWICBitmapRealization@@WGA@EAAKXZ.c)
 *     ?Release@CColorKeyBitmapRealization@@WIA@EAAKXZ @ 0x18010B4B0 (-Release@CColorKeyBitmapRealization@@WIA@EAAKXZ.c)
 *     ?Release@CGDISectionBitmapRealization@@$4PPPPPPPM@BOA@EAAKXZ @ 0x18010B650 (-Release@CGDISectionBitmapRealization@@$4PPPPPPPM@BOA@EAAKXZ.c)
 *     ?Release@CWICBitmapRealization@@WHI@EAAKXZ @ 0x18010BC10 (-Release@CWICBitmapRealization@@WHI@EAAKXZ.c)
 *     ?Release@CDxHandleAdvancedDirectFlipBitmapRealization@@$4PPPPPPPM@BNI@EAAKXZ @ 0x18010C110 (-Release@CDxHandleAdvancedDirectFlipBitmapRealization@@$4PPPPPPPM@BNI@EAAKXZ.c)
 *     ?Release@CDxHandleYUVBitmapRealization@@$4PPPPPPPM@BKI@EAAKXZ @ 0x18010C870 (-Release@CDxHandleYUVBitmapRealization@@$4PPPPPPPM@BKI@EAAKXZ.c)
 *     ?Release@CStereoRenderTargetBitmap@@$4PPPPPPPM@MI@EAAKXZ @ 0x18010D030 (-Release@CStereoRenderTargetBitmap@@$4PPPPPPPM@MI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CDxHandleYUVBitmapRealization::Release(CDxHandleYUVBitmapRealization *this)
{
  return CMILRefCountBaseT<IUnknown>::InternalRelease(this);
}
