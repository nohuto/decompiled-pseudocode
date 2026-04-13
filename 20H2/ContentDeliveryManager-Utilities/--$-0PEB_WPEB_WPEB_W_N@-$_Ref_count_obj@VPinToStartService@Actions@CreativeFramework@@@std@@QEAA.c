/*
 * XREFs of ??$?0PEB_WPEB_WPEB_W_N@?$_Ref_count_obj@VPinToStartService@Actions@CreativeFramework@@@std@@QEAA@$$QEAPEB_W00$$QEA_N@Z @ 0x18008C2FC
 * Callers:
 *     ??$make_shared@VPinToStartService@Actions@CreativeFramework@@PEB_WPEB_WPEB_W_N@std@@YA?AV?$shared_ptr@VPinToStartService@Actions@CreativeFramework@@@0@$$QEAPEB_W00$$QEA_N@Z @ 0x18008B4B8 (--$make_shared@VPinToStartService@Actions@CreativeFramework@@PEB_WPEB_WPEB_W_N@std@@YA-AV-$share.c)
 * Callees:
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x18006AEBC (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall std::_Ref_count_obj<CreativeFramework::Actions::PinToStartService>::_Ref_count_obj<CreativeFramework::Actions::PinToStartService>(
        __int64 a1,
        char **a2,
        char **a3,
        char **a4,
        char *a5)
{
  __int64 v6; // rsi
  char v7; // r12
  char *v8; // rbp
  char *v9; // r14
  char *v10; // rdx
  __int64 v11; // rcx
  unsigned __int64 v12; // rbx
  __int64 v13; // rdi
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // r8

  *(_DWORD *)(a1 + 8) = 1;
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &std::_Ref_count_obj<CreativeFramework::Actions::PinToStartService>::`vftable';
  v6 = a1 + 16;
  v7 = *a5;
  v8 = *a4;
  v9 = *a3;
  v10 = *a2;
  *(_QWORD *)(a1 + 16) = &CreativeFramework::Actions::PinToStartService::`vftable';
  v11 = a1 + 24;
  *(_QWORD *)(v11 + 24) = 7LL;
  v12 = 0LL;
  *(_QWORD *)(v11 + 16) = 0LL;
  *(_WORD *)v11 = 0;
  v13 = -1LL;
  if ( *(_WORD *)v10 )
  {
    v14 = -1LL;
    do
      ++v14;
    while ( *(_WORD *)&v10[2 * v14] );
  }
  else
  {
    v14 = 0LL;
  }
  std::wstring::assign((void **)v11, v10, v14);
  *(_QWORD *)(v6 + 64) = 7LL;
  *(_QWORD *)(v6 + 56) = 0LL;
  *(_WORD *)(v6 + 40) = 0;
  if ( *(_WORD *)v9 )
  {
    v15 = -1LL;
    do
      ++v15;
    while ( *(_WORD *)&v9[2 * v15] );
  }
  else
  {
    v15 = 0LL;
  }
  std::wstring::assign((void **)(v6 + 40), v9, v15);
  *(_QWORD *)(v6 + 96) = 7LL;
  *(_QWORD *)(v6 + 88) = 0LL;
  *(_WORD *)(v6 + 72) = 0;
  if ( *(_WORD *)v8 )
  {
    do
      ++v13;
    while ( *(_WORD *)&v8[2 * v13] );
    v12 = v13;
  }
  std::wstring::assign((void **)(v6 + 72), v8, v12);
  *(_BYTE *)(v6 + 104) = v7;
  return a1;
}
