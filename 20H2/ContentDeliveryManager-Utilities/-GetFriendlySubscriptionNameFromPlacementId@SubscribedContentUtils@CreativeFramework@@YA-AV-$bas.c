/*
 * XREFs of ?GetFriendlySubscriptionNameFromPlacementId@SubscribedContentUtils@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEB_W@Z @ 0x180087190
 * Callers:
 *     ?GetSourceTileIdentifier@SwapStartTileService@Actions@CreativeFramework@@AEAA?AV?$com_ptr_t@UIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x1800881D8 (-GetSourceTileIdentifier@SwapStartTileService@Actions@CreativeFramework@@AEAA-AV-$com_ptr_t@UIUn.c)
 *     ?CreateTargetedContentTileIdentifier@SwapStartTileService@Actions@CreativeFramework@@AEAA?AV?$com_ptr_t@UIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@PEB_W0@Z @ 0x180088810 (-CreateTargetedContentTileIdentifier@SwapStartTileService@Actions@CreativeFramework@@AEAA-AV-$co.c)
 *     ??0AddTileToCollectionService@Actions@CreativeFramework@@QEAA@PEB_WAEBUPinToStartProperties@12@@Z @ 0x180089490 (--0AddTileToCollectionService@Actions@CreativeFramework@@QEAA@PEB_WAEBUPinToStartProperties@12@@.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005F38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Assign_rv@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z @ 0x180036D6C (-_Assign_rv@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x18006ACE4 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x18006AEBC (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     ?find@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEBA_KPEB_W_K1@Z @ 0x18008AF84 (-find@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEBA_KPEB_W_K1@Z.c)
 *     __security_check_cookie @ 0x1800CD280 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *__fastcall CreativeFramework::SubscribedContentUtils::GetFriendlySubscriptionNameFromPlacementId(
        _QWORD *a1,
        char *a2)
{
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // r8
  __int64 v5; // rax
  WCHAR *v6; // rdi
  const wchar_t near *const *v7; // rsi
  void **v8; // rdx
  char v9; // bl
  char v10; // bl
  void *v12[2]; // [rsp+50h] [rbp-51h] BYREF
  __int64 v13; // [rsp+60h] [rbp-41h]
  unsigned __int64 v14; // [rsp+68h] [rbp-39h]
  void *v15[2]; // [rsp+70h] [rbp-31h] BYREF
  __int64 v16; // [rsp+80h] [rbp-21h]
  unsigned __int64 v17; // [rsp+88h] [rbp-19h]
  LPCWSTR lpStringSource[3]; // [rsp+90h] [rbp-11h] BYREF
  unsigned __int64 v19; // [rsp+A8h] [rbp+7h]
  void *v20[3]; // [rsp+B0h] [rbp+Fh] BYREF
  unsigned __int64 v21; // [rsp+C8h] [rbp+27h]
  wil::details::in1diag3 *retaddr; // [rsp+100h] [rbp+5Fh]

  v14 = 7LL;
  v13 = 0LL;
  LOWORD(v12[0]) = 0;
  v3 = -1LL;
  if ( *(_WORD *)a2 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( *(_WORD *)&a2[2 * v4] );
  }
  else
  {
    v4 = 0LL;
  }
  std::wstring::assign(v12, a2, v4);
  v5 = std::wstring::find(v12, L"-", 0LL, 1LL);
  if ( v5 == -1 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xE,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\SubscribedContentUtils.h",
      (const char *)0x80070057LL);
    JUMPOUT(0x18008741DLL);
  }
  v19 = 7LL;
  lpStringSource[2] = 0LL;
  LOWORD(lpStringSource[0]) = 0;
  std::wstring::assign((void **)lpStringSource, v12, v5 + 1, 0xFFFFFFFFFFFFFFFFuLL);
  if ( v14 >= 8 )
    operator delete(v12[0]);
  v14 = 7LL;
  v13 = 0LL;
  LOWORD(v12[0]) = 0;
  v6 = (WCHAR *)lpStringSource;
  if ( v19 >= 8 )
    v6 = (WCHAR *)lpStringSource[0];
  v7 = &off_1800FA180;
  while ( FindStringOrdinal(0x200000u, v6, -1, v7[2], -1, 1) < 0
       && FindStringOrdinal(0x200000u, v6, -1, v7[1], -1, 1) < 0 )
  {
    v7 += 3;
    if ( v7 == (const wchar_t near *const *)off_1800FA3A8 )
      goto LABEL_16;
  }
  v6 = (WCHAR *)*v7;
LABEL_16:
  if ( v6 )
  {
    v17 = 7LL;
    v16 = 0LL;
    LOWORD(v15[0]) = 0;
    if ( *v6 )
    {
      do
        ++v3;
      while ( v6[v3] );
    }
    else
    {
      v3 = 0LL;
    }
    std::wstring::assign(v15, (char *)v6, v3);
    v8 = v15;
    v9 = 26;
  }
  else
  {
    v21 = 7LL;
    v20[2] = 0LL;
    LOWORD(v20[0]) = 0;
    std::wstring::assign(v20, (void **)lpStringSource, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
    v8 = v20;
    v9 = 25;
  }
  a1[3] = 7LL;
  a1[2] = 0LL;
  *(_WORD *)a1 = 0;
  std::wstring::_Assign_rv(a1, v8);
  v10 = v9 | 4;
  if ( (v10 & 2) != 0 )
  {
    v10 &= ~2u;
    if ( v17 >= 8 )
      operator delete(v15[0]);
    v17 = 7LL;
    v16 = 0LL;
    LOWORD(v15[0]) = 0;
  }
  if ( (v10 & 1) != 0 && v21 >= 8 )
    operator delete(v20[0]);
  if ( v19 >= 8 )
    operator delete((void *)lpStringSource[0]);
  return a1;
}
