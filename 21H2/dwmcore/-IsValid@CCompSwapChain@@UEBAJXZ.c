/*
 * XREFs of ?IsValid@CCompSwapChain@@UEBAJXZ @ 0x18028F1E0
 * Callers:
 *     ?IsValid@CCompSwapChain@@$4PPPPPPPM@A@EBAJXZ @ 0x180109610 (-IsValid@CCompSwapChain@@$4PPPPPPPM@A@EBAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompSwapChain::IsValid(CCompSwapChain *this)
{
  if ( *((_QWORD *)this - 42) )
    return *(unsigned int *)(*((_QWORD *)this - 45) + 1088LL);
  else
    return 2291662989LL;
}
