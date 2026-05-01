/*
 * XREFs of ?ActivateTab@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA_N_KUguid@6@@Z @ 0x1800C8174
 * Callers:
 *     ?OnActiveTabChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowTabDataModel@3UI@456@AEBUWindowTabDataModelActiveTabChangedEventArgs@38456@@Z @ 0x1800CACB0 (-OnActiveTabChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowTa.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180089D60 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180092314 (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ??A?$unordered_map@Uguid@winrt@@_KU?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@V?$allocator@U?$pair@$$CBUguid@winrt@@_K@std@@@4@@std@@QEAAAEA_KAEBUguid@winrt@@@Z @ 0x1800C7E48 (--A-$unordered_map@Uguid@winrt@@_KU-$hash@Uguid@winrt@@@std@@U-$equal_to@Uguid@winrt@@@4@V-$allo.c)
 *     ??H?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@Uguid@winrt@@@std@@@std@@@std@@QEBA?AV01@_J@Z @ 0x1800C7EC8 (--H-$_Deque_iterator@V-$_Deque_val@U-$_Deque_simple_types@Uguid@winrt@@@std@@@std@@@std@@QEBA-AV.c)
 *     ?at@?$unordered_map@_KUWindowData@implementation@Shell@Internal@Windows@winrt@@U?$hash@_K@std@@U?$equal_to@_K@8@V?$allocator@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@@8@@std@@QEAAAEAUWindowData@implementation@Shell@Internal@Windows@winrt@@AEB_K@Z @ 0x1800CDA74 (-at@-$unordered_map@_KUWindowData@implementation@Shell@Internal@Windows@winrt@@U-$hash@_K@std@@U.c)
 *     ?erase@?$deque@_KV?$allocator@_K@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@_K@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@_K@std@@@std@@@2@@Z @ 0x1800CE1EC (-erase@-$deque@_KV-$allocator@_K@std@@@std@@QEAA-AV-$_Deque_iterator@V-$_Deque_val@_ea_1800CE1EC.c)
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@Uguid@winrt@@_KV?$_Uhash_compare@Uguid@winrt@@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUguid@winrt@@_K@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUguid@winrt@@_K@std@@@std@@@std@@@2@AEBUguid@winrt@@@Z @ 0x1800CE4FC (-lower_bound@-$_Hash@V-$_Umap_traits@Uguid@winrt@@_KV-$_Uhash_compare@Uguid@winrt@@U-$hash@Uguid.c)
 *     ?push_front@?$deque@_KV?$allocator@_K@std@@@std@@QEAAXAEB_K@Z @ 0x1800CE710 (-push_front@-$deque@_KV-$allocator@_K@std@@@std@@QEAAXAEB_K@Z.c)
 *     ?ActivateTabUnderLock@WindowData@implementation@Shell@Internal@Windows@winrt@@AEAAXUguid@6@@Z @ 0x1800D11D8 (-ActivateTabUnderLock@WindowData@implementation@Shell@Internal@Windows@winrt@@AEAAXUguid@6@@Z.c)
 *     ?front@?$deque@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@QEAAAEAUguid@winrt@@XZ @ 0x1800D2F18 (-front@-$deque@Uguid@winrt@@V-$allocator@Uguid@winrt@@@std@@@std@@QEAAAEAUguid@winrt@@XZ.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall winrt::Windows::Internal::Shell::implementation::WindowTabHost::ActivateTab(
        _QWORD *a1,
        __int64 a2,
        __m128i *a3)
{
  RTL_SRWLOCK *v5; // rdi
  __m128i v6; // xmm6
  __int64 v7; // r8
  _QWORD *v8; // r9
  char v9; // di
  _OWORD *v10; // r15
  RTL_SRWLOCK *v11; // rdx
  __int64 *v12; // rax
  __int64 ***v13; // rax
  __int64 *v14; // rdx
  unsigned __int64 v15; // r8
  RTL_SRWLOCK *i; // rax
  char *Ptr; // rcx
  RTL_SRWLOCK *v19[2]; // [rsp+28h] [rbp-49h] BYREF
  __m128i v20; // [rsp+38h] [rbp-39h] BYREF
  __int64 **v21; // [rsp+48h] [rbp-29h]
  __int64 v22; // [rsp+58h] [rbp-19h] BYREF
  __int64 v23[3]; // [rsp+60h] [rbp-11h] BYREF
  char v24[48]; // [rsp+78h] [rbp+7h] BYREF

  v22 = a2;
  v5 = (RTL_SRWLOCK *)std::unordered_map<unsigned __int64,winrt::Windows::Internal::Shell::implementation::WindowData>::at(
                        a1 + 76,
                        &v22);
  v6 = *a3;
  wil::srwlock::lock_exclusive(v5, v19);
  v8 = (_QWORD *)std::deque<winrt::guid>::front(&v5[19]);
  if ( *v8 == v6.m128i_i64[0] && v8[1] == _mm_srli_si128(v6, 8).m128i_u64[0] )
  {
    v9 = 0;
  }
  else
  {
    v20 = v6;
    winrt::Windows::Internal::Shell::implementation::WindowData::ActivateTabUnderLock(v5, &v20, v7, v8);
    v9 = 1;
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(v19);
  if ( v9 )
  {
    v10 = a1 + 88;
    std::_Hash<std::_Umap_traits<winrt::guid,unsigned __int64,std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>,std::allocator<std::pair<winrt::guid const,unsigned __int64>>,0>>::lower_bound(
      a1 + 89,
      v19,
      a3);
    v11 = (RTL_SRWLOCK *)a1[90];
    if ( v19[0] != v11 )
    {
      v20.m128i_i64[1] = 0LL;
      v21 = (__int64 **)a1[87];
      v20.m128i_i64[0] = a1[84];
      v12 = (__int64 *)std::unordered_map<winrt::guid,unsigned __int64>::operator[]((__int64)(a1 + 89), a3);
      v13 = (__int64 ***)std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<winrt::guid>>>::operator+(
                           (__int64)&v20,
                           v23,
                           *v12);
      v20 = 0LL;
      if ( *v13 )
      {
        v14 = **v13;
        if ( v14 )
          v20.m128i_i64[0] = *v14;
      }
      v21 = v13[2];
      std::deque<unsigned __int64>::erase(a1 + 84, v24, &v20);
      v10 = std::unordered_map<winrt::guid,unsigned __int64>::operator[]((__int64)(a1 + 89), a3);
      v11 = (RTL_SRWLOCK *)a1[90];
    }
    v15 = *(_QWORD *)v10;
    for ( i = (RTL_SRWLOCK *)v11->Ptr; i != v11; i = (RTL_SRWLOCK *)i->Ptr )
    {
      Ptr = (char *)i[4].Ptr;
      if ( (unsigned __int64)Ptr < v15 )
        i[4].Ptr = Ptr + 1;
    }
    *(_QWORD *)std::unordered_map<winrt::guid,unsigned __int64>::operator[]((__int64)(a1 + 89), a3) = 0LL;
    std::deque<unsigned __int64>::push_front(a1 + 84, &v22);
  }
  return v9;
}
