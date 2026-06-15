/*
 * XREFs of ??$_Try_emplace@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@$$V@?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@@std@@@2@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@@std@@@std@@@std@@@std@@_N@1@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x18001305C
 * Callers:
 *     ?OnRenderCommunicationsStreamStateChanged@CDuckingManager@@QEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1PEAUIAudioStreamInfo@@@Z @ 0x180010644 (-OnRenderCommunicationsStreamStateChanged@CDuckingManager@@QEAAJPEAUIAudioSessionInfo@@W4_AudioS.c)
 *     std::_Func_impl_no_alloc__lambda_788b487376d721320aa661d5faa65294__void_::_Do_call @ 0x1800135E0 (std--_Func_impl_no_alloc__lambda_788b487376d721320aa661d5faa65294__void_--_Do_call.c)
 *     std::_Func_impl_no_alloc__lambda_0f6faf35369883a3f4cbdf25b7153501__void_::_Do_call @ 0x180013870 (std--_Func_impl_no_alloc__lambda_0f6faf35369883a3f4cbdf25b7153501__void_--_Do_call.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18000F720 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Insert_unverified@AEAU?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@@std@@@std@@@std@@@1@@Z @ 0x180013BA8 (--$_Insert_unverified@AEAU-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@st.c)
 */

__int64 __fastcall std::unordered_map<std::wstring,CRenderEndpointDuckingManagerContext>::_Try_emplace<std::wstring,>(
        _QWORD *a1,
        __int64 a2,
        char *a3)
{
  char *v3; // rsi
  __int64 v4; // r11
  __int64 v7; // rdx
  unsigned __int64 i; // rcx
  __int64 v9; // rax
  __int64 v10; // r15
  __int64 *v11; // rbx
  __int64 v12; // r12
  _QWORD *j; // rax
  _QWORD *v14; // rcx
  char *v15; // rcx
  unsigned __int64 v16; // rdi
  char *v17; // r9
  __int64 v18; // r8
  signed __int64 v19; // r9
  unsigned __int16 v20; // dx
  int v21; // ecx
  _QWORD *v22; // rcx
  char *v23; // rdx
  signed __int64 v24; // rdx
  unsigned __int16 v25; // r8
  int v26; // ecx
  __int64 *v27; // rcx
  __int64 v28; // rbx
  _QWORD *v29; // rdi
  _QWORD *v30; // rax

  v3 = a3;
  v4 = *((_QWORD *)a3 + 2);
  if ( *((_QWORD *)a3 + 3) >= 8uLL )
    a3 = *(char **)a3;
  v7 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 2 * v4; v7 = 0x100000001B3LL * (v9 ^ v7) )
    v9 = (unsigned __int8)a3[i++];
  v10 = a1[3];
  v11 = (__int64 *)a1[1];
  v12 = 2 * (v7 & a1[6]);
  for ( j = *(_QWORD **)(v10 + 16 * (v7 & a1[6])); ; j = (_QWORD *)*j )
  {
    if ( *(__int64 **)(v10 + 8 * v12) == v11 )
      v14 = (_QWORD *)a1[1];
    else
      v14 = **(_QWORD ***)(v10 + 8 * v12 + 8);
    if ( j == v14 )
    {
      j = (_QWORD *)a1[1];
      v27 = j;
      goto LABEL_37;
    }
    v15 = v3;
    if ( *((_QWORD *)v3 + 3) >= 8uLL )
      v15 = *(char **)v3;
    v16 = j[5];
    v17 = (char *)(j + 2);
    if ( v16 >= 8 )
      v17 = (char *)j[2];
    v18 = j[4];
    if ( v18 == v4 )
    {
      if ( v18 )
      {
        v19 = v17 - v15;
        while ( 1 )
        {
          v20 = *(_WORD *)&v15[v19];
          if ( v20 != *(_WORD *)v15 )
            break;
          v15 += 2;
          if ( !--v18 )
            goto LABEL_19;
        }
        v21 = v20 < *(_WORD *)v15 ? -1 : 1;
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
  v22 = j + 2;
  if ( v16 >= 8 )
    v22 = (_QWORD *)*v22;
  v23 = v3;
  if ( *((_QWORD *)v3 + 3) >= 8uLL )
    v23 = *(char **)v3;
  if ( v4 )
  {
    v24 = v23 - (char *)v22;
    while ( 1 )
    {
      v25 = *(_WORD *)((char *)v22 + v24);
      if ( v25 != *(_WORD *)v22 )
        break;
      v22 = (_QWORD *)((char *)v22 + 2);
      if ( !--v4 )
        goto LABEL_31;
    }
    v26 = v25 < *(_WORD *)v22 ? -1 : 1;
  }
  else
  {
LABEL_31:
    v26 = 0;
  }
  if ( v26 )
    j = (_QWORD *)a1[1];
  v27 = j;
LABEL_37:
  if ( v27 == v11 )
  {
    v28 = *v11;
    if ( a1[2] == 0x492492492492492LL )
      std::_Xlength_error("list<T> too long");
    v29 = *(_QWORD **)(v28 + 8);
    v30 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x38uLL);
    v30[4] = 0LL;
    v30[5] = 0LL;
    *((_OWORD *)v30 + 1) = *(_OWORD *)v3;
    *((_OWORD *)v30 + 2) = *((_OWORD *)v3 + 1);
    *((_QWORD *)v3 + 2) = 0LL;
    *((_QWORD *)v3 + 3) = 7LL;
    *(_WORD *)v3 = 0;
    *((_DWORD *)v30 + 12) = 0;
    *v30 = v28;
    v30[1] = v29;
    ++a1[2];
    *(_QWORD *)(v28 + 8) = v30;
    *v29 = v30;
    std::_Hash<std::_Umap_traits<std::wstring,CRenderEndpointDuckingManagerContext,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,CRenderEndpointDuckingManagerContext>>,0>>::_Insert_unverified<std::pair<std::wstring const,CRenderEndpointDuckingManagerContext> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::wstring const,CRenderEndpointDuckingManagerContext>>>>>(
      a1,
      a2,
      *(_QWORD *)a1[1] + 16LL);
  }
  else
  {
    *(_QWORD *)a2 = j;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
