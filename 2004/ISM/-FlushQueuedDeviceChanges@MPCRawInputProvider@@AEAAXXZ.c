/*
 * XREFs of ?FlushQueuedDeviceChanges@MPCRawInputProvider@@AEAAXXZ @ 0x18008A4BC
 * Callers:
 *     ?OnCompositorRunningStateChanged@MPCRawInputProvider@@AEAAX_N@Z @ 0x18008A900 (-OnCompositorRunningStateChanged@MPCRawInputProvider@@AEAAX_N@Z.c)
 *     ?OnInputReceived@MPCRawInputProvider@@IEAAJXZ @ 0x18008AA40 (-OnInputReceived@MPCRawInputProvider@@IEAAJXZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800117B4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Tidy@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ @ 0x18003B34C (-_Tidy@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003E484 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _lambda_7f3c0264f4cfe5c0819e572d89a9031e_::operator()_std::shared_ptr_LegacyDeviceInfo___ @ 0x1800895DC (_lambda_7f3c0264f4cfe5c0819e572d89a9031e_--operator()_std--shared_ptr_LegacyDeviceInfo___.c)
 *     ??$_Destroy_range@V?$allocator@V?$shared_ptr@ULegacyDeviceInfo@@@std@@@std@@@std@@YAXPEAV?$shared_ptr@ULegacyDeviceInfo@@@0@0AEAV?$allocator@V?$shared_ptr@ULegacyDeviceInfo@@@std@@@0@@Z @ 0x1800897A4 (--$_Destroy_range@V-$allocator@V-$shared_ptr@ULegacyDeviceInfo@@@std@@@std@@@std@@YAXPEAV-$share.c)
 *     ??$_Move_unchecked@PEAV?$shared_ptr@ULegacyDeviceInfo@@@std@@PEAV12@@std@@YAPEAV?$shared_ptr@ULegacyDeviceInfo@@@0@PEAV10@00@Z @ 0x180089C04 (--$_Move_unchecked@PEAV-$shared_ptr@ULegacyDeviceInfo@@@std@@PEAV12@@std@@YAPEAV-$shared_ptr@ULe.c)
 *     ??4?$shared_ptr@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@@wil@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18008A1D0 (--4-$shared_ptr@V-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AJPEAX@Z$1-Nt.c)
 *     ?AttachDeviceImpl@MPCRawInputProvider@@AEAAXAEBV?$shared_ptr@ULegacyDeviceInfo@@@std@@@Z @ 0x18008A3B4 (-AttachDeviceImpl@MPCRawInputProvider@@AEAAXAEBV-$shared_ptr@ULegacyDeviceInfo@@@std@@@Z.c)
 *     ?RemoveDeviceImpl@MPCRawInputProvider@@AEAAXK@Z @ 0x18008AD70 (-RemoveDeviceImpl@MPCRawInputProvider@@AEAAXK@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall MPCRawInputProvider::FlushQueuedDeviceChanges(MPCRawInputProvider *this)
{
  const char *v2; // r9
  __int64 v3; // rdi
  int ***v4; // rax
  int **v5; // r14
  int **v6; // rbx
  int **v7; // r15
  __int64 v8; // r12
  _QWORD *v9; // r8
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 *i; // rsi
  __int64 v14; // r14
  __int64 v15; // r8
  const char *v16; // r9
  int **j; // rbx
  __int64 v18; // r12
  unsigned int *v19; // rsi
  unsigned __int64 v20; // rbx
  __int128 v21; // [rsp+20h] [rbp-30h] BYREF
  __int64 v22; // [rsp+30h] [rbp-20h]
  __int128 v23; // [rsp+38h] [rbp-18h] BYREF
  __int64 v24; // [rsp+48h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  __int128 *v26; // [rsp+90h] [rbp+40h] BYREF
  __int128 *v27; // [rsp+98h] [rbp+48h] BYREF

  if ( GetCurrentThreadId() != *((_DWORD *)this + 22) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      273LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcrawinputprovider.cpp",
      v2);
    __debugbreak();
  }
  v23 = 0LL;
  v3 = 0LL;
  v24 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 96));
  v4 = (int ***)((char *)this + 136);
  v5 = 0LL;
  v6 = 0LL;
  if ( &v23 == (__int128 *)((char *)this + 136) )
  {
    v8 = *((_QWORD *)&v23 + 1);
    v7 = (int **)v23;
  }
  else
  {
    v6 = *v4;
    v7 = *v4;
    *(_QWORD *)&v23 = *v4;
    *v4 = 0LL;
    v5 = (int **)*((_QWORD *)this + 18);
    v8 = (__int64)v5;
    *((_QWORD *)this + 18) = 0LL;
    v3 = *((_QWORD *)this + 19);
    v24 = v3;
    *((_QWORD *)this + 19) = 0LL;
  }
  v9 = (_QWORD *)((char *)this + 160);
  if ( &v21 != (__int128 *)((char *)this + 160) )
  {
    v10 = v21;
    *(_QWORD *)&v21 = *v9;
    *v9 = v10;
    v11 = *((_QWORD *)&v21 + 1);
    *((_QWORD *)&v21 + 1) = *((_QWORD *)this + 21);
    *((_QWORD *)this + 21) = v11;
    v12 = v22;
    v22 = *((_QWORD *)this + 22);
    *((_QWORD *)this + 22) = v12;
  }
  if ( this != (MPCRawInputProvider *)-96LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 96));
  v27 = &v21;
  v26 = &v21;
  while ( v6 != v5
       && !lambda_7f3c0264f4cfe5c0819e572d89a9031e_::operator()_std::shared_ptr_LegacyDeviceInfo___((_QWORD **)&v26, v6) )
    v6 += 2;
  if ( v6 != v5 )
  {
    for ( i = (__int64 *)(v6 + 2); i != (__int64 *)v5; i += 2 )
    {
      if ( !lambda_7f3c0264f4cfe5c0819e572d89a9031e_::operator()_std::shared_ptr_LegacyDeviceInfo___(
              (_QWORD **)&v27,
              (int **)i) )
      {
        std::shared_ptr<wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>>>::operator=(
          v6,
          i);
        v6 += 2;
      }
    }
  }
  v14 = std::_Move_unchecked<std::shared_ptr<LegacyDeviceInfo> *,std::shared_ptr<LegacyDeviceInfo> *>(
          v8,
          v8,
          (__int64)v6);
  std::_Destroy_range<std::allocator<std::shared_ptr<LegacyDeviceInfo>>>(v14, v8);
  *((_QWORD *)&v23 + 1) = v14;
  for ( j = v7; j != (int **)v14; j += 2 )
    MPCRawInputProvider::AttachDeviceImpl((__int64)this, j, v15, v16);
  v18 = 0LL;
  v19 = (unsigned int *)v21;
  v20 = (unsigned __int64)(*((_QWORD *)&v21 + 1) - v21 + 3) >> 2;
  if ( (unsigned __int64)v21 > *((_QWORD *)&v21 + 1) )
    v20 = 0LL;
  if ( v20 )
  {
    do
    {
      MPCRawInputProvider::RemoveDeviceImpl(this, *v19++);
      ++v18;
    }
    while ( v18 != v20 );
  }
  std::vector<Windows::UI::Color>::_Tidy((__int64)&v21);
  if ( v7 )
  {
    std::_Destroy_range<std::allocator<std::shared_ptr<LegacyDeviceInfo>>>((__int64)v7, v14);
    std::_Deallocate<16,0>(v7, (const struct std::nothrow_t *)((v3 - (_QWORD)v7) & 0xFFFFFFFFFFFFFFF0uLL));
  }
}
