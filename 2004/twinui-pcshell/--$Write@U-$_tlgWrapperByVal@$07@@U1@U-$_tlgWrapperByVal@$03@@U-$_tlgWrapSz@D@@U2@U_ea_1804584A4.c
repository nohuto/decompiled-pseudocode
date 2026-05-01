/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U4@U?$_tlgWrapperByVal@$00@@U5@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@454564566AEBU?$_tlgWrapperByVal@$00@@7@Z @ 0x1804584A4
 * Callers:
 *     ?Stop@UpdateAppView@AppUsageTelemetry@@QEAAXPEBG_N1@Z @ 0x18045A218 (-Stop@UpdateAppView@AppUsageTelemetry@@QEAAXPEBG_N1@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18001D4A4 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
        __int64 a1,
        unsigned __int8 *a2,
        const GUID *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        const wchar_t **a8,
        __int64 a9,
        const wchar_t **a10,
        __int64 a11,
        const WCHAR **a12,
        __int64 a13,
        const wchar_t **a14,
        __int64 a15,
        const wchar_t **a16,
        const WCHAR **a17,
        __int64 a18,
        const wchar_t **a19,
        const WCHAR **a20,
        const WCHAR **a21,
        __int64 a22,
        __int64 a23)
{
  int v25; // r9d
  __int64 v26; // rcx
  const WCHAR *v28; // rdx
  __int64 v29; // rax
  int v30; // r8d
  const WCHAR *v31; // rdx
  __int64 v32; // rax
  int v33; // r8d
  const wchar_t *v34; // rdx
  __int64 v35; // rax
  int v36; // eax
  const WCHAR *v37; // rdx
  __int64 v38; // rax
  int v39; // r8d
  const wchar_t *v40; // rdx
  __int64 v41; // rax
  int v42; // eax
  const wchar_t *v43; // rdx
  __int64 v44; // rax
  int v45; // eax
  const WCHAR *v46; // rdx
  __int64 v47; // rax
  const wchar_t *v48; // rdx
  __int64 v49; // rax
  int v50; // eax
  const wchar_t *v51; // rdx
  int v52; // ecx
  struct _EVENT_DATA_DESCRIPTOR v54; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v55; // [rsp+50h] [rbp-B0h]
  __int64 v56; // [rsp+58h] [rbp-A8h]
  __int64 v57; // [rsp+60h] [rbp-A0h]
  __int64 v58; // [rsp+68h] [rbp-98h]
  __int64 v59; // [rsp+70h] [rbp-90h]
  __int64 v60; // [rsp+78h] [rbp-88h]
  const wchar_t *v61; // [rsp+80h] [rbp-80h]
  int v62; // [rsp+88h] [rbp-78h]
  int v63; // [rsp+8Ch] [rbp-74h]
  __int64 v64; // [rsp+90h] [rbp-70h]
  __int64 v65; // [rsp+98h] [rbp-68h]
  const wchar_t *v66; // [rsp+A0h] [rbp-60h]
  int v67; // [rsp+A8h] [rbp-58h]
  int v68; // [rsp+ACh] [rbp-54h]
  __int64 v69; // [rsp+B0h] [rbp-50h]
  __int64 v70; // [rsp+B8h] [rbp-48h]
  const WCHAR *v71; // [rsp+C0h] [rbp-40h]
  int v72; // [rsp+C8h] [rbp-38h]
  int v73; // [rsp+CCh] [rbp-34h]
  __int64 v74; // [rsp+D0h] [rbp-30h]
  __int64 v75; // [rsp+D8h] [rbp-28h]
  const wchar_t *v76; // [rsp+E0h] [rbp-20h]
  int v77; // [rsp+E8h] [rbp-18h]
  int v78; // [rsp+ECh] [rbp-14h]
  __int64 v79; // [rsp+F0h] [rbp-10h]
  __int64 v80; // [rsp+F8h] [rbp-8h]
  const wchar_t *v81; // [rsp+100h] [rbp+0h]
  int v82; // [rsp+108h] [rbp+8h]
  int v83; // [rsp+10Ch] [rbp+Ch]
  const WCHAR *v84; // [rsp+110h] [rbp+10h]
  int v85; // [rsp+118h] [rbp+18h]
  int v86; // [rsp+11Ch] [rbp+1Ch]
  __int64 v87; // [rsp+120h] [rbp+20h]
  __int64 v88; // [rsp+128h] [rbp+28h]
  const wchar_t *v89; // [rsp+130h] [rbp+30h]
  int v90; // [rsp+138h] [rbp+38h]
  int v91; // [rsp+13Ch] [rbp+3Ch]
  const WCHAR *v92; // [rsp+140h] [rbp+40h]
  int v93; // [rsp+148h] [rbp+48h]
  int v94; // [rsp+14Ch] [rbp+4Ch]
  const WCHAR *v95; // [rsp+150h] [rbp+50h]
  int v96; // [rsp+158h] [rbp+58h]
  int v97; // [rsp+15Ch] [rbp+5Ch]
  __int64 v98; // [rsp+160h] [rbp+60h]
  __int64 v99; // [rsp+168h] [rbp+68h]
  __int64 v100; // [rsp+170h] [rbp+70h]
  __int64 v101; // [rsp+178h] [rbp+78h]

  v100 = a23;
  v98 = a22;
  v25 = 2;
  v26 = -1LL;
  v101 = 1LL;
  v99 = 1LL;
  v28 = *a21;
  if ( *a21 )
  {
    v29 = -1LL;
    do
      ++v29;
    while ( v28[v29] );
    v30 = 2 * v29 + 2;
  }
  else
  {
    v28 = &szAgent;
    v30 = 2;
  }
  v95 = v28;
  v96 = v30;
  v97 = 0;
  v31 = *a20;
  if ( *a20 )
  {
    v32 = -1LL;
    do
      ++v32;
    while ( v31[v32] );
    v33 = 2 * v32 + 2;
  }
  else
  {
    v31 = &szAgent;
    v33 = 2;
  }
  v92 = v31;
  v93 = v33;
  v94 = 0;
  v34 = *a19;
  if ( *a19 )
  {
    v35 = -1LL;
    do
      ++v35;
    while ( *((_BYTE *)v34 + v35) );
    v36 = v35 + 1;
  }
  else
  {
    v34 = &`DesktopSingleViewShellExperiencePersonality::GetTypeId'::`2'::unique;
    v36 = 1;
  }
  v90 = v36;
  v87 = a18;
  v89 = v34;
  v91 = 0;
  v88 = 4LL;
  v37 = *a17;
  if ( *a17 )
  {
    v38 = -1LL;
    do
      ++v38;
    while ( v37[v38] );
    v39 = 2 * v38 + 2;
  }
  else
  {
    v37 = &szAgent;
    v39 = 2;
  }
  v84 = v37;
  v85 = v39;
  v86 = 0;
  v40 = *a16;
  if ( *a16 )
  {
    v41 = -1LL;
    do
      ++v41;
    while ( *((_BYTE *)v40 + v41) );
    v42 = v41 + 1;
  }
  else
  {
    v40 = &`DesktopSingleViewShellExperiencePersonality::GetTypeId'::`2'::unique;
    v42 = 1;
  }
  v82 = v42;
  v79 = a15;
  v81 = v40;
  v83 = 0;
  v80 = 4LL;
  v43 = *a14;
  if ( *a14 )
  {
    v44 = -1LL;
    do
      ++v44;
    while ( *((_BYTE *)v43 + v44) );
    v45 = v44 + 1;
  }
  else
  {
    v43 = &`DesktopSingleViewShellExperiencePersonality::GetTypeId'::`2'::unique;
    v45 = 1;
  }
  v77 = v45;
  v74 = a13;
  v76 = v43;
  v78 = 0;
  v75 = 4LL;
  v46 = *a12;
  if ( *a12 )
  {
    v47 = -1LL;
    do
      ++v47;
    while ( v46[v47] );
    v25 = 2 * v47 + 2;
  }
  else
  {
    v46 = &szAgent;
  }
  v69 = a11;
  v71 = v46;
  v72 = v25;
  v73 = 0;
  v48 = *a10;
  v70 = 4LL;
  if ( v48 )
  {
    v49 = -1LL;
    do
      ++v49;
    while ( *((_BYTE *)v48 + v49) );
    v50 = v49 + 1;
  }
  else
  {
    v48 = &`DesktopSingleViewShellExperiencePersonality::GetTypeId'::`2'::unique;
    v50 = 1;
  }
  v67 = v50;
  v64 = a9;
  v66 = v48;
  v68 = 0;
  v65 = 4LL;
  v51 = *a8;
  if ( *a8 )
  {
    do
      ++v26;
    while ( *((_BYTE *)v51 + v26) );
    v52 = v26 + 1;
  }
  else
  {
    v51 = &`DesktopSingleViewShellExperiencePersonality::GetTypeId'::`2'::unique;
    v52 = 1;
  }
  v59 = a7;
  v57 = a6;
  v55 = a5;
  v61 = v51;
  v62 = v52;
  v63 = 0;
  v60 = 4LL;
  v58 = 8LL;
  v56 = 8LL;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, a3, 0LL, 0x15u, &v54);
}
