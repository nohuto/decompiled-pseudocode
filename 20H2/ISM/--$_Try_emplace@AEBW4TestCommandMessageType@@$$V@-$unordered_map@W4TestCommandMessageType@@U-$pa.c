/*
 * XREFs of ??$_Try_emplace@AEBW4TestCommandMessageType@@$$V@?$unordered_map@W4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@U?$hash@W4TestCommandMessageType@@@3@U?$equal_to@W4TestCommandMessageType@@@3@V?$allocator@U?$pair@$$CBW4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@@std@@@3@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@@std@@@std@@@std@@@std@@_N@1@AEBW4TestCommandMessageType@@@Z @ 0x180024478
 * Callers:
 *     ??0TestCommandHost@@AEAA@XZ @ 0x180022670 (--0TestCommandHost@@AEAA@XZ.c)
 *     ?RegisterForTestCommandMessage@TestCommandHost@@SAXW4TestCommandMessageType@@PEAXQ6A_N1PEAUTestCommandMessageDataHeader@@@ZAEAVCommandRegistrationToken@1@@Z @ 0x18002285C (-RegisterForTestCommandMessage@TestCommandHost@@SAXW4TestCommandMessageType@@PEAXQ6A_N1PEAUTestC.c)
 *     ?OnCoreMessageStatic@TestCommandHost@@CAJPEAXPEBXH@Z @ 0x1800BC1B0 (-OnCoreMessageStatic@TestCommandHost@@CAJPEAXPEBXH@Z.c)
 *     ?UnregisterForTestCommandMessage@TestCommandHost@@CAXW4TestCommandMessageType@@PEAXQ6A_N1PEAUTestCommandMessageDataHeader@@@Z@Z @ 0x1800BC2E0 (-UnregisterForTestCommandMessage@TestCommandHost@@CAXW4TestCommandMessageType@@PEAXQ6A_N1PEAUTes.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18000DAF4 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ??$emplace@AEBUpiecewise_construct_t@std@@V?$tuple@AEBW4TestCommandMessageType@@@2@V?$tuple@$$V@2@@?$_Hash@V?$_Umap_traits@W4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@V?$_Uhash_compare@W4TestCommandMessageType@@U?$hash@W4TestCommandMessageType@@@std@@U?$equal_to@W4TestCommandMessageType@@@3@@3@V?$allocator@U?$pair@$$CBW4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@@std@@@3@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@@std@@@std@@@std@@@std@@_N@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBW4TestCommandMessageType@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x180024514 (--$emplace@AEBUpiecewise_construct_t@std@@V-$tuple@AEBW4TestCommandMessageType@@@2@V-$tuple@$$V@.c)
 *     ?_End@?$_Hash@V?$_Uset_traits@PEAUISystemContextObserver@@V?$_Uhash_compare@PEAUISystemContextObserver@@U?$hash@PEAUISystemContextObserver@@@std@@U?$equal_to@PEAUISystemContextObserver@@@3@@std@@V?$allocator@PEAUISystemContextObserver@@@3@$0A@@std@@@std@@IEAA?AV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@PEAUISystemContextObserver@@@std@@@std@@U_Iterator_base0@2@@2@_K@Z @ 0x180024724 (-_End@-$_Hash@V-$_Uset_traits@PEAUISystemContextObserver@@V-$_Uhash_compare@PEAUISystemContextOb.c)
 */

__int64 __fastcall std::unordered_map<enum TestCommandMessageType,std::pair<void *,bool (*)(void *,TestCommandMessageDataHeader *)>>::_Try_emplace<enum TestCommandMessageType const &,>(
        __int64 a1,
        __int64 a2,
        const unsigned __int8 *a3)
{
  __int64 appended; // rax
  __int64 v6; // r11
  __int64 v7; // rsi
  _QWORD *v8; // rax
  __int64 v9; // r8
  __int64 v10; // r10
  __int64 v11; // rax
  const unsigned __int8 *v13; // [rsp+40h] [rbp+8h] BYREF

  appended = std::_Fnv1a_append_bytes(a1, a3, 4uLL);
  v7 = *(_QWORD *)(v6 + 48) & appended;
  do
  {
    v8 = (_QWORD *)std::_Hash<std::_Uset_traits<ISystemContextObserver *,std::_Uhash_compare<ISystemContextObserver *,std::hash<ISystemContextObserver *>,std::equal_to<ISystemContextObserver *>>,std::allocator<ISystemContextObserver *>,0>>::_End(
                     v6,
                     &v13,
                     v7);
    if ( v10 == *v8 )
    {
      v10 = *(_QWORD *)(v6 + 8);
      v11 = v10;
      goto LABEL_4;
    }
  }
  while ( *(_DWORD *)(v10 + 16) != *(_DWORD *)a3 );
  v11 = *(_QWORD *)(v6 + 8);
LABEL_4:
  if ( v10 == v11 )
  {
    v13 = a3;
    std::_Hash<std::_Umap_traits<enum TestCommandMessageType,std::pair<void *,bool (*)(void *,TestCommandMessageDataHeader *)>,std::_Uhash_compare<enum TestCommandMessageType,std::hash<enum TestCommandMessageType>,std::equal_to<enum TestCommandMessageType>>,std::allocator<std::pair<enum TestCommandMessageType const,std::pair<void *,bool (*)(void *,TestCommandMessageDataHeader *)>>>,0>>::emplace<std::piecewise_construct_t const &,std::tuple<enum TestCommandMessageType const &>,std::tuple<>>(
      v6,
      a2,
      v9,
      &v13);
  }
  else
  {
    *(_QWORD *)a2 = v10;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
