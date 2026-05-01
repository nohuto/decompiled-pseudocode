/*
 * XREFs of ??$_Sort_heap_unchecked@PEAU?$pair@MH@std@@U?$less@X@2@@std@@YAXPEAU?$pair@MH@0@0U?$less@X@0@@Z @ 0x18042C894
 * Callers:
 *     ??$_Sort_unchecked@PEAU?$pair@MH@std@@U?$less@X@2@@std@@YAXPEAU?$pair@MH@0@0_JU?$less@X@0@@Z @ 0x18042C920 (--$_Sort_unchecked@PEAU-$pair@MH@std@@U-$less@X@2@@std@@YAXPEAU-$pair@MH@0@0_JU-$less@X@0@@Z.c)
 * Callees:
 *     ??$_Pop_heap_hole_by_index@PEAU?$pair@MH@std@@U12@U?$less@X@2@@std@@YAXPEAU?$pair@MH@0@_J1$$QEAU10@U?$less@X@0@@Z @ 0x18042C7A0 (--$_Pop_heap_hole_by_index@PEAU-$pair@MH@std@@U12@U-$less@X@2@@std@@YAXPEAU-$pair@MH@0@_J1$$QEAU.c)
 */

__int64 __fastcall std::_Sort_heap_unchecked<std::pair<float,int> *,std::less<void>>(char *a1, __int64 a2)
{
  __int64 result; // rax
  char *v3; // rdi
  __int64 v4; // rsi

  result = (a2 - (__int64)a1) >> 3;
  if ( result >= 2 )
  {
    v3 = (char *)(a2 - 8);
    v4 = 8LL - (_QWORD)a1;
    do
    {
      *(_DWORD *)v3 = *(_DWORD *)a1;
      *((_DWORD *)v3 + 1) = *((_DWORD *)a1 + 1);
      std::_Pop_heap_hole_by_index<std::pair<float,int> *,std::pair<float,int>,std::less<void>>(
        (__int64)a1,
        0LL,
        (v3 - a1) >> 3);
      v3 -= 8;
      result = (__int64)&v3[v4] >> 3;
    }
    while ( result >= 2 );
  }
  return result;
}
