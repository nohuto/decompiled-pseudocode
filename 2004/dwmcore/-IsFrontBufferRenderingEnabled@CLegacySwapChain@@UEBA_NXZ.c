/*
 * XREFs of ?IsFrontBufferRenderingEnabled@CLegacySwapChain@@UEBA_NXZ @ 0x1802482B0
 * Callers:
 *     ?IsFrontBufferRenderingEnabled@CLegacySwapChain@@$4PPPPPPPM@A@EBA_NXZ @ 0x1800F1B70 (-IsFrontBufferRenderingEnabled@CLegacySwapChain@@$4PPPPPPPM@A@EBA_NXZ.c)
 *     ?IsFrontBufferRenderingEnabled@CLegacySwapChain@@$4PPPPPPPM@BI@EBA_NXZ @ 0x1800F2000 (-IsFrontBufferRenderingEnabled@CLegacySwapChain@@$4PPPPPPPM@BI@EBA_NXZ.c)
 *     ?IsFrontBufferRenderingEnabled@CLegacySwapChain@@$4PPPPPPPM@BKI@EBA_NXZ @ 0x1800F23D0 (-IsFrontBufferRenderingEnabled@CLegacySwapChain@@$4PPPPPPPM@BKI@EBA_NXZ.c)
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
