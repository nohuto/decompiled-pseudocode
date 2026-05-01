/*
 * XREFs of ?LowLevelKeyboardHookProc@SearchAppDesktopExperienceView@@CA_JH_K_J@Z @ 0x1800A4A90
 * Callers:
 *     <none>
 * Callees:
 *     _tlgKeywordOn @ 0x18001EC84 (_tlgKeywordOn.c)
 *     ?DismissCortanaApp@SearchAppDesktopExperienceView@@AEAAJXZ @ 0x18007E5D8 (-DismissCortanaApp@SearchAppDesktopExperienceView@@AEAAJXZ.c)
 *     ??$SearchApp_Dismiss@AEAY0L@$$CBG@CortanaProactiveTelemetry@@SAXAEAY0L@$$CBG@Z @ 0x180098E84 (--$SearchApp_Dismiss@AEAY0L@$$CBG@CortanaProactiveTelemetry@@SAXAEAY0L@$$CBG@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1801740DC (--$Write@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     ?Provider@CortanaProactiveLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x1801BA2F8 (-Provider@CortanaProactiveLogging@@SAQEBU_tlgProvider_t@@XZ.c)
 */

LRESULT __fastcall SearchAppDesktopExperienceView::LowLevelKeyboardHookProc(int code, WPARAM wParam, _DWORD *lParam)
{
  const struct _tlgProvider_t *v6; // rcx
  int v7; // ecx
  int v8; // r9d
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF

  if ( wParam == 256 && `anonymous namespace'::g_searchAppExperienceView )
  {
    v6 = CortanaProactiveLogging::Provider();
    if ( *(_DWORD *)v6 > 5u && tlgKeywordOn((__int64)v6, 0x200000000000LL) )
    {
      v10 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>>(
        v7,
        (unsigned int)&unk_180506608,
        0,
        v8,
        (__int64)&v10);
    }
    if ( *lParam == 27 )
    {
      SearchAppDesktopExperienceView::DismissCortanaApp(`anonymous namespace'::g_searchAppExperienceView);
      CortanaProactiveTelemetry::SearchApp_Dismiss<unsigned short const (&)[11]>((__int64)L"EscPressed");
    }
  }
  return CallNextHookEx(0LL, code, wParam, (LPARAM)lParam);
}
