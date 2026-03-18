/*
 * XREFs of ?IsValid@CD2DGenericInk@@UEBAJXZ @ 0x18024B6B4
 * Callers:
 *     ?IsValid@CD2DGenericInk@@$4PPPPPPPM@A@EBAJXZ @ 0x1800F1E60 (-IsValid@CD2DGenericInk@@$4PPPPPPPM@A@EBAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CD2DGenericInk::IsValid(CD2DGenericInk *this)
{
  __int64 v1; // rcx
  __int64 v2; // rax

  if ( !*((_QWORD *)this - 4) )
    return 2291674892LL;
  v1 = *(_QWORD *)(*((_QWORD *)this - 11) + 24LL);
  v2 = v1 + 1112;
  if ( !v1 )
    v2 = 1128LL;
  return *(unsigned int *)v2;
}
