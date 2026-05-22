/*
 * XREFs of ?LogMPCHandInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z @ 0x1800837E0
 * Callers:
 *     ?LogMPCInputReport_@ISMTracing@@QEAAXPEAUInputInfo@@AEB_N@Z @ 0x180083C80 (-LogMPCInputReport_@ISMTracing@@QEAAXPEAUInputInfo@@AEB_N@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800117B4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _tlgKeywordOn @ 0x1800190D0 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180019EF4 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x18003C560 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapSz@D@@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapSz@D@@44@Z @ 0x180082568 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U-$_tlgWrapSz@D@@U2@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_t.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$00@@U1@U1@U1@U1@U1@U?$_tlgWrapSz@D@@U1@U3@U3@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$00@@33333AEBU?$_tlgWrapSz@D@@355333@Z @ 0x1800828E8 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$00@@U1@U1@U1@U1@U1@U-$_tlgWrapSz@D@@U1.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@U1@U1@U1@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@333333333@Z @ 0x180082AE4 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$00@@U1@U1@U1@U1@U1@U1@U1@U1@U1@@-$_tlgWri.c)
 *     ?GetVector3AsString@ISMTracing@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAUVector3@Numerics@Foundation@Windows@@@Z @ 0x180083270 (-GetVector3AsString@ISMTracing@@SA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall ISMTracing::LogMPCHandInputReport(struct InputInfo *a1, const bool *a2)
{
  _QWORD *v4; // rax
  _DWORD *v5; // rsi
  _QWORD *Vector3AsString; // rax
  _QWORD *v7; // rax
  _QWORD *v8; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  LPVOID v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  _QWORD *v15; // rax
  _DWORD *v16; // rsi
  _QWORD *v17; // rax
  _QWORD *v18; // rax
  _QWORD *v19; // rax
  __int64 v20; // r8
  __int64 v21; // r9
  _BYTE v22[4]; // [rsp+A8h] [rbp-80h] BYREF
  int v23; // [rsp+ACh] [rbp-7Ch] BYREF
  int v24; // [rsp+B0h] [rbp-78h] BYREF
  int v25; // [rsp+B4h] [rbp-74h] BYREF
  __int64 v26; // [rsp+B8h] [rbp-70h] BYREF
  int v27; // [rsp+C0h] [rbp-68h] BYREF
  int v28; // [rsp+C4h] [rbp-64h] BYREF
  int v29; // [rsp+C8h] [rbp-60h] BYREF
  int v30; // [rsp+CCh] [rbp-5Ch] BYREF
  int v31; // [rsp+D0h] [rbp-58h] BYREF
  _DWORD v32[3]; // [rsp+D4h] [rbp-54h] BYREF
  __int64 v33; // [rsp+E0h] [rbp-48h] BYREF
  __int64 v34; // [rsp+E8h] [rbp-40h] BYREF
  void *v35[2]; // [rsp+F0h] [rbp-38h] BYREF
  __m128i si128; // [rsp+100h] [rbp-28h]
  void *v37[2]; // [rsp+110h] [rbp-18h] BYREF
  __m128i v38; // [rsp+120h] [rbp-8h]
  void *v39[3]; // [rsp+130h] [rbp+8h] BYREF
  unsigned __int64 v40; // [rsp+148h] [rbp+20h]

  if ( *((_DWORD *)a1 + 16) == 6 )
  {
    v4 = wil::details::static_lazy<ISMTracing>::get(
           (__int64)a1,
           _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
    v5 = (_DWORD *)v4[1];
    if ( *v5 > 5u && tlgKeywordOn(v4[1], 1LL) )
    {
      v32[0] = *((_DWORD *)a1 + 245);
      v26 = *(_QWORD *)((char *)a1 + 836);
      Vector3AsString = (_QWORD *)ISMTracing::GetVector3AsString((__int64)v39, (float *)a1 + 203);
      if ( Vector3AsString[3] >= 0x10uLL )
        Vector3AsString = (_QWORD *)*Vector3AsString;
      *(_QWORD *)&v32[1] = Vector3AsString;
      v7 = (_QWORD *)ISMTracing::GetVector3AsString((__int64)v37, (float *)a1 + 200);
      if ( v7[3] >= 0x10uLL )
        v7 = (_QWORD *)*v7;
      v33 = (__int64)v7;
      v27 = *((_DWORD *)a1 + 208);
      v8 = (_QWORD *)ISMTracing::GetVector3AsString((__int64)v35, (float *)a1 + 180);
      if ( v8[3] >= 0x10uLL )
        v8 = (_QWORD *)*v8;
      v34 = (__int64)v8;
      v28 = *((_DWORD *)a1 + 207);
      v29 = *((_DWORD *)a1 + 206);
      v30 = *((_DWORD *)a1 + 17);
      v31 = *((_DWORD *)a1 + 16);
      v23 = *((_DWORD *)a1 + 18);
      v22[0] = *a2;
      v24 = *((_DWORD *)a1 + 2);
      v25 = *((_DWORD *)a1 + 1);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)v5,
        (unsigned __int8 *)dword_1801C857B,
        v9,
        v10,
        (__int64)&v25,
        (__int64)&v24,
        (__int64)v22,
        (__int64)&v23,
        (__int64)&v31,
        (__int64)&v30,
        (__int64)&v29,
        (__int64)&v28,
        (const unsigned __int16 **)&v34,
        (__int64)&v27,
        (const unsigned __int16 **)&v33,
        (const unsigned __int16 **)&v32[1],
        (__int64)&v26 + 4,
        (__int64)&v26,
        (__int64)v32);
      if ( si128.m128i_i64[1] >= 0x10uLL )
        std::_Deallocate<16,0>(v35[0], (const struct std::nothrow_t *)(si128.m128i_i64[1] + 1));
      si128 = _mm_load_si128((const __m128i *)&_xmm);
      LOBYTE(v35[0]) = 0;
      if ( v38.m128i_i64[1] >= 0x10uLL )
        std::_Deallocate<16,0>(v37[0], (const struct std::nothrow_t *)(v38.m128i_i64[1] + 1));
      v38 = _mm_load_si128((const __m128i *)&_xmm);
      LOBYTE(v37[0]) = 0;
LABEL_31:
      if ( v40 >= 0x10 )
        std::_Deallocate<16,0>(v39[0], (const struct std::nothrow_t *)(v40 + 1));
    }
  }
  else
  {
    v11 = wil::details::static_lazy<ISMTracing>::get(
            (__int64)a1,
            _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
    if ( **((_DWORD **)v11 + 1) > 4u && tlgKeywordOn(*((_QWORD *)v11 + 1), 1LL) )
    {
      v25 = *((_DWORD *)a1 + 245);
      v24 = *((_DWORD *)a1 + 209);
      v23 = *((_DWORD *)a1 + 210);
      v31 = *((_DWORD *)a1 + 208);
      v30 = *((_DWORD *)a1 + 207);
      v29 = *((_DWORD *)a1 + 206);
      v28 = *((_DWORD *)a1 + 17);
      v27 = *((_DWORD *)a1 + 16);
      HIDWORD(v26) = *((_DWORD *)a1 + 18);
      v22[0] = *a2;
      LODWORD(v26) = *((_DWORD *)a1 + 1);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v13,
        byte_1801C866C,
        v13,
        v14,
        (__int64)&v26,
        (__int64)v22,
        (__int64)&v26 + 4,
        (__int64)&v27,
        (__int64)&v28,
        (__int64)&v29,
        (__int64)&v30,
        (__int64)&v31,
        (__int64)&v23,
        (__int64)&v24,
        (__int64)&v25);
    }
    v15 = wil::details::static_lazy<ISMTracing>::get(
            v12,
            _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
    v16 = (_DWORD *)v15[1];
    if ( *v16 > 5u && tlgKeywordOn(v15[1], 1LL) )
    {
      v17 = (_QWORD *)ISMTracing::GetVector3AsString((__int64)v39, (float *)a1 + 203);
      if ( v17[3] >= 0x10uLL )
        v17 = (_QWORD *)*v17;
      v34 = (__int64)v17;
      v18 = (_QWORD *)ISMTracing::GetVector3AsString((__int64)v35, (float *)a1 + 200);
      if ( v18[3] >= 0x10uLL )
        v18 = (_QWORD *)*v18;
      v33 = (__int64)v18;
      v19 = (_QWORD *)ISMTracing::GetVector3AsString((__int64)v37, (float *)a1 + 180);
      if ( v19[3] >= 0x10uLL )
        v19 = (_QWORD *)*v19;
      *(_QWORD *)&v32[1] = v19;
      v25 = *((_DWORD *)a1 + 18);
      v24 = *((_DWORD *)a1 + 2);
      v23 = *((_DWORD *)a1 + 1);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>>(
        (__int64)v16,
        (unsigned __int8 *)dword_1801C8501,
        v20,
        v21,
        (__int64)&v23,
        (__int64)&v24,
        (__int64)&v25,
        (const unsigned __int16 **)&v32[1],
        (const unsigned __int16 **)&v33,
        (const unsigned __int16 **)&v34);
      if ( v38.m128i_i64[1] >= 0x10uLL )
        std::_Deallocate<16,0>(v37[0], (const struct std::nothrow_t *)(v38.m128i_i64[1] + 1));
      v38 = _mm_load_si128((const __m128i *)&_xmm);
      LOBYTE(v37[0]) = 0;
      if ( si128.m128i_i64[1] >= 0x10uLL )
        std::_Deallocate<16,0>(v35[0], (const struct std::nothrow_t *)(si128.m128i_i64[1] + 1));
      si128 = _mm_load_si128((const __m128i *)&_xmm);
      LOBYTE(v35[0]) = 0;
      goto LABEL_31;
    }
  }
}
