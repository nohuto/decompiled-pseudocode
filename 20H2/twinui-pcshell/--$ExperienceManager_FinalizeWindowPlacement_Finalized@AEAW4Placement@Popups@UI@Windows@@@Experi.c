/*
 * XREFs of ??$ExperienceManager_FinalizeWindowPlacement_Finalized@AEAW4Placement@Popups@UI@Windows@@@ExperienceManager_FinalizeWindowPlacement@QuickConnectTelemetry@@QEAAXAEAW4Placement@Popups@UI@Windows@@@Z @ 0x1801DA9A0
 * Callers:
 *     ?FinalizeWindowPlacement@CQuickConnectExperienceManager@@AEAAJHHAEBUtagRECT@@@Z @ 0x1801DD430 (-FinalizeWindowPlacement@CQuickConnectExperienceManager@@AEAAJHHAEBUtagRECT@@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x18001EC84 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18004AB5C (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     ?get@?$static_lazy@VQuickConnectLoggingProvider@@@details@wil@@QEAAPEAVQuickConnectLoggingProvider@@P6AXXZ@Z @ 0x1801E121C (-get@-$static_lazy@VQuickConnectLoggingProvider@@@details@wil@@QEAAPEAVQuickConnectLoggingProvid.c)
 */

char __fastcall QuickConnectTelemetry::ExperienceManager_FinalizeWindowPlacement::ExperienceManager_FinalizeWindowPlacement_Finalized<enum Windows::UI::Popups::Placement &>(
        __int64 a1,
        int *a2)
{
  __int64 v4; // rax
  _DWORD *v5; // rcx
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // r8
  int v10; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+38h] [rbp-40h] BYREF
  int *v12; // [rsp+58h] [rbp-20h]
  int v13; // [rsp+60h] [rbp-18h]
  int v14; // [rsp+64h] [rbp-14h]

  v4 = wil::details::static_lazy<QuickConnectLoggingProvider>::get(
         a1,
         _lambda_f050a8947b8d1270f7eda0e498aa88e8_::_lambda_invoker_cdecl_);
  v5 = *(_DWORD **)(v4 + 8);
  if ( *v5 > 5u )
  {
    LOBYTE(v4) = tlgKeywordOn((__int64)v5, 0x200000000000LL);
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
                     (unsigned __int8 *)dword_18050210B,
                     (const GUID *)(v8 + 8),
                     0LL,
                     3u,
                     &v11);
    }
  }
  return v4;
}
