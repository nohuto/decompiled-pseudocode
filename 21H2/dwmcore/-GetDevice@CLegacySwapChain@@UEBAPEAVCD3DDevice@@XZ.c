/*
 * XREFs of ?GetDevice@CLegacySwapChain@@UEBAPEAVCD3DDevice@@XZ @ 0x1800FC2E0
 * Callers:
 *     ?GetDevice@CLegacySwapChain@@$4PPPPPPPM@A@EBAPEAVCD3DDevice@@XZ @ 0x180108E50 (-GetDevice@CLegacySwapChain@@$4PPPPPPPM@A@EBAPEAVCD3DDevice@@XZ.c)
 *     ?GetDevice@CLegacySwapChain@@$4PPPPPPPM@BI@EBAPEAVCD3DDevice@@XZ @ 0x180109E50 (-GetDevice@CLegacySwapChain@@$4PPPPPPPM@BI@EBAPEAVCD3DDevice@@XZ.c)
 *     ?GetDevice@CLegacySwapChain@@$4PPPPPPPM@BKI@EBAPEAVCD3DDevice@@XZ @ 0x18010A470 (-GetDevice@CLegacySwapChain@@$4PPPPPPPM@BKI@EBAPEAVCD3DDevice@@XZ.c)
 * Callees:
 *     <none>
 */

struct CD3DDevice *__fastcall CLegacySwapChain::GetDevice(CLegacySwapChain *this)
{
  return (struct CD3DDevice *)*((_QWORD *)this - 36);
}
