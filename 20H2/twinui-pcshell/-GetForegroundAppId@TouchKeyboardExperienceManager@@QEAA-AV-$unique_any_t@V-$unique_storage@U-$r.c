/*
 * XREFs of ?GetForegroundAppId@TouchKeyboardExperienceManager@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x18034A508
 * Callers:
 *     ?OnEditControlPositionChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerEditControlPositionChangedEventArgs@45678@@Z @ 0x1800585D0 (-OnEditControlPositionChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@.c)
 *     ?ShouldShowEmojiTipsOnHotKey@TouchKeyboardExperienceManager@@QEAAJPEA_N@Z @ 0x18034FEA4 (-ShouldShowEmojiTipsOnHotKey@TouchKeyboardExperienceManager@@QEAAJPEA_N@Z.c)
 *     ?NotifyOcclusionToCoreInputViewManager@TabTipAdapter@KeyboardHosting@@QEAAJIAEBUtagRECT@@@Z @ 0x18035DEA0 (-NotifyOcclusionToCoreInputViewManager@TabTipAdapter@KeyboardHosting@@QEAAJIAEBUtagRECT@@@Z.c)
 *     ?OnShellHotKey@TabTipAdapter@KeyboardHosting@@QEAAJW4_TouchKeyboardShellHotKeyType@@@Z @ 0x180360474 (-OnShellHotKey@TabTipAdapter@KeyboardHosting@@QEAAJW4_TouchKeyboardShellHotKeyType@@@Z.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x180041DB0 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ??$make_unique_string_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x180041DF8 (--$make_unique_string_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@.c)
 *     ?make_cotaskmem_string_nothrow@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@1@PEBG_K@Z @ 0x180093954 (-make_cotaskmem_string_nothrow@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEA.c)
 *     ?GetImmersiveAppIdFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEAPEAG@Z @ 0x180469CE8 (-GetImmersiveAppIdFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEAPEAG@Z.c)
 *     ?GetProcessAppIdWithAppResolverFallback@CallerIdentity@@YAJPEAXPEAPEAG@Z @ 0x18046B104 (-GetProcessAppIdWithAppResolverFallback@CallerIdentity@@YAJPEAXPEAPEAG@Z.c)
 */

// Hidden C++ exception states: #wind=3
void **__fastcall TouchKeyboardExperienceManager::GetForegroundAppId(__int64 a1, void **a2, __int64 a3, const char *a4)
{
  void **v4; // rdi
  HWND ForegroundWindow; // rax
  const char *v6; // r9
  CallerIdentity *v7; // rsi
  char *v8; // rbx
  unsigned __int16 **v9; // r8
  unsigned __int16 **v10; // r8
  WCHAR *v11; // rcx
  char *FileNameW; // rax
  void *v13; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 dwProcessId; // [rsp+50h] [rbp+8h] BYREF
  void **v17; // [rsp+58h] [rbp+10h]
  LPCWSTR pszPath; // [rsp+60h] [rbp+18h] BYREF
  LPVOID pv; // [rsp+68h] [rbp+20h] BYREF

  v17 = a2;
  dwProcessId = a1;
  v4 = a2;
  wil::make_cotaskmem_string_nothrow(a2, (char *)&szAgent, 0xFFFFFFFFFFFFFFFFuLL, a4);
  ForegroundWindow = GetForegroundWindow();
  try
  {
    v7 = (CallerIdentity *)ForegroundWindow;
    if ( !ForegroundWindow )
      return v4;
    LODWORD(dwProcessId) = 0;
    GetWindowThreadProcessId(ForegroundWindow, (LPDWORD)&dwProcessId);
    v8 = (char *)OpenProcess(0x1000u, 0, dwProcessId);
    if ( (unsigned __int64)(v8 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
      goto LABEL_16;
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      v4,
      0LL);
    if ( (int)CallerIdentity::GetImmersiveAppIdFromWindow(v7, (HWND)v4, v9) >= 0 )
      goto LABEL_16;
    pszPath = 0LL;
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      (void **)&pszPath,
      0LL);
    if ( (int)CallerIdentity::GetProcessAppIdWithAppResolverFallback(v8, &pszPath, v10) >= 0 )
    {
      v11 = (WCHAR *)pszPath;
      if ( !pszPath )
        goto LABEL_14;
      FileNameW = (char *)PathFindFileNameW(pszPath);
      if ( FileNameW )
      {
        wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
          &pv,
          FileNameW,
          0xFFFFFFFFFFFFFFFFuLL,
          v6);
        if ( v4 == &pv )
        {
          v13 = pv;
        }
        else
        {
          wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
            v4,
            pv);
          v13 = 0LL;
        }
        if ( v13 )
          CoTaskMemFree(v13);
      }
    }
    v11 = (WCHAR *)pszPath;
LABEL_14:
    if ( v11 )
      CoTaskMemFree(v11);
LABEL_16:
    if ( (unsigned __int64)(v8 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      CloseHandle(v8);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0xCDC,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      v6);
    return v17;
  }
  return v4;
}
