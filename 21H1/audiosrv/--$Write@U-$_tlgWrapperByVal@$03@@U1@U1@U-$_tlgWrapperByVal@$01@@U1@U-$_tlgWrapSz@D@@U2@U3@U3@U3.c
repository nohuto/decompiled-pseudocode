/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapperByVal@$01@@U1@U?$_tlgWrapSz@D@@U2@U3@U3@U3@U2@U3@U3@U3@U3@U1@U3@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapperByVal@$01@@3AEBU?$_tlgWrapSz@D@@455545555353@Z @ 0x180001008
 * Callers:
 *     ?FeatureLoggingHook@details@wil@@YAXIPEBUFEATURE_LOGGED_TRAITS@@PEBUFEATURE_ERROR@@HPEBW4wil_ReportingKind@@PEBW4wil_VariantReportingKind@@E_K@Z @ 0x18006DE30 (-FeatureLoggingHook@details@wil@@YAXIPEBUFEATURE_LOGGED_TRAITS@@PEBUFEATURE_ERROR@@HPEBW4wil_Rep.c)
 * Callees:
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x1800529B8 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x18006A480 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<2>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<2>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
        int a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        const CHAR **a10,
        __int64 a11,
        const CHAR **a12,
        const CHAR **a13,
        const CHAR **a14,
        __int64 a15,
        const CHAR **a16,
        const CHAR **a17,
        const CHAR **a18,
        const CHAR **a19,
        __int64 a20,
        const CHAR **a21,
        __int64 a22)
{
  __int64 v23; // rdx
  const CHAR *v24; // r8
  __int64 v25; // rax
  int v26; // eax
  const CHAR *v27; // r8
  __int64 v28; // rax
  int v29; // eax
  const CHAR *v30; // r8
  __int64 v31; // rax
  int v32; // eax
  const CHAR *v33; // r8
  __int64 v34; // rax
  int v35; // eax
  const CHAR *v36; // r8
  __int64 v37; // rax
  int v38; // eax
  const CHAR *v39; // r8
  __int64 v40; // rax
  int v41; // eax
  const CHAR *v42; // r8
  __int64 v43; // rax
  int v44; // eax
  const CHAR *v45; // r8
  __int64 v46; // rax
  int v47; // eax
  const CHAR *v48; // r8
  int v49; // edx
  _BYTE v51[32]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v52; // [rsp+50h] [rbp-B0h]
  __int64 v53; // [rsp+58h] [rbp-A8h]
  __int64 v54; // [rsp+60h] [rbp-A0h]
  __int64 v55; // [rsp+68h] [rbp-98h]
  __int64 v56; // [rsp+70h] [rbp-90h]
  __int64 v57; // [rsp+78h] [rbp-88h]
  __int64 v58; // [rsp+80h] [rbp-80h]
  __int64 v59; // [rsp+88h] [rbp-78h]
  __int64 v60; // [rsp+90h] [rbp-70h]
  __int64 v61; // [rsp+98h] [rbp-68h]
  const CHAR *v62; // [rsp+A0h] [rbp-60h]
  int v63; // [rsp+A8h] [rbp-58h]
  int v64; // [rsp+ACh] [rbp-54h]
  __int64 v65; // [rsp+B0h] [rbp-50h]
  __int64 v66; // [rsp+B8h] [rbp-48h]
  const CHAR *v67; // [rsp+C0h] [rbp-40h]
  int v68; // [rsp+C8h] [rbp-38h]
  int v69; // [rsp+CCh] [rbp-34h]
  const CHAR *v70; // [rsp+D0h] [rbp-30h]
  int v71; // [rsp+D8h] [rbp-28h]
  int v72; // [rsp+DCh] [rbp-24h]
  const CHAR *v73; // [rsp+E0h] [rbp-20h]
  int v74; // [rsp+E8h] [rbp-18h]
  int v75; // [rsp+ECh] [rbp-14h]
  __int64 v76; // [rsp+F0h] [rbp-10h]
  __int64 v77; // [rsp+F8h] [rbp-8h]
  const CHAR *v78; // [rsp+100h] [rbp+0h]
  int v79; // [rsp+108h] [rbp+8h]
  int v80; // [rsp+10Ch] [rbp+Ch]
  const CHAR *v81; // [rsp+110h] [rbp+10h]
  int v82; // [rsp+118h] [rbp+18h]
  int v83; // [rsp+11Ch] [rbp+1Ch]
  const CHAR *v84; // [rsp+120h] [rbp+20h]
  int v85; // [rsp+128h] [rbp+28h]
  int v86; // [rsp+12Ch] [rbp+2Ch]
  const CHAR *v87; // [rsp+130h] [rbp+30h]
  int v88; // [rsp+138h] [rbp+38h]
  int v89; // [rsp+13Ch] [rbp+3Ch]
  __int64 v90; // [rsp+140h] [rbp+40h]
  __int64 v91; // [rsp+148h] [rbp+48h]
  const CHAR *v92; // [rsp+150h] [rbp+50h]
  int v93; // [rsp+158h] [rbp+58h]
  int v94; // [rsp+15Ch] [rbp+5Ch]
  __int64 v95; // [rsp+160h] [rbp+60h]
  __int64 v96; // [rsp+168h] [rbp+68h]

  v95 = a22;
  v23 = -1LL;
  v96 = 4LL;
  v24 = *a21;
  if ( *a21 )
  {
    v25 = -1LL;
    do
      ++v25;
    while ( v24[v25] );
    v26 = v25 + 1;
  }
  else
  {
    v24 = MultiByteStr;
    v26 = 1;
  }
  v93 = v26;
  v90 = a20;
  v92 = v24;
  v94 = 0;
  v91 = 4LL;
  v27 = *a19;
  if ( *a19 )
  {
    v28 = -1LL;
    do
      ++v28;
    while ( v27[v28] );
    v29 = v28 + 1;
  }
  else
  {
    v27 = MultiByteStr;
    v29 = 1;
  }
  v88 = v29;
  v87 = v27;
  v89 = 0;
  v30 = *a18;
  if ( *a18 )
  {
    v31 = -1LL;
    do
      ++v31;
    while ( v30[v31] );
    v32 = v31 + 1;
  }
  else
  {
    v30 = MultiByteStr;
    v32 = 1;
  }
  v85 = v32;
  v84 = v30;
  v86 = 0;
  v33 = *a17;
  if ( *a17 )
  {
    v34 = -1LL;
    do
      ++v34;
    while ( v33[v34] );
    v35 = v34 + 1;
  }
  else
  {
    v33 = MultiByteStr;
    v35 = 1;
  }
  v82 = v35;
  v81 = v33;
  v83 = 0;
  v36 = *a16;
  if ( *a16 )
  {
    v37 = -1LL;
    do
      ++v37;
    while ( v36[v37] );
    v38 = v37 + 1;
  }
  else
  {
    v36 = MultiByteStr;
    v38 = 1;
  }
  v79 = v38;
  v76 = a15;
  v78 = v36;
  v80 = 0;
  v77 = 2LL;
  v39 = *a14;
  if ( *a14 )
  {
    v40 = -1LL;
    do
      ++v40;
    while ( v39[v40] );
    v41 = v40 + 1;
  }
  else
  {
    v39 = MultiByteStr;
    v41 = 1;
  }
  v74 = v41;
  v73 = v39;
  v75 = 0;
  v42 = *a13;
  if ( *a13 )
  {
    v43 = -1LL;
    do
      ++v43;
    while ( v42[v43] );
    v44 = v43 + 1;
  }
  else
  {
    v42 = MultiByteStr;
    v44 = 1;
  }
  v71 = v44;
  v70 = v42;
  v72 = 0;
  v45 = *a12;
  if ( *a12 )
  {
    v46 = -1LL;
    do
      ++v46;
    while ( v45[v46] );
    v47 = v46 + 1;
  }
  else
  {
    v45 = MultiByteStr;
    v47 = 1;
  }
  v68 = v47;
  v65 = a11;
  v67 = v45;
  v69 = 0;
  v66 = 2LL;
  v48 = *a10;
  if ( *a10 )
  {
    do
      ++v23;
    while ( v48[v23] );
    v49 = v23 + 1;
  }
  else
  {
    v48 = MultiByteStr;
    v49 = 1;
  }
  v60 = a9;
  v58 = a8;
  v56 = a7;
  v54 = a6;
  v52 = a5;
  v62 = v48;
  v63 = v49;
  v64 = 0;
  v61 = 4LL;
  v59 = 2LL;
  v57 = 4LL;
  v55 = 4LL;
  v53 = 4LL;
  return tlgWriteTransfer_EtwEventWriteTransfer(a1, a2, 0, 0, 20, (__int64)v51);
}
