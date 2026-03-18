/*
 * XREFs of ?GetDevice@CLegacySwapChain@@UEBAPEAVCD3DDevice@@XZ @ 0x1800DDA98
 * Callers:
 *     ?GetDevice@CLegacySwapChain@@$4PPPPPPPM@A@EBAPEAVCD3DDevice@@XZ @ 0x1800EEB40 (-GetDevice@CLegacySwapChain@@$4PPPPPPPM@A@EBAPEAVCD3DDevice@@XZ.c)
 *     ?GetDevice@CLegacySwapChain@@$4PPPPPPPM@BI@EBAPEAVCD3DDevice@@XZ @ 0x1800EEFE0 (-GetDevice@CLegacySwapChain@@$4PPPPPPPM@BI@EBAPEAVCD3DDevice@@XZ.c)
 *     ?GetDevice@CLegacySwapChain@@$4PPPPPPPM@BKI@EBAPEAVCD3DDevice@@XZ @ 0x1800EF320 (-GetDevice@CLegacySwapChain@@$4PPPPPPPM@BKI@EBAPEAVCD3DDevice@@XZ.c)
 * Callees:
 *     <none>
 */

struct CD3DDevice *__fastcall CLegacySwapChain::GetDevice(CLegacySwapChain *this)
{
  return (struct CD3DDevice *)*((_QWORD *)this - 30);
}
