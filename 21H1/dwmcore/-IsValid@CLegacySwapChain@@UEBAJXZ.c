/*
 * XREFs of ?IsValid@CLegacySwapChain@@UEBAJXZ @ 0x1800BB428
 * Callers:
 *     ?IsValid@CLegacySwapChain@@$4PPPPPPPM@A@EBAJXZ @ 0x1800EEC00 (-IsValid@CLegacySwapChain@@$4PPPPPPPM@A@EBAJXZ.c)
 *     ?IsValid@CLegacySwapChain@@$4PPPPPPPM@BI@EBAJXZ @ 0x1800EF0A0 (-IsValid@CLegacySwapChain@@$4PPPPPPPM@BI@EBAJXZ.c)
 *     ?IsValid@CLegacySwapChain@@$4PPPPPPPM@BKI@EBAJXZ @ 0x1800EF4A0 (-IsValid@CLegacySwapChain@@$4PPPPPPPM@BKI@EBAJXZ.c)
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
