/*
 * XREFs of ?SetFrontBufferRenderingOnNextFrame@CLegacySwapChain@@UEAAX_N@Z @ 0x1800DDAE8
 * Callers:
 *     ?SetFrontBufferRenderingOnNextFrame@CLegacySwapChain@@$4PPPPPPPM@A@EAAX_N@Z @ 0x1800EECF0 (-SetFrontBufferRenderingOnNextFrame@CLegacySwapChain@@$4PPPPPPPM@A@EAAX_N@Z.c)
 *     ?SetFrontBufferRenderingOnNextFrame@CLegacySwapChain@@$4PPPPPPPM@BI@EAAX_N@Z @ 0x1800EF180 (-SetFrontBufferRenderingOnNextFrame@CLegacySwapChain@@$4PPPPPPPM@BI@EAAX_N@Z.c)
 *     ?SetFrontBufferRenderingOnNextFrame@CLegacySwapChain@@$4PPPPPPPM@BKI@EAAX_N@Z @ 0x1800EF5D0 (-SetFrontBufferRenderingOnNextFrame@CLegacySwapChain@@$4PPPPPPPM@BKI@EAAX_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CLegacySwapChain::SetFrontBufferRenderingOnNextFrame(CLegacySwapChain *this, char a2)
{
  *((_BYTE *)this - 83) = a2;
}
