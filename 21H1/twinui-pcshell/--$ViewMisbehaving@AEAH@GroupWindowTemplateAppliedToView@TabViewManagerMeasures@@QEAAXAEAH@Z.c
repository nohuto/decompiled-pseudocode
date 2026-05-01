/*
 * XREFs of ??$ViewMisbehaving@AEAH@GroupWindowTemplateAppliedToView@TabViewManagerMeasures@@QEAAXAEAH@Z @ 0x180273F5C
 * Callers:
 *     ?OnTemplateAppliedToWindow@ViewGroup@@UEAAJPEAUIApplicationView@@PEAUHWND__@@W4TRACKED_WINDOW_STATE@@2AEBUtagRECT@@3@Z @ 0x180275A30 (-OnTemplateAppliedToWindow@ViewGroup@@UEAAJPEAUIApplicationView@@PEAUHWND__@@W4TRACKED_WINDOW_ST.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18001CF68 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180022ED4 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@P6AXXZ@Z @ 0x18005EC48 (-get@-$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 */

char __fastcall TabViewManagerMeasures::GroupWindowTemplateAppliedToView::ViewMisbehaving<int &>(__int64 a1, int *a2)
{
  _QWORD *v4; // rax
  _DWORD *v5; // rcx
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // r8
  int v10; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+38h] [rbp-40h] BYREF
  int *v12; // [rsp+58h] [rbp-20h]
  int v13; // [rsp+60h] [rbp-18h]
  int v14; // [rsp+64h] [rbp-14h]

  v4 = wil::details::static_lazy<TabShellTelemetryProvider>::get(
         a1,
         _lambda_e53bbca54556f26c08250baf48169049_::_lambda_invoker_cdecl_);
  v5 = (_DWORD *)v4[1];
  if ( *v5 > 3u )
  {
    LOBYTE(v4) = tlgKeywordOn((__int64)v5, 0x400000000000LL);
    if ( (_BYTE)v4 )
    {
      v7 = *a2;
      v8 = *(_QWORD *)(a1 + 48);
      v14 = 0;
      v10 = v7;
      v12 = &v10;
      v13 = 4;
      LOBYTE(v4) = tlgWriteTransfer_EventWriteTransfer(
                     v6,
                     (unsigned __int8 *)dword_1804E7194,
                     (const GUID *)(v8 + 8),
                     0LL,
                     3u,
                     &v11);
    }
  }
  return (char)v4;
}
