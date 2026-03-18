/*
 * XREFs of ?DwmHolographicViewerAdd_@CompositorTracing@@QEAAXIK@Z @ 0x180250938
 * Callers:
 *     ?AddHolographicViewer@CHolographicManager@@QEAA_NPEAVCHolographicViewer@@@Z @ 0x180250058 (-AddHolographicViewer@CHolographicManager@@QEAA_NPEAVCHolographicViewer@@@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VCompositorTracing@@@details@wil@@QEAAPEAVCompositorTracing@@P6AXXZ@Z @ 0x1800D68C0 (-get@-$static_lazy@VCompositorTracing@@@details@wil@@QEAAPEAVCompositorTracing@@P6AXXZ@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x180161928 (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 */

void __fastcall CompositorTracing::DwmHolographicViewerAdd_(CompositorTracing *this, int a2, int a3)
{
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  CompositorTracing *v8; // [rsp+40h] [rbp+8h] BYREF
  int v9; // [rsp+58h] [rbp+20h] BYREF

  v8 = this;
  v5 = *((_QWORD *)wil::details::static_lazy<CompositorTracing>::get(
                     (__int64)this,
                     _lambda_54eb6a81c7e2c53bee8fa6139f2800b5_::_lambda_invoker_cdecl_)
       + 1);
  if ( *(_DWORD *)v5 > 4u
    && (*(_QWORD *)(v5 + 16) & 0x400000000000LL) != 0
    && (*(_QWORD *)(v5 + 24) & 0x400000000000LL) == *(_QWORD *)(v5 + 24) )
  {
    LODWORD(v8) = a3;
    v9 = a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v5,
      byte_1802EA5CC,
      v6,
      v7,
      (__int64)&v9,
      (__int64)&v8);
  }
}
