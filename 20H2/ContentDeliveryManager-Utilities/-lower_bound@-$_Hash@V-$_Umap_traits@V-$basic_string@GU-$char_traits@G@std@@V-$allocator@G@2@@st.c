/*
 * XREFs of ?lower_bound@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VSubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@@2@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VSubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@@2@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VSubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@@2@@std@@@std@@@std@@@2@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@@Z @ 0x180047688
 * Callers:
 *     ?RegisterSubscription@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@UEAAJPEAUHSTRING__@@PEAUISubscriptionPriv@234@PEAU?$IMap@PEAUHSTRING__@@PEAU1@@Collections@Foundation@Windows@@@Z @ 0x180044AA0 (-RegisterSubscription@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@UEAAJP.c)
 *     ??A?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VSubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@@2@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VSubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@@2@@std@@@2@@std@@QEAAAEAV?$shared_ptr@VSubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x18004684C (--A-$unordered_map@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$shared_ptr@V.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<std::wstring,std::shared_ptr<ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::SubscriptionMapValue>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,std::shared_ptr<ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::SubscriptionMapValue>>>,0>>::lower_bound(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  unsigned __int64 v4; // rbx
  unsigned __int64 v6; // r11
  _QWORD *v7; // r9
  unsigned __int64 v8; // rdx
  unsigned __int64 i; // rcx
  __int64 v10; // rax
  unsigned __int64 v11; // r9
  unsigned __int64 v12; // rdx
  __int64 v13; // r12
  __int64 v14; // rdx
  _QWORD *v15; // rdi
  _QWORD *j; // rcx
  _QWORD *v17; // rax
  _QWORD *v18; // rax
  _WORD *v19; // r10
  unsigned __int64 v20; // r15
  unsigned __int64 v21; // r11
  __int64 v22; // r9
  bool k; // zf
  int v24; // r9d
  int v25; // eax
  _QWORD *v26; // rdx
  unsigned __int64 v27; // rax
  bool m; // zf
  int v29; // edx
  int v30; // eax
  _QWORD *result; // rax

  v4 = a3[2];
  v6 = 2 * v4;
  if ( a3[3] < 8uLL )
    v7 = a3;
  else
    v7 = (_QWORD *)*a3;
  v8 = 0LL;
  for ( i = 0xCBF29CE484222325uLL; v8 < v6; i = 0x100000001B3LL * (v10 ^ i) )
    v10 = *((unsigned __int8 *)v7 + v8++);
  v11 = a1[5];
  v12 = v11 & (i ^ HIDWORD(i));
  if ( a1[6] <= v12 )
    v12 += -1LL - (v11 >> 1);
  v13 = a1[2];
  v14 = 2 * v12;
  v15 = (_QWORD *)*a1;
  for ( j = *(_QWORD **)(v13 + 8 * v14); ; j = (_QWORD *)*j )
  {
    v17 = *(_QWORD **)(v13 + 8 * v14) == v15 ? v15 : **(_QWORD ***)(v13 + 8 * v14 + 8);
    if ( j == v17 )
      break;
    v18 = j + 2;
    if ( a3[3] < 8uLL )
      v19 = a3;
    else
      v19 = (_WORD *)*a3;
    v20 = j[5];
    v21 = j[4];
    if ( v20 >= 8 )
      v18 = (_QWORD *)*v18;
    v22 = a3[2];
    if ( v21 < v4 )
      v22 = j[4];
    for ( k = v22 == 0; ; k = v22 == 0 )
    {
      if ( k )
      {
        v24 = 0;
        goto LABEL_25;
      }
      if ( *(_WORD *)v18 != *v19 )
        break;
      v18 = (_QWORD *)((char *)v18 + 2);
      ++v19;
      --v22;
    }
    v24 = *(_WORD *)v18 < *v19 ? -1 : 1;
LABEL_25:
    v25 = v21 != v4;
    if ( v21 < v4 )
      v25 = -1;
    if ( v24 )
      v25 = v24;
    if ( !v25 )
    {
      v26 = j + 2;
      if ( v20 >= 8 )
        v26 = (_QWORD *)*v26;
      if ( a3[3] >= 8uLL )
        a3 = (_QWORD *)*a3;
      v27 = j[4];
      if ( v4 < v21 )
        v27 = v4;
      for ( m = v27 == 0; ; m = v27 == 0 )
      {
        if ( m )
        {
          v29 = 0;
          goto LABEL_43;
        }
        if ( *(_WORD *)a3 != *(_WORD *)v26 )
          break;
        a3 = (_QWORD *)((char *)a3 + 2);
        v26 = (_QWORD *)((char *)v26 + 2);
        --v27;
      }
      v29 = *(_WORD *)a3 < *(_WORD *)v26 ? -1 : 1;
LABEL_43:
      v30 = v4 != v21;
      if ( v4 < v21 )
        v30 = -1;
      if ( v29 )
        v30 = v29;
      if ( !v30 )
        v15 = j;
      break;
    }
  }
  result = a2;
  *a2 = v15;
  return result;
}
