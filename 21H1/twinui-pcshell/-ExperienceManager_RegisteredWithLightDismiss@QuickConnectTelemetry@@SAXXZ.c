/*
 * XREFs of ?ExperienceManager_RegisteredWithLightDismiss@QuickConnectTelemetry@@SAXXZ @ 0x1801B9E58
 * Callers:
 *     ?OnClientWindowReadyForPresentationChanged@CQuickConnectExperienceManager@@AEAAJPEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@3456@@Z @ 0x1801BA920 (-OnClientWindowReadyForPresentationChanged@CQuickConnectExperienceManager@@AEAAJPEAUIClientWindo.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18001CF68 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180022ED4 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     ?get@?$static_lazy@VQuickConnectLoggingProvider@@@details@wil@@QEAAPEAVQuickConnectLoggingProvider@@P6AXXZ@Z @ 0x1801BDE3C (-get@-$static_lazy@VQuickConnectLoggingProvider@@@details@wil@@QEAAPEAVQuickConnectLoggingProvid.c)
 */

void __fastcall QuickConnectTelemetry::ExperienceManager_RegisteredWithLightDismiss(__int64 a1)
{
  _DWORD *v1; // rcx
  __int64 v2; // rcx
  struct _EVENT_DATA_DESCRIPTOR v3; // [rsp+30h] [rbp-38h] BYREF

  v1 = *(_DWORD **)(wil::details::static_lazy<QuickConnectLoggingProvider>::get(
                      a1,
                      _lambda_f050a8947b8d1270f7eda0e498aa88e8_::_lambda_invoker_cdecl_)
                  + 8);
  if ( *v1 > 5u )
  {
    if ( tlgKeywordOn((__int64)v1, 0x200000000000LL) )
      tlgWriteTransfer_EventWriteTransfer(v2, (unsigned __int8 *)dword_1804DBE75, 0LL, 0LL, 2u, &v3);
  }
}
