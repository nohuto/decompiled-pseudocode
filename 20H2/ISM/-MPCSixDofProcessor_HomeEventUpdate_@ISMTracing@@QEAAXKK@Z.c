/*
 * XREFs of ?MPCSixDofProcessor_HomeEventUpdate_@ISMTracing@@QEAAXKK@Z @ 0x18018D4A8
 * Callers:
 *     ??$MPCSixDofProcessor_HomeEventUpdate@KAEBI@ISMTracing@@SAX$$QEAKAEBI@Z @ 0x18018A380 (--$MPCSixDofProcessor_HomeEventUpdate@KAEBI@ISMTracing@@SAX$$QEAKAEBI@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800190D0 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180019EF4 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1800914DC (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 */

void __fastcall ISMTracing::MPCSixDofProcessor_HomeEventUpdate_(ISMTracing *this, int a2, int a3)
{
  LPVOID v5; // rax
  __int64 v6; // r10
  __int64 v7[3]; // [rsp+40h] [rbp-18h] BYREF
  ISMTracing *v8; // [rsp+60h] [rbp+8h] BYREF
  int v9; // [rsp+78h] [rbp+20h] BYREF

  v8 = this;
  v5 = wil::details::static_lazy<ISMTracing>::get(
         (__int64)this,
         _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
  if ( **((_DWORD **)v5 + 1) > 4u && tlgKeywordOn(*((_QWORD *)v5 + 1), 0x400000000001LL) )
  {
    LODWORD(v8) = a3;
    v9 = a2;
    v7[0] = 50331648LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v6,
      byte_1801D18E4,
      0LL,
      0LL,
      (__int64)v7,
      (__int64)&v9,
      (__int64)&v8);
  }
}
