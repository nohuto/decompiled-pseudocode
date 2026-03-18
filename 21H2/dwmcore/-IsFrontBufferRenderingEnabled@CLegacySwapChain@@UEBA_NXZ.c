/*
 * XREFs of ?IsFrontBufferRenderingEnabled@CLegacySwapChain@@UEBA_NXZ @ 0x18028B65C
 * Callers:
 *     ?IsFrontBufferRenderingEnabled@CLegacySwapChain@@$4PPPPPPPM@A@EBA_NXZ @ 0x180109030 (-IsFrontBufferRenderingEnabled@CLegacySwapChain@@$4PPPPPPPM@A@EBA_NXZ.c)
 *     ?IsFrontBufferRenderingEnabled@CLegacySwapChain@@$4PPPPPPPM@BI@EBA_NXZ @ 0x18010A030 (-IsFrontBufferRenderingEnabled@CLegacySwapChain@@$4PPPPPPPM@BI@EBA_NXZ.c)
 *     ?IsFrontBufferRenderingEnabled@CLegacySwapChain@@$4PPPPPPPM@BKI@EBA_NXZ @ 0x18010A650 (-IsFrontBufferRenderingEnabled@CLegacySwapChain@@$4PPPPPPPM@BKI@EBA_NXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall CLegacySwapChain::IsFrontBufferRenderingEnabled(CLegacySwapChain *this)
{
  char result; // al

  result = 0;
  if ( *((_BYTE *)this - 83) || *((_DWORD *)this - 46) == 2 )
    return 1;
  return result;
}
