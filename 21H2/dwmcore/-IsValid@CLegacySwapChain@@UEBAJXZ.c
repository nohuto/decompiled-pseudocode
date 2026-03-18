/*
 * XREFs of ?IsValid@CLegacySwapChain@@UEBAJXZ @ 0x1800DB368
 * Callers:
 *     ?IsValid@CLegacySwapChain@@$4PPPPPPPM@A@EBAJXZ @ 0x180109070 (-IsValid@CLegacySwapChain@@$4PPPPPPPM@A@EBAJXZ.c)
 *     ?IsValid@CLegacySwapChain@@$4PPPPPPPM@BI@EBAJXZ @ 0x18010A090 (-IsValid@CLegacySwapChain@@$4PPPPPPPM@BI@EBAJXZ.c)
 *     ?IsValid@CLegacySwapChain@@$4PPPPPPPM@BKI@EBAJXZ @ 0x18010A6B0 (-IsValid@CLegacySwapChain@@$4PPPPPPPM@BKI@EBAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CLegacySwapChain::IsValid(CLegacySwapChain *this)
{
  if ( *((_QWORD *)this - 35) )
    return *(unsigned int *)(*((_QWORD *)this - 36) + 1088LL);
  else
    return 2291662989LL;
}
