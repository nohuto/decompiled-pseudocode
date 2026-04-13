/*
 * XREFs of ??$_Insert@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@U_Nil@2@@?$_Hash@V?$_Uset_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$_Uhash_compare@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@U?$hash@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@U?$equal_to@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@2@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@std@@@std@@_N@1@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@1@U_Nil@1@@Z @ 0x18009C370
 * Callers:
 *     ?GetMacros@ToastHelpers@NotificationManager@CreativeFramework@@AEAA?AV?$unordered_set@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@U?$hash@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@U?$equal_to@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@std@@XZ @ 0x18009A9F0 (-GetMacros@ToastHelpers@NotificationManager@CreativeFramework@@AEAA-AV-$unordered_set@V-$basic_s.c)
 * Callees:
 *     ?_Check_size@?$_Hash@V?$_Uset_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$_Uhash_compare@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@U?$hash@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@U?$equal_to@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@2@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@$0A@@std@@@std@@IEAAXXZ @ 0x1800897D8 (-_Check_size@-$_Hash@V-$_Uset_traits@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@.c)
 *     ??$_Buynode@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@?$_List_buy@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@std@@QEAAPEAU?$_List_node@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEAX@1@PEAU21@0AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@1@@Z @ 0x18009CBA4 (--$_Buynode@AEBV-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@@-$_List_buy@V-$.c)
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x1800ADFC4 (-_Xlength_error@std@@YAXPEBD@Z.c)
 */

