/*
 * XREFs of ??$Write@U?$_tlgWrapperByRef@$07@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByRef@$07@@@Z @ 0x185B1B
 * Callers:
 *     ?TraceLoggingSendMixedModeTelemetry@@YGHXZ @ 0xAF472 (-TraceLoggingSendMixedModeTelemetry@@YGHXZ.c)
 *     ?TraceLoggingDrawMenuBarTempCalled@@YGXXZ @ 0x186745 (-TraceLoggingDrawMenuBarTempCalled@@YGXXZ.c)
 *     ?TraceLoggingGDIScaledAppEvent@@YGXXZ @ 0x186798 (-TraceLoggingGDIScaledAppEvent@@YGXXZ.c)
 *     ?TraceLoggingSuppressQuickLaunch@@YGXXZ @ 0x18706D (-TraceLoggingSuppressQuickLaunch@@YGXXZ.c)
 *     ?TraceLoggingWinPHotKeyEvent@@YGXXZ @ 0x187218 (-TraceLoggingWinPHotKeyEvent@@YGXXZ.c)
 * Callees:
 *     __tlgWriteTransfer_EtwWriteTransfer@24 @ 0xE8E1E (__tlgWriteTransfer_EtwWriteTransfer@24.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<8>>(
        int a1,
        unsigned __int8 *a2,
        int a3,
        int a4,
        int *a5)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [esp+0h] [ebp-34h] BYREF
  int v7; // [esp+20h] [ebp-14h]
  int v8; // [esp+24h] [ebp-10h]
  int v9; // [esp+28h] [ebp-Ch]
  int v10; // [esp+2Ch] [ebp-8h]

  v8 = 0;
  v9 = 8;
  v10 = 0;
  v7 = *a5;
  return _tlgWriteTransfer_EtwWriteTransfer((int)&dword_266280, a2, 0, 0, 3u, &UserData);
}
