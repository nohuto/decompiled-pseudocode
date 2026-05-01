/*
 * XREFs of ?SyncGlobalTabOrder@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAX_KAEBV?$vector@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@1@Z @ 0x1800CBB14
 * Callers:
 *     ?OnTabsChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowTabDataModel@3UI@456@AEBUWindowTabDataModelTabsChangedEventArgs@38456@@Z @ 0x1800CB030 (-OnTabsChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowTabData.c)
 *     ?UpdateTabsForWindow@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAAX_K@Z @ 0x1800CC1E8 (-UpdateTabsForWindow@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAAX_K@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180089B14 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180089D60 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180092314 (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ??$_Insert@AEBUguid@winrt@@@?$list@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@QEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@Uguid@winrt@@@std@@@std@@U_Iterator_base0@2@@1@AEBUguid@winrt@@@Z @ 0x1800C47E4 (--$_Insert@AEBUguid@winrt@@@-$list@Uguid@winrt@@V-$allocator@Uguid@winrt@@@std@@@std@@QEAAXV-$_L.c)
 *     ??$_Insert_unverified@Uguid@winrt@@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@Uguid@winrt@@@std@@@std@@U_Iterator_base0@2@@std@@@?$_Hash@V?$_Uset_traits@Uguid@winrt@@V?$_Uhash_compare@Uguid@winrt@@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@@std@@V?$allocator@Uguid@winrt@@@4@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@Uguid@winrt@@@std@@@std@@@std@@_N@1@$$QEAUguid@winrt@@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@Uguid@winrt@@@std@@@std@@U_Iterator_base0@2@@1@@Z @ 0x1800C514C (--$_Insert_unverified@Uguid@winrt@@V-$_List_unchecked_const_iterator@V-$_List_val@U-$_List_simpl.c)
 *     ??$emplace@AEA_KAEBUguid@winrt@@@?$_Hash@V?$_Umap_traits@_KUguid@winrt@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUguid@winrt@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUguid@winrt@@@std@@@std@@@std@@@std@@_N@1@AEA_KAEBUguid@winrt@@@Z @ 0x1800C5DCC (--$emplace@AEA_KAEBUguid@winrt@@@-$_Hash@V-$_Umap_traits@_KUguid@winrt@@V-$_Uhash_compare@_KU-$h.c)
 *     ??$emplace@AEBUguid@winrt@@AEA_K@?$_Hash@V?$_Umap_traits@Uguid@winrt@@_KV?$_Uhash_compare@Uguid@winrt@@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUguid@winrt@@_K@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUguid@winrt@@_K@std@@@std@@@std@@@std@@_N@1@AEBUguid@winrt@@AEA_K@Z @ 0x1800C5E24 (--$emplace@AEBUguid@winrt@@AEA_K@-$_Hash@V-$_Umap_traits@Uguid@winrt@@_KV-$_Uhash_compare@Uguid@.c)
 *     ??0?$_Hash@V?$_Uset_traits@Uguid@winrt@@V?$_Uhash_compare@Uguid@winrt@@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@@std@@V?$allocator@Uguid@winrt@@@4@$0A@@std@@@std@@QEAA@AEBV?$_Uhash_compare@Uguid@winrt@@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@@1@AEBV?$allocator@Uguid@winrt@@@1@@Z @ 0x1800C6B68 (--0-$_Hash@V-$_Uset_traits@Uguid@winrt@@V-$_Uhash_compare@Uguid@winrt@@U-$hash@Uguid@winrt@@@std.c)
 *     ??0?$deque@_KV?$allocator@_K@std@@@std@@QEAA@_KAEB_K@Z @ 0x1800C6C84 (--0-$deque@_KV-$allocator@_K@std@@@std@@QEAA@_KAEB_K@Z.c)
 *     ??0?$unordered_map@_KUguid@winrt@@U?$hash@_K@std@@U?$equal_to@_K@4@V?$allocator@U?$pair@$$CB_KUguid@winrt@@@std@@@4@@std@@QEAA@XZ @ 0x1800C6F38 (--0-$unordered_map@_KUguid@winrt@@U-$hash@_K@std@@U-$equal_to@_K@4@V-$allocator@U-$pair@$$CB_KUg.c)
 *     ??1?$deque@_KV?$allocator@_K@std@@@std@@QEAA@XZ @ 0x1800C7898 (--1-$deque@_KV-$allocator@_K@std@@@std@@QEAA@XZ.c)
 *     ??A?$deque@_KV?$allocator@_K@std@@@std@@QEAAAEA_K_K@Z @ 0x1800C7DE0 (--A-$deque@_KV-$allocator@_K@std@@@std@@QEAAAEA_K_K@Z.c)
 *     ?RemoveTabsFromWindowOrder@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBV?$vector@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@AEBV?$unordered_map@_KUguid@winrt@@U?$hash@_K@std@@U?$equal_to@_K@4@V?$allocator@U?$pair@$$CB_KUguid@winrt@@@std@@@4@@8@@Z @ 0x1800CB704 (-RemoveTabsFromWindowOrder@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBV-.c)
 *     ?_Move_assign@?$deque@_KV?$allocator@_K@std@@@std@@AEAAXAEAV12@U_Equal_allocators@2@@Z @ 0x1800CD41C (-_Move_assign@-$deque@_KV-$allocator@_K@std@@@std@@AEAAXAEAV12@U_Equal_allocators@2@@Z.c)
 *     ?_Tidy@?$vector@PEAXV?$allocator@PEAX@std@@@std@@AEAAXXZ @ 0x1800CD6D4 (-_Tidy@-$vector@PEAXV-$allocator@PEAX@std@@@std@@AEAAXXZ.c)
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@Uguid@winrt@@_KV?$_Uhash_compare@Uguid@winrt@@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUguid@winrt@@_K@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUguid@winrt@@_K@std@@@std@@@std@@@2@AEBUguid@winrt@@@Z @ 0x1800CE4FC (-lower_bound@-$_Hash@V-$_Umap_traits@Uguid@winrt@@_KV-$_Uhash_compare@Uguid@winrt@@U-$hash@Uguid.c)
 *     ?push_front@?$deque@_KV?$allocator@_K@std@@@std@@QEAAXAEB_K@Z @ 0x1800CE710 (-push_front@-$deque@_KV-$allocator@_K@std@@@std@@QEAAXAEB_K@Z.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall winrt::Windows::Internal::Shell::implementation::WindowTabHost::SyncGlobalTabOrder(
        RTL_SRWLOCK *a1,
        __int64 a2,
        _QWORD *a3,
        unsigned __int64 *a4)
{
  _QWORD *v7; // r8
  _OWORD *v8; // r15
  _OWORD *v9; // rbx
  unsigned __int64 v10; // rdi
  __int64 v11; // rdx
  _QWORD *v12; // r8
  __int64 **Ptr; // r12
  __int64 *i; // rbx
  _QWORD **v15; // rcx
  _QWORD *v16; // rcx
  _QWORD *v17; // rbx
  __int64 *v18; // rcx
  _QWORD *v19; // rcx
  _QWORD *v20; // rbx
  __int64 v21; // rdx
  RTL_SRWLOCK *v22; // rbx
  RTL_SRWLOCK *v23; // rax
  _QWORD *v24; // r8
  _QWORD *j; // rax
  __int64 v26; // rcx
  unsigned __int64 v27; // r15
  __int64 v28; // r12
  __int64 v29; // r14
  __int64 v30; // r13
  __int64 v31; // rdx
  _BYTE v32[16]; // [rsp+20h] [rbp-69h] BYREF
  void *v33; // [rsp+30h] [rbp-59h] BYREF
  __int64 *v34; // [rsp+38h] [rbp-51h] BYREF
  _BYTE v35[40]; // [rsp+48h] [rbp-41h] BYREF
  _BYTE v36[8]; // [rsp+70h] [rbp-19h] BYREF
  _QWORD **v37; // [rsp+78h] [rbp-11h]
  _BYTE v38[88]; // [rsp+88h] [rbp-1h] BYREF
  __int64 *v39; // [rsp+F0h] [rbp+67h] BYREF
  __int64 v40; // [rsp+F8h] [rbp+6Fh] BYREF
  RTL_SRWLOCK *v41; // [rsp+100h] [rbp+77h] BYREF

  v40 = a2;
  wil::srwlock::lock_exclusive(a1 + 75, &v41);
  v8 = (_OWORD *)a4[1];
  v9 = (_OWORD *)*a4;
  v10 = 0LL;
  if ( (__int64)((__int64)v8 - *a4) >> 4 )
  {
    LODWORD(v39) = 0;
    std::_Hash<std::_Uset_traits<winrt::guid,std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>,std::allocator<winrt::guid>,0>>::_Hash<std::_Uset_traits<winrt::guid,std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>,std::allocator<winrt::guid>,0>>(
      (__int64)&v33,
      &v39,
      v7);
    while ( v9 != v8 )
    {
      std::list<winrt::guid>::_Insert<winrt::guid const &>((__int64)&v34, *v34, v9);
      std::_Hash<std::_Uset_traits<winrt::guid,std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>,std::allocator<winrt::guid>,0>>::_Insert_unverified<winrt::guid,std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<winrt::guid>>,std::_Iterator_base0>>(
        (__int64)&v33,
        (__int64)v32,
        (_QWORD *)(*v34 + 16),
        (_QWORD **)*v34);
      ++v9;
    }
    std::unordered_map<unsigned __int64,winrt::guid>::unordered_map<unsigned __int64,winrt::guid>(
      (__int64)v36,
      v11,
      v12);
    Ptr = (__int64 **)a1[90].Ptr;
    for ( i = *Ptr; i != (__int64 *)Ptr; i = (__int64 *)*i )
    {
      std::_Hash<std::_Umap_traits<winrt::guid,unsigned __int64,std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>,std::allocator<std::pair<winrt::guid const,unsigned __int64>>,0>>::lower_bound(
        &v33,
        &v39,
        i + 2);
      if ( v39 == v34 )
        std::_Hash<std::_Umap_traits<unsigned __int64,winrt::guid,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,winrt::guid>>,0>>::emplace<unsigned __int64 &,winrt::guid const &>(
          (__int64)v36,
          (__int64)v32,
          i + 4,
          (_OWORD *)i + 1);
    }
    winrt::Windows::Internal::Shell::implementation::WindowTabHost::RemoveTabsFromWindowOrder(
      (__int64)a1,
      a4,
      (__int64)v36);
    std::vector<void *>::_Tidy(v38);
    v15 = v37;
    *v37[1] = 0LL;
    v16 = *v15;
    if ( v16 )
    {
      do
      {
        v17 = (_QWORD *)*v16;
        std::_Deallocate<16,0>(v16, (const struct std::nothrow_t *)0x28);
        v16 = v17;
      }
      while ( v17 );
    }
    std::_Deallocate<16,0>(v37, (const struct std::nothrow_t *)0x28);
    std::vector<void *>::_Tidy(v35);
    v18 = v34;
    *(_QWORD *)v34[1] = 0LL;
    v19 = (_QWORD *)*v18;
    if ( v19 )
    {
      do
      {
        v20 = (_QWORD *)*v19;
        std::_Deallocate<16,0>(v19, (const struct std::nothrow_t *)0x20);
        v19 = v20;
      }
      while ( v20 );
    }
    std::_Deallocate<16,0>(v34, (const struct std::nothrow_t *)0x20);
  }
  v21 = (__int64)(a3[1] - *a3) >> 4;
  if ( v21 )
  {
    v22 = a1 + 84;
    if ( a1[88].Ptr )
    {
      v24 = a1[90].Ptr;
      for ( j = (_QWORD *)*v24; j != v24; j = (_QWORD *)*j )
      {
        v26 = j[4];
        if ( v26 )
          j[4] = v21 + v26;
      }
      v27 = 0LL;
      if ( (__int64)(a3[1] - *a3) >> 4 )
      {
        v28 = (__int64)&a1[89];
        v29 = 0LL;
        v30 = v40;
        do
        {
          v31 = 0LL;
          if ( v22->Ptr )
            v31 = *(_QWORD *)v22->Ptr;
          std::deque<unsigned __int64>::push_front(
            v22,
            *(_QWORD *)(*(_QWORD *)(v31 + 8) + 8 * (((unsigned __int64)v22[3].Ptr >> 1) & (*(_QWORD *)(v31 + 16) - 1LL)))
          + 8 * ((__int64)v22[3].Ptr & 1));
          *(_QWORD *)std::deque<unsigned __int64>::operator[](v22, 1LL) = v30;
          v39 = (__int64 *)++v27;
          std::_Hash<std::_Umap_traits<winrt::guid,unsigned __int64,std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>,std::allocator<std::pair<winrt::guid const,unsigned __int64>>,0>>::emplace<winrt::guid const &,unsigned __int64 &>(
            v28,
            (__int64)v32,
            (_OWORD *)(v29 + *a3),
            &v39);
          v29 += 16LL;
        }
        while ( v27 < (__int64)(a3[1] - *a3) >> 4 );
      }
    }
    else
    {
      v23 = (RTL_SRWLOCK *)std::deque<unsigned __int64>::deque<unsigned __int64>(&v33, v21, (__int64)&v40);
      if ( v22 != v23 )
        std::deque<unsigned __int64>::_Move_assign(&a1[84], v23);
      std::deque<unsigned __int64>::~deque<unsigned __int64>(&v33);
      v39 = 0LL;
      if ( (__int64)(a3[1] - *a3) >> 4 )
      {
        do
        {
          std::_Hash<std::_Umap_traits<winrt::guid,unsigned __int64,std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>,std::allocator<std::pair<winrt::guid const,unsigned __int64>>,0>>::emplace<winrt::guid const &,unsigned __int64 &>(
            (__int64)&a1[89],
            (__int64)v32,
            (_OWORD *)(*a3 + 16 * v10),
            &v39);
          v10 = (unsigned __int64)v39 + 1;
          v39 = (__int64 *)v10;
        }
        while ( v10 < (__int64)(a3[1] - *a3) >> 4 );
      }
    }
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v41);
}
