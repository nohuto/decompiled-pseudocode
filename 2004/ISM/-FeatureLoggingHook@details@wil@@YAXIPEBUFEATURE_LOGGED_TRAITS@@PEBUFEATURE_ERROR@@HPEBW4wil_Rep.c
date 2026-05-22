/*
 * XREFs of ?FeatureLoggingHook@details@wil@@YAXIPEBUFEATURE_LOGGED_TRAITS@@PEBUFEATURE_ERROR@@HPEBW4wil_ReportingKind@@PEBW4wil_VariantReportingKind@@E_K@Z @ 0x180029760
 * Callers:
 *     <none>
 * Callees:
 *     _tlgKeywordOn @ 0x1800190A0 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VFeatureLogging@details@wil@@@details@wil@@QEAAPEAVFeatureLogging@23@P6AXXZ@Z @ 0x1800297D8 (-get@-$static_lazy@VFeatureLogging@details@wil@@@details@wil@@QEAAPEAVFeatureLogging@23@P6AXXZ@Z.c)
 *     ?IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z @ 0x1800298B4 (-IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapperByVal@$01@@U1@U?$_tlgWrapSz@D@@U2@U3@U3@U3@U2@U3@U3@U3@U3@U1@U3@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapperByVal@$01@@3AEBU?$_tlgWrapSz@D@@455545555353@Z @ 0x18006333C (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U-$_tlgWrapperByVal@$01@@U1@U-$_tlgWrapSz@D@@U2@U3@U3@U3.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$00@@U1@U3@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$00@@35AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18006361C (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$00@@U1@U3@.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$00@@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$00@@3AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1800636F4 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$00@@U1@U-$.c)
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
  unsigned __int64 v13; // r8
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  int v17; // r8d
  int v18; // r9d
  int v19; // eax
  __int16 v20; // cx
  int v21; // ecx
  __int64 v22; // rax
  int v23; // r8d
  int v24; // r9d
  __int64 v25; // rax
  int v26; // r8d
  int v27; // r9d
  int v28; // eax
  __int16 v29; // cx
  int v30; // ecx
  __int64 v31; // rax
  int v32; // r8d
  int v33; // eax
  __int16 v34; // cx
  int v35; // ecx
  __int16 v36; // [rsp+B8h] [rbp-80h] BYREF
  __int16 v37; // [rsp+BAh] [rbp-7Eh] BYREF
  int v38; // [rsp+BCh] [rbp-7Ch] BYREF
  int v39; // [rsp+C0h] [rbp-78h] BYREF
  int v40; // [rsp+C4h] [rbp-74h] BYREF
  int v41; // [rsp+C8h] [rbp-70h] BYREF
  int v42; // [rsp+CCh] [rbp-6Ch] BYREF
  __int64 v43; // [rsp+D0h] [rbp-68h] BYREF
  __int64 v44; // [rsp+D8h] [rbp-60h] BYREF
  __int64 v45; // [rsp+E0h] [rbp-58h] BYREF
  __int64 v46; // [rsp+E8h] [rbp-50h] BYREF
  __int64 v47; // [rsp+F0h] [rbp-48h] BYREF
  __int64 v48; // [rsp+F8h] [rbp-40h] BYREF
  __int64 v49; // [rsp+100h] [rbp-38h] BYREF
  __int64 v50; // [rsp+108h] [rbp-30h] BYREF
  __int64 v51; // [rsp+110h] [rbp-28h] BYREF
  __int64 v52; // [rsp+118h] [rbp-20h] BYREF
  __int64 v53; // [rsp+120h] [rbp-18h] BYREF

  v9 = (int)a4;
  v11 = (int)this;
  v12 = (wil::TraceLoggingProvider *)wil::details::static_lazy<wil::details::FeatureLogging>::get(
                                       this,
                                       _lambda_120d0c6b51dc644cb63ed5c7fc62f6c3_::_lambda_invoker_cdecl_);
  if ( wil::TraceLoggingProvider::IsEnabled_(v12, 0, v13) )
  {
    if ( a5 )
    {
      v15 = wil::details::static_lazy<wil::details::FeatureLogging>::get(
              v14,
              _lambda_120d0c6b51dc644cb63ed5c7fc62f6c3_::_lambda_invoker_cdecl_);
      if ( **(_DWORD **)(v15 + 8) > 5u && tlgKeywordOn(*(_QWORD *)(v15 + 8), 2LL) )
      {
        v38 = *a5;
        LOBYTE(v36) = v9 != 0;
        v43 = a8;
        v19 = -1;
        if ( a2 )
          v20 = *((unsigned __int8 *)a2 + 4);
        else
          v20 = -1;
        v37 = v20;
        if ( a2 )
          v21 = a2[1];
        else
          v21 = -1;
        v39 = v21;
        if ( a2 )
          v19 = *a2;
        v40 = v19;
        v41 = v11;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
          v17,
          (unsigned int)&unk_1801C721A,
          v17,
          v18,
          (__int64)&v41,
          (__int64)&v40,
          (__int64)&v39,
          (__int64)&v37,
          (__int64)&v36,
          (__int64)&v38,
          (__int64)&v43);
      }
      if ( *((_BYTE *)a2 + 4) == 1 )
      {
        if ( v9 )
        {
          v22 = wil::details::static_lazy<wil::details::FeatureLogging>::get(
                  v16,
                  _lambda_120d0c6b51dc644cb63ed5c7fc62f6c3_::_lambda_invoker_cdecl_);
          if ( **(_DWORD **)(v22 + 8) > 5u && tlgKeywordOn(*(_QWORD *)(v22 + 8), 10LL) )
          {
            v41 = *a5;
            v37 = *((unsigned __int8 *)a2 + 4);
            v40 = a2[1];
            v39 = *a2;
            v43 = a8;
            LOBYTE(v36) = 1;
            v38 = v11;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
              v23,
              (unsigned int)&unk_1801C7433,
              v23,
              v24,
              (__int64)&v38,
              (__int64)&v39,
              (__int64)&v40,
              (__int64)&v37,
              (__int64)&v36,
              (__int64)&v41,
              (__int64)&v43);
          }
        }
      }
    }
    else if ( a6 )
    {
      v25 = wil::details::static_lazy<wil::details::FeatureLogging>::get(
              v14,
              _lambda_120d0c6b51dc644cb63ed5c7fc62f6c3_::_lambda_invoker_cdecl_);
      if ( **(_DWORD **)(v25 + 8) > 5u && tlgKeywordOn(*(_QWORD *)(v25 + 8), 4LL) )
      {
        v43 = a8;
        LOBYTE(v37) = v9 != 0;
        LOBYTE(v36) = (_BYTE)a7;
        v41 = *(_DWORD *)a6;
        v28 = -1;
        if ( a2 )
          v29 = *((unsigned __int8 *)a2 + 4);
        else
          v29 = -1;
        LOWORD(v38) = v29;
        if ( a2 )
          v30 = a2[1];
        else
          v30 = -1;
        v40 = v30;
        if ( a2 )
          v28 = *a2;
        v39 = v28;
        v42 = v11;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>>(
          v26,
          (unsigned int)&unk_1801C728B,
          v26,
          v27,
          (__int64)&v42,
          (__int64)&v39,
          (__int64)&v40,
          (__int64)&v38,
          (__int64)&v37,
          (__int64)&v41,
          (__int64)&v36,
          (__int64)&v43);
      }
    }
    else if ( a3 )
    {
      v31 = wil::details::static_lazy<wil::details::FeatureLogging>::get(
              v14,
              _lambda_120d0c6b51dc644cb63ed5c7fc62f6c3_::_lambda_invoker_cdecl_);
      if ( **(_DWORD **)(v31 + 8) > 2u && tlgKeywordOn(*(_QWORD *)(v31 + 8), 1LL) )
      {
        v42 = *((_DWORD *)a3 + 20);
        v45 = *((_QWORD *)a3 + 11);
        v41 = *((_DWORD *)a3 + 8);
        v46 = *((_QWORD *)a3 + 5);
        v47 = *((_QWORD *)a3 + 6);
        v48 = *((_QWORD *)a3 + 12);
        v49 = *((_QWORD *)a3 + 9);
        LOWORD(v38) = *((_WORD *)a3 + 28);
        v50 = *((_QWORD *)a3 + 8);
        v51 = *((_QWORD *)a3 + 2);
        v52 = *((_QWORD *)a3 + 3);
        v37 = *((_WORD *)a3 + 2);
        v53 = *((_QWORD *)a3 + 1);
        v40 = *(_DWORD *)a3;
        v33 = -1;
        if ( a2 )
          v34 = *((unsigned __int8 *)a2 + 4);
        else
          v34 = -1;
        v36 = v34;
        if ( a2 )
          v35 = a2[1];
        else
          v35 = -1;
        v39 = v35;
        if ( a2 )
          v33 = *a2;
        LODWORD(v44) = v33;
        LODWORD(v43) = v11;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<2>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<2>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
          v32,
          (int)&dword_1801C7313,
          (__int64)&v43,
          (__int64)&v44,
          (__int64)&v39,
          (__int64)&v36,
          (__int64)&v40,
          (__int64)&v53,
          (__int64)&v37,
          (__int64)&v52,
          (__int64)&v51,
          (__int64)&v50,
          (__int64)&v38,
          (__int64)&v49,
          (__int64)&v48,
          (__int64)&v47,
          (__int64)&v46,
          (__int64)&v41,
          (__int64)&v45,
          (__int64)&v42);
      }
    }
  }
}
