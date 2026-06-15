/*
 * XREFs of ?FeatureLoggingHook@details@wil@@YAXIPEBUFEATURE_LOGGED_TRAITS@@PEBUFEATURE_ERROR@@HPEBW4wil_ReportingKind@@PEBW4wil_VariantReportingKind@@E_K@Z @ 0x180009C50
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180001090 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$00@@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$00@@3AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1800016F0 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$00@@U1@U-$.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapperByVal@$01@@U1@U?$_tlgWrapSz@D@@U2@U3@U3@U3@U2@U3@U3@U3@U3@U1@U3@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapperByVal@$01@@3AEBU?$_tlgWrapSz@D@@455545555353@Z @ 0x1800017B8 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U-$_tlgWrapperByVal@$01@@U1@U-$_tlgWrapSz@D@@U2@U3@U3@U3.c)
 *     ?Instance@FeatureLogging@details@wil@@KAPEAV123@XZ @ 0x180009AD4 (-Instance@FeatureLogging@details@wil@@KAPEAV123@XZ.c)
 *     __security_check_cookie @ 0x18003EF80 (__security_check_cookie.c)
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
  int v8; // esi
  int v11; // r15d
  _DWORD *v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // ecx
  __int16 v16; // dx
  int v17; // eax
  __int64 v18; // r9
  __int16 v19; // cx
  int v20; // edx
  __int64 v21; // r8
  __int64 v22; // r10
  int v23; // r9d
  int v24; // ecx
  __int16 v25; // r8
  int v26; // edx
  __int64 v27; // r8
  int v28; // ecx
  __int64 v29; // r9
  int v30; // edx
  __int16 v31; // [rsp+B8h] [rbp-80h] BYREF
  __int16 v32; // [rsp+BAh] [rbp-7Eh] BYREF
  int v33; // [rsp+BCh] [rbp-7Ch] BYREF
  int v34; // [rsp+C0h] [rbp-78h] BYREF
  int v35; // [rsp+C4h] [rbp-74h] BYREF
  int v36; // [rsp+C8h] [rbp-70h] BYREF
  int v37; // [rsp+CCh] [rbp-6Ch] BYREF
  __int64 v38; // [rsp+D0h] [rbp-68h] BYREF
  __int64 v39; // [rsp+D8h] [rbp-60h] BYREF
  __int64 v40; // [rsp+E0h] [rbp-58h] BYREF
  __int64 v41; // [rsp+E8h] [rbp-50h] BYREF
  __int64 v42; // [rsp+F0h] [rbp-48h] BYREF
  __int64 v43; // [rsp+F8h] [rbp-40h] BYREF
  __int64 v44; // [rsp+100h] [rbp-38h] BYREF
  __int64 v45; // [rsp+108h] [rbp-30h] BYREF
  __int64 v46; // [rsp+110h] [rbp-28h] BYREF
  __int64 v47; // [rsp+118h] [rbp-20h] BYREF
  __int64 v48; // [rsp+120h] [rbp-18h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v49; // [rsp+128h] [rbp-10h] BYREF
  int *v50; // [rsp+148h] [rbp+10h]
  int v51; // [rsp+150h] [rbp+18h]
  int v52; // [rsp+154h] [rbp+1Ch]
  int *v53; // [rsp+158h] [rbp+20h]
  int v54; // [rsp+160h] [rbp+28h]
  int v55; // [rsp+164h] [rbp+2Ch]
  int *v56; // [rsp+168h] [rbp+30h]
  int v57; // [rsp+170h] [rbp+38h]
  int v58; // [rsp+174h] [rbp+3Ch]
  int *v59; // [rsp+178h] [rbp+40h]
  int v60; // [rsp+180h] [rbp+48h]
  int v61; // [rsp+184h] [rbp+4Ch]
  __int16 *v62; // [rsp+188h] [rbp+50h]
  int v63; // [rsp+190h] [rbp+58h]
  int v64; // [rsp+194h] [rbp+5Ch]
  int *v65; // [rsp+198h] [rbp+60h]
  int v66; // [rsp+1A0h] [rbp+68h]
  int v67; // [rsp+1A4h] [rbp+6Ch]
  __int16 *v68; // [rsp+1A8h] [rbp+70h]
  int v69; // [rsp+1B0h] [rbp+78h]
  int v70; // [rsp+1B4h] [rbp+7Ch]
  __int64 *v71; // [rsp+1B8h] [rbp+80h]
  int v72; // [rsp+1C0h] [rbp+88h]
  int v73; // [rsp+1C4h] [rbp+8Ch]

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
        v14 = *a5;
        v15 = -1;
        if ( a2 )
          v16 = *((unsigned __int8 *)a2 + 4);
        else
          v16 = -1;
        if ( a2 )
          v17 = a2[1];
        else
          v17 = -1;
        if ( a2 )
          v15 = *a2;
        v34 = v17;
        v32 = v16;
        v35 = v15;
        v38 = a8;
        v33 = v14;
        LOBYTE(v31) = v8 != 0;
        v36 = v11;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
          v13,
          byte_18004B4E8,
          v13,
          v14,
          (__int64)&v36,
          (__int64)&v35,
          (__int64)&v34,
          (__int64)&v32,
          (__int64)&v31,
          (__int64)&v33,
          (__int64)&v38);
      }
      if ( *((_BYTE *)a2 + 4) == 1 )
      {
        if ( v8 )
        {
          v18 = *((_QWORD *)wil::details::FeatureLogging::Instance() + 1);
          if ( *(_DWORD *)v18 > 5u
            && (*(_BYTE *)(v18 + 16) & 0xA) != 0
            && (*(_QWORD *)(v18 + 24) & 0xALL) == *(_QWORD *)(v18 + 24) )
          {
            v19 = *((unsigned __int8 *)a2 + 4);
            v20 = a2[1];
            v21 = *a2;
            v36 = *a5;
            v32 = v19;
            v35 = v20;
            v38 = a8;
            LOBYTE(v31) = 1;
            v34 = v21;
            v33 = v11;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
              v18,
              byte_18004B470,
              v21,
              v18,
              (__int64)&v33,
              (__int64)&v34,
              (__int64)&v35,
              (__int64)&v32,
              (__int64)&v31,
              (__int64)&v36,
              (__int64)&v38);
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
        v23 = *(_DWORD *)a6;
        v24 = -1;
        if ( a2 )
          v25 = *((unsigned __int8 *)a2 + 4);
        else
          v25 = -1;
        if ( a2 )
          v26 = a2[1];
        else
          v26 = -1;
        if ( a2 )
          v24 = *a2;
        v73 = 0;
        v70 = 0;
        v67 = 0;
        v64 = 0;
        v61 = 0;
        v58 = 0;
        v55 = 0;
        v52 = 0;
        v38 = a8;
        LOBYTE(v31) = (_BYTE)a7;
        v71 = &v38;
        v68 = &v31;
        v65 = &v36;
        v62 = &v32;
        v59 = &v33;
        v56 = &v35;
        v53 = &v34;
        v50 = &v37;
        v36 = v23;
        LOWORD(v33) = v25;
        v35 = v26;
        v34 = v24;
        LOBYTE(v32) = v8 != 0;
        v37 = v11;
        v72 = 8;
        v69 = 1;
        v66 = 4;
        v63 = 1;
        v60 = 2;
        v57 = 4;
        v54 = 4;
        v51 = 4;
        tlgWriteTransfer_EventWriteTransfer(v22, (unsigned __int8 *)dword_18004B3E8, 0LL, 0LL, 0xAu, &v49);
      }
    }
    else if ( a3 )
    {
      v27 = *((_QWORD *)wil::details::FeatureLogging::Instance() + 1);
      if ( *(_DWORD *)v27 > 2u
        && (*(_BYTE *)(v27 + 16) & 1) != 0
        && (*(_QWORD *)(v27 + 24) & 1LL) == *(_QWORD *)(v27 + 24) )
      {
        v28 = -1;
        if ( a2 )
          v29 = *((unsigned __int8 *)a2 + 4);
        else
          v29 = 0xFFFFFFFFLL;
        if ( a2 )
          v30 = a2[1];
        else
          v30 = -1;
        if ( a2 )
          v28 = *a2;
        v37 = *((_DWORD *)a3 + 20);
        v40 = *((_QWORD *)a3 + 11);
        v36 = *((_DWORD *)a3 + 8);
        v41 = *((_QWORD *)a3 + 5);
        v42 = *((_QWORD *)a3 + 6);
        v43 = *((_QWORD *)a3 + 12);
        v44 = *((_QWORD *)a3 + 9);
        LOWORD(v33) = *((_WORD *)a3 + 28);
        v45 = *((_QWORD *)a3 + 8);
        v46 = *((_QWORD *)a3 + 2);
        v47 = *((_QWORD *)a3 + 3);
        v32 = *((_WORD *)a3 + 2);
        v48 = *((_QWORD *)a3 + 1);
        v35 = *(_DWORD *)a3;
        v34 = v30;
        LODWORD(v39) = v28;
        v31 = v29;
        LODWORD(v38) = v11;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<2>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<2>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
          v27,
          (unsigned __int8 *)dword_18004B2C8,
          v27,
          v29,
          (__int64)&v38,
          (__int64)&v39,
          (__int64)&v34,
          (__int64)&v31,
          (__int64)&v35,
          (const unsigned __int16 **)&v48,
          (__int64)&v32,
          (const unsigned __int16 **)&v47,
          (const unsigned __int16 **)&v46,
          (const unsigned __int16 **)&v45,
          (__int64)&v33,
          (const unsigned __int16 **)&v44,
          (const unsigned __int16 **)&v43,
          (const unsigned __int16 **)&v42,
          (const unsigned __int16 **)&v41,
          (__int64)&v36,
          (const unsigned __int16 **)&v40,
          (__int64)&v37);
      }
    }
  }
}
