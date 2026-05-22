/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@_W@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@U4@U?$_tlgWrapperByVal@$00@@U5@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@_W@@454564564456AEBU?$_tlgWrapperByVal@$00@@74@Z @ 0x1800CD3E4
 * Callers:
 *     ?Stop@OnHolographicDisplayChanged@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXJPEB_W_N1@Z @ 0x1800D2C08 (-Stop@OnHolographicDisplayChanged@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXJPEB_W.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800350B8 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18003C220 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>>(
        __int64 a1,
        unsigned __int8 *a2,
        const GUID *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        const unsigned __int16 **a8,
        __int64 a9,
        const unsigned __int16 **a10,
        __int64 a11,
        const wchar_t **a12,
        __int64 a13,
        const unsigned __int16 **a14,
        __int64 a15,
        const unsigned __int16 **a16,
        const wchar_t **a17,
        __int64 a18,
        const unsigned __int16 **a19,
        const wchar_t **a20,
        __int64 a21,
        __int64 a22,
        const unsigned __int16 **a23,
        const wchar_t **a24,
        __int64 a25,
        __int64 a26,
        __int64 a27)
{
  __int64 v29; // rcx
  int v30; // r9d
  const wchar_t *v32; // rdx
  __int64 v33; // rax
  int v34; // r8d
  const unsigned __int16 *v35; // rdx
  __int64 v36; // rax
  int v37; // eax
  const wchar_t *v38; // rdx
  __int64 v39; // rax
  int v40; // r8d
  const unsigned __int16 *v41; // rdx
  __int64 v42; // rax
  int v43; // eax
  const wchar_t *v44; // rdx
  __int64 v45; // rax
  int v46; // r8d
  const unsigned __int16 *v47; // rdx
  __int64 v48; // rax
  int v49; // eax
  const unsigned __int16 *v50; // rdx
  __int64 v51; // rax
  int v52; // eax
  const wchar_t *v53; // rdx
  __int64 v54; // rax
  const unsigned __int16 *v55; // rdx
  __int64 v56; // rax
  int v57; // eax
  const unsigned __int16 *v58; // rdx
  int v59; // ecx
  struct _EVENT_DATA_DESCRIPTOR v61; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v62; // [rsp+50h] [rbp-B0h]
  __int64 v63; // [rsp+58h] [rbp-A8h]
  __int64 v64; // [rsp+60h] [rbp-A0h]
  __int64 v65; // [rsp+68h] [rbp-98h]
  __int64 v66; // [rsp+70h] [rbp-90h]
  __int64 v67; // [rsp+78h] [rbp-88h]
  const unsigned __int16 *v68; // [rsp+80h] [rbp-80h]
  int v69; // [rsp+88h] [rbp-78h]
  int v70; // [rsp+8Ch] [rbp-74h]
  __int64 v71; // [rsp+90h] [rbp-70h]
  __int64 v72; // [rsp+98h] [rbp-68h]
  const unsigned __int16 *v73; // [rsp+A0h] [rbp-60h]
  int v74; // [rsp+A8h] [rbp-58h]
  int v75; // [rsp+ACh] [rbp-54h]
  __int64 v76; // [rsp+B0h] [rbp-50h]
  __int64 v77; // [rsp+B8h] [rbp-48h]
  const wchar_t *v78; // [rsp+C0h] [rbp-40h]
  int v79; // [rsp+C8h] [rbp-38h]
  int v80; // [rsp+CCh] [rbp-34h]
  __int64 v81; // [rsp+D0h] [rbp-30h]
  __int64 v82; // [rsp+D8h] [rbp-28h]
  const unsigned __int16 *v83; // [rsp+E0h] [rbp-20h]
  int v84; // [rsp+E8h] [rbp-18h]
  int v85; // [rsp+ECh] [rbp-14h]
  __int64 v86; // [rsp+F0h] [rbp-10h]
  __int64 v87; // [rsp+F8h] [rbp-8h]
  const unsigned __int16 *v88; // [rsp+100h] [rbp+0h]
  int v89; // [rsp+108h] [rbp+8h]
  int v90; // [rsp+10Ch] [rbp+Ch]
  const wchar_t *v91; // [rsp+110h] [rbp+10h]
  int v92; // [rsp+118h] [rbp+18h]
  int v93; // [rsp+11Ch] [rbp+1Ch]
  __int64 v94; // [rsp+120h] [rbp+20h]
  __int64 v95; // [rsp+128h] [rbp+28h]
  const unsigned __int16 *v96; // [rsp+130h] [rbp+30h]
  int v97; // [rsp+138h] [rbp+38h]
  int v98; // [rsp+13Ch] [rbp+3Ch]
  const wchar_t *v99; // [rsp+140h] [rbp+40h]
  int v100; // [rsp+148h] [rbp+48h]
  int v101; // [rsp+14Ch] [rbp+4Ch]
  __int64 v102; // [rsp+150h] [rbp+50h]
  __int64 v103; // [rsp+158h] [rbp+58h]
  __int64 v104; // [rsp+160h] [rbp+60h]
  __int64 v105; // [rsp+168h] [rbp+68h]
  const unsigned __int16 *v106; // [rsp+170h] [rbp+70h]
  int v107; // [rsp+178h] [rbp+78h]
  int v108; // [rsp+17Ch] [rbp+7Ch]
  const wchar_t *v109; // [rsp+180h] [rbp+80h]
  int v110; // [rsp+188h] [rbp+88h]
  int v111; // [rsp+18Ch] [rbp+8Ch]
  __int64 v112; // [rsp+190h] [rbp+90h]
  __int64 v113; // [rsp+198h] [rbp+98h]
  __int64 v114; // [rsp+1A0h] [rbp+A0h]
  __int64 v115; // [rsp+1A8h] [rbp+A8h]
  __int64 v116; // [rsp+1B0h] [rbp+B0h]
  __int64 v117; // [rsp+1B8h] [rbp+B8h]

  v116 = a27;
  v114 = a26;
  v29 = -1LL;
  v112 = a25;
  v30 = 2;
  v117 = 4LL;
  v115 = 1LL;
  v113 = 1LL;
  v32 = *a24;
  if ( *a24 )
  {
    v33 = -1LL;
    do
      ++v33;
    while ( v32[v33] );
    v34 = 2 * v33 + 2;
  }
  else
  {
    v32 = &word_1801C2344;
    v34 = 2;
  }
  v109 = v32;
  v110 = v34;
  v111 = 0;
  v35 = *a23;
  if ( *a23 )
  {
    v36 = -1LL;
    do
      ++v36;
    while ( *((_BYTE *)v35 + v36) );
    v37 = v36 + 1;
  }
  else
  {
    v35 = &word_1801C2340;
    v37 = 1;
  }
  v107 = v37;
  v104 = a22;
  v102 = a21;
  v106 = v35;
  v108 = 0;
  v105 = 4LL;
  v38 = *a20;
  v103 = 4LL;
  if ( v38 )
  {
    v39 = -1LL;
    do
      ++v39;
    while ( v38[v39] );
    v40 = 2 * v39 + 2;
  }
  else
  {
    v38 = &word_1801C2344;
    v40 = 2;
  }
  v99 = v38;
  v100 = v40;
  v101 = 0;
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
    v41 = &word_1801C2340;
    v43 = 1;
  }
  v97 = v43;
  v94 = a18;
  v96 = v41;
  v98 = 0;
  v95 = 4LL;
  v44 = *a17;
  if ( *a17 )
  {
    v45 = -1LL;
    do
      ++v45;
    while ( v44[v45] );
    v46 = 2 * v45 + 2;
  }
  else
  {
    v44 = &word_1801C2344;
    v46 = 2;
  }
  v91 = v44;
  v92 = v46;
  v93 = 0;
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
    v47 = &word_1801C2340;
    v49 = 1;
  }
  v89 = v49;
  v86 = a15;
  v88 = v47;
  v90 = 0;
  v87 = 4LL;
  v50 = *a14;
  if ( *a14 )
  {
    v51 = -1LL;
    do
      ++v51;
    while ( *((_BYTE *)v50 + v51) );
    v52 = v51 + 1;
  }
  else
  {
    v50 = &word_1801C2340;
    v52 = 1;
  }
  v84 = v52;
  v81 = a13;
  v83 = v50;
  v85 = 0;
  v82 = 4LL;
  v53 = *a12;
  if ( *a12 )
  {
    v54 = -1LL;
    do
      ++v54;
    while ( v53[v54] );
    v30 = 2 * v54 + 2;
  }
  else
  {
    v53 = &word_1801C2344;
  }
  v76 = a11;
  v78 = v53;
  v79 = v30;
  v80 = 0;
  v55 = *a10;
  v77 = 4LL;
  if ( v55 )
  {
    v56 = -1LL;
    do
      ++v56;
    while ( *((_BYTE *)v55 + v56) );
    v57 = v56 + 1;
  }
  else
  {
    v55 = &word_1801C2340;
    v57 = 1;
  }
  v74 = v57;
  v71 = a9;
  v73 = v55;
  v75 = 0;
  v72 = 4LL;
  v58 = *a8;
  if ( *a8 )
  {
    do
      ++v29;
    while ( *((_BYTE *)v58 + v29) );
    v59 = v29 + 1;
  }
  else
  {
    v58 = &word_1801C2340;
    v59 = 1;
  }
  v66 = a7;
  v64 = a6;
  v62 = a5;
  v68 = v58;
  v69 = v59;
  v70 = 0;
  v67 = 4LL;
  v65 = 8LL;
  v63 = 8LL;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, a3, 0LL, 0x19u, &v61);
}
