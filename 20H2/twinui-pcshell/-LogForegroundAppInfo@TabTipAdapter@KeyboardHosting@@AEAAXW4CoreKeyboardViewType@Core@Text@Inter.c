/*
 * XREFs of ?LogForegroundAppInfo@TabTipAdapter@KeyboardHosting@@AEAAXW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@@Z @ 0x1800B42A8
 * Callers:
 *     ?ProcessShowRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@@Z @ 0x180360F48 (-ProcessShowRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@Interna.c)
 *     ?ProcessShowRequestWithStoredData@TabTipAdapter@KeyboardHosting@@AEAAJV?$ComPtr@U?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@@WRL@Microsoft@@W4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@W4CoreKeyboardModality@789UI@Windows@@@Z @ 0x1803610D4 (-ProcessShowRequestWithStoredData@TabTipAdapter@KeyboardHosting@@AEAAJV-$ComPtr@U-$IVectorView@U.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062CC4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18008C1A8 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     WINRT_WindowsGetStringRawBuffer @ 0x18008DD62 (WINRT_WindowsGetStringRawBuffer.c)
 *     ??$ShowRequestProcessed@AEAW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@PEBGAEAI@TouchKeyboardExperienceTelemetryLogger@@SAXAEAW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@$$QEAPEBGAEAI@Z @ 0x1800B3F18 (--$ShowRequestProcessed@AEAW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@PEBGAEAI@TouchK.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
HRESULT __fastcall KeyboardHosting::TabTipAdapter::LogForegroundAppInfo(__int64 a1, int a2)
{
  int v3; // eax
  __int64 v4; // rdi
  __int64 (__fastcall *v5)(__int64, HSTRING *); // rbx
  int v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  int v9; // [rsp+40h] [rbp+20h] BYREF
  int v10; // [rsp+48h] [rbp+28h] BYREF
  HSTRING string; // [rsp+50h] [rbp+30h] BYREF
  PCWSTR StringRawBuffer; // [rsp+58h] [rbp+38h] BYREF

  v10 = a2;
  v9 = 20480;
  v3 = (*(__int64 (__fastcall **)(_QWORD, int *))(**(_QWORD **)(a1 + 24) + 632LL))(*(_QWORD *)(a1 + 24), &v9);
  if ( v3 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x7BF,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v3);
  string = 0LL;
  v4 = *(_QWORD *)(a1 + 24);
  v5 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v4 + 624LL);
  winrt::handle_type<winrt::impl::hstring_traits>::close(&string);
  v6 = v5(v4, &string);
  if ( v6 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x7C1,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v6);
  StringRawBuffer = WINRT_WindowsGetStringRawBuffer(string, 0LL);
  TouchKeyboardExperienceTelemetryLogger::ShowRequestProcessed<enum Windows::UI::Internal::Text::Core::CoreKeyboardViewType &,unsigned short const *,unsigned int &>(
    &v10,
    (__int64 *)&StringRawBuffer,
    &v9);
  return winrt::handle_type<winrt::impl::hstring_traits>::close(&string);
}
