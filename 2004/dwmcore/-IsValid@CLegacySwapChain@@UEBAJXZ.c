/*
 * XREFs of ?IsValid@CLegacySwapChain@@UEBAJXZ @ 0x1800C0B68
 * Callers:
 *     ?IsValid@CLegacySwapChain@@$4PPPPPPPM@A@EBAJXZ @ 0x1800F1B90 (-IsValid@CLegacySwapChain@@$4PPPPPPPM@A@EBAJXZ.c)
 *     ?IsValid@CLegacySwapChain@@$4PPPPPPPM@BI@EBAJXZ @ 0x1800F2030 (-IsValid@CLegacySwapChain@@$4PPPPPPPM@BI@EBAJXZ.c)
 *     ?IsValid@CLegacySwapChain@@$4PPPPPPPM@BKI@EBAJXZ @ 0x1800F2430 (-IsValid@CLegacySwapChain@@$4PPPPPPPM@BKI@EBAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CLegacySwapChain::IsValid(CLegacySwapChain *this)
{
  if ( *((_QWORD *)this - 29) )
    return *(unsigned int *)(*((_QWORD *)this - 30) + 1128LL);
  else
    return 2291662989LL;
}
