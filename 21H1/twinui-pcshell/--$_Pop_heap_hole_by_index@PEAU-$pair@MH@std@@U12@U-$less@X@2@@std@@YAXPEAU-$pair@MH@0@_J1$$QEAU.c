/*
 * XREFs of ??$_Pop_heap_hole_by_index@PEAU?$pair@MH@std@@U12@U?$less@X@2@@std@@YAXPEAU?$pair@MH@0@_J1$$QEAU10@U?$less@X@0@@Z @ 0x18042C7A0
 * Callers:
 *     ??$_Make_heap_unchecked@PEAU?$pair@MH@std@@U?$less@X@2@@std@@YAXPEAU?$pair@MH@0@0U?$less@X@0@@Z @ 0x18042C388 (--$_Make_heap_unchecked@PEAU-$pair@MH@std@@U-$less@X@2@@std@@YAXPEAU-$pair@MH@0@0U-$less@X@0@@Z.c)
 *     ??$_Sort_heap_unchecked@PEAU?$pair@MH@std@@U?$less@X@2@@std@@YAXPEAU?$pair@MH@0@0U?$less@X@0@@Z @ 0x18042C894 (--$_Sort_heap_unchecked@PEAU-$pair@MH@std@@U-$less@X@2@@std@@YAXPEAU-$pair@MH@0@0U-$less@X@0@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Pop_heap_hole_by_index<std::pair<float,int> *,std::pair<float,int>,std::less<void>>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rdi
  __int64 v4; // r11
  __int64 i; // r10
  __int64 v6; // r10
  float v7; // xmm0_4
  float v8; // xmm1_4
  __int64 v9; // rax

  v3 = a2;
  v4 = (a3 - 1) >> 1;
  for ( i = a2; i < v4; a2 = i )
  {
    v6 = 2 * i;
    v7 = *(float *)(a1 + 8 * v6 + 16);
    v8 = *(float *)(a1 + 8 * v6 + 8);
    if ( v8 > v7 || v7 <= v8 && *(_DWORD *)(a1 + 8 * v6 + 20) < *(_DWORD *)(a1 + 8 * v6 + 12) )
      v9 = 1LL;
    else
      v9 = 2LL;
    i = v9 + v6;
    *(_DWORD *)(a1 + 8 * a2) = *(_DWORD *)(a1 + 8 * i);
    *(_DWORD *)(a1 + 8 * a2 + 4) = *(_DWORD *)(a1 + 8 * i + 4);
  }
  if ( i == v4 && (a3 & 1) == 0 )
  {
    *(_DWORD *)(a1 + 8 * a2) = *(_DWORD *)(a1 + 8 * a3 - 8);
    *(_DWORD *)(a1 + 8 * a2 + 4) = *(_DWORD *)(a1 + 8 * a3 - 4);
    a2 = a3 - 1;
  }
  return std::_Push_heap_by_index<std::pair<float,int> *,std::pair<float,int>,std::less<void>>(a1, a2, v3);
}
