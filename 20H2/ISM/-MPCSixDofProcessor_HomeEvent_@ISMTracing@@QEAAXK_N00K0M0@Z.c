/*
 * XREFs of ?MPCSixDofProcessor_HomeEvent_@ISMTracing@@QEAAXK_N00K0M0@Z @ 0x18018D540
 * Callers:
 *     ??$MPCSixDofProcessor_HomeEvent@K_N_NAEA_NAEBIAEA_NM_N@ISMTracing@@SAX$$QEAK$$QEA_N1AEA_NAEBI2$$QEAM1@Z @ 0x18018A130 (--$MPCSixDofProcessor_HomeEvent@K_N_NAEA_NAEBIAEA_NM_N@ISMTracing@@SAX$$QEAK$$QEA_N1AEA_NAEBI2$$.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800190D0 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180019EF4 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@U3@U3@U2@U3@U2@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@554545@Z @ 0x18018AAC0 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$00@@U3@U3@U2@U3@.c)
 */

void __fastcall ISMTracing::MPCSixDofProcessor_HomeEvent_(
        ISMTracing *this,
        int a2,
        char a3,
        char a4,
        bool a5,
        unsigned int a6,
        bool a7,
        float a8,
        bool a9)
{
  LPVOID v12; // rax
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r10
  bool v16; // [rsp+78h] [rbp+Fh] BYREF
  bool v17; // [rsp+79h] [rbp+10h] BYREF
  char v18; // [rsp+7Ah] [rbp+11h] BYREF
  char v19; // [rsp+7Bh] [rbp+12h] BYREF
  float v20; // [rsp+7Ch] [rbp+13h] BYREF
  unsigned int v21; // [rsp+80h] [rbp+17h] BYREF
  int v22; // [rsp+84h] [rbp+1Bh] BYREF
  __int64 v23; // [rsp+88h] [rbp+1Fh] BYREF
  ISMTracing *v24; // [rsp+A8h] [rbp+3Fh] BYREF

  v24 = this;
  v12 = wil::details::static_lazy<ISMTracing>::get(
          (__int64)this,
          _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
  if ( **((_DWORD **)v12 + 1) > 4u && tlgKeywordOn(*((_QWORD *)v12 + 1), 0x400000000001LL) )
  {
    LOBYTE(v24) = a9;
    v20 = a8;
    v16 = a7;
    v21 = a6;
    v17 = a5;
    v18 = a4;
    v19 = a3;
    v22 = a2;
    v23 = 50331648LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>>(
      v15,
      byte_1801D1981,
      v13,
      v14,
      (__int64)&v23,
      (__int64)&v22,
      (__int64)&v19,
      (__int64)&v18,
      (__int64)&v17,
      (__int64)&v21,
      (__int64)&v16,
      (__int64)&v20,
      (__int64)&v24);
  }
}
