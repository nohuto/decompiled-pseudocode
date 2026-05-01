/*
 * XREFs of ?GetWindowTabAllotment@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA_K_K@Z @ 0x1800CC1C0
 * Callers:
 *     ?SyncWindowTabDataModel@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA_K_K@Z @ 0x1800CD938 (-SyncWindowTabDataModel@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA_K_K@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18003A530 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x180073B14 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180089674 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Insert_unverified@$$CB_KU_Not_a_node_tag@std@@@?$_Hash@V?$_Uset_traits@_KV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@_K@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@_K@std@@@std@@@std@@_N@1@$$QEB_KU_Not_a_node_tag@1@@Z @ 0x1800C65BC (--$_Insert_unverified@$$CB_KU_Not_a_node_tag@std@@@-$_Hash@V-$_Uset_traits@_KV-$_Uhash_compare@_.c)
 *     ??A?$deque@_KV?$allocator@_K@std@@@std@@QEAAAEA_K_K@Z @ 0x1800C98C0 (--A-$deque@_KV-$allocator@_K@std@@@std@@QEAAAEA_K_K@Z.c)
 *     ?_Buy_raw@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUguid@winrt@@@std@@@std@@@std@@@std@@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUguid@winrt@@@std@@@std@@@std@@@std@@@2@@std@@AEAAX_K@Z @ 0x1800CE31C (-_Buy_raw@-$vector@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CB_K.c)
 *     ?_End@?$_Hash@V?$_Uset_traits@_KV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@_K@2@$0A@@std@@@std@@IEAA?AV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@_K@std@@@std@@U_Iterator_base0@2@@2@_K@Z @ 0x1800CE848 (-_End@-$_Hash@V-$_Uset_traits@_KV-$_Uhash_compare@_KU-$hash@_K@std@@U-$equal_to@_K@2@@std@@V-$al.c)
 *     ?_Tidy@?$vector@PEAXV?$allocator@PEAX@std@@@std@@AEAAXXZ @ 0x1800CF1B4 (-_Tidy@-$vector@PEAXV-$allocator@PEAX@std@@@std@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall winrt::Windows::Internal::Shell::implementation::WindowTabHost::GetWindowTabAllotment(
        winrt::Windows::Internal::Shell::implementation::WindowTabHost *this,
        __int64 a2)
{
  __int64 v3; // rsi
  unsigned __int64 v4; // r14
  __int64 v5; // rax
  _QWORD *v6; // rbx
  char *v7; // rdx
  __int64 v8; // rdi
  unsigned __int64 v9; // rbx
  _QWORD **v10; // r15
  _QWORD *v11; // rax
  __int64 v12; // rcx
  const unsigned __int8 *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r10
  _QWORD *i; // rdi
  _QWORD *v17; // r11
  const unsigned __int8 *v18; // rax
  unsigned __int64 v19; // rcx
  _QWORD **v20; // rcx
  _QWORD *v21; // rcx
  _QWORD *v22; // rdi
  char v24[16]; // [rsp+20h] [rbp-50h] BYREF
  __int64 v25; // [rsp+30h] [rbp-40h] BYREF
  _QWORD **v26; // [rsp+38h] [rbp-38h]
  __int64 v27; // [rsp+40h] [rbp-30h]
  char *v28; // [rsp+48h] [rbp-28h] BYREF
  __int128 v29; // [rsp+50h] [rbp-20h]
  __int64 v30; // [rsp+60h] [rbp-10h]
  __int64 v31; // [rsp+68h] [rbp-8h]
  char v32; // [rsp+B0h] [rbp+40h] BYREF
  __int64 v33; // [rsp+B8h] [rbp+48h]

  v33 = a2;
  v3 = 0LL;
  v4 = *((_QWORD *)this + 88);
  v5 = *((int *)this + 194);
  if ( v4 >= qword_1804F6A30[v5] )
    v4 = qword_1804F6A30[v5];
  v27 = 0LL;
  v6 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x18uLL);
  *v6 = v6;
  v6[1] = v6;
  v26 = (_QWORD **)v6;
  v28 = 0LL;
  v29 = 0LL;
  std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned __int64 const,winrt::guid>>>>>::_Buy_raw(
    &v28,
    16LL);
  v7 = v28;
  memset64(v28, (unsigned __int64)v6, 0x10uLL);
  *(_QWORD *)&v29 = v7 + 128;
  v8 = 7LL;
  v30 = 7LL;
  v31 = 8LL;
  *(float *)&v25 = FLOAT_1_0;
  v9 = 0LL;
  if ( !v4 )
    goto LABEL_18;
  v10 = v26;
  do
  {
    v11 = (_QWORD *)std::deque<unsigned __int64>::operator[]((_QWORD *)this + 84, v9);
    v12 = v3 + 1;
    if ( *v11 != v33 )
      v12 = v3;
    v3 = v12;
    v13 = (const unsigned __int8 *)std::deque<unsigned __int64>::operator[]((_QWORD *)this + 84, v9);
    v15 = std::_Fnv1a_append_bytes(v14, v13, 8uLL) & v8;
    for ( i = *(_QWORD **)&v28[16 * v15];
          i != *(_QWORD **)std::_Hash<std::_Uset_traits<unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<unsigned __int64>,0>>::_End(
                             &v25,
                             &v32,
                             v15);
          i = (_QWORD *)*i )
    {
      if ( i[2] == *v17 )
        goto LABEL_12;
    }
    i = v10;
LABEL_12:
    if ( i == v10 )
    {
      v18 = (const unsigned __int8 *)std::deque<unsigned __int64>::operator[]((_QWORD *)this + 84, v9);
      std::_Hash<std::_Uset_traits<unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<unsigned __int64>,0>>::_Insert_unverified<unsigned __int64 const,std::_Not_a_node_tag>(
        &v25,
        (__int64)v24,
        v18);
      v19 = v4 + 1;
      v4 = *((_QWORD *)this + 88);
      if ( v4 >= v19 )
        v4 = v19;
      v10 = v26;
    }
    ++v9;
    v8 = v30;
  }
  while ( v9 < v4 );
  if ( !v3 )
LABEL_18:
    v3 = 1LL;
  std::vector<void *>::_Tidy(&v28);
  v20 = v26;
  *v26[1] = 0LL;
  v21 = *v20;
  if ( v21 )
  {
    do
    {
      v22 = (_QWORD *)*v21;
      std::_Deallocate<16,0>(v21, (const struct std::nothrow_t *)0x18);
      v21 = v22;
    }
    while ( v22 );
  }
  std::_Deallocate<16,0>(v26, (const struct std::nothrow_t *)0x18);
  return v3;
}
