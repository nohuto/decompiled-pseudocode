/*
 * XREFs of ??$Win32SlateViewConsideredForOwnership@PEBGIAEAY0BF@$$CBG@HolographicPositionerTelemetry@@SAX$$QEAPEBG$$QEAIAEAY0BF@$$CBG@Z @ 0x18023D3B8
 * Callers:
 *     _LogEventWithApplicationViewData_unsigned_int_unsigned_short_const_(&)[20]_ @ 0x18023DA3C (_LogEventWithApplicationViewData_unsigned_int_unsigned_short_const_(-)[20]_.c)
 *     _LogEventWithApplicationViewData_unsigned_int_unsigned_short_const_(&)[21]_ @ 0x18023DB04 (_LogEventWithApplicationViewData_unsigned_int_unsigned_short_const_(-)[21]_.c)
 * Callees:
 *     _tlgKeywordOn @ 0x18001EC84 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18023D564 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTempl.c)
 *     ?get@?$static_lazy@VHolographicPositionerProvider@@@details@wil@@QEAAPEAVHolographicPositionerProvider@@P6AXXZ@Z @ 0x18024623C (-get@-$static_lazy@VHolographicPositionerProvider@@@details@wil@@QEAAPEAVHolographicPositionerPr.c)
 */

char __fastcall HolographicPositionerTelemetry::Win32SlateViewConsideredForOwnership<unsigned short const *,unsigned int,unsigned short const (&)[21]>(
        __int64 *a1,
        _DWORD *a2,
        __int64 a3)
{
  __int64 v6; // rax
  _DWORD *v7; // rcx
  int v8; // ecx
  __int64 v10; // [rsp+40h] [rbp-28h] BYREF
  __int64 v11; // [rsp+48h] [rbp-20h] BYREF
  __int64 v12[3]; // [rsp+50h] [rbp-18h] BYREF
  __int64 v13; // [rsp+88h] [rbp+20h] BYREF

  v6 = wil::details::static_lazy<HolographicPositionerProvider>::get(
         a1,
         _lambda_c2de52b76b02464b55ca8bf6e2d5d141_::_lambda_invoker_cdecl_);
  v7 = *(_DWORD **)(v6 + 8);
  if ( *v7 > 4u )
  {
    LOBYTE(v6) = tlgKeywordOn((__int64)v7, 0x400000000000LL);
    if ( (_BYTE)v6 )
    {
      LODWORD(v13) = *a2;
      v12[0] = *a1;
      v10 = 0x2000000LL;
      v11 = a3;
      LOBYTE(v6) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>>(
                     v8,
                     (int)&dword_18050901E,
                     (__int64)v12,
                     (__int64)&v13,
                     (__int64)&v11,
                     (__int64)&v10);
    }
  }
  return v6;
}
