/*
 * XREFs of ?CheckSupportsConvertPresentToMPO@CLegacySwapChain@@UEBA_NXZ @ 0x18028B080
 * Callers:
 *     ?CheckSupportsConvertPresentToMPO@CLegacySwapChain@@$4PPPPPPPM@A@EBA_NXZ @ 0x180108D70 (-CheckSupportsConvertPresentToMPO@CLegacySwapChain@@$4PPPPPPPM@A@EBA_NXZ.c)
 *     ?CheckSupportsConvertPresentToMPO@CLegacySwapChain@@$4PPPPPPPM@BKI@EBA_NXZ @ 0x18010A3B0 (-CheckSupportsConvertPresentToMPO@CLegacySwapChain@@$4PPPPPPPM@BKI@EBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CLegacySwapChain::CheckSupportsConvertPresentToMPO(CLegacySwapChain *this)
{
  return *((_DWORD *)this - 41) >= 2;
}
