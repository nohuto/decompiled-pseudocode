/*
 * XREFs of ?DwmHolographicInteropTextureSizeChanged_@CompositorTracing@@QEAAXIII@Z @ 0x180259938
 * Callers:
 *     ??$DwmHolographicInteropTextureSizeChanged@AEAIAEAIAEAI@CompositorTracing@@SAXAEAI00@Z @ 0x1802590BC (--$DwmHolographicInteropTextureSizeChanged@AEAIAEAIAEAI@CompositorTracing@@SAXAEAI00@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VCompositorTracing@@@details@wil@@QEAAPEAVCompositorTracing@@P6AXXZ@Z @ 0x1800CED90 (-get@-$static_lazy@VCompositorTracing@@@details@wil@@QEAAPEAVCompositorTracing@@P6AXXZ@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33@Z @ 0x1801C4308 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_.c)
 */

void __fastcall CompositorTracing::DwmHolographicInteropTextureSizeChanged_(
        CompositorTracing *this,
        int a2,
        int a3,
        int a4)
{
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // [rsp+40h] [rbp-18h] BYREF
  _DWORD v11[5]; // [rsp+44h] [rbp-14h] BYREF
  CompositorTracing *v12; // [rsp+60h] [rbp+8h] BYREF

  v12 = this;
  v7 = wil::details::static_lazy<CompositorTracing>::get(
         (__int64)this,
         _lambda_54eb6a81c7e2c53bee8fa6139f2800b5_::_lambda_invoker_cdecl_)[1];
  if ( *(_DWORD *)v7 > 5u
    && (*(_QWORD *)(v7 + 16) & 0x400000000000LL) != 0
    && (*(_QWORD *)(v7 + 24) & 0x400000000000LL) == *(_QWORD *)(v7 + 24) )
  {
    LODWORD(v12) = a4;
    v10 = a3;
    v11[0] = a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v7,
      byte_1802EE3E9,
      v8,
      v9,
      (__int64)v11,
      (__int64)&v10,
      (__int64)&v12);
  }
}
