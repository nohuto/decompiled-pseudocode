/*
 * XREFs of ??$_Range_construct_or_tidy@PEBU?$pair@G_N@std@@@?$vector@U?$pair@G_N@std@@V?$allocator@U?$pair@G_N@std@@@2@@std@@AEAAXPEBU?$pair@G_N@1@0Uforward_iterator_tag@1@@Z @ 0x180026134
 * Callers:
 *     ??0?$vector@U?$pair@G_N@std@@V?$allocator@U?$pair@G_N@std@@@2@@std@@QEAA@V?$initializer_list@U?$pair@G_N@std@@@1@AEBV?$allocator@U?$pair@G_N@std@@@1@@Z @ 0x180026228 (--0-$vector@U-$pair@G_N@std@@V-$allocator@U-$pair@G_N@std@@@2@@std@@QEAA@V-$initializer_list@U-$.c)
 * Callees:
 *     ?_Buy_raw@?$vector@U?$pair@G_N@std@@V?$allocator@U?$pair@G_N@std@@@2@@std@@AEAAX_K@Z @ 0x1800261D4 (-_Buy_raw@-$vector@U-$pair@G_N@std@@V-$allocator@U-$pair@G_N@std@@@2@@std@@AEAAX_K@Z.c)
 */

__int64 __fastcall std::vector<std::pair<unsigned short,bool>>::_Range_construct_or_tidy<std::pair<unsigned short,bool> const *>(
        __int64 a1,
        unsigned int *a2,
        unsigned __int64 a3)
{
  unsigned int *v3; // rdi
  unsigned __int64 v4; // rsi
  __int64 v5; // rbx
  unsigned __int64 v7; // rdx
  __int64 result; // rax
  _DWORD *v9; // rcx
  unsigned __int64 v10; // rsi

  v3 = a2;
  v4 = a3 - (_QWORD)a2;
  v5 = 0LL;
  v7 = (__int64)(a3 - (_QWORD)a2) >> 2;
  if ( v7 )
  {
    if ( v7 > 0x3FFFFFFFFFFFFFFFLL )
      std::_Xlength_error("vector<T> too long");
    result = std::vector<std::pair<unsigned short,bool>>::_Buy_raw(&xmmword_180208C40);
    v9 = (_DWORD *)xmmword_180208C40;
    v10 = (v4 + 3) >> 2;
    if ( (unsigned __int64)v3 > a3 )
      v10 = 0LL;
    if ( v10 )
    {
      do
      {
        result = *v3;
        ++v5;
        *v9 = result;
        ++v3;
        ++v9;
      }
      while ( v5 != v10 );
    }
    *((_QWORD *)&xmmword_180208C40 + 1) = v9;
  }
  return result;
}
