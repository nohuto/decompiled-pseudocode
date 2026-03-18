/*
 * XREFs of ?IsValid@CLegacySwapChain@@UEBAJXZ @ 0x1800C0778
 * Callers:
 *     ?IsValid@CLegacySwapChain@@$4PPPPPPPM@A@EBAJXZ @ 0x1800F17E0 (-IsValid@CLegacySwapChain@@$4PPPPPPPM@A@EBAJXZ.c)
 *     ?IsValid@CLegacySwapChain@@$4PPPPPPPM@BI@EBAJXZ @ 0x1800F1C80 (-IsValid@CLegacySwapChain@@$4PPPPPPPM@BI@EBAJXZ.c)
 *     ?IsValid@CLegacySwapChain@@$4PPPPPPPM@BKI@EBAJXZ @ 0x1800F2080 (-IsValid@CLegacySwapChain@@$4PPPPPPPM@BKI@EBAJXZ.c)
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
