/*
 * XREFs of ?OnCoreMessageStatic@TestCommandHost@@CAJPEAXPEBXH@Z @ 0x1800BC710
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Try_emplace@AEBW4TestCommandMessageType@@$$V@?$unordered_map@W4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@U?$hash@W4TestCommandMessageType@@@3@U?$equal_to@W4TestCommandMessageType@@@3@V?$allocator@U?$pair@$$CBW4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@@std@@@3@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@@std@@@std@@@std@@@std@@_N@1@AEBW4TestCommandMessageType@@@Z @ 0x1800243E8 (--$_Try_emplace@AEBW4TestCommandMessageType@@$$V@-$unordered_map@W4TestCommandMessageType@@U-$pa.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003E424 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?equal_range@?$_Hash@V?$_Umap_traits@KUResultInfo@DragNDropProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUResultInfo@DragNDropProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUResultInfo@DragNDropProcessor@@@std@@@std@@@std@@@std@@V12@@2@AEBK@Z @ 0x180045B50 (-equal_range@-$_Hash@V-$_Umap_traits@KUResultInfo@DragNDropProcessor@@V-$_Uhash_compare@KU-$hash.c)
 *     memcpy_0 @ 0x18004AC7B (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TestCommandHost::OnCoreMessageStatic(_QWORD *a1, const void *a2, int a3, const char *a4)
{
  size_t v4; // r15
  void *v7; // rbx
  const char *v8; // r9
  _QWORD *v9; // rcx
  __int64 v10; // rax
  _QWORD v12[3]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v4 = a3;
  if ( (unsigned __int64)a3 < 4 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      143LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\testcommandhost\\lib\\testcommandhost.cpp",
      a4);
    __debugbreak();
  }
  v7 = malloc(a3);
  memcpy_0(v7, a2, v4);
  std::_Hash<std::_Umap_traits<unsigned long,DragNDropProcessor::ResultInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DragNDropProcessor::ResultInfo>>,0>>::equal_range(
    a1 + 9,
    v12,
    (const unsigned __int8 *)v7);
  v9 = (_QWORD *)v12[0];
  v10 = 0LL;
  while ( v9 != (_QWORD *)v12[1] )
  {
    ++v10;
    v9 = (_QWORD *)*v9;
  }
  try
  {
    if ( v10 )
    {
      std::unordered_map<enum TestCommandMessageType,std::pair<void *,bool (*)(void *,TestCommandMessageDataHeader *)>>::_Try_emplace<enum TestCommandMessageType const &,>(
        (__int64)(a1 + 9),
        (__int64)v12,
        (const unsigned __int8 *)v7);
      LOBYTE(v10) = (*(__int64 (__fastcall **)(_QWORD, void *))(v12[0] + 32LL))(*(_QWORD *)(v12[0] + 24LL), v7);
    }
    if ( (_BYTE)v10 )
      (*(void (__fastcall **)(_QWORD, _QWORD, void *, _QWORD))(*(_QWORD *)*a1 + 176LL))(
        *a1,
        a1[1],
        v7,
        (unsigned int)v4);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0xA1,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\testcommandhost\\lib\\testcommandhost.cpp",
      v8);
  }
  return 0LL;
}
