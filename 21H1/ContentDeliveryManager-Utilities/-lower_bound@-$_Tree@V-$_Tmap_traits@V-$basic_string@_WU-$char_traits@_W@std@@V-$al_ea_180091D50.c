/*
 * XREFs of ?lower_bound@?$_Tree@V?$_Tmap_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@std@@@std@@@2@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@2@@Z @ 0x180091D50
 * Callers:
 *     ?find@?$_Tree@V?$_Tmap_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@std@@@std@@@2@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@2@@Z @ 0x180091904 (-find@-$_Tree@V-$_Tmap_traits@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator_ea_180091904.c)
 *     ??A?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@std@@QEAAAEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@1@$$QEAV21@@Z @ 0x18009C164 (--A-$map@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@V12@U-$less@V-$basic_s.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Tree<std::_Tmap_traits<std::wstring,std::wstring,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::wstring>>,0>>::lower_bound(
        __int64 *a1,
        _QWORD *a2,
        __int64 a3)
{
  __int64 *v3; // r10
  __int64 *v6; // rcx
  _QWORD *v7; // rax
  _WORD *v8; // r8
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rdx
  bool i; // zf
  int v12; // edx
  int v13; // eax
  _QWORD *result; // rax

  v3 = (__int64 *)*a1;
  v6 = *(__int64 **)(*a1 + 8);
  while ( !*((_BYTE *)v6 + 25) )
  {
    v7 = v6 + 4;
    if ( *(_QWORD *)(a3 + 24) < 8uLL )
      v8 = (_WORD *)a3;
    else
      v8 = *(_WORD **)a3;
    v9 = v6[6];
    if ( (unsigned __int64)v6[7] >= 8 )
      v7 = (_QWORD *)*v7;
    v10 = *(_QWORD *)(a3 + 16);
    if ( v9 < v10 )
      v10 = v6[6];
    for ( i = v10 == 0; ; i = v10 == 0 )
    {
      if ( i )
      {
        v12 = 0;
        goto LABEL_14;
      }
      if ( *(_WORD *)v7 != *v8 )
        break;
      v7 = (_QWORD *)((char *)v7 + 2);
      ++v8;
      --v10;
    }
    v12 = *(_WORD *)v7 < *v8 ? -1 : 1;
LABEL_14:
    v13 = v9 != *(_QWORD *)(a3 + 16);
    if ( v9 < *(_QWORD *)(a3 + 16) )
      v13 = -1;
    if ( v12 )
      v13 = v12;
    if ( v13 >= 0 )
    {
      v3 = v6;
      v6 = (__int64 *)*v6;
    }
    else
    {
      v6 = (__int64 *)v6[2];
    }
  }
  result = a2;
  *a2 = v3;
  return result;
}
