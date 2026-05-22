/*
 * XREFs of ?MPCSixDofProcessor_HomeEventTuneablesChanged_@ISMTracing@@QEAAXMMMMMMMMMMMMMMMMMMMK@Z @ 0x18018D360
 * Callers:
 *     ??$MPCSixDofProcessor_HomeEventTuneablesChanged@MMMMMMMMMMMMMMMMMMMK@ISMTracing@@SAX$$QEAM000000000000000000$$QEAK@Z @ 0x18018A268 (--$MPCSixDofProcessor_HomeEventTuneablesChanged@MMMMMMMMMMMMMMMMMMMK@ISMTracing@@SAX$$QEAM000000.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800190A0 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180019EC4 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4444444444444444444@Z @ 0x18018A950 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U.c)
 */

void __fastcall ISMTracing::MPCSixDofProcessor_HomeEventTuneablesChanged_(
        ISMTracing *this,
        float a2,
        float a3,
        float a4,
        float a5,
        float a6,
        float a7,
        float a8,
        float a9,
        float a10,
        float a11,
        float a12,
        float a13,
        float a14,
        float a15,
        float a16,
        float a17,
        float a18,
        float a19,
        float a20,
        unsigned int a21)
{
  LPVOID v21; // rax
  __int64 v22; // r8
  __int64 v23; // r9
  float v24; // [rsp+D8h] [rbp-80h] BYREF
  float v25; // [rsp+DCh] [rbp-7Ch] BYREF
  float v26; // [rsp+E0h] [rbp-78h] BYREF
  float v27; // [rsp+E4h] [rbp-74h] BYREF
  float v28; // [rsp+E8h] [rbp-70h] BYREF
  float v29; // [rsp+ECh] [rbp-6Ch] BYREF
  float v30; // [rsp+F0h] [rbp-68h] BYREF
  float v31; // [rsp+F4h] [rbp-64h] BYREF
  float v32; // [rsp+F8h] [rbp-60h] BYREF
  float v33; // [rsp+FCh] [rbp-5Ch] BYREF
  float v34; // [rsp+100h] [rbp-58h] BYREF
  float v35; // [rsp+104h] [rbp-54h] BYREF
  float v36; // [rsp+108h] [rbp-50h] BYREF
  float v37; // [rsp+10Ch] [rbp-4Ch] BYREF
  float v38; // [rsp+110h] [rbp-48h] BYREF
  float v39; // [rsp+114h] [rbp-44h] BYREF
  float v40; // [rsp+118h] [rbp-40h] BYREF
  float v41; // [rsp+11Ch] [rbp-3Ch] BYREF
  float v42; // [rsp+120h] [rbp-38h] BYREF
  __int64 v43; // [rsp+128h] [rbp-30h] BYREF
  ISMTracing *v44; // [rsp+148h] [rbp-10h] BYREF
  float v45; // [rsp+150h] [rbp-8h]
  float v46; // [rsp+158h] [rbp+0h]
  float v47; // [rsp+160h] [rbp+8h]

  v47 = a4;
  v46 = a3;
  v45 = a2;
  v44 = this;
  v21 = wil::details::static_lazy<ISMTracing>::get(
          (__int64)this,
          _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
  if ( **((_DWORD **)v21 + 1) > 4u && tlgKeywordOn(*((_QWORD *)v21 + 1), 0x400000000001LL) )
  {
    LODWORD(v44) = a21;
    v24 = a20;
    v25 = a19;
    v26 = a18;
    v27 = a17;
    v28 = a16;
    v29 = a15;
    v30 = a14;
    v31 = a13;
    v32 = a12;
    v33 = a11;
    v34 = a10;
    v35 = a9;
    v36 = a8;
    v37 = a7;
    v38 = a6;
    v39 = a5;
    v40 = v47;
    v41 = v46;
    v42 = v45;
    v43 = 50331648LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v22,
      byte_1801D170A,
      v22,
      v23,
      (__int64)&v43,
      (__int64)&v42,
      (__int64)&v41,
      (__int64)&v40,
      (__int64)&v39,
      (__int64)&v38,
      (__int64)&v37,
      (__int64)&v36,
      (__int64)&v35,
      (__int64)&v34,
      (__int64)&v33,
      (__int64)&v32,
      (__int64)&v31,
      (__int64)&v30,
      (__int64)&v29,
      (__int64)&v28,
      (__int64)&v27,
      (__int64)&v26,
      (__int64)&v25,
      (__int64)&v24,
      (__int64)&v44);
  }
}
