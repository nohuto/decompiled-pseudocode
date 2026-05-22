/*
 * XREFs of ?MapGestureHandlerToWorkspace@MPCGestureHandlerManager@@AEAAXK@Z @ 0x18006B844
 * Callers:
 *     ?GetGestureHandlerForWorkspace@MPCGestureHandlerManager@@AEAA?AV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@K@Z @ 0x18006B2B8 (-GetGestureHandlerForWorkspace@MPCGestureHandlerManager@@AEAA-AV-$com_ptr_t@VMPCGestureHandler@@.c)
 * Callees:
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x180011CD0 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ??1?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18002831C (--1-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003E194 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 *     ??$Make@VMPCGestureHandler@@PEAUIInputProcessorHost@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VMPCGestureHandler@@@12@$$QEAPEAUIInputProcessorHost@@@Z @ 0x180069C60 (--$Make@VMPCGestureHandler@@PEAUIInputProcessorHost@@@Details@WRL@Microsoft@@YA-AV-$ComPtr@VMPCG.c)
 *     ??$emplace_hint@AEBUpiecewise_construct_t@std@@V?$tuple@AEBK@2@V?$tuple@$$V@2@@?$_Tree@V?$_Tmap_traits@KV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBK@1@$$QEAV?$tuple@$$V@1@@Z @ 0x18006AB88 (--$emplace_hint@AEBUpiecewise_construct_t@std@@V-$tuple@AEBK@2@V-$tuple@$$V@2@@-$_T_ea_18006AB88.c)
 *     ?attach@?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@QEAAXPEAVMPCGestureHandler@@@Z @ 0x18006C014 (-attach@-$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@QEAAXPEAVMPCGestureHand.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall MPCGestureHandlerManager::MapGestureHandlerToWorkspace(MPCGestureHandlerManager *this, unsigned int a2)
{
  __int64 v3; // rbx
  _DWORD *v4; // rbx
  const char *v5; // r9
  MPCGestureHandler **v6; // rax
  MPCGestureHandler *v7; // rdx
  unsigned int *v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdi
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  _DWORD *v13; // [rsp+50h] [rbp+20h] BYREF
  unsigned int v14; // [rsp+58h] [rbp+28h] BYREF
  unsigned int *v15; // [rsp+60h] [rbp+30h] BYREF
  struct IInputProcessorHost *v16; // [rsp+68h] [rbp+38h] BYREF

  v14 = a2;
  v13 = 0LL;
  v3 = *((_QWORD *)this + 6);
  if ( *((_QWORD *)this + 5) == v3 )
  {
    v16 = (struct IInputProcessorHost *)*((_QWORD *)MPCHolographicInputManager::GetInstance() + 288);
    v6 = Microsoft::WRL::Details::Make<MPCGestureHandler,IInputProcessorHost *>((MPCGestureHandler **)&v15, &v16);
    v7 = *v6;
    *v6 = 0LL;
    wil::com_ptr_t<MPCGestureHandler,wil::err_exception_policy>::attach(&v13, v7);
    v8 = v15;
    if ( v15 )
    {
      v15 = 0LL;
      (*(void (__fastcall **)(unsigned int *))(*(_QWORD *)v8 + 16LL))(v8);
    }
    v4 = v13;
  }
  else
  {
    v4 = *(_DWORD **)(v3 - 8);
    v13 = v4;
    if ( v4 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v4 + 8LL))(v4);
    wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)(*((_QWORD *)this + 6) - 8LL));
    *((_QWORD *)this + 6) -= 8LL;
  }
  if ( !v4 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      195LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcgesturehandlermanager.cpp",
      v5);
    __debugbreak();
  }
  v9 = *((_QWORD *)this + 1);
  v10 = *(_QWORD *)(v9 + 8);
  if ( *(_BYTE *)(v10 + 25) )
    goto LABEL_17;
  do
  {
    if ( *(_DWORD *)(v10 + 32) >= v14 )
    {
      v9 = v10;
      v10 = *(_QWORD *)v10;
    }
    else
    {
      v10 = *(_QWORD *)(v10 + 16);
    }
  }
  while ( !*(_BYTE *)(v10 + 25) );
  if ( v9 == *((_QWORD *)this + 1) || v14 < *(_DWORD *)(v9 + 32) )
  {
LABEL_17:
    v15 = &v14;
    v9 = *std::_Tree<std::_Tmap_traits<unsigned long,wil::com_ptr_t<MPCGestureHandler,wil::err_exception_policy>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,wil::com_ptr_t<MPCGestureHandler,wil::err_exception_policy>>>,0>>::emplace_hint<std::piecewise_construct_t const &,std::tuple<unsigned long const &>,std::tuple<>>(
            (__int64 *)this + 1,
            (__int64 *)&v16,
            (__int64 *)v9,
            (__int64)v5,
            &v15);
  }
  v11 = *(_QWORD *)(v9 + 40);
  *(_QWORD *)(v9 + 40) = v4;
  (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v4 + 8LL))(v4);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  v4[228] = v14;
  wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)&v13);
}
