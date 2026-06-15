/*
 * XREFs of ?erase@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@@2@$0A@@std@@@std@@QEAA_KAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@@Z @ 0x18002F030
 * Callers:
 *     ?ReleaseEndpointVolumeReference@CEndpointVolumeStateManager@@UEAAJPEBGAEA_N1AEAM11@Z @ 0x18002EC60 (-ReleaseEndpointVolumeReference@CEndpointVolumeStateManager@@UEAAJPEBGAEA_N1AEAM11@Z.c)
 * Callees:
 *     ?erase@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@@std@@@std@@@2@@Z @ 0x18002F510 (-erase@-$_Hash@V-$_Umap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@_ea_18002F510.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18002F68C (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@.c)
 *     ??$_Fill_unchecked@PEAV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@@std@@@std@@@std@@V12@@std@@YAXPEAV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@@std@@@std@@@0@0AEBV10@@Z @ 0x18002F844 (--$_Fill_unchecked@PEAV-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$C.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<std::wstring,std::unique_ptr<CEndpointVolumeState>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,std::unique_ptr<CEndpointVolumeState>>>,0>>::erase(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 v3; // r14
  _QWORD *v5; // r9
  unsigned __int16 *v6; // rcx
  __int64 i; // r8
  __int64 v8; // rax
  __int64 v9; // r15
  __int64 v10; // rax
  unsigned __int16 *v11; // r8
  __int64 v12; // r12
  __int64 v13; // rdi
  unsigned __int16 *v14; // r13
  unsigned __int16 *j; // rbx
  unsigned __int16 *v16; // rax
  char *v17; // r9
  __int64 v18; // rdx
  signed __int64 v19; // r9
  unsigned __int16 v20; // ax
  int v21; // eax
  unsigned __int16 *v22; // rdi
  unsigned __int16 *v23; // rax
  char *v24; // rdx
  char *v25; // r9
  __int64 v26; // rsi
  signed __int64 v27; // r9
  unsigned __int16 v28; // ax
  int v29; // eax
  __int64 v30; // rsi
  unsigned __int16 *k; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  unsigned __int16 *v34; // r8
  __int64 v36; // [rsp+50h] [rbp+8h] BYREF

  v3 = a2[2];
  v5 = a2;
  if ( a2[3] >= 8uLL )
    v5 = (_QWORD *)*a2;
  v6 = 0LL;
  for ( i = 0xCBF29CE484222325uLL; (unsigned __int64)v6 < 2 * v3; i = 0x100000001B3LL * (v8 ^ i) )
  {
    v8 = *((unsigned __int8 *)v5 + (_QWORD)v6);
    v6 = (unsigned __int16 *)((char *)v6 + 1);
  }
  v9 = a1[3];
  v10 = i & a1[6];
  v11 = (unsigned __int16 *)a1[1];
  v12 = 2 * v10;
  v13 = 2 * v10;
  v14 = *(unsigned __int16 **)(v9 + 16 * v10);
  for ( j = v14; ; j = *(unsigned __int16 **)j )
  {
    if ( v14 == v11 )
      v16 = (unsigned __int16 *)a1[1];
    else
      v16 = **(unsigned __int16 ***)(v9 + 8 * v13 + 8);
    if ( j == v16 )
      goto LABEL_42;
    v6 = (unsigned __int16 *)a2;
    if ( a2[3] >= 8uLL )
      v6 = (unsigned __int16 *)*a2;
    v17 = (char *)(j + 8);
    if ( *((_QWORD *)j + 5) >= 8uLL )
      v17 = (char *)*((_QWORD *)j + 2);
    v18 = *((_QWORD *)j + 4);
    if ( v18 == v3 )
    {
      if ( v18 )
      {
        v19 = v17 - (char *)v6;
        while ( 1 )
        {
          v20 = *(unsigned __int16 *)((char *)v6 + v19);
          if ( v20 != *v6 )
            break;
          ++v6;
          if ( !--v18 )
            goto LABEL_19;
        }
        v21 = v20 < *v6 ? -1 : 1;
      }
      else
      {
LABEL_19:
        v21 = 0;
      }
      if ( !v21 )
        break;
    }
  }
  v6 = j;
  v22 = j;
  while ( 1 )
  {
    v23 = v14 == v11 ? (unsigned __int16 *)a1[1] : **(unsigned __int16 ***)(v9 + 8 * v12 + 8);
    if ( j == v23 )
      break;
    v24 = (char *)(j + 8);
    if ( *((_QWORD *)j + 5) >= 8uLL )
      v24 = (char *)*((_QWORD *)j + 2);
    v25 = (char *)a2;
    if ( a2[3] >= 8uLL )
      v25 = (char *)*a2;
    if ( v3 != *((_QWORD *)j + 4) )
      break;
    v26 = v3;
    if ( v3 )
    {
      v27 = v25 - v24;
      while ( 1 )
      {
        v28 = *(_WORD *)&v24[v27];
        if ( v28 != *(_WORD *)v24 )
          break;
        v24 += 2;
        if ( !--v26 )
          goto LABEL_37;
      }
      v29 = v28 < *(_WORD *)v24 ? -1 : 1;
    }
    else
    {
LABEL_37:
      v29 = 0;
    }
    if ( v29 )
      break;
    j = *(unsigned __int16 **)j;
  }
  if ( v6 == j )
  {
LABEL_42:
    v22 = (unsigned __int16 *)a1[1];
    j = v22;
  }
  v30 = 0LL;
  for ( k = v22; k != j; ++v30 )
    k = *(unsigned __int16 **)k;
  if ( v22 == *(unsigned __int16 **)v11 && j == v11 )
  {
    std::_List_node<std::pair<std::wstring const,std::unique_ptr<CEndpointVolumeState>>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<std::wstring const,std::unique_ptr<CEndpointVolumeState>>,void *>>>(
      v6,
      a1[1]);
    *(_QWORD *)a1[1] = a1[1];
    *(_QWORD *)(a1[1] + 8LL) = a1[1];
    a1[2] = 0LL;
    v32 = a1[4];
    v33 = a1[3];
    v36 = a1[1];
    std::_Fill_unchecked<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::wstring const,std::unique_ptr<CEndpointVolumeState>>>>> *,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::wstring const,std::unique_ptr<CEndpointVolumeState>>>>>>(
      v33,
      v32,
      &v36);
  }
  else
  {
    while ( v22 != j )
    {
      v34 = v22;
      v22 = *(unsigned __int16 **)v22;
      std::_Hash<std::_Umap_traits<std::wstring,std::unique_ptr<CEndpointVolumeState>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,std::unique_ptr<CEndpointVolumeState>>>,0>>::erase(
        a1,
        &v36,
        v34);
    }
  }
  return v30;
}
