/*
 * XREFs of ?FeatureLoggingHook@details@wil@@YAXIPEBUFEATURE_LOGGED_TRAITS@@PEBUFEATURE_ERROR@@HPEBW4wil_ReportingKind@@PEBW4wil_VariantReportingKind@@E_K@Z @ 0x1800D6720
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VFeatureLogging@details@wil@@@details@wil@@QEAAPEAVFeatureLogging@23@P6AXXZ@Z @ 0x1800D6798 (-get@-$static_lazy@VFeatureLogging@details@wil@@@details@wil@@QEAAPEAVFeatureLogging@23@P6AXXZ@Z.c)
 *     ?IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z @ 0x1800D6974 (-IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapperByVal@$01@@U1@U?$_tlgWrapSz@D@@U2@U3@U3@U3@U2@U3@U3@U3@U3@U1@U3@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapperByVal@$01@@3AEBU?$_tlgWrapSz@D@@455545555353@Z @ 0x1802301F4 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U-$_tlgWrapperByVal@$01@@U1@U-$_tlgWrapSz@D@@U2@U3@U3@U3.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$00@@U1@U3@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$00@@35AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1802304D4 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$00@@U1@U3@.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$00@@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$00@@3AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1802305AC (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$00@@U1@U-$.c)
 */

void __fastcall wil::details::FeatureLoggingHook(
        wil::details *this,
        unsigned __int16 *a2,
        const struct FEATURE_LOGGED_TRAITS *a3,
        const struct FEATURE_ERROR *a4,
        int *a5,
        const enum wil_ReportingKind *a6,
        const enum wil_VariantReportingKind *a7,
        __int64 a8)
{
  int v9; // r14d
  int v11; // r15d
  wil::TraceLoggingProvider *v12; // rax
  unsigned __int8 v13; // dl
  unsigned __int64 v14; // r8
  __int64 v15; // rcx
  __int64 v16; // rcx
  int v17; // r8d
  int v18; // r9d
  int v19; // eax
  __int16 v20; // dx
  int v21; // edx
  __int64 v22; // rcx
  int v23; // r8d
  int v24; // r9d
  __int64 v25; // rcx
  int v26; // r8d
  int v27; // r9d
  int v28; // eax
  __int16 v29; // dx
  int v30; // edx
  __int64 v31; // rcx
  int v32; // eax
  __int16 v33; // dx
  int v34; // edx
  __int16 v35; // [rsp+B8h] [rbp-80h] BYREF
  __int16 v36; // [rsp+BAh] [rbp-7Eh] BYREF
  int v37; // [rsp+BCh] [rbp-7Ch] BYREF
  int v38; // [rsp+C0h] [rbp-78h] BYREF
  int v39; // [rsp+C4h] [rbp-74h] BYREF
  int v40; // [rsp+C8h] [rbp-70h] BYREF
  int v41; // [rsp+CCh] [rbp-6Ch] BYREF
  __int64 v42; // [rsp+D0h] [rbp-68h] BYREF
  __int64 v43; // [rsp+D8h] [rbp-60h] BYREF
  __int64 v44; // [rsp+E0h] [rbp-58h] BYREF
  __int64 v45; // [rsp+E8h] [rbp-50h] BYREF
  __int64 v46; // [rsp+F0h] [rbp-48h] BYREF
  __int64 v47; // [rsp+F8h] [rbp-40h] BYREF
  __int64 v48; // [rsp+100h] [rbp-38h] BYREF
  __int64 v49; // [rsp+108h] [rbp-30h] BYREF
  __int64 v50; // [rsp+110h] [rbp-28h] BYREF
  __int64 v51; // [rsp+118h] [rbp-20h] BYREF
  __int64 v52; // [rsp+120h] [rbp-18h] BYREF

  v9 = (int)a4;
  v11 = (int)this;
  v12 = (wil::TraceLoggingProvider *)wil::details::static_lazy<wil::details::FeatureLogging>::get(
                                       this,
                                       _lambda_120d0c6b51dc644cb63ed5c7fc62f6c3_::_lambda_invoker_cdecl_);
  if ( wil::TraceLoggingProvider::IsEnabled_(v12, v13, v14) )
  {
    if ( a5 )
    {
      v16 = *(_QWORD *)(wil::details::static_lazy<wil::details::FeatureLogging>::get(
                          v15,
                          _lambda_120d0c6b51dc644cb63ed5c7fc62f6c3_::_lambda_invoker_cdecl_)
                      + 8);
      if ( *(_DWORD *)v16 > 5u
        && (*(_BYTE *)(v16 + 16) & 2) != 0
        && (*(_QWORD *)(v16 + 24) & 2LL) == *(_QWORD *)(v16 + 24) )
      {
        v37 = *a5;
        LOBYTE(v35) = v9 != 0;
        v42 = a8;
        v19 = -1;
        if ( a2 )
          v20 = *((unsigned __int8 *)a2 + 4);
        else
          v20 = -1;
        v36 = v20;
        if ( a2 )
          v21 = a2[1];
        else
          v21 = -1;
        v38 = v21;
        if ( a2 )
          v19 = *a2;
        v39 = v19;
        v40 = v11;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
          v16,
          (unsigned int)&unk_1802EA08E,
          v17,
          v18,
          (__int64)&v40,
          (__int64)&v39,
          (__int64)&v38,
          (__int64)&v36,
          (__int64)&v35,
          (__int64)&v37,
          (__int64)&v42);
      }
      if ( *((_BYTE *)a2 + 4) == 1 )
      {
        if ( v9 )
        {
          v22 = *(_QWORD *)(wil::details::static_lazy<wil::details::FeatureLogging>::get(
                              v16,
                              _lambda_120d0c6b51dc644cb63ed5c7fc62f6c3_::_lambda_invoker_cdecl_)
                          + 8);
          if ( *(_DWORD *)v22 > 5u
            && (*(_BYTE *)(v22 + 16) & 0xA) != 0
            && (*(_QWORD *)(v22 + 24) & 0xALL) == *(_QWORD *)(v22 + 24) )
          {
            v40 = *a5;
            v36 = *((unsigned __int8 *)a2 + 4);
            v39 = a2[1];
            v38 = *a2;
            v42 = a8;
            LOBYTE(v35) = 1;
            v37 = v11;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
              v22,
              (unsigned int)&unk_1802E9F8E,
              v23,
              v24,
              (__int64)&v37,
              (__int64)&v38,
              (__int64)&v39,
              (__int64)&v36,
              (__int64)&v35,
              (__int64)&v40,
              (__int64)&v42);
          }
        }
      }
    }
    else if ( a6 )
    {
      v25 = *(_QWORD *)(wil::details::static_lazy<wil::details::FeatureLogging>::get(
                          v15,
                          _lambda_120d0c6b51dc644cb63ed5c7fc62f6c3_::_lambda_invoker_cdecl_)
                      + 8);
      if ( *(_DWORD *)v25 > 5u
        && (*(_BYTE *)(v25 + 16) & 4) != 0
        && (*(_QWORD *)(v25 + 24) & 4LL) == *(_QWORD *)(v25 + 24) )
      {
        v42 = a8;
        LOBYTE(v36) = v9 != 0;
        LOBYTE(v35) = (_BYTE)a7;
        v40 = *(_DWORD *)a6;
        v28 = -1;
        if ( a2 )
          v29 = *((unsigned __int8 *)a2 + 4);
        else
          v29 = -1;
        LOWORD(v37) = v29;
        if ( a2 )
          v30 = a2[1];
        else
          v30 = -1;
        v39 = v30;
        if ( a2 )
          v28 = *a2;
        v38 = v28;
        v41 = v11;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>>(
          v25,
          (unsigned int)&unk_1802EA006,
          v26,
          v27,
          (__int64)&v41,
          (__int64)&v38,
          (__int64)&v39,
          (__int64)&v37,
          (__int64)&v36,
          (__int64)&v40,
          (__int64)&v35,
          (__int64)&v42);
      }
    }
    else if ( a3 )
    {
      v31 = *(_QWORD *)(wil::details::static_lazy<wil::details::FeatureLogging>::get(
                          v15,
                          _lambda_120d0c6b51dc644cb63ed5c7fc62f6c3_::_lambda_invoker_cdecl_)
                      + 8);
      if ( *(_DWORD *)v31 > 2u
        && (*(_BYTE *)(v31 + 16) & 1) != 0
        && (*(_QWORD *)(v31 + 24) & 1LL) == *(_QWORD *)(v31 + 24) )
      {
        v41 = *((_DWORD *)a3 + 20);
        v44 = *((_QWORD *)a3 + 11);
        v40 = *((_DWORD *)a3 + 8);
        v45 = *((_QWORD *)a3 + 5);
        v46 = *((_QWORD *)a3 + 6);
        v47 = *((_QWORD *)a3 + 12);
        v48 = *((_QWORD *)a3 + 9);
        LOWORD(v37) = *((_WORD *)a3 + 28);
        v49 = *((_QWORD *)a3 + 8);
        v50 = *((_QWORD *)a3 + 2);
        v51 = *((_QWORD *)a3 + 3);
        v36 = *((_WORD *)a3 + 2);
        v52 = *((_QWORD *)a3 + 1);
        v39 = *(_DWORD *)a3;
        v32 = -1;
        if ( a2 )
          v33 = *((unsigned __int8 *)a2 + 4);
        else
          v33 = -1;
        v35 = v33;
        if ( a2 )
          v34 = a2[1];
        else
          v34 = -1;
        v38 = v34;
        if ( a2 )
          v32 = *a2;
        LODWORD(v43) = v32;
        LODWORD(v42) = v11;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<2>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<2>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
          v31,
          (int)&dword_1802E9E6E,
          (__int64)&v42,
          (__int64)&v43,
          (__int64)&v38,
          (__int64)&v35,
          (__int64)&v39,
          (__int64)&v52,
          (__int64)&v36,
          (__int64)&v51,
          (__int64)&v50,
          (__int64)&v49,
          (__int64)&v37,
          (__int64)&v48,
          (__int64)&v47,
          (__int64)&v46,
          (__int64)&v45,
          (__int64)&v40,
          (__int64)&v44,
          (__int64)&v41);
      }
    }
  }
}
