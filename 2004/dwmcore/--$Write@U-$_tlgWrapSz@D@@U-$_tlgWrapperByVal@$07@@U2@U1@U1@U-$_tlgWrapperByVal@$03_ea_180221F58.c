/*
 * XREFs of ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$07@@U2@U1@U1@U?$_tlgWrapperByVal@$03@@U2@U3@U3@U3@U3@U1@U?$_tlgWrapperByVal@$00@@U1@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$07@@433AEBU?$_tlgWrapperByVal@$03@@455553AEBU?$_tlgWrapperByVal@$00@@3333333@Z @ 0x180221F58
 * Callers:
 *     ?TemporaryInteractionConfigurationUpdate@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager@@@Z @ 0x1802264C0 (-TemporaryInteractionConfigurationUpdate@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionU.c)
 * Callees:
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1801506E8 (_tlgWriteTransfer_EventWriteTransfer.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<1>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        const unsigned __int16 **a5,
        __int64 a6,
        __int64 a7,
        const unsigned __int16 **a8,
        const unsigned __int16 **a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        const unsigned __int16 **a16,
        __int64 a17,
        const unsigned __int16 **a18,
        const unsigned __int16 **a19,
        const unsigned __int16 **a20,
        const unsigned __int16 **a21,
        const unsigned __int16 **a22,
        const unsigned __int16 **a23,
        const unsigned __int16 **a24)
{
  __int64 v25; // rdx
  const unsigned __int16 *v26; // r8
  __int64 v27; // rax
  int v28; // eax
  const unsigned __int16 *v29; // r8
  __int64 v30; // rax
  int v31; // eax
  const unsigned __int16 *v32; // r8
  __int64 v33; // rax
  int v34; // eax
  const unsigned __int16 *v35; // r8
  __int64 v36; // rax
  int v37; // eax
  const unsigned __int16 *v38; // r8
  __int64 v39; // rax
  int v40; // eax
  const unsigned __int16 *v41; // r8
  __int64 v42; // rax
  int v43; // eax
  const unsigned __int16 *v44; // r8
  __int64 v45; // rax
  int v46; // eax
  const unsigned __int16 *v47; // r8
  __int64 v48; // rax
  int v49; // eax
  const unsigned __int16 *v50; // r8
  __int64 v51; // rax
  int v52; // eax
  const unsigned __int16 *v53; // r8
  __int64 v54; // rax
  int v55; // eax
  const unsigned __int16 *v56; // r8
  int v57; // edx
  struct _EVENT_DATA_DESCRIPTOR v59; // [rsp+30h] [rbp-D0h] BYREF
  const unsigned __int16 *v60; // [rsp+50h] [rbp-B0h]
  int v61; // [rsp+58h] [rbp-A8h]
  int v62; // [rsp+5Ch] [rbp-A4h]
  __int64 v63; // [rsp+60h] [rbp-A0h]
  __int64 v64; // [rsp+68h] [rbp-98h]
  __int64 v65; // [rsp+70h] [rbp-90h]
  __int64 v66; // [rsp+78h] [rbp-88h]
  const unsigned __int16 *v67; // [rsp+80h] [rbp-80h]
  int v68; // [rsp+88h] [rbp-78h]
  int v69; // [rsp+8Ch] [rbp-74h]
  const unsigned __int16 *v70; // [rsp+90h] [rbp-70h]
  int v71; // [rsp+98h] [rbp-68h]
  int v72; // [rsp+9Ch] [rbp-64h]
  __int64 v73; // [rsp+A0h] [rbp-60h]
  __int64 v74; // [rsp+A8h] [rbp-58h]
  __int64 v75; // [rsp+B0h] [rbp-50h]
  __int64 v76; // [rsp+B8h] [rbp-48h]
  __int64 v77; // [rsp+C0h] [rbp-40h]
  __int64 v78; // [rsp+C8h] [rbp-38h]
  __int64 v79; // [rsp+D0h] [rbp-30h]
  __int64 v80; // [rsp+D8h] [rbp-28h]
  __int64 v81; // [rsp+E0h] [rbp-20h]
  __int64 v82; // [rsp+E8h] [rbp-18h]
  __int64 v83; // [rsp+F0h] [rbp-10h]
  __int64 v84; // [rsp+F8h] [rbp-8h]
  const unsigned __int16 *v85; // [rsp+100h] [rbp+0h]
  int v86; // [rsp+108h] [rbp+8h]
  int v87; // [rsp+10Ch] [rbp+Ch]
  __int64 v88; // [rsp+110h] [rbp+10h]
  __int64 v89; // [rsp+118h] [rbp+18h]
  const unsigned __int16 *v90; // [rsp+120h] [rbp+20h]
  int v91; // [rsp+128h] [rbp+28h]
  int v92; // [rsp+12Ch] [rbp+2Ch]
  const unsigned __int16 *v93; // [rsp+130h] [rbp+30h]
  int v94; // [rsp+138h] [rbp+38h]
  int v95; // [rsp+13Ch] [rbp+3Ch]
  const unsigned __int16 *v96; // [rsp+140h] [rbp+40h]
  int v97; // [rsp+148h] [rbp+48h]
  int v98; // [rsp+14Ch] [rbp+4Ch]
  const unsigned __int16 *v99; // [rsp+150h] [rbp+50h]
  int v100; // [rsp+158h] [rbp+58h]
  int v101; // [rsp+15Ch] [rbp+5Ch]
  const unsigned __int16 *v102; // [rsp+160h] [rbp+60h]
  int v103; // [rsp+168h] [rbp+68h]
  int v104; // [rsp+16Ch] [rbp+6Ch]
  const unsigned __int16 *v105; // [rsp+170h] [rbp+70h]
  int v106; // [rsp+178h] [rbp+78h]
  int v107; // [rsp+17Ch] [rbp+7Ch]
  const unsigned __int16 *v108; // [rsp+180h] [rbp+80h]
  int v109; // [rsp+188h] [rbp+88h]
  int v110; // [rsp+18Ch] [rbp+8Ch]

  v25 = -1LL;
  v26 = *a24;
  if ( *a24 )
  {
    v27 = -1LL;
    do
      ++v27;
    while ( *((_BYTE *)v26 + v27) );
    v28 = v27 + 1;
  }
  else
  {
    v26 = &word_1802CD8A6;
    v28 = 1;
  }
  v109 = v28;
  v108 = v26;
  v110 = 0;
  v29 = *a23;
  if ( *a23 )
  {
    v30 = -1LL;
    do
      ++v30;
    while ( *((_BYTE *)v29 + v30) );
    v31 = v30 + 1;
  }
  else
  {
    v29 = &word_1802CD8A6;
    v31 = 1;
  }
  v106 = v31;
  v105 = v29;
  v107 = 0;
  v32 = *a22;
  if ( *a22 )
  {
    v33 = -1LL;
    do
      ++v33;
    while ( *((_BYTE *)v32 + v33) );
    v34 = v33 + 1;
  }
  else
  {
    v32 = &word_1802CD8A6;
    v34 = 1;
  }
  v103 = v34;
  v102 = v32;
  v104 = 0;
  v35 = *a21;
  if ( *a21 )
  {
    v36 = -1LL;
    do
      ++v36;
    while ( *((_BYTE *)v35 + v36) );
    v37 = v36 + 1;
  }
  else
  {
    v35 = &word_1802CD8A6;
    v37 = 1;
  }
  v100 = v37;
  v99 = v35;
  v101 = 0;
  v38 = *a20;
  if ( *a20 )
  {
    v39 = -1LL;
    do
      ++v39;
    while ( *((_BYTE *)v38 + v39) );
    v40 = v39 + 1;
  }
  else
  {
    v38 = &word_1802CD8A6;
    v40 = 1;
  }
  v97 = v40;
  v96 = v38;
  v98 = 0;
  v41 = *a19;
  if ( *a19 )
  {
    v42 = -1LL;
    do
      ++v42;
    while ( *((_BYTE *)v41 + v42) );
    v43 = v42 + 1;
  }
  else
  {
    v41 = &word_1802CD8A6;
    v43 = 1;
  }
  v94 = v43;
  v93 = v41;
  v95 = 0;
  v44 = *a18;
  if ( *a18 )
  {
    v45 = -1LL;
    do
      ++v45;
    while ( *((_BYTE *)v44 + v45) );
    v46 = v45 + 1;
  }
  else
  {
    v44 = &word_1802CD8A6;
    v46 = 1;
  }
  v91 = v46;
  v88 = a17;
  v90 = v44;
  v92 = 0;
  v89 = 1LL;
  v47 = *a16;
  if ( *a16 )
  {
    v48 = -1LL;
    do
      ++v48;
    while ( *((_BYTE *)v47 + v48) );
    v49 = v48 + 1;
  }
  else
  {
    v47 = &word_1802CD8A6;
    v49 = 1;
  }
  v86 = v49;
  v83 = a15;
  v81 = a14;
  v79 = a13;
  v77 = a12;
  v75 = a11;
  v73 = a10;
  v85 = v47;
  v87 = 0;
  v84 = 4LL;
  v50 = *a9;
  v82 = 4LL;
  v80 = 4LL;
  v78 = 4LL;
  v76 = 8LL;
  v74 = 4LL;
  if ( v50 )
  {
    v51 = -1LL;
    do
      ++v51;
    while ( *((_BYTE *)v50 + v51) );
    v52 = v51 + 1;
  }
  else
  {
    v50 = &word_1802CD8A6;
    v52 = 1;
  }
  v71 = v52;
  v70 = v50;
  v72 = 0;
  v53 = *a8;
  if ( *a8 )
  {
    v54 = -1LL;
    do
      ++v54;
    while ( *((_BYTE *)v53 + v54) );
    v55 = v54 + 1;
  }
  else
  {
    v53 = &word_1802CD8A6;
    v55 = 1;
  }
  v68 = v55;
  v65 = a7;
  v63 = a6;
  v67 = v53;
  v69 = 0;
  v66 = 8LL;
  v56 = *a5;
  v64 = 8LL;
  if ( v56 )
  {
    do
      ++v25;
    while ( *((_BYTE *)v56 + v25) );
    v57 = v25 + 1;
  }
  else
  {
    v56 = &word_1802CD8A6;
    v57 = 1;
  }
  v60 = v56;
  v61 = v57;
  v62 = 0;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, 0LL, 0LL, 0x16u, &v59);
}
