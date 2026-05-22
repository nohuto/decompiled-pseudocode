/*
 * XREFs of ??$_Pop_heap_hole_by_index@PEAW4_Button@@W41@U?$less@X@std@@@std@@YAXPEAW4_Button@@_J1$$QEAW41@U?$less@X@0@@Z @ 0x1801725E0
 * Callers:
 *     ??$_Make_heap_unchecked@PEAW4_Button@@U?$less@X@std@@@std@@YAXPEAW4_Button@@0U?$less@X@0@@Z @ 0x180172384 (--$_Make_heap_unchecked@PEAW4_Button@@U-$less@X@std@@@std@@YAXPEAW4_Button@@0U-$less@X@0@@Z.c)
 *     ??$_Sort_heap_unchecked@PEAW4_Button@@U?$less@X@std@@@std@@YAXPEAW4_Button@@0U?$less@X@0@@Z @ 0x180172688 (--$_Sort_heap_unchecked@PEAW4_Button@@U-$less@X@std@@@std@@YAXPEAW4_Button@@0U-$less@X@0@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Pop_heap_hole_by_index<enum _Button *,enum _Button,std::less<void>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _DWORD *a4)
{
  __int64 v5; // rbx
  __int64 v6; // r10
  __int64 i; // rcx
  __int64 v8; // rax
  int v9; // ecx
  __int64 result; // rax

  v5 = (a3 - 1) >> 1;
  v6 = a2;
  for ( i = a2; i < v5; v6 = i )
  {
    i = 2 * i + (*(_DWORD *)(a1 + 8 * i + 8) >= *(_DWORD *)(a1 + 8 * i + 4)) + 1LL;
    *(_DWORD *)(a1 + 4 * v6) = *(_DWORD *)(a1 + 4 * i);
  }
  if ( i == v5 && (a3 & 1) == 0 )
  {
    *(_DWORD *)(a1 + 4 * v6) = *(_DWORD *)(a1 + 4 * a3 - 4);
    v6 = a3 - 1;
  }
  if ( a2 < v6 )
  {
    do
    {
      v8 = (v6 - 1) >> 1;
      v9 = *(_DWORD *)(a1 + 4 * v8);
      if ( v9 >= *a4 )
        break;
      *(_DWORD *)(a1 + 4 * v6) = v9;
      v6 = (v6 - 1) >> 1;
    }
    while ( a2 < v8 );
  }
  result = (unsigned int)*a4;
  *(_DWORD *)(a1 + 4 * v6) = result;
  return result;
}
