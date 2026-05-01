/*
 * XREFs of ?_InitializeId@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180028838
 * Callers:
 *     ?RuntimeClassInitialize@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAUIUnifiedTile@UnifiedTile@Shell@WindowsInternal@@PEAUIUnifiedTileManager@789@PEAUIGameListChangedEventHandler@2345@@Z @ 0x1800275EC (-RuntimeClassInitialize@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAUIU.c)
 *     ?RuntimeClassInitialize@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@8@PEAUIGameListChangedEventHandler@2345@@Z @ 0x180027850 (-RuntimeClassInitialize@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJU_GUID.c)
 *     ?_ReinitializeAfterAttachingGameConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAX_N@Z @ 0x180029830 (-_ReinitializeAfterAttachingGameConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windo.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003268 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetFirstGameConfig@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAAEAU?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@_N@Z @ 0x18003A2A4 (-GetFirstGameConfig@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAAEA.c)
 *     __security_check_cookie @ 0x1800443F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180045FD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeId(
        Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *this,
        __int64 a2)
{
  __int64 v3; // rcx
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  LPOLESTR v7; // rbx
  LPOLESTR v8; // rcx
  LPOLESTR v9; // rcx
  __int64 v10; // rcx
  HSTRING *v11; // rdi
  LPOLESTR v12; // rsi
  unsigned __int64 v13; // rbx
  UINT32 v14; // edx
  const WCHAR *v15; // rcx
  LPOLESTR lpsz; // [rsp+20h] [rbp-20h] BYREF
  IID rclsid; // [rsp+28h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]

  v3 = *((_QWORD *)this + 32);
  if ( v3 )
  {
    lpsz = 0LL;
    v4 = (*(__int64 (__fastcall **)(__int64, LPOLESTR *))(*(_QWORD *)v3 + 48LL))(v3, &lpsz);
    v5 = v4;
    if ( v4 < 0 )
    {
      v6 = 478LL;
      goto LABEL_6;
    }
    v7 = lpsz;
    WindowsDeleteString(*((HSTRING *)this + 30));
    *((_QWORD *)this + 30) = 0LL;
    v4 = (*(__int64 (__fastcall **)(LPOLESTR, char *))(*(_QWORD *)v7 + 56LL))(v7, (char *)this + 240);
    v5 = v4;
    if ( v4 < 0 )
    {
      v6 = 480LL;
LABEL_6:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v6,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
        (const char *)(unsigned int)v4);
      v8 = lpsz;
      if ( lpsz )
      {
        lpsz = 0LL;
        (*(void (__fastcall **)(LPOLESTR))(*(_QWORD *)v8 + 16LL))(v8);
      }
      return v5;
    }
    WindowsDeleteString(*((HSTRING *)this + 29));
    *((_QWORD *)this + 29) = 0LL;
    WindowsDuplicateString(*((HSTRING *)this + 30), (HSTRING *)this + 29);
    v9 = lpsz;
    if ( lpsz )
    {
      lpsz = 0LL;
      (*(void (__fastcall **)(LPOLESTR))(*(_QWORD *)v9 + 16LL))(v9);
    }
    return 0LL;
  }
  v10 = *((_QWORD *)this + 35);
  if ( v10 && *((_QWORD *)this + 36) )
  {
    LOBYTE(a2) = 1;
    rclsid = *(IID *)Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::GetFirstGameConfig(
                       v10,
                       a2);
    StringFromCLSID(&rclsid, &lpsz);
    v11 = (HSTRING *)((char *)this + 232);
    v12 = lpsz;
    if ( lpsz )
    {
      v13 = -1LL;
      do
        ++v13;
      while ( lpsz[v13] );
      if ( v13 > 0xFFFFFFFF )
        goto LABEL_19;
      WindowsDeleteString(*v11);
      v14 = v13;
      v15 = v12;
    }
    else
    {
      WindowsDeleteString(*v11);
      v14 = 0;
      v15 = &word_1800515C0;
    }
    *v11 = 0LL;
    WindowsCreateString(v15, v14, v11);
LABEL_19:
    CoTaskMemFree(lpsz);
    return 0LL;
  }
  v5 = -2147418113;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1E6,
    (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
    (const char *)0x8000FFFFLL);
  return v5;
}