__int64 __fastcall std::_Hash<std::_Uset_traits<std::wstring,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::wstring>,0>>::_Insert<std::wstring const &,std::_Nil>(
        __int64 **a1,
        __int64 a2,
        _QWORD *a3)
{
  unsigned __int64 v5; // r11
  unsigned __int64 v6; // r10
  _QWORD *v7; // r9
  unsigned __int64 v8; // rcx
  unsigned __int64 i; // rdx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rsi
  __int64 v12; // rsi
  __int64 *v13; // r12
  __int64 *v14; // rax
  __int64 *v15; // rdi
  _QWORD *v16; // rax
  unsigned __int64 v17; // rbx
  _WORD *v18; // rdx
  unsigned __int64 v19; // rcx
  bool j; // zf
  int v21; // eax
  _QWORD *v22; // rcx
  _WORD *v23; // rdx
  unsigned __int64 v24; // rax
  bool k; // zf
  int v26; // eax
  __int64 result; // rax
  __int64 v28; // rbx
  __int64 v29; // rdx
  __int64 *v30; // rax
  unsigned __int64 *v31; // rcx
  unsigned __int64 v32; // rbx
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 *v35; // rdx
  __int64 *v36; // rax
  __int64 *v37; // rax
  __int64 v38; // rcx
  __int64 *v39; // rdx
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rcx
  _QWORD *iter; // rax
  __int64 v44[6]; // [rsp+28h] [rbp-30h] BYREF
  unsigned __int64 v46; // [rsp+70h] [rbp+18h] BYREF

  v5 = a3[2];
  v6 = 2 * v5;
  if ( a3[3] < 8uLL )
    v7 = a3;
  else
    v7 = (_QWORD *)*a3;
  v8 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < v6; ++i )
    v8 = 0x100000001B3LL * (*((unsigned __int8 *)v7 + i) ^ v8);
  v10 = HIDWORD(v8) ^ v8;
  v11 = v10 & (unsigned __int64)a1[5];
  if ( (unsigned __int64)a1[6] <= v11 )
    v11 += -1LL - ((unsigned __int64)a1[5] >> 1);
  v12 = 2 * v11;
  v13 = a1[2];
  v14 = *a1;
  if ( (__int64 *)v13[v12] == *a1 )
    v15 = *a1;
  else
    v15 = *(__int64 **)v13[v12 + 1];
  if ( v15 == (__int64 *)v13[v12] )
  {
LABEL_53:
    v28 = *v14;
    v29 = std::_List_buy<std::wstring>::_Buynode<std::wstring const &>(v10, *v14, *(_QWORD *)(*v14 + 8), a3, -2LL);
    v30 = a1[1];
    if ( v30 == (__int64 *)0x555555555555554LL )
      std::_Xlength_error("list<T> too long");
    a1[1] = (__int64 *)((char *)v30 + 1);
    *(_QWORD *)(v28 + 8) = v29;
    **(_QWORD **)(v29 + 8) = v29;
    v31 = (unsigned __int64 *)*a1;
    v32 = **a1;
    v46 = v32;
    v33 = *(_QWORD *)v32;
    if ( v15 != *(__int64 **)v32 )
    {
      **(_QWORD **)(v32 + 8) = v33;
      **(_QWORD **)(v33 + 8) = v15;
      *(_QWORD *)v15[1] = v32;
      v34 = v15[1];
      v15[1] = *(_QWORD *)(v33 + 8);
      *(_QWORD *)(v33 + 8) = *(_QWORD *)(v32 + 8);
      *(_QWORD *)(v32 + 8) = v34;
      v31 = (unsigned __int64 *)*a1;
    }
    v35 = a1[2];
    if ( (unsigned __int64 *)v35[v12] == v31 )
    {
      v35[v12] = v32;
      v36 = a1[2];
      v36[v12 + 1] = v32;
    }
    else if ( (__int64 *)v35[v12] == v15 )
    {
      v35[v12] = v32;
    }
    else
    {
      v37 = (__int64 *)v35[v12 + 1];
      v38 = *v37;
      v35[v12 + 1] = *v37;
      if ( v38 != v32 )
      {
        v39 = a1[2];
        v40 = v39[v12 + 1];
        v41 = *(_QWORD *)(v40 + 8);
        v39[v12 + 1] = v41;
      }
    }
    try
    {
      std::_Hash<std::_Uset_traits<std::wstring,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::wstring>,0>>::_Check_size(a1);
      *(_QWORD *)a2 = v32;
      *(_BYTE *)(a2 + 8) = 1;
      result = a2;
    }
    catch ( ... )
    {
      iter = std::_Hash<std::_Umap_traits<std::wstring,std::shared_ptr<ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::SubscriptionMapValue>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,std::shared_ptr<ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::SubscriptionMapValue>>>,0>>::_Make_iter(
               v42,
               &v46,
               v46);
      std::_Hash<std::_Uset_traits<std::wstring,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::wstring>,0>>::erase(
        a1,
        v44,
        (_QWORD *)*iter);
      throw;
    }
  }
  else
  {
    while ( 1 )
    {
      v15 = (__int64 *)v15[1];
      v16 = v15 + 2;
      v17 = v15[4];
      v46 = v15[5];
      if ( v46 >= 8 )
        v16 = (_QWORD *)*v16;
      if ( a3[3] < 8uLL )
        v18 = a3;
      else
        v18 = (_WORD *)*a3;
      v19 = v17;
      if ( v5 < v17 )
        v19 = v5;
      for ( j = v19 == 0; ; j = v19 == 0 )
      {
        if ( j )
        {
          v10 = 0LL;
          goto LABEL_24;
        }
        if ( *v18 != *(_WORD *)v16 )
          break;
        ++v18;
        v16 = (_QWORD *)((char *)v16 + 2);
        --v19;
      }
      v10 = *v18 < *(_WORD *)v16 ? -1 : 1;
LABEL_24:
      v21 = v5 != v17;
      if ( v5 < v17 )
        v21 = -1;
      if ( (_DWORD)v10 )
        v21 = v10;
      if ( !v21 )
        break;
      if ( v15 == (__int64 *)v13[v12] )
        goto LABEL_50;
    }
    v22 = v15 + 2;
    if ( a3[3] < 8uLL )
      v23 = a3;
    else
      v23 = (_WORD *)*a3;
    if ( v46 >= 8 )
      v22 = (_QWORD *)*v22;
    v24 = v5;
    if ( v17 < v5 )
      v24 = v17;
    for ( k = v24 == 0; ; k = v24 == 0 )
    {
      if ( k )
      {
        v10 = 0LL;
        goto LABEL_44;
      }
      if ( *(_WORD *)v22 != *v23 )
        break;
      v22 = (_QWORD *)((char *)v22 + 2);
      ++v23;
      --v24;
    }
    v10 = *(_WORD *)v22 < *v23 ? -1 : 1;
LABEL_44:
    v26 = v17 != v5;
    if ( v17 < v5 )
      v26 = -1;
    if ( (_DWORD)v10 )
      v26 = v10;
    if ( v26 )
    {
      v15 = (__int64 *)*v15;
LABEL_50:
      v14 = *a1;
      goto LABEL_53;
    }
    *(_QWORD *)a2 = v15;
    *(_BYTE *)(a2 + 8) = 0;
    return a2;
  }
  return result;
}
