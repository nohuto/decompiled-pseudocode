/*
 * XREFs of ?HolographicInteropTargetCreated_@CompositorTracing@@QEAAXAEBU_LUID@@@Z @ 0x180251EBC
 * Callers:
 *     ?EnsureInteropRenderTarget@CHolographicManager@@AEAAJXZ @ 0x180251B10 (-EnsureInteropRenderTarget@CHolographicManager@@AEAAJXZ.c)
 * Callees:
 *     ?get@?$static_lazy@VCompositorTracing@@@details@wil@@QEAAPEAVCompositorTracing@@P6AXXZ@Z @ 0x1800D6EE0 (-get@-$static_lazy@VCompositorTracing@@@details@wil@@QEAAPEAVCompositorTracing@@P6AXXZ@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x180163738 (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 */

void __fastcall CompositorTracing::HolographicInteropTargetCreated_(CompositorTracing *this, const struct _LUID *a2)
{
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  CompositorTracing *v6; // [rsp+40h] [rbp+8h] BYREF
  LONG HighPart; // [rsp+50h] [rbp+18h] BYREF

  v6 = this;
  v3 = wil::details::static_lazy<CompositorTracing>::get(
         (__int64)this,
         _lambda_54eb6a81c7e2c53bee8fa6139f2800b5_::_lambda_invoker_cdecl_)[1];
  if ( *(_DWORD *)v3 > 4u
    && (*(_QWORD *)(v3 + 16) & 0x400000000000LL) != 0
    && (*(_QWORD *)(v3 + 24) & 0x400000000000LL) == *(_QWORD *)(v3 + 24) )
  {
    LODWORD(v6) = a2->LowPart;
    HighPart = a2->HighPart;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v3,
      byte_1802EB1A9,
      v4,
      v5,
      (__int64)&HighPart,
      (__int64)&v6);
  }
}
