/*
 * XREFs of ??$_Insertion_sort_unchecked@PEAEU?$less@X@std@@@std@@YAPEAEPEAEQEAEU?$less@X@0@@Z @ 0x1800A4CFC
 * Callers:
 *     ??$_Sort_unchecked@PEAEU?$less@X@std@@@std@@YAXPEAE0_JU?$less@X@0@@Z @ 0x1800A5A20 (--$_Sort_unchecked@PEAEU-$less@X@std@@@std@@YAXPEAE0_JU-$less@X@0@@Z.c)
 * Callees:
 *     memmove_0 @ 0x18004A697 (memmove_0.c)
 */

char *__fastcall std::_Insertion_sort_unchecked<unsigned char *,std::less<void>>(char *Src, char *a2)
{
  char *v4; // r14
  char *i; // rbx
  unsigned __int8 v6; // bp
  _BYTE *v7; // rcx
  char *j; // rax

  if ( Src != a2 )
  {
    v4 = Src + 1;
    for ( i = Src + 1; i != a2; ++i )
    {
      v6 = *i;
      v7 = i;
      if ( (unsigned __int8)*i >= (unsigned __int8)*Src )
      {
        for ( j = i; v6 < (unsigned __int8)*--j; v7 = j )
          *v7 = *j;
        *v7 = v6;
      }
      else
      {
        memmove_0(v4, Src, i - Src);
        *Src = v6;
      }
    }
  }
  return a2;
}
