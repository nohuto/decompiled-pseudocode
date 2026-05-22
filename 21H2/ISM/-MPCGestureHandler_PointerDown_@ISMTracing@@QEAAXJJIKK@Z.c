/*
 * XREFs of ?MPCGestureHandler_PointerDown_@ISMTracing@@QEAAXJJIKK@Z @ 0x18007BA58
 * Callers:
 *     ??$MPCGestureHandler_PointerDown@AEAJAEAJAEAIAEAKAEAK@ISMTracing@@SAXAEAJ0AEAIAEAK2@Z @ 0x18007A184 (--$MPCGestureHandler_PointerDown@AEAJAEAJAEAIAEAKAEAK@ISMTracing@@SAXAEAJ0AEAIAEAK2@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180018D80 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180019BA4 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x1800297E0 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3333@Z @ 0x18007A460 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEB.c)
 */

void __fastcall ISMTracing::MPCGestureHandler_PointerDown_(
        ISMTracing *this,
        int a2,
        int a3,
        int a4,
        unsigned int a5,
        unsigned int a6)
{
  __int64 v9; // rcx
  LPVOID v10; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r10
  unsigned int v14; // [rsp+50h] [rbp-18h] BYREF
  int v15; // [rsp+54h] [rbp-14h] BYREF
  int v16; // [rsp+58h] [rbp-10h] BYREF
  int v17; // [rsp+5Ch] [rbp-Ch] BYREF
  ISMTracing *v18; // [rsp+70h] [rbp+8h] BYREF

  v18 = this;
  if ( ISMTracing::IsEnabled((__int64)this) )
  {
    v10 = wil::details::static_lazy<ISMTracing>::get(
            v9,
            _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
    if ( **((_DWORD **)v10 + 1) > 4u && tlgKeywordOn(*((_QWORD *)v10 + 1), 1LL) )
    {
      LODWORD(v18) = a6;
      v14 = a5;
      v15 = a3;
      v16 = a2;
      v17 = a4;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v13,
        byte_1801C9168,
        v11,
        v12,
        (__int64)&v17,
        (__int64)&v16,
        (__int64)&v15,
        (__int64)&v14,
        (__int64)&v18);
    }
  }
}
