/*
 * XREFs of ?IsFrontBufferRenderingEnabled@CLegacySwapChain@@UEBA_NXZ @ 0x18024AD38
 * Callers:
 *     ?IsFrontBufferRenderingEnabled@CLegacySwapChain@@$4PPPPPPPM@A@EBA_NXZ @ 0x1800EEBE0 (-IsFrontBufferRenderingEnabled@CLegacySwapChain@@$4PPPPPPPM@A@EBA_NXZ.c)
 *     ?IsFrontBufferRenderingEnabled@CLegacySwapChain@@$4PPPPPPPM@BI@EBA_NXZ @ 0x1800EF070 (-IsFrontBufferRenderingEnabled@CLegacySwapChain@@$4PPPPPPPM@BI@EBA_NXZ.c)
 *     ?IsFrontBufferRenderingEnabled@CLegacySwapChain@@$4PPPPPPPM@BKI@EBA_NXZ @ 0x1800EF440 (-IsFrontBufferRenderingEnabled@CLegacySwapChain@@$4PPPPPPPM@BKI@EBA_NXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall CLegacySwapChain::IsFrontBufferRenderingEnabled(CLegacySwapChain *this)
{
  char result; // al

  result = 0;
  if ( *((_BYTE *)this - 84) || *((_DWORD *)this - 42) == 2 )
    return 1;
  return result;
}
