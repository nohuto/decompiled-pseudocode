/*
 * XREFs of ?SetFrontBufferRenderingOnNextFrame@CLegacySwapChain@@UEAAX_N@Z @ 0x1800DF1B8
 * Callers:
 *     ?SetFrontBufferRenderingOnNextFrame@CLegacySwapChain@@$4PPPPPPPM@A@EAAX_N@Z @ 0x1800F18D0 (-SetFrontBufferRenderingOnNextFrame@CLegacySwapChain@@$4PPPPPPPM@A@EAAX_N@Z.c)
 *     ?SetFrontBufferRenderingOnNextFrame@CLegacySwapChain@@$4PPPPPPPM@BI@EAAX_N@Z @ 0x1800F1D60 (-SetFrontBufferRenderingOnNextFrame@CLegacySwapChain@@$4PPPPPPPM@BI@EAAX_N@Z.c)
 *     ?SetFrontBufferRenderingOnNextFrame@CLegacySwapChain@@$4PPPPPPPM@BKI@EAAX_N@Z @ 0x1800F21B0 (-SetFrontBufferRenderingOnNextFrame@CLegacySwapChain@@$4PPPPPPPM@BKI@EAAX_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CLegacySwapChain::SetFrontBufferRenderingOnNextFrame(CLegacySwapChain *this, char a2)
{
  *((_BYTE *)this - 83) = a2;
}
