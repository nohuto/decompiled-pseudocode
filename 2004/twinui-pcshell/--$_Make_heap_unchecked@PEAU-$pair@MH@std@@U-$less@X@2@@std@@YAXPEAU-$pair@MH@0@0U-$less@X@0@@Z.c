/*
 * XREFs of ??$_Make_heap_unchecked@PEAU?$pair@MH@std@@U?$less@X@2@@std@@YAXPEAU?$pair@MH@0@0U?$less@X@0@@Z @ 0x18044FDD8
 * Callers:
 *     ??$_Sort_unchecked@PEAU?$pair@MH@std@@U?$less@X@2@@std@@YAXPEAU?$pair@MH@0@0_JU?$less@X@0@@Z @ 0x180450370 (--$_Sort_unchecked@PEAU-$pair@MH@std@@U-$less@X@2@@std@@YAXPEAU-$pair@MH@0@0_JU-$less@X@0@@Z.c)
 * Callees:
 *     ??$_Pop_heap_hole_by_index@PEAU?$pair@MH@std@@U12@U?$less@X@2@@std@@YAXPEAU?$pair@MH@0@_J1$$QEAU10@U?$less@X@0@@Z @ 0x1804501F0 (--$_Pop_heap_hole_by_index@PEAU-$pair@MH@std@@U12@U-$less@X@2@@std@@YAXPEAU-$pair@MH@0@_J1$$QEAU.c)
 */

__int64 __fastcall std::_Make_heap_unchecked<std::pair<float,int> *,std::less<void>>(__int64 a1, __int64 a2, char a3)
{
  __int64 v4; // rsi
  __int64 i; // rdi
  __int64 result; // rax
  int v7; // [rsp+20h] [rbp-18h]
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  v4 = (a2 - a1) >> 3;
  for ( i = (a2 - a1) >> 4;
        i > 0;
        result = std::_Pop_heap_hole_by_index<std::pair<float,int> *,std::pair<float,int>,std::less<void>>(
                   a1,
                   i,
                   v4,
                   &v8,
                   v7) )
  {
    --i;
    LOBYTE(v7) = a3;
    v8 = *(_QWORD *)(a1 + 8 * i);
  }
  return result;
}
