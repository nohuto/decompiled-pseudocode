/*
 * XREFs of ??$?0PEB_WPEB_WPEB_W@?$_Ref_count_obj@VSetDefaultApplicationService@Actions@CreativeFramework@@@std@@QEAA@$$QEAPEB_W00@Z @ 0x18008CB88
 * Callers:
 *     ??$make_shared@VSetDefaultApplicationService@Actions@CreativeFramework@@PEB_WPEB_WPEB_W@std@@YA?AV?$shared_ptr@VSetDefaultApplicationService@Actions@CreativeFramework@@@0@$$QEAPEB_W00@Z @ 0x18008CB08 (--$make_shared@VSetDefaultApplicationService@Actions@CreativeFramework@@PEB_WPEB_WPEB_W@std@@YA-.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005F38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x180006484 (--$verify_hresult@J@wil@@YAJJ@Z.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x18006AEBC (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall std::_Ref_count_obj<CreativeFramework::Actions::SetDefaultApplicationService>::_Ref_count_obj<CreativeFramework::Actions::SetDefaultApplicationService>(
        __int64 a1,
        char **a2,
        char **a3,
        char **a4)
{
  __int64 v5; // rsi
  char *v6; // rbp
  char *v7; // rdi
  char *v8; // rdx
  __int64 v9; // rcx
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // r8
  const WCHAR *v13; // rdi
  __int64 v14; // rax
  wchar_t **v15; // rbx
  const char *v17; // r9
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  *(_DWORD *)(a1 + 8) = 1;
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &std::_Ref_count_obj<CreativeFramework::Actions::PinToStartService>::`vftable';
  v5 = a1 + 16;
  v6 = *a4;
  v7 = *a3;
  v8 = *a2;
  *(_QWORD *)(a1 + 16) = &CreativeFramework::Actions::SetDefaultApplicationService::`vftable';
  v9 = a1 + 24;
  *(_QWORD *)(v9 + 24) = 7LL;
  v10 = 0LL;
  *(_QWORD *)(v9 + 16) = 0LL;
  *(_WORD *)v9 = 0;
  if ( *(_WORD *)v8 )
  {
    v11 = -1LL;
    do
      ++v11;
    while ( *(_WORD *)&v8[2 * v11] );
  }
  else
  {
    v11 = 0LL;
  }
  std::wstring::assign((void **)v9, v8, v11);
  *(_QWORD *)(v5 + 64) = 7LL;
  *(_QWORD *)(v5 + 56) = 0LL;
  *(_WORD *)(v5 + 40) = 0;
  if ( *(_WORD *)v7 )
  {
    v12 = -1LL;
    do
      ++v12;
    while ( *(_WORD *)&v7[2 * v12] );
  }
  else
  {
    v12 = 0LL;
  }
  std::wstring::assign((void **)(v5 + 40), v7, v12);
  v13 = (const WCHAR *)(v5 + 72);
  *(_QWORD *)(v5 + 96) = 7LL;
  *(_QWORD *)(v5 + 88) = 0LL;
  *(_WORD *)(v5 + 72) = 0;
  if ( *(_WORD *)v6 )
  {
    v14 = -1LL;
    do
      ++v14;
    while ( *(_WORD *)&v6[2 * v14] );
    v10 = v14;
  }
  std::wstring::assign((void **)(v5 + 72), v6, v10);
  if ( *(_QWORD *)(v5 + 96) >= 8uLL )
    v13 = *(const WCHAR **)v13;
  v15 = &off_1801978B0;
  while ( CompareStringOrdinal(*v15, -1, v13, -1, 1) != 2 )
  {
    v15 += 2;
    if ( v15 == &off_1801978D0 )
    {
      v17 = (const char *)(unsigned int)wil::verify_hresult<long>(0x80070057);
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x26,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\defaultapplicationhelpers.cpp",
        v17);
      JUMPOUT(0x18008CD0ALL);
    }
  }
  *(_DWORD *)(v5 + 104) = *((_DWORD *)v15 + 2);
  return a1;
}
