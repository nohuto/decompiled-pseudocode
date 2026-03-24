/*
 * XREFs of ?GetAdapterLuid@CLegacySwapChain@@UEBA?AU_LUID@@XZ @ 0x1800E35A0
 * Callers:
 *     ?GetAdapterLuid@CLegacySwapChain@@$4PPPPPPPM@A@EBA?AU_LUID@@XZ @ 0x1800F74F0 (-GetAdapterLuid@CLegacySwapChain@@$4PPPPPPPM@A@EBA-AU_LUID@@XZ.c)
 *     ?GetAdapterLuid@CLegacySwapChain@@$4PPPPPPPM@BI@EBA?AU_LUID@@XZ @ 0x1800F7990 (-GetAdapterLuid@CLegacySwapChain@@$4PPPPPPPM@BI@EBA-AU_LUID@@XZ.c)
 *     ?GetAdapterLuid@CLegacySwapChain@@$4PPPPPPPM@BKI@EBA?AU_LUID@@XZ @ 0x1800F7CB0 (-GetAdapterLuid@CLegacySwapChain@@$4PPPPPPPM@BKI@EBA-AU_LUID@@XZ.c)
 * Callees:
 *     <none>
 */

struct _LUID __fastcall CLegacySwapChain::GetAdapterLuid(CLegacySwapChain *this, _QWORD *a2)
{
  *a2 = *((_QWORD *)this - 20);
  return (struct _LUID)a2;
}
