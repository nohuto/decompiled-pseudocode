/*
 * XREFs of ?GetDisplayAdapterLuid@CLegacySwapChain@@UEBA?AU_LUID@@XZ @ 0x1800FC2F0
 * Callers:
 *     ?GetDisplayAdapterLuid@CLegacySwapChain@@$4PPPPPPPM@A@EBA?AU_LUID@@XZ @ 0x180108E90 (-GetDisplayAdapterLuid@CLegacySwapChain@@$4PPPPPPPM@A@EBA-AU_LUID@@XZ.c)
 *     ?GetDisplayAdapterLuid@CLegacySwapChain@@$4PPPPPPPM@BI@EBA?AU_LUID@@XZ @ 0x180109E90 (-GetDisplayAdapterLuid@CLegacySwapChain@@$4PPPPPPPM@BI@EBA-AU_LUID@@XZ.c)
 *     ?GetDisplayAdapterLuid@CLegacySwapChain@@$4PPPPPPPM@BKI@EBA?AU_LUID@@XZ @ 0x18010A4B0 (-GetDisplayAdapterLuid@CLegacySwapChain@@$4PPPPPPPM@BKI@EBA-AU_LUID@@XZ.c)
 * Callees:
 *     <none>
 */

struct _LUID __fastcall CLegacySwapChain::GetDisplayAdapterLuid(CLegacySwapChain *this, _QWORD *a2)
{
  *a2 = *((_QWORD *)this - 29);
  return (struct _LUID)a2;
}
