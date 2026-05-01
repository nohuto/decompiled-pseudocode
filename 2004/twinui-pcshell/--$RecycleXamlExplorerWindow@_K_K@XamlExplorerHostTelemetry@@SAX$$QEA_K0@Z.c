/*
 * XREFs of ??$RecycleXamlExplorerWindow@_K_K@XamlExplorerHostTelemetry@@SAX$$QEA_K0@Z @ 0x1802E88E0
 * Callers:
 *     ?RecycleXamlExplorerWindow@XamlExplorerHostShellComponent@@UEAAJPEAUIXamlExplorerHostWindow@@@Z @ 0x1802EB170 (-RecycleXamlExplorerWindow@XamlExplorerHostShellComponent@@UEAAJPEAUIXamlExplorerHostWindow@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x180237990 (--$Write@U-$_tlgWrapperByVal@$07@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ?get@?$static_lazy@VXamlSwitcherLogging@@@details@wil@@QEAAPEAVXamlSwitcherLogging@@P6AXXZ@Z @ 0x1802EBBCC (-get@-$static_lazy@VXamlSwitcherLogging@@@details@wil@@QEAAPEAVXamlSwitcherLogging@@P6AXXZ@Z.c)
 */

int __fastcall XamlExplorerHostTelemetry::RecycleXamlExplorerWindow<unsigned __int64,unsigned __int64>(
        __int64 *a1,
        __int64 *a2)
{
  __int64 v4; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  _DWORD *v7; // rcx
  __int64 v9; // [rsp+50h] [rbp+18h] BYREF
  __int64 v10; // [rsp+58h] [rbp+20h] BYREF

  v4 = wil::details::static_lazy<XamlSwitcherLogging>::get(
         a1,
         _lambda_6341f906d56bba57ec18edd8305f3a60_::_lambda_invoker_cdecl_);
  v7 = *(_DWORD **)(v4 + 8);
  if ( *v7 > 5u )
  {
    v9 = *a2;
    v10 = *a1;
    LODWORD(v4) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
                    (__int64)v7,
                    byte_180515588,
                    v5,
                    v6,
                    (__int64)&v10,
                    (__int64)&v9);
  }
  return v4;
}
