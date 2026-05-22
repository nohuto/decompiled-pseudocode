/*
 * XREFs of ?GetPoseAtTime_@HolographicDriverClientContinuousTrace@@QEAAXPEBXAEBUSPATIAL_NODE_ID@@_J2222W4TracePredictionType@@AEBUSPATIAL_GRAPH_DYNAMIC_NODE_POSE@@_NI@Z @ 0x18015DE54
 * Callers:
 *     ??$GetPoseAtTime@AEBQEAVSpatialGraphNodeReference@Holographic@Internal@Windows@@AEAUSPATIAL_NODE_ID@@AEA_JAEB_JAEB_JAEA_JAEA_JAEAW4TracePredictionType@@AEAUSPATIAL_GRAPH_DYNAMIC_NODE_POSE@@AEB_NAEBI@HolographicDriverClientContinuousTrace@@SAXAEBQEAVSpatialGraphNodeReference@Holographic@Internal@Windows@@AEAUSPATIAL_NODE_ID@@AEA_JAEB_J322AEAW4TracePredictionType@@AEAUSPATIAL_GRAPH_DYNAMIC_NODE_POSE@@AEB_NAEBI@Z @ 0x18014EA90 (--$GetPoseAtTime@AEBQEAVSpatialGraphNodeReference@Holographic@Internal@Windows@@AEAUSPATIAL_NODE.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800190A0 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x18003C480 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$07@@U1@U2@U2@U2@U2@U2@U2@U2@U2@U2@U?$_tlgWrapperByVal@$03@@U2@U2@U_tlgWrapperPtrSize@@U4@U4@U4@U4@U3@U?$_tlgWrapperByVal@$00@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$07@@3444444444AEBU?$_tlgWrapperByVal@$03@@44AEBU_tlgWrapperPtrSize@@66665AEBU?$_tlgWrapperByVal@$00@@5@Z @ 0x180150AA0 (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$07@@U1@U2@U2@U2@U2@U2@U2@U2@U2@U2@U-$_t.c)
 *     ?get@?$static_lazy@VHolographicDriverClientContinuousTrace@@@details@wil@@QEAAPEAVHolographicDriverClientContinuousTrace@@P6AXXZ@Z @ 0x180167F7C (-get@-$static_lazy@VHolographicDriverClientContinuousTrace@@@details@wil@@QEAAPEAVHolographicDri.c)
 */

char __fastcall HolographicDriverClientContinuousTrace::GetPoseAtTime_(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        int a9,
        __int64 a10,
        char a11,
        int a12)
{
  int v13; // r15d
  int v14; // r15d
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // r8
  __int64 v19; // r9
  char v21; // [rsp+E0h] [rbp-80h] BYREF
  int v22; // [rsp+E4h] [rbp-7Ch] BYREF
  int v23; // [rsp+E8h] [rbp-78h] BYREF
  int v24; // [rsp+ECh] [rbp-74h] BYREF
  __int64 v25; // [rsp+F0h] [rbp-70h] BYREF
  __int64 v26; // [rsp+F8h] [rbp-68h] BYREF
  __int64 v27; // [rsp+100h] [rbp-60h] BYREF
  __int64 v28; // [rsp+108h] [rbp-58h] BYREF
  __int64 v29; // [rsp+110h] [rbp-50h] BYREF
  __int64 v30; // [rsp+118h] [rbp-48h] BYREF
  __int64 v31; // [rsp+120h] [rbp-40h] BYREF
  __int64 v32; // [rsp+128h] [rbp-38h] BYREF
  __int64 v33; // [rsp+130h] [rbp-30h] BYREF
  __int64 v34; // [rsp+138h] [rbp-28h] BYREF
  __int64 v35; // [rsp+140h] [rbp-20h] BYREF
  __int64 v36; // [rsp+148h] [rbp-18h] BYREF
  __int64 v37; // [rsp+150h] [rbp-10h] BYREF
  __int64 p_ActivityId; // [rsp+158h] [rbp-8h] BYREF
  __int64 v39; // [rsp+160h] [rbp+0h] BYREF
  int v40; // [rsp+168h] [rbp+8h]
  __int64 v41; // [rsp+170h] [rbp+10h] BYREF
  int v42; // [rsp+178h] [rbp+18h]
  __int64 v43; // [rsp+180h] [rbp+20h] BYREF
  int v44; // [rsp+188h] [rbp+28h]
  __int64 v45; // [rsp+190h] [rbp+30h] BYREF
  int v46; // [rsp+198h] [rbp+38h]
  __int64 v47; // [rsp+1A0h] [rbp+40h] BYREF
  int v48; // [rsp+1A8h] [rbp+48h]
  GUID ActivityId; // [rsp+1B0h] [rbp+50h] BYREF

  ActivityId = 0LL;
  v13 = *(_DWORD *)(a10 + 16);
  v30 = 1000000 * (a5 - a4) / qword_180209310;
  v14 = a12 ^ v13;
  v29 = 1000000 * (a5 - a6) / qword_180209310;
  v28 = 1000000 * (a7 - a5) / qword_180209310;
  v27 = 1000000 * (a7 - a6) / qword_180209310;
  v25 = 1000000 * (a8 - a6) / qword_180209310;
  v26 = 1000000 * (a4 - a8) / qword_180209310;
  EventActivityIdControl(1u, &ActivityId);
  v17 = wil::details::static_lazy<HolographicDriverClientContinuousTrace>::get(
          v16,
          _lambda_fbd0f72fdb52924b760b88d2d8805198_::_lambda_invoker_cdecl_);
  if ( **(_DWORD **)(v17 + 8) > 5u )
  {
    LOBYTE(v17) = tlgKeywordOn(*(_QWORD *)(v17 + 8), 0x400000LL);
    if ( (_BYTE)v17 )
    {
      v21 = a11;
      v23 = *(_DWORD *)(a10 + 16);
      v39 = a10 + 120;
      v41 = a10 + 108;
      v43 = a10 + 96;
      v45 = a10 + 84;
      v47 = a10 + 36;
      v31 = *(_QWORD *)(a10 + 8);
      v32 = *(_QWORD *)a10;
      v24 = a9;
      p_ActivityId = (__int64)&ActivityId;
      v22 = v14;
      v40 = 12;
      v42 = 12;
      v44 = 12;
      v46 = 12;
      v48 = 48;
      v33 = a8;
      v34 = a6;
      v35 = a7;
      v36 = a3;
      v37 = a2;
      LOBYTE(v17) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByVal<8>,_tlgWrapperByRef<16>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperPtrSize,_tlgWrapperPtrSize,_tlgWrapperPtrSize,_tlgWrapperPtrSize,_tlgWrapperPtrSize,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>>(
                      v18,
                      byte_1801D0EB8,
                      v18,
                      v19,
                      &p_ActivityId,
                      (__int64)&v37,
                      &v36,
                      (__int64)&v35,
                      (__int64)&v34,
                      (__int64)&v33,
                      (__int64)&v30,
                      (__int64)&v29,
                      (__int64)&v28,
                      (__int64)&v27,
                      (__int64)&v26,
                      (__int64)&v25,
                      (__int64)&v24,
                      (__int64)&v32,
                      (__int64)&v31,
                      &v47,
                      &v45,
                      &v43,
                      &v41,
                      &v39,
                      (__int64)&v23,
                      (__int64)&v21,
                      (__int64)&v22);
    }
  }
  return v17;
}
