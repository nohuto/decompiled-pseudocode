/*
 * XREFs of ??$_Insertion_sort_unchecked@PEAW4_Button@@U?$less@X@std@@@std@@YAPEAW4_Button@@PEAW41@QEAW41@U?$less@X@0@@Z @ 0x1801727A0
 * Callers:
 *     ??$_Sort_unchecked@PEAW4_Button@@U?$less@X@std@@@std@@YAXPEAW4_Button@@0_JU?$less@X@0@@Z @ 0x180172BCC (--$_Sort_unchecked@PEAW4_Button@@U-$less@X@std@@@std@@YAXPEAW4_Button@@0_JU-$less@X@0@@Z.c)
 * Callees:
 *     memmove_0 @ 0x18004B267 (memmove_0.c)
 */

char *__fastcall std::_Insertion_sort_unchecked<enum _Button *,std::less<void>>(char *Src, char *a2)
{
  char *v4; // r14
  char *i; // rbx
  int v6; // ebp
  char *v7; // rcx
  char *j; // rax

  if ( Src != a2 )
  {
    v4 = Src + 4;
    for ( i = Src + 4; i != a2; i += 4 )
    {
      v6 = *(_DWORD *)i;
      v7 = i;
      if ( *(_DWORD *)i >= *(_DWORD *)Src )
      {
        for ( j = i; ; v7 = j )
        {
          j -= 4;
          if ( v6 >= *(_DWORD *)j )
            break;
          *(_DWORD *)v7 = *(_DWORD *)j;
        }
        *(_DWORD *)v7 = v6;
      }
      else
      {
        memmove_0(v4, Src, i - Src);
        *(_DWORD *)Src = v6;
      }
    }
  }
  return a2;
}
