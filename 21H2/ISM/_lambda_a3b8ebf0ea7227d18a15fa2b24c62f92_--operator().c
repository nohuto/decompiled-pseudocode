/*
 * XREFs of _lambda_a3b8ebf0ea7227d18a15fa2b24c62f92_::operator() @ 0x180041FC0
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_a3b8ebf0ea7227d18a15fa2b24c62f92__void_InputContext___::_Do_call @ 0x180042630 (std--_Func_impl_no_alloc__lambda_a3b8ebf0ea7227d18a15fa2b24c62f92__void_InputContext___--_Do_cal.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AE40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18000D864 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ??$As@UIDCompInputTarget@@@?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIDCompInputTarget@@@WRL@Microsoft@@@Details@12@@Z @ 0x180018090 (--$As@UIDCompInputTarget@@@-$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DE3C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_End@?$_Hash@V?$_Umap_traits@KUtagPOINT@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUtagPOINT@@@std@@@3@$0A@@std@@@std@@IEAA?AV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUtagPOINT@@@std@@@std@@@std@@@2@_K@Z @ 0x180046088 (-_End@-$_Hash@V-$_Umap_traits@KUtagPOINT@@V-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@std.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ??$_Insert_or_assign@AEBKAEAV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@?$unordered_map@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@U?$hash@K@std@@U?$equal_to@K@5@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@_N@1@AEBKAEAV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@Z @ 0x1800AD0B4 (--$_Insert_or_assign@AEBKAEAV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@@-$unordered_map@KV-$ComPtr.c)
 *     ?InitializeTargetInfoWithPointerInfo@@YAXPEBUtagMANIPULATION_POINTER_INFO@@PEAPEAUIInputTarget@@@Z @ 0x1800B0A78 (-InitializeTargetInfoWithPointerInfo@@YAXPEBUtagMANIPULATION_POINTER_INFO@@PEAPEAUIInputTarget@@.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_a3b8ebf0ea7227d18a15fa2b24c62f92_::operator()(__int64 **a1, __int64 a2)
{
  struct IInputTarget **v4; // rdi
  unsigned int v5; // r14d
  __int64 v6; // rcx
  __int64 v7; // r12
  int v8; // r15d
  __int64 v9; // r11
  _QWORD *v10; // rax
  __int64 v11; // r10
  __int64 v12; // rax
  __int64 *v13; // r15
  int v14; // eax
  __int64 result; // rax
  _BYTE v16[16]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+38h]
  __int64 v18; // [rsp+70h] [rbp+40h] BYREF
  struct IInputTarget *v19; // [rsp+78h] [rbp+48h] BYREF
  char v20; // [rsp+80h] [rbp+50h] BYREF

  v4 = (struct IInputTarget **)(a2 + 16);
  if ( !*(_QWORD *)(a2 + 16) )
  {
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)(a2 + 16));
    InitializeTargetInfoWithPointerInfo((const struct tagMANIPULATION_POINTER_INFO *)(**a1 + 56), v4);
  }
  v5 = 0;
  v6 = **a1;
  if ( *(_DWORD *)(v6 + 44) )
  {
    do
    {
      v7 = 240LL * v5;
      v8 = *(_DWORD *)(v7 + v6 + 60);
      LODWORD(v18) = v8;
      v9 = std::_Fnv1a_append_bytes(v6, (const unsigned __int8 *const)&v18, 4uLL) & *(_QWORD *)(a2 + 72);
      while ( 1 )
      {
        v10 = (_QWORD *)std::_Hash<std::_Umap_traits<unsigned long,tagPOINT,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,tagPOINT>>,0>>::_End(
                          a2 + 24,
                          &v20,
                          v9);
        if ( v11 == *v10 )
          break;
        if ( *(_DWORD *)(v11 + 16) == v8 )
        {
          v12 = *(_QWORD *)(a2 + 32);
          goto LABEL_9;
        }
      }
      v11 = *(_QWORD *)(a2 + 32);
      v12 = v11;
LABEL_9:
      if ( v11 == v12 )
      {
        v19 = 0LL;
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v19);
        InitializeTargetInfoWithPointerInfo((const struct tagMANIPULATION_POINTER_INFO *)(v7 + **a1 + 56), &v19);
        std::unordered_map<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>>::_Insert_or_assign<unsigned long const &,Microsoft::WRL::ComPtr<IInputTarget> &>(
          a2 + 24,
          v16,
          &v18,
          &v19);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v19);
      }
      else
      {
        v18 = 0LL;
        v13 = (__int64 *)(v11 + 24);
        v14 = Microsoft::WRL::ComPtr<IInputTarget>::As<IDCompInputTarget>(
                (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(v11 + 24),
                &v18);
        if ( v14 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            1808LL,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
            (const char *)(unsigned int)v14);
          __debugbreak();
        }
        if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v18 + 32LL))(v18, v7 + **a1 + 208) )
        {
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v13);
          InitializeTargetInfoWithPointerInfo(
            (const struct tagMANIPULATION_POINTER_INFO *)(v7 + **a1 + 56),
            (struct IInputTarget **)v13);
        }
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v18);
      }
      ++v5;
      v6 = **a1;
    }
    while ( v5 < *(_DWORD *)(v6 + 44) );
  }
  *(_QWORD *)(a2 + 88) = *(_QWORD *)(v6 + 256);
  result = *(_DWORD *)(**a1 + 264) & 0xFFFFFFFB;
  *(_DWORD *)(a2 + 96) = result;
  return result;
}
