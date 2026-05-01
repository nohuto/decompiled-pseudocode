/*
 * XREFs of _lambda_69f1d5bd17a52b1cfb35c35a1e227214_::operator() @ 0x1803B0330
 * Callers:
 *     wil::ResultFromException__lambda_69f1d5bd17a52b1cfb35c35a1e227214___ @ 0x1803AFA3C (wil--ResultFromException__lambda_69f1d5bd17a52b1cfb35c35a1e227214___.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ??$emplace_hint@AEBUpiecewise_construct_t@std@@V?$tuple@AEBK@2@V?$tuple@$$V@2@@?$_Tree@V?$_Tmap_traits@KV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@@std@@@std@@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBK@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1803AFFD0 (--$emplace_hint@AEBUpiecewise_construct_t@std@@V-$tuple@AEBK@2@V-$tuple@$$V@2@@-$_T_ea_1803AFFD0.c)
 */

__int64 __fastcall lambda_69f1d5bd17a52b1cfb35c35a1e227214_::operator()(_QWORD *a1)
{
  __int64 *v2; // rcx
  unsigned int *v3; // r9
  __int64 v4; // rax
  __int64 v5; // rdx
  unsigned int v6; // r8d
  __int64 v7; // rdi
  __int64 *v8; // r9
  __int64 v9; // rdx
  void (__fastcall *v10)(__int64, _QWORD); // rsi
  __int64 v11; // rax
  unsigned int v12; // ecx
  _DWORD *v14; // [rsp+40h] [rbp+8h] BYREF
  __int64 v15; // [rsp+48h] [rbp+10h] BYREF

  v2 = (__int64 *)(*a1 + 136LL);
  v3 = (unsigned int *)a1[1];
  v4 = *v2;
  v5 = *(_QWORD *)(*v2 + 8);
  if ( *(_BYTE *)(v5 + 25) )
    goto LABEL_9;
  v6 = *v3;
  do
  {
    if ( *(_DWORD *)(v5 + 32) >= v6 )
    {
      v4 = v5;
      v5 = *(_QWORD *)v5;
    }
    else
    {
      v5 = *(_QWORD *)(v5 + 16);
    }
  }
  while ( !*(_BYTE *)(v5 + 25) );
  if ( v4 == *v2 || v6 < *(_DWORD *)(v4 + 32) )
  {
LABEL_9:
    v14 = (_DWORD *)a1[1];
    v4 = *std::_Tree<std::_Tmap_traits<unsigned long,Microsoft::WRL::ComPtr<IApplicationFrame>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IApplicationFrame>>>,0>>::emplace_hint<std::piecewise_construct_t const &,std::tuple<unsigned long const &>,std::tuple<>>(
            v2,
            &v15,
            v4,
            (__int64)v3,
            &v14);
  }
  if ( *(_QWORD *)(v4 + 40) )
  {
    v7 = *(_QWORD *)(*a1 + 128LL);
    v8 = (__int64 *)(*a1 + 136LL);
    v9 = *v8;
    v10 = *(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v7 + 32LL);
    v11 = *(_QWORD *)(*v8 + 8);
    if ( *(_BYTE *)(v11 + 25) )
      goto LABEL_19;
    v12 = *(_DWORD *)a1[1];
    do
    {
      if ( *(_DWORD *)(v11 + 32) >= v12 )
      {
        v9 = v11;
        v11 = *(_QWORD *)v11;
      }
      else
      {
        v11 = *(_QWORD *)(v11 + 16);
      }
    }
    while ( !*(_BYTE *)(v11 + 25) );
    if ( v9 == *v8 || v12 < *(_DWORD *)(v9 + 32) )
    {
LABEL_19:
      v14 = (_DWORD *)a1[1];
      v9 = *std::_Tree<std::_Tmap_traits<unsigned long,Microsoft::WRL::ComPtr<IApplicationFrame>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IApplicationFrame>>>,0>>::emplace_hint<std::piecewise_construct_t const &,std::tuple<unsigned long const &>,std::tuple<>>(
              v8,
              &v15,
              v9,
              (__int64)v8,
              &v14);
    }
    v10(v7, *(_QWORD *)(v9 + 40));
  }
  return std::_Tree<std::_Tmap_traits<unsigned long,Microsoft::WRL::ComPtr<IApplicationFrame>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IApplicationFrame>>>,0>>::erase(
           *a1 + 136LL,
           a1[1]);
}
