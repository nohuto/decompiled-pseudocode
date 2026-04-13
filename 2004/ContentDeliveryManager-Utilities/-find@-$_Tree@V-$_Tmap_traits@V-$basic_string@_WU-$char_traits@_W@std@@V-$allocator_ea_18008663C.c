/*
 * XREFs of ?find@?$_Tree@V?$_Tmap_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@$0A@@std@@@std@@QEBA?AV?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@std@@@std@@@2@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@2@@Z @ 0x18008663C
 * Callers:
 *     ?MakeAppInstallService@Actions@CreativeFramework@@YA?AV?$shared_ptr@VIActionService@Actions@CreativeFramework@@@std@@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@4@@Z @ 0x180085EA0 (-MakeAppInstallService@Actions@CreativeFramework@@YA-AV-$shared_ptr@VIActionService@Actions@Crea.c)
 *     ??$GetOptionalParameter@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Actions@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@3@PEB_W@Z @ 0x180086B48 (--$GetOptionalParameter@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@@Action.c)
 *     ??$GetRequiredParameter@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Actions@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@3@PEB_W@Z @ 0x180086CA0 (--$GetRequiredParameter@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@@Action.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Tree<std::_Tmap_traits<std::wstring,std::wstring,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::wstring>>,0>>::find(
        __int64 a1,
        _QWORD *a2,
        __int64 *a3)
{
  _QWORD *v3; // rsi
  _QWORD *v5; // r10
  __int64 *v6; // rcx
  _QWORD *v7; // rax
  _WORD *v8; // r9
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rdx
  bool i; // zf
  int v12; // edx
  int v13; // eax
  _QWORD *v14; // rax
  unsigned __int64 v15; // r9
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rcx
  bool j; // zf
  int v19; // ecx
  int v20; // eax
  _QWORD *result; // rax

  v3 = *(_QWORD **)a1;
  v5 = *(_QWORD **)a1;
  v6 = *(__int64 **)(*(_QWORD *)a1 + 8LL);
  while ( !*((_BYTE *)v6 + 25) )
  {
    v7 = v6 + 4;
    if ( (unsigned __int64)a3[3] < 8 )
      v8 = a3;
    else
      v8 = (_WORD *)*a3;
    v9 = v6[6];
    if ( (unsigned __int64)v6[7] >= 8 )
      v7 = (_QWORD *)*v7;
    v10 = a3[2];
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
    v13 = v9 != a3[2];
    if ( v9 < a3[2] )
      v13 = -1;
    if ( v12 )
      v13 = v12;
    if ( v13 >= 0 )
    {
      v5 = v6;
      v6 = (__int64 *)*v6;
    }
    else
    {
      v6 = (__int64 *)v6[2];
    }
  }
  if ( v5 == v3 )
    goto LABEL_40;
  v14 = v5 + 4;
  v15 = v5[6];
  if ( v5[7] >= 8uLL )
    v14 = (_QWORD *)*v14;
  v16 = a3[2];
  if ( (unsigned __int64)a3[3] >= 8 )
    a3 = (__int64 *)*a3;
  v17 = v5[6];
  if ( v16 < v15 )
    v17 = v16;
  for ( j = v17 == 0; ; j = --v17 == 0 )
  {
    if ( j )
    {
      v19 = 0;
      goto LABEL_35;
    }
    if ( *(_WORD *)a3 != *(_WORD *)v14 )
      break;
    a3 = (__int64 *)((char *)a3 + 2);
    v14 = (_QWORD *)((char *)v14 + 2);
  }
  v19 = *(_WORD *)a3 < *(_WORD *)v14 ? -1 : 1;
LABEL_35:
  v20 = v16 != v15;
  if ( v16 < v15 )
    v20 = -1;
  if ( v19 )
    v20 = v19;
  if ( v20 < 0 )
LABEL_40:
    v5 = v3;
  result = a2;
  *a2 = v5;
  return result;
}
