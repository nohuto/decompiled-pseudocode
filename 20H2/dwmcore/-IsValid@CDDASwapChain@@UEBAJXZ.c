/*
 * XREFs of ?IsValid@CDDASwapChain@@UEBAJXZ @ 0x18024DAE4
 * Callers:
 *     ?IsValid@CDDASwapChain@@$4PPPPPPPM@A@EBAJXZ @ 0x1800F2260 (-IsValid@CDDASwapChain@@$4PPPPPPPM@A@EBAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDDASwapChain::IsValid(CDDASwapChain *this)
{
  __int64 v1; // rdx
  __int64 (__fastcall ***v2)(_QWORD); // rcx

  v1 = *((_QWORD *)this - 21);
  if ( !v1 )
    return 2291662989LL;
  v2 = (__int64 (__fastcall ***)(_QWORD))(v1 + 8 + *(int *)(*(_QWORD *)(v1 + 8) + 8LL));
  return (**v2)(v2);
}
