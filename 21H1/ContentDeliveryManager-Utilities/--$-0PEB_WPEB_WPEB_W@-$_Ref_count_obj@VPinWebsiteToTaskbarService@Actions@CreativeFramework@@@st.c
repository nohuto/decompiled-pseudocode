/*
 * XREFs of ??$?0PEB_WPEB_WPEB_W@?$_Ref_count_obj@VPinWebsiteToTaskbarService@Actions@CreativeFramework@@@std@@QEAA@$$QEAPEB_W00@Z @ 0x1800908B0
 * Callers:
 *     wil::details::functor_wrapper_other__lambda_a111f9909dcb1fbe287f852ebd02ec50__&_std::shared_ptr_CreativeFramework::Actions::PinWebsiteToTaskbarService___::Run @ 0x1800909C0 (wil--details--functor_wrapper_other__lambda_a111f9909dcb1fbe287f852ebd02ec50__-_std--shared_ptr_.c)
 * Callees:
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x180068CAC (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall std::_Ref_count_obj<CreativeFramework::Actions::PinWebsiteToTaskbarService>::_Ref_count_obj<CreativeFramework::Actions::PinWebsiteToTaskbarService>(
        __int64 a1,
        char **a2,
        char **a3,
        char **a4)
{
  __int64 v5; // r14
  char *v6; // rsi
  char *v7; // rbp
  char *v8; // rdx
  __int64 v9; // rcx
  unsigned __int64 v10; // rbx
  __int64 v11; // rdi
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // r8

  *(_DWORD *)(a1 + 8) = 1;
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &std::_Ref_count_obj<CreativeFramework::Actions::PinToStartService>::`vftable';
  v5 = a1 + 16;
  v6 = *a4;
  v7 = *a3;
  v8 = *a2;
  *(_QWORD *)(a1 + 16) = &CreativeFramework::Actions::PinWebsiteToTaskbarService::`vftable';
  v9 = a1 + 24;
  *(_QWORD *)(v9 + 24) = 7LL;
  v10 = 0LL;
  *(_QWORD *)(v9 + 16) = 0LL;
  *(_WORD *)v9 = 0;
  v11 = -1LL;
  if ( *(_WORD *)v8 )
  {
    v12 = -1LL;
    do
      ++v12;
    while ( *(_WORD *)&v8[2 * v12] );
  }
  else
  {
    v12 = 0LL;
  }
  std::wstring::assign((void **)v9, v8, v12);
  *(_QWORD *)(v5 + 64) = 7LL;
  *(_QWORD *)(v5 + 56) = 0LL;
  *(_WORD *)(v5 + 40) = 0;
  if ( *(_WORD *)v7 )
  {
    v13 = -1LL;
    do
      ++v13;
    while ( *(_WORD *)&v7[2 * v13] );
  }
  else
  {
    v13 = 0LL;
  }
  std::wstring::assign((void **)(v5 + 40), v7, v13);
  *(_QWORD *)(v5 + 96) = 7LL;
  *(_QWORD *)(v5 + 88) = 0LL;
  *(_WORD *)(v5 + 72) = 0;
  if ( *(_WORD *)v6 )
  {
    do
      ++v11;
    while ( *(_WORD *)&v6[2 * v11] );
    v10 = v11;
  }
  std::wstring::assign((void **)(v5 + 72), v6, v10);
  return a1;
}
