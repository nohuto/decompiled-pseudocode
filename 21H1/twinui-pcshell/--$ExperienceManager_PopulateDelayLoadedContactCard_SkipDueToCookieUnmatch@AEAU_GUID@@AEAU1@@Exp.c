/*
 * XREFs of ??$ExperienceManager_PopulateDelayLoadedContactCard_SkipDueToCookieUnmatch@AEAU_GUID@@AEAU1@@ExperienceManager_PopulateDelayLoadedContactCard@QuickConnectTelemetry@@QEAAXAEAU_GUID@@0@Z @ 0x1801B7AB4
 * Callers:
 *     ?PopulateDelayLoadedContactCard@CQuickConnectExperienceManager@@UEAAJU_GUID@@PEAUIContact@Contacts@ApplicationModel@Windows@@@Z @ 0x1801BB720 (-PopulateDelayLoadedContactCard@CQuickConnectExperienceManager@@UEAAJU_GUID@@PEAUIContact@Contac.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180022ED4 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@3@Z @ 0x1801B836C (--$Write@U-$_tlgWrapperByRef@$0BA@@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_G.c)
 *     ?get@?$static_lazy@VQuickConnectLoggingProvider@@@details@wil@@QEAAPEAVQuickConnectLoggingProvider@@P6AXXZ@Z @ 0x1801BDE3C (-get@-$static_lazy@VQuickConnectLoggingProvider@@@details@wil@@QEAAPEAVQuickConnectLoggingProvid.c)
 */

char __fastcall QuickConnectTelemetry::ExperienceManager_PopulateDelayLoadedContactCard::ExperienceManager_PopulateDelayLoadedContactCard_SkipDueToCookieUnmatch<_GUID &,_GUID &>(
        __int64 a1,
        __int128 *a2,
        __int128 *a3)
{
  __int64 v5; // rax
  _DWORD *v6; // rcx
  int v7; // ecx
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int64 v11; // [rsp+30h] [rbp-48h] BYREF
  __int64 v12; // [rsp+38h] [rbp-40h] BYREF
  __int128 v13; // [rsp+40h] [rbp-38h] BYREF
  __int128 v14; // [rsp+50h] [rbp-28h] BYREF

  v5 = wil::details::static_lazy<QuickConnectLoggingProvider>::get(
         a1,
         _lambda_f050a8947b8d1270f7eda0e498aa88e8_::_lambda_invoker_cdecl_);
  v6 = *(_DWORD **)(v5 + 8);
  if ( *v6 > 5u )
  {
    LOBYTE(v5) = tlgKeywordOn((__int64)v6, 0x200000000000LL);
    if ( (_BYTE)v5 )
    {
      v8 = *a3;
      v9 = *a2;
      v11 = (__int64)&v13;
      v12 = (__int64)&v14;
      v13 = v8;
      v14 = v9;
      LOBYTE(v5) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByRef<16>>(
                     v7,
                     (__int64)&v12,
                     (__int64)&v11);
    }
  }
  return v5;
}
