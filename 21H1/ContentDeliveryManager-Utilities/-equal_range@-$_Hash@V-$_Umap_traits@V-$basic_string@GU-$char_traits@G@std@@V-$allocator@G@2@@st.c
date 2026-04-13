/*
 * XREFs of ?equal_range@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VSubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@@2@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VSubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@@2@@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VSubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@@2@@std@@@std@@@std@@@std@@V12@@2@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@@Z @ 0x180045280
 * Callers:
 *     ?erase@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VSubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@@2@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VSubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@@2@@std@@@2@$0A@@std@@@std@@QEAA_KAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@@Z @ 0x180044584 (-erase@-$_Hash@V-$_Umap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<std::wstring,std::shared_ptr<ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::SubscriptionMapValue>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,std::shared_ptr<ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::SubscriptionMapValue>>>,0>>::equal_range(
        __int64 *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  unsigned __int64 v4; // r15
  unsigned __int64 v7; // rbx
  _QWORD *v8; // r9
  unsigned __int64 v9; // rdx
  unsigned __int64 i; // rcx
  __int64 v11; // rax
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // r9
  __int64 v14; // r12
  __int64 v15; // r9
  __int64 v16; // rdx
  _QWORD *j; // rax
  _QWORD *v18; // rcx
  _QWORD *v19; // rcx
  _WORD *v20; // r10
  unsigned __int64 v21; // rbp
  unsigned __int64 v22; // r8
  bool k; // zf
  int v24; // r8d
  int v25; // ecx
  _QWORD *v26; // r8
  _QWORD *v27; // rcx
  _QWORD *v28; // rcx
  unsigned __int64 v29; // r14
  _WORD *v30; // rbx
  unsigned __int64 v31; // r10
  bool m; // zf
  int v33; // r10d
  int v34; // ecx

  v4 = a3[2];
  v7 = 2 * v4;
  if ( a3[3] < 8uLL )
    v8 = a3;
  else
    v8 = (_QWORD *)*a3;
  v9 = 0LL;
  for ( i = 0xCBF29CE484222325uLL; v9 < v7; i = 0x100000001B3LL * (v11 ^ i) )
    v11 = *((unsigned __int8 *)v8 + v9++);
  v12 = a1[5];
  v13 = v12 & (i ^ HIDWORD(i));
  if ( a1[6] <= v13 )
    v13 += -1LL - (v12 >> 1);
  v14 = a1[2];
  v15 = 2 * v13;
  v16 = *a1;
  for ( j = *(_QWORD **)(v14 + 8 * v15); ; j = (_QWORD *)*j )
  {
    v18 = *(_QWORD *)(v14 + 8 * v15) == v16 ? (_QWORD *)v16 : **(_QWORD ***)(v14 + 8 * v15 + 8);
    if ( j == v18 )
      break;
    v19 = j + 2;
    if ( a3[3] < 8uLL )
      v20 = a3;
    else
      v20 = (_WORD *)*a3;
    v21 = j[4];
    if ( j[5] >= 8uLL )
      v19 = (_QWORD *)*v19;
    v22 = v4;
    if ( v21 < v4 )
      v22 = j[4];
    for ( k = v22 == 0; ; k = v22 == 0 )
    {
      if ( k )
      {
        v24 = 0;
        goto LABEL_25;
      }
      if ( *(_WORD *)v19 != *v20 )
        break;
      v19 = (_QWORD *)((char *)v19 + 2);
      ++v20;
      --v22;
    }
    v24 = *(_WORD *)v19 < *v20 ? -1 : 1;
LABEL_25:
    v25 = v21 != v4;
    if ( v21 < v4 )
      v25 = -1;
    if ( v24 )
      v25 = v24;
    if ( !v25 )
    {
      v26 = j;
      while ( 1 )
      {
        v27 = *(_QWORD *)(v14 + 8 * v15) == v16 ? (_QWORD *)v16 : **(_QWORD ***)(v14 + 8 * v15 + 8);
        if ( j == v27 )
          break;
        v28 = j + 2;
        v29 = j[4];
        if ( j[5] >= 8uLL )
          v28 = (_QWORD *)*v28;
        if ( a3[3] < 8uLL )
          v30 = a3;
        else
          v30 = (_WORD *)*a3;
        v31 = j[4];
        if ( v4 < v29 )
          v31 = v4;
        for ( m = v31 == 0; ; m = --v31 == 0 )
        {
          if ( m )
          {
            v33 = 0;
            goto LABEL_49;
          }
          if ( *v30 != *(_WORD *)v28 )
            break;
          ++v30;
          v28 = (_QWORD *)((char *)v28 + 2);
        }
        v33 = *v30 < *(_WORD *)v28 ? -1 : 1;
LABEL_49:
        v34 = v4 != v29;
        if ( v4 < v29 )
          v34 = -1;
        if ( v33 )
          v34 = v33;
        if ( v34 )
          break;
        j = (_QWORD *)*j;
      }
      if ( v26 != j )
      {
        *a2 = v26;
        a2[1] = j;
        return a2;
      }
      break;
    }
  }
  *a2 = v16;
  a2[1] = v16;
  return a2;
}
