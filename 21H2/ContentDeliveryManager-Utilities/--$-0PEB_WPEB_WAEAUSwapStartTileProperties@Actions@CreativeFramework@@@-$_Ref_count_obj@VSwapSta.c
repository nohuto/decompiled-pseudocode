/*
 * XREFs of ??$?0PEB_WPEB_WAEAUSwapStartTileProperties@Actions@CreativeFramework@@@?$_Ref_count_obj@VSwapStartTileService@Actions@CreativeFramework@@@std@@QEAA@$$QEAPEB_W0AEAUSwapStartTileProperties@Actions@CreativeFramework@@@Z @ 0x18008CB28
 * Callers:
 *     ??$make_shared@VSwapStartTileService@Actions@CreativeFramework@@PEB_WPEB_WAEAUSwapStartTileProperties@23@@std@@YA?AV?$shared_ptr@VSwapStartTileService@Actions@CreativeFramework@@@0@$$QEAPEB_W0AEAUSwapStartTileProperties@Actions@CreativeFramework@@@Z @ 0x18008BE18 (--$make_shared@VSwapStartTileService@Actions@CreativeFramework@@PEB_WPEB_WAEAUSwapStartTilePrope.c)
 * Callees:
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x18006B754 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x18006B92C (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall std::_Ref_count_obj<CreativeFramework::Actions::SwapStartTileService>::_Ref_count_obj<CreativeFramework::Actions::SwapStartTileService>(
        __int64 a1,
        char **a2,
        char **a3,
        void **a4)
{
  __int64 v6; // rdi
  char *v7; // rsi
  char *v8; // rdx
  __int64 v9; // rcx
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // r8

  *(_DWORD *)(a1 + 8) = 1;
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &std::_Ref_count_obj<CreativeFramework::Actions::PinToStartService>::`vftable';
  v6 = a1 + 16;
  v7 = *a3;
  v8 = *a2;
  *(_QWORD *)(a1 + 16) = &CreativeFramework::Actions::SwapStartTileService::`vftable';
  v9 = a1 + 24;
  *(_QWORD *)(v9 + 24) = 7LL;
  *(_QWORD *)(v9 + 16) = 0LL;
  *(_WORD *)v9 = 0;
  if ( *(_WORD *)v8 )
  {
    v10 = -1LL;
    do
      ++v10;
    while ( *(_WORD *)&v8[2 * v10] );
  }
  else
  {
    v10 = 0LL;
  }
  std::wstring::assign((void **)v9, v8, v10);
  *(_QWORD *)(v6 + 64) = 7LL;
  *(_QWORD *)(v6 + 56) = 0LL;
  *(_WORD *)(v6 + 40) = 0;
  if ( *(_WORD *)v7 )
  {
    v11 = -1LL;
    do
      ++v11;
    while ( *(_WORD *)&v7[2 * v11] );
  }
  else
  {
    v11 = 0LL;
  }
  std::wstring::assign((void **)(v6 + 40), v7, v11);
  *(_QWORD *)(v6 + 96) = 7LL;
  *(_QWORD *)(v6 + 88) = 0LL;
  *(_WORD *)(v6 + 72) = 0;
  std::wstring::assign((void **)(v6 + 72), a4 + 20, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
  *(_QWORD *)(v6 + 128) = 7LL;
  *(_QWORD *)(v6 + 120) = 0LL;
  *(_WORD *)(v6 + 104) = 0;
  std::wstring::assign((void **)(v6 + 104), a4 + 12, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
  *(_QWORD *)(v6 + 160) = 7LL;
  *(_QWORD *)(v6 + 152) = 0LL;
  *(_WORD *)(v6 + 136) = 0;
  std::wstring::assign((void **)(v6 + 136), a4 + 16, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
  *(_QWORD *)(v6 + 192) = 7LL;
  *(_QWORD *)(v6 + 184) = 0LL;
  *(_WORD *)(v6 + 168) = 0;
  std::wstring::assign((void **)(v6 + 168), a4, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
  *(_QWORD *)(v6 + 224) = 7LL;
  *(_QWORD *)(v6 + 216) = 0LL;
  *(_WORD *)(v6 + 200) = 0;
  std::wstring::assign((void **)(v6 + 200), a4 + 8, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
  *(_QWORD *)(v6 + 256) = 7LL;
  *(_QWORD *)(v6 + 248) = 0LL;
  *(_WORD *)(v6 + 232) = 0;
  std::wstring::assign((void **)(v6 + 232), a4 + 4, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
  return a1;
}
