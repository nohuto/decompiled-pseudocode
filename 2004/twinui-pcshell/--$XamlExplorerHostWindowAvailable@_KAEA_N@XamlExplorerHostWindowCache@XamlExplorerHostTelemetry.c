/*
 * XREFs of ??$XamlExplorerHostWindowAvailable@_KAEA_N@XamlExplorerHostWindowCache@XamlExplorerHostTelemetry@@QEAAX$$QEA_KAEA_N@Z @ 0x1802E8C54
 * Callers:
 *     ?CreateXamlExplorerHostWindowInBand@XamlExplorerHostShellComponent@@UEAAJPEAUIXamlExplorerHostWindowCreatedCallback@@UtagRECT@@KAEBU_GUID@@PEAPEAX@Z @ 0x1802E97B0 (-CreateXamlExplorerHostWindowInBand@XamlExplorerHostShellComponent@@UEAAJPEAUIXamlExplorerHostWi.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180018E04 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     ?get@?$static_lazy@VXamlSwitcherLogging@@@details@wil@@QEAAPEAVXamlSwitcherLogging@@P6AXXZ@Z @ 0x1802EBBCC (-get@-$static_lazy@VXamlSwitcherLogging@@@details@wil@@QEAAPEAVXamlSwitcherLogging@@P6AXXZ@Z.c)
 */

int __fastcall XamlExplorerHostTelemetry::XamlExplorerHostWindowCache::XamlExplorerHostWindowAvailable<unsigned __int64,bool &>(
        __int64 a1,
        __int64 *a2,
        unsigned __int8 *a3)
{
  __int64 v6; // rax
  _DWORD *v7; // rcx
  __int64 v8; // r8
  int v10; // [rsp+40h] [rbp+8h] BYREF
  __int64 v11; // [rsp+58h] [rbp+20h] BYREF

  v6 = wil::details::static_lazy<XamlSwitcherLogging>::get(
         a1,
         _lambda_6341f906d56bba57ec18edd8305f3a60_::_lambda_invoker_cdecl_);
  v7 = *(_DWORD **)(v6 + 8);
  if ( *v7 > 5u )
  {
    v8 = *(_QWORD *)(a1 + 48);
    v10 = *a3;
    v11 = *a2;
    LODWORD(v6) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
                    (__int64)v7,
                    byte_1805155C5,
                    (const GUID *)(v8 + 8),
                    0LL,
                    (__int64)&v11,
                    (__int64)&v10);
  }
  return v6;
}
