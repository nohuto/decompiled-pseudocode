/*
 * XREFs of ?CheckSupportsConvertPresentToMPO@CLegacySwapChain@@UEBA_NXZ @ 0x180247BA8
 * Callers:
 *     ?CheckSupportsConvertPresentToMPO@CLegacySwapChain@@$4PPPPPPPM@A@EBA_NXZ @ 0x1800F1A60 (-CheckSupportsConvertPresentToMPO@CLegacySwapChain@@$4PPPPPPPM@A@EBA_NXZ.c)
 *     ?CheckSupportsConvertPresentToMPO@CLegacySwapChain@@$4PPPPPPPM@BKI@EBA_NXZ @ 0x1800F2200 (-CheckSupportsConvertPresentToMPO@CLegacySwapChain@@$4PPPPPPPM@BKI@EBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CLegacySwapChain::CheckSupportsConvertPresentToMPO(CLegacySwapChain *this)
{
  return *((_DWORD *)this - 41) >= 2;
}
