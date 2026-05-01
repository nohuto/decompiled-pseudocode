/*
 * XREFs of ??$ExperienceManager_OnViewCreated_Params@AEAU_GUID@@@ExperienceManager_OnViewCreated@QuickConnectTelemetry@@QEAAXAEAU_GUID@@@Z @ 0x1801B788C
 * Callers:
 *     ?OnViewCreated@CQuickConnectExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1801BAC00 (-OnViewCreated@CQuickConnectExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18001CF68 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180022ED4 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     ?get@?$static_lazy@VQuickConnectLoggingProvider@@@details@wil@@QEAAPEAVQuickConnectLoggingProvider@@P6AXXZ@Z @ 0x1801BDE3C (-get@-$static_lazy@VQuickConnectLoggingProvider@@@details@wil@@QEAAPEAVQuickConnectLoggingProvid.c)
 */

char __fastcall QuickConnectTelemetry::ExperienceManager_OnViewCreated::ExperienceManager_OnViewCreated_Params<_GUID &>(
        __int64 a1,
        __int128 *a2)
{
  __int64 v4; // rax
  _DWORD *v5; // rcx
  __int64 v6; // rcx
  __int128 v7; // xmm0
  __int64 v8; // r8
  __int128 v10; // [rsp+30h] [rbp-58h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+40h] [rbp-48h] BYREF
  __int128 *v12; // [rsp+60h] [rbp-28h]
  int v13; // [rsp+68h] [rbp-20h]
  int v14; // [rsp+6Ch] [rbp-1Ch]

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
      v12 = &v10;
      v13 = 16;
      v10 = v7;
      LOBYTE(v4) = tlgWriteTransfer_EventWriteTransfer(
                     v6,
                     (unsigned __int8 *)dword_1804DB246,
                     (const GUID *)(v8 + 8),
                     0LL,
                     3u,
                     &v11);
    }
  }
  return v4;
}
