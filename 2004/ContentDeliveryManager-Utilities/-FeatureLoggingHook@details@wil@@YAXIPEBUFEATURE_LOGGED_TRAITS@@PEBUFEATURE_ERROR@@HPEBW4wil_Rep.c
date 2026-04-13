/*
 * XREFs of ?FeatureLoggingHook@details@wil@@YAXIPEBUFEATURE_LOGGED_TRAITS@@PEBUFEATURE_ERROR@@HPEBW4wil_ReportingKind@@PEBW4wil_VariantReportingKind@@E_K@Z @ 0x18000D500
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800011F0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$00@@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$00@@3AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180001850 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$00@@U1@U-$.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapperByVal@$01@@U1@U?$_tlgWrapSz@D@@U2@U3@U3@U3@U2@U3@U3@U3@U3@U1@U3@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapperByVal@$01@@3AEBU?$_tlgWrapSz@D@@455545555353@Z @ 0x180001918 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U-$_tlgWrapperByVal@$01@@U1@U-$_tlgWrapSz@D@@U2@U3@U3@U3.c)
 *     ?Instance@FeatureLogging@details@wil@@KAPEAV123@XZ @ 0x18000D3F8 (-Instance@FeatureLogging@details@wil@@KAPEAV123@XZ.c)
 *     __security_check_cookie @ 0x1800CD6D0 (__security_check_cookie.c)
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
  int v8; // r14d
  int v11; // r15d
  _DWORD *v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // eax
  __int16 v17; // dx
  int v18; // edx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rcx
  int v23; // eax
  __int16 v24; // dx
  int v25; // edx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  int v29; // eax
  __int16 v30; // dx
  int v31; // edx
  __int16 v32; // [rsp+B8h] [rbp-80h] BYREF
  __int16 v33; // [rsp+BAh] [rbp-7Eh] BYREF
  int v34; // [rsp+BCh] [rbp-7Ch] BYREF
  int v35; // [rsp+C0h] [rbp-78h] BYREF
  int v36; // [rsp+C4h] [rbp-74h] BYREF
  int v37; // [rsp+C8h] [rbp-70h] BYREF
  int v38; // [rsp+CCh] [rbp-6Ch] BYREF
  __int64 v39; // [rsp+D0h] [rbp-68h] BYREF
  __int64 v40; // [rsp+D8h] [rbp-60h] BYREF
  __int64 v41; // [rsp+E0h] [rbp-58h] BYREF
  __int64 v42; // [rsp+E8h] [rbp-50h] BYREF
  __int64 v43; // [rsp+F0h] [rbp-48h] BYREF
  __int64 v44; // [rsp+F8h] [rbp-40h] BYREF
  __int64 v45; // [rsp+100h] [rbp-38h] BYREF
  __int64 v46; // [rsp+108h] [rbp-30h] BYREF
  __int64 v47; // [rsp+110h] [rbp-28h] BYREF
  __int64 v48; // [rsp+118h] [rbp-20h] BYREF
  __int64 v49; // [rsp+120h] [rbp-18h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v50; // [rsp+128h] [rbp-10h] BYREF
  int *v51; // [rsp+148h] [rbp+10h]
  int v52; // [rsp+150h] [rbp+18h]
  int v53; // [rsp+154h] [rbp+1Ch]
  int *v54; // [rsp+158h] [rbp+20h]
  int v55; // [rsp+160h] [rbp+28h]
  int v56; // [rsp+164h] [rbp+2Ch]
  int *v57; // [rsp+168h] [rbp+30h]
  int v58; // [rsp+170h] [rbp+38h]
  int v59; // [rsp+174h] [rbp+3Ch]
  int *v60; // [rsp+178h] [rbp+40h]
  int v61; // [rsp+180h] [rbp+48h]
  int v62; // [rsp+184h] [rbp+4Ch]
  __int16 *v63; // [rsp+188h] [rbp+50h]
  int v64; // [rsp+190h] [rbp+58h]
  int v65; // [rsp+194h] [rbp+5Ch]
  int *v66; // [rsp+198h] [rbp+60h]
  int v67; // [rsp+1A0h] [rbp+68h]
  int v68; // [rsp+1A4h] [rbp+6Ch]
  __int16 *v69; // [rsp+1A8h] [rbp+70h]
  int v70; // [rsp+1B0h] [rbp+78h]
  int v71; // [rsp+1B4h] [rbp+7Ch]
  __int64 *v72; // [rsp+1B8h] [rbp+80h]
  int v73; // [rsp+1C0h] [rbp+88h]
  int v74; // [rsp+1C4h] [rbp+8Ch]

  v8 = (int)a4;
  v11 = (int)this;
  v12 = (_DWORD *)*((_QWORD *)wil::details::FeatureLogging::Instance() + 1);
  if ( v12 && *v12 )
  {
    if ( a5 )
    {
      v13 = *((_QWORD *)wil::details::FeatureLogging::Instance() + 1);
      if ( *(_DWORD *)v13 > 5u
        && (*(_BYTE *)(v13 + 16) & 2) != 0
        && (*(_QWORD *)(v13 + 24) & 2LL) == *(_QWORD *)(v13 + 24) )
      {
        v34 = *a5;
        LOBYTE(v32) = v8 != 0;
        v39 = a8;
        v16 = -1;
        if ( a2 )
          v17 = *((unsigned __int8 *)a2 + 4);
        else
          v17 = -1;
        v33 = v17;
        if ( a2 )
          v18 = a2[1];
        else
          v18 = -1;
        v35 = v18;
        if ( a2 )
          v16 = *a2;
        v36 = v16;
        v37 = v11;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
          v13,
          byte_180174C0D,
          v14,
          v15,
          (__int64)&v37,
          (__int64)&v36,
          (__int64)&v35,
          (__int64)&v33,
          (__int64)&v32,
          (__int64)&v34,
          (__int64)&v39);
      }
      if ( *((_BYTE *)a2 + 4) == 1 )
      {
        if ( v8 )
        {
          v19 = *((_QWORD *)wil::details::FeatureLogging::Instance() + 1);
          if ( *(_DWORD *)v19 > 5u
            && (*(_BYTE *)(v19 + 16) & 0xA) != 0
            && (*(_QWORD *)(v19 + 24) & 0xALL) == *(_QWORD *)(v19 + 24) )
          {
            v37 = *a5;
            v33 = *((unsigned __int8 *)a2 + 4);
            v36 = a2[1];
            v35 = *a2;
            v39 = a8;
            LOBYTE(v32) = 1;
            v34 = v11;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
              v19,
              byte_1801748D1,
              v20,
              v21,
              (__int64)&v34,
              (__int64)&v35,
              (__int64)&v36,
              (__int64)&v33,
              (__int64)&v32,
              (__int64)&v37,
              (__int64)&v39);
          }
        }
      }
    }
    else if ( a6 )
    {
      v22 = *((_QWORD *)wil::details::FeatureLogging::Instance() + 1);
      if ( *(_DWORD *)v22 > 5u
        && (*(_BYTE *)(v22 + 16) & 4) != 0
        && (*(_QWORD *)(v22 + 24) & 4LL) == *(_QWORD *)(v22 + 24) )
      {
        v39 = a8;
        LOBYTE(v33) = v8 != 0;
        LOBYTE(v32) = (_BYTE)a7;
        v37 = *(_DWORD *)a6;
        v23 = -1;
        if ( a2 )
          v24 = *((unsigned __int8 *)a2 + 4);
        else
          v24 = -1;
        LOWORD(v34) = v24;
        if ( a2 )
          v25 = a2[1];
        else
          v25 = -1;
        v36 = v25;
        if ( a2 )
          v23 = *a2;
        v74 = 0;
        v71 = 0;
        v68 = 0;
        v65 = 0;
        v62 = 0;
        v59 = 0;
        v56 = 0;
        v53 = 0;
        v35 = v23;
        v72 = &v39;
        v69 = &v32;
        v66 = &v37;
        v63 = &v33;
        v60 = &v34;
        v57 = &v36;
        v54 = &v35;
        v51 = &v38;
        v67 = 4;
        v58 = 4;
        v55 = 4;
        v52 = 4;
        v38 = v11;
        v73 = 8;
        v70 = 1;
        v64 = 1;
        v61 = 2;
        tlgWriteTransfer_EventWriteTransfer(v22, (unsigned __int8 *)dword_180174C7E, 0LL, 0LL, 0xAu, &v50);
      }
    }
    else if ( a3 )
    {
      v26 = *((_QWORD *)wil::details::FeatureLogging::Instance() + 1);
      if ( *(_DWORD *)v26 > 2u
        && (*(_BYTE *)(v26 + 16) & 1) != 0
        && (*(_QWORD *)(v26 + 24) & 1LL) == *(_QWORD *)(v26 + 24) )
      {
        v38 = *((_DWORD *)a3 + 20);
        v41 = *((_QWORD *)a3 + 11);
        v37 = *((_DWORD *)a3 + 8);
        v42 = *((_QWORD *)a3 + 5);
        v43 = *((_QWORD *)a3 + 6);
        v44 = *((_QWORD *)a3 + 12);
        v45 = *((_QWORD *)a3 + 9);
        LOWORD(v34) = *((_WORD *)a3 + 28);
        v46 = *((_QWORD *)a3 + 8);
        v47 = *((_QWORD *)a3 + 2);
        v48 = *((_QWORD *)a3 + 3);
        v33 = *((_WORD *)a3 + 2);
        v49 = *((_QWORD *)a3 + 1);
        v36 = *(_DWORD *)a3;
        v29 = -1;
        if ( a2 )
          v30 = *((unsigned __int8 *)a2 + 4);
        else
          v30 = -1;
        v32 = v30;
        if ( a2 )
          v31 = a2[1];
        else
          v31 = -1;
        v35 = v31;
        if ( a2 )
          v29 = *a2;
        LODWORD(v40) = v29;
        LODWORD(v39) = v11;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<2>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<2>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
          v26,
          (unsigned __int8 *)dword_1801747B1,
          v27,
          v28,
          (__int64)&v39,
          (__int64)&v40,
          (__int64)&v35,
          (__int64)&v32,
          (__int64)&v36,
          (const unsigned __int16 **)&v49,
          (__int64)&v33,
          (const unsigned __int16 **)&v48,
          (const unsigned __int16 **)&v47,
          (const unsigned __int16 **)&v46,
          (__int64)&v34,
          (const unsigned __int16 **)&v45,
          (const unsigned __int16 **)&v44,
          (const unsigned __int16 **)&v43,
          (const unsigned __int16 **)&v42,
          (__int64)&v37,
          (const unsigned __int16 **)&v41,
          (__int64)&v38);
      }
    }
  }
}
