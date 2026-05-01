/*
 * XREFs of ??$TabWindowSnapped@AEAIAEAU_GUID@@PEBGI@TabCompanionTelemetry@@SAXAEAIAEAU_GUID@@$$QEAPEBG$$QEAI@Z @ 0x180299C10
 * Callers:
 *     ?TraceLogTabWindowSnapped@TabSetMediator@Tabs@ComposableShell@Internal@Windows@@CAXPEAUIApplicationView@@PEAUIShellTab@2345@W4WINDOW_SNAP_STATE@@@Z @ 0x18029C580 (-TraceLogTabWindowSnapped@TabSetMediator@Tabs@ComposableShell@Internal@Windows@@CAXPEAUIApplicat.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapSz@G@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapSz@G@@3@Z @ 0x180299CB4 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapSz@G@@U1@@-$_tlgWriteTem.c)
 *     ?get@?$static_lazy@VTabCompanionLogger@@@details@wil@@QEAAPEAVTabCompanionLogger@@P6AXXZ@Z @ 0x18029CF50 (-get@-$static_lazy@VTabCompanionLogger@@@details@wil@@QEAAPEAVTabCompanionLogger@@P6AXXZ@Z.c)
 */

__int64 __fastcall TabCompanionTelemetry::TabWindowSnapped<unsigned int &,_GUID &,unsigned short const *,unsigned int>(
        int *a1,
        __int64 a2,
        __int64 *a3,
        int *a4)
{
  __int64 result; // rax
  _DWORD *v9; // rcx
  int v10; // [rsp+40h] [rbp-28h] BYREF
  int v11; // [rsp+44h] [rbp-24h] BYREF
  __int64 v12; // [rsp+48h] [rbp-20h] BYREF
  __int64 v13; // [rsp+50h] [rbp-18h] BYREF

  result = wil::details::static_lazy<TabCompanionLogger>::get(
             a1,
             _lambda_7ddd513c8c70d581733925d1e8d989fc_::_lambda_invoker_cdecl_);
  v9 = *(_DWORD **)(result + 8);
  if ( *v9 > 5u )
  {
    v10 = *a4;
    v12 = *a3;
    v11 = *a1;
    v13 = a2;
    return _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
             (int)v9,
             (int)&dword_18050FDE6,
             (__int64)&v11,
             (__int64)&v13,
             (__int64)&v12,
             (__int64)&v10);
  }
  return result;
}
