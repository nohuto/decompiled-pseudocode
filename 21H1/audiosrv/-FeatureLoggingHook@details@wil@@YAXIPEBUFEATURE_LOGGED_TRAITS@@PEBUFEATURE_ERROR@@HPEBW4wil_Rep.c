/*
 * XREFs of ?FeatureLoggingHook@details@wil@@YAXIPEBUFEATURE_LOGGED_TRAITS@@PEBUFEATURE_ERROR@@HPEBW4wil_ReportingKind@@PEBW4wil_VariantReportingKind@@E_K@Z @ 0x18006DE30
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapperByVal@$01@@U1@U?$_tlgWrapSz@D@@U2@U3@U3@U3@U2@U3@U3@U3@U3@U1@U3@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapperByVal@$01@@3AEBU?$_tlgWrapSz@D@@455545555353@Z @ 0x180001008 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U-$_tlgWrapperByVal@$01@@U1@U-$_tlgWrapSz@D@@U2@U3@U3@U3.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$00@@U1@U3@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$00@@35AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1800012E8 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$00@@U1@U3@.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$00@@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$00@@3AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1800013C0 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$00@@U1@U-$.c)
 *     ?Provider@FeatureLogging@details@wil@@SAQEBU_tlgProvider_t@@XZ @ 0x18006E470 (-Provider@FeatureLogging@details@wil@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ?get@?$static_lazy@VFeatureLogging@details@wil@@@details@wil@@QEAAPEAVFeatureLogging@23@P6AXXZ@Z @ 0x18006E66C (-get@-$static_lazy@VFeatureLogging@details@wil@@@details@wil@@QEAAPEAVFeatureLogging@23@P6AXXZ@Z.c)
 *     _tlgKeywordOn @ 0x1800B7A3C (_tlgKeywordOn.c)
 *     ?IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z @ 0x1800C94B8 (-IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z.c)
 */

