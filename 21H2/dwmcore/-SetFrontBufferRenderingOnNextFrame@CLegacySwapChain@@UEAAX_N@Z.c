/*
 * XREFs of ?SetFrontBufferRenderingOnNextFrame@CLegacySwapChain@@UEAAX_N@Z @ 0x1800FC358
 * Callers:
 *     ?SetFrontBufferRenderingOnNextFrame@CLegacySwapChain@@$4PPPPPPPM@A@EAAX_N@Z @ 0x1801091D0 (-SetFrontBufferRenderingOnNextFrame@CLegacySwapChain@@$4PPPPPPPM@A@EAAX_N@Z.c)
 *     ?SetFrontBufferRenderingOnNextFrame@CLegacySwapChain@@$4PPPPPPPM@BI@EAAX_N@Z @ 0x18010A1F0 (-SetFrontBufferRenderingOnNextFrame@CLegacySwapChain@@$4PPPPPPPM@BI@EAAX_N@Z.c)
 *     ?SetFrontBufferRenderingOnNextFrame@CLegacySwapChain@@$4PPPPPPPM@BKI@EAAX_N@Z @ 0x18010A810 (-SetFrontBufferRenderingOnNextFrame@CLegacySwapChain@@$4PPPPPPPM@BKI@EAAX_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CLegacySwapChain::SetFrontBufferRenderingOnNextFrame(CLegacySwapChain *this, char a2)
{
  *((_BYTE *)this - 82) = a2;
}
