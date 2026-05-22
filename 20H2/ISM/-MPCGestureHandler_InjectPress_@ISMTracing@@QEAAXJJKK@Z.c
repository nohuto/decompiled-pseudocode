/*
 * XREFs of ?MPCGestureHandler_InjectPress_@ISMTracing@@QEAAXJJKK@Z @ 0x18007B4E0
 * Callers:
 *     ??$MPCGestureHandler_InjectPress@AEAJAEAJAEBKK@ISMTracing@@SAXAEAJ0AEBK$$QEAK@Z @ 0x180079CA4 (--$MPCGestureHandler_InjectPress@AEAJAEAJAEBKK@ISMTracing@@SAXAEAJ0AEBK$$QEAK@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800190D0 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180019EF4 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x1800298C0 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333@Z @ 0x180079FBC (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPE.c)
 */

void __fastcall ISMTracing::MPCGestureHandler_InjectPress_(ISMTracing *this, int a2, int a3, int a4, unsigned int a5)
{
  __int64 v8; // rcx
  LPVOID v9; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r10
  int v13; // [rsp+40h] [rbp-18h] BYREF
  int v14; // [rsp+44h] [rbp-14h] BYREF
  _DWORD v15[4]; // [rsp+48h] [rbp-10h] BYREF
  ISMTracing *v16; // [rsp+60h] [rbp+8h] BYREF

  v16 = this;
  if ( ISMTracing::IsEnabled((__int64)this) )
  {
    v9 = wil::details::static_lazy<ISMTracing>::get(
           v8,
           _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
    if ( **((_DWORD **)v9 + 1) > 4u && tlgKeywordOn(*((_QWORD *)v9 + 1), 1LL) )
    {
      LODWORD(v16) = a5;
      v13 = a4;
      v14 = a3;
      v15[0] = a2;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v12,
        byte_1801C817C,
        v10,
        v11,
        (__int64)v15,
        (__int64)&v14,
        (__int64)&v13,
        (__int64)&v16);
    }
  }
}