void __fastcall wil::details::FeatureLoggingHook(
        wil::details *this,
        unsigned __int16 *a2,
        const struct FEATURE_LOGGED_TRAITS *a3,
        const struct FEATURE_ERROR *a4,
        unsigned int *a5,
        const enum wil_ReportingKind *a6,
        const enum wil_VariantReportingKind *a7,
        __int64 a8)
{
  int v9; // r14d
  int v11; // r15d
  wil::TraceLoggingProvider *v12; // rax
  unsigned __int8 v13; // dl
  unsigned __int64 v14; // r8
  const struct _tlgProvider_t *v15; // rax
  __int64 v16; // r9
  __int64 v17; // r8
  int v18; // ecx
  __int16 v19; // dx
  int v20; // eax
  const struct _tlgProvider_t *v21; // rax
  __int64 v22; // r9
  __int16 v23; // dx
  int v24; // ecx
  __int64 v25; // r8
  const struct _tlgProvider_t *v26; // rax
  __int64 v27; // r9
  int v28; // r10d
  int v29; // ecx
  __int64 v30; // r8
  int v31; // edx
  const struct _tlgProvider_t *v32; // rax
  __int64 v33; // r9
  int v34; // ecx
  __int64 v35; // r8
  int v36; // edx
  __int16 v37; // [rsp+B8h] [rbp-80h] BYREF
  __int16 v38; // [rsp+BAh] [rbp-7Eh] BYREF
  int v39; // [rsp+BCh] [rbp-7Ch] BYREF
  int v40; // [rsp+C0h] [rbp-78h] BYREF
  int v41; // [rsp+C4h] [rbp-74h] BYREF
  int v42; // [rsp+C8h] [rbp-70h] BYREF
  int v43; // [rsp+CCh] [rbp-6Ch] BYREF
  __int64 v44; // [rsp+D0h] [rbp-68h] BYREF
  int v45; // [rsp+D8h] [rbp-60h] BYREF
  const CHAR *v46; // [rsp+E0h] [rbp-58h] BYREF
  const CHAR *v47; // [rsp+E8h] [rbp-50h] BYREF
  const CHAR *v48; // [rsp+F0h] [rbp-48h] BYREF
  const CHAR *v49; // [rsp+F8h] [rbp-40h] BYREF
  const CHAR *v50; // [rsp+100h] [rbp-38h] BYREF
  const CHAR *v51; // [rsp+108h] [rbp-30h] BYREF
  const CHAR *v52; // [rsp+110h] [rbp-28h] BYREF
  const CHAR *v53; // [rsp+118h] [rbp-20h] BYREF
  const CHAR *v54; // [rsp+120h] [rbp-18h] BYREF

  v9 = (int)a4;
  v11 = (int)this;
  v12 = (wil::TraceLoggingProvider *)wil::details::static_lazy<wil::details::FeatureLogging>::get(
                                       this,
                                       _lambda_120d0c6b51dc644cb63ed5c7fc62f6c3_::_lambda_invoker_cdecl_);
  if ( wil::TraceLoggingProvider::IsEnabled_(v12, v13, v14) )
  {
    if ( a5 )
    {
      v15 = wil::details::FeatureLogging::Provider();
      if ( *(_DWORD *)v15 > 5u && (unsigned __int8)tlgKeywordOn(v15, 2LL) )
      {
        v17 = *a5;
        v18 = -1;
        if ( a2 )
          v19 = *((unsigned __int8 *)a2 + 4);
        else
          v19 = -1;
        if ( a2 )
          v20 = a2[1];
        else
          v20 = -1;
        if ( a2 )
          v18 = *a2;
        v40 = v20;
        v38 = v19;
        v41 = v18;
        v44 = a8;
        v39 = v17;
        LOBYTE(v37) = v9 != 0;
        v42 = v11;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
          v16,
          (int)&unk_180167D07,
          v17,
          v16,
          (__int64)&v42,
          (__int64)&v41,
          (__int64)&v40,
          (__int64)&v38,
          (__int64)&v37,
          (__int64)&v39,
          (__int64)&v44);
      }
      if ( *((_BYTE *)a2 + 4) == 1 )
      {
        if ( v9 )
        {
          v21 = wil::details::FeatureLogging::Provider();
          if ( *(_DWORD *)v21 > 5u )
          {
            if ( (unsigned __int8)tlgKeywordOn(v21, 10LL) )
            {
              v23 = *((unsigned __int8 *)a2 + 4);
              v24 = *a5;
              v25 = a2[1];
              v40 = *a2;
              v42 = v24;
              v38 = v23;
              v44 = a8;
              LOBYTE(v37) = 1;
              v41 = v25;
              v39 = v11;
              _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
                v22,
                (int)&unk_180167C8F,
                v25,
                v22,
                (__int64)&v39,
                (__int64)&v40,
                (__int64)&v41,
                (__int64)&v38,
                (__int64)&v37,
                (__int64)&v42,
                (__int64)&v44);
            }
          }
        }
      }
    }
    else if ( a6 )
    {
      v26 = wil::details::FeatureLogging::Provider();
      if ( *(_DWORD *)v26 > 5u && (unsigned __int8)tlgKeywordOn(v26, 4LL) )
      {
        v28 = *(_DWORD *)a6;
        v29 = -1;
        if ( a2 )
          v30 = *((unsigned __int8 *)a2 + 4);
        else
          v30 = 0xFFFFFFFFLL;
        if ( a2 )
          v31 = a2[1];
        else
          v31 = -1;
        if ( a2 )
          v29 = *a2;
        v44 = a8;
        LOBYTE(v37) = (_BYTE)a7;
        v41 = v31;
        v40 = v29;
        v42 = v28;
        LOBYTE(v38) = v9 != 0;
        LOWORD(v39) = v30;
        v43 = v11;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>>(
          v27,
          (int)&unk_180167C07,
          v30,
          v27,
          (__int64)&v43,
          (__int64)&v40,
          (__int64)&v41,
          (__int64)&v39,
          (__int64)&v38,
          (__int64)&v42,
          (__int64)&v37,
          (__int64)&v44);
      }
    }
    else if ( a3 )
    {
      v32 = wil::details::FeatureLogging::Provider();
      if ( *(_DWORD *)v32 > 2u )
      {
        if ( (unsigned __int8)tlgKeywordOn(v32, 1LL) )
        {
          v34 = -1;
          if ( a2 )
            v35 = *((unsigned __int8 *)a2 + 4);
          else
            v35 = 0xFFFFFFFFLL;
          if ( a2 )
            v36 = a2[1];
          else
            v36 = -1;
          if ( a2 )
            v34 = *a2;
          v43 = *((_DWORD *)a3 + 20);
          v46 = (const CHAR *)*((_QWORD *)a3 + 11);
          v42 = *((_DWORD *)a3 + 8);
          v47 = (const CHAR *)*((_QWORD *)a3 + 5);
          v48 = (const CHAR *)*((_QWORD *)a3 + 6);
          v49 = (const CHAR *)*((_QWORD *)a3 + 12);
          v50 = (const CHAR *)*((_QWORD *)a3 + 9);
          LOWORD(v39) = *((_WORD *)a3 + 28);
          v51 = (const CHAR *)*((_QWORD *)a3 + 8);
          v52 = (const CHAR *)*((_QWORD *)a3 + 2);
          v53 = (const CHAR *)*((_QWORD *)a3 + 3);
          v38 = *((_WORD *)a3 + 2);
          v54 = (const CHAR *)*((_QWORD *)a3 + 1);
          v41 = *(_DWORD *)a3;
          v40 = v36;
          v45 = v34;
          v37 = v35;
          LODWORD(v44) = v11;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<2>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<2>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
            v33,
            (int)&unk_180167AE7,
            v35,
            v33,
            (__int64)&v44,
            (__int64)&v45,
            (__int64)&v40,
            (__int64)&v37,
            (__int64)&v41,
            &v54,
            (__int64)&v38,
            &v53,
            &v52,
            &v51,
            (__int64)&v39,
            &v50,
            &v49,
            &v48,
            &v47,
            (__int64)&v42,
            &v46,
            (__int64)&v43);
        }
      }
    }
  }
}
