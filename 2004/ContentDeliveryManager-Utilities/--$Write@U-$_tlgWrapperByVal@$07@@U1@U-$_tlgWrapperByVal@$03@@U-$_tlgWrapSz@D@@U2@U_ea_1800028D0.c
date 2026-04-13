/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@454564565@Z @ 0x1800028D0
 * Callers:
 *     ?Stop@HandleResumableTaskNotificationActivity@MobilityExperienceTelemetry@Telemetry@MobilityExperience@@QEAAXPEBD@Z @ 0x18004AF68 (-Stop@HandleResumableTaskNotificationActivity@MobilityExperienceTelemetry@Telemetry@MobilityExpe.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800011F0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800CD6D0 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapSz<char>>(
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
        const WCHAR **a12,
        __int64 a13,
        const unsigned __int16 **a14,
        __int64 a15,
        const unsigned __int16 **a16,
        const WCHAR **a17,
        __int64 a18,
        const unsigned __int16 **a19,
        const WCHAR **a20,
        const unsigned __int16 **a21)
{
  __int64 v23; // rdx
  const unsigned __int16 *v24; // r8
  __int64 v25; // rax
  int v26; // eax
  int v27; // r10d
  const WCHAR *v28; // r8
  __int64 v29; // rax
  int v30; // r9d
  const unsigned __int16 *v31; // r8
  __int64 v32; // rax
  int v33; // eax
  const WCHAR *v34; // r8
  __int64 v35; // rax
  int v36; // r9d
  const unsigned __int16 *v37; // r8
  __int64 v38; // rax
  int v39; // eax
  const unsigned __int16 *v40; // r8
  __int64 v41; // rax
  int v42; // eax
  const WCHAR *v43; // r8
  __int64 v44; // rax
  const unsigned __int16 *v45; // r8
  __int64 v46; // rax
  int v47; // eax
  const unsigned __int16 *v48; // r8
  int v49; // edx
  struct _EVENT_DATA_DESCRIPTOR v51; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v52; // [rsp+50h] [rbp-B0h]
  __int64 v53; // [rsp+58h] [rbp-A8h]
  __int64 v54; // [rsp+60h] [rbp-A0h]
  __int64 v55; // [rsp+68h] [rbp-98h]
  __int64 v56; // [rsp+70h] [rbp-90h]
  __int64 v57; // [rsp+78h] [rbp-88h]
  const unsigned __int16 *v58; // [rsp+80h] [rbp-80h]
  int v59; // [rsp+88h] [rbp-78h]
  int v60; // [rsp+8Ch] [rbp-74h]
  __int64 v61; // [rsp+90h] [rbp-70h]
  __int64 v62; // [rsp+98h] [rbp-68h]
  const unsigned __int16 *v63; // [rsp+A0h] [rbp-60h]
  int v64; // [rsp+A8h] [rbp-58h]
  int v65; // [rsp+ACh] [rbp-54h]
  __int64 v66; // [rsp+B0h] [rbp-50h]
  __int64 v67; // [rsp+B8h] [rbp-48h]
  const WCHAR *v68; // [rsp+C0h] [rbp-40h]
  int v69; // [rsp+C8h] [rbp-38h]
  int v70; // [rsp+CCh] [rbp-34h]
  __int64 v71; // [rsp+D0h] [rbp-30h]
  __int64 v72; // [rsp+D8h] [rbp-28h]
  const unsigned __int16 *v73; // [rsp+E0h] [rbp-20h]
  int v74; // [rsp+E8h] [rbp-18h]
  int v75; // [rsp+ECh] [rbp-14h]
  __int64 v76; // [rsp+F0h] [rbp-10h]
  __int64 v77; // [rsp+F8h] [rbp-8h]
  const unsigned __int16 *v78; // [rsp+100h] [rbp+0h]
  int v79; // [rsp+108h] [rbp+8h]
  int v80; // [rsp+10Ch] [rbp+Ch]
  const WCHAR *v81; // [rsp+110h] [rbp+10h]
  int v82; // [rsp+118h] [rbp+18h]
  int v83; // [rsp+11Ch] [rbp+1Ch]
  __int64 v84; // [rsp+120h] [rbp+20h]
  __int64 v85; // [rsp+128h] [rbp+28h]
  const unsigned __int16 *v86; // [rsp+130h] [rbp+30h]
  int v87; // [rsp+138h] [rbp+38h]
  int v88; // [rsp+13Ch] [rbp+3Ch]
  const WCHAR *v89; // [rsp+140h] [rbp+40h]
  int v90; // [rsp+148h] [rbp+48h]
  int v91; // [rsp+14Ch] [rbp+4Ch]
  const unsigned __int16 *v92; // [rsp+150h] [rbp+50h]
  int v93; // [rsp+158h] [rbp+58h]
  int v94; // [rsp+15Ch] [rbp+5Ch]

  v23 = -1LL;
  v24 = *a21;
  if ( *a21 )
  {
    v25 = -1LL;
    do
      ++v25;
    while ( *((_BYTE *)v24 + v25) );
    v26 = v25 + 1;
  }
  else
  {
    v24 = &word_180103AD0;
    v26 = 1;
  }
  v93 = v26;
  v27 = 2;
  v92 = v24;
  v94 = 0;
  v28 = *a20;
  if ( *a20 )
  {
    v29 = -1LL;
    do
      ++v29;
    while ( v28[v29] );
    v30 = 2 * v29 + 2;
  }
  else
  {
    v28 = &Src;
    v30 = 2;
  }
  v89 = v28;
  v90 = v30;
  v91 = 0;
  v31 = *a19;
  if ( *a19 )
  {
    v32 = -1LL;
    do
      ++v32;
    while ( *((_BYTE *)v31 + v32) );
    v33 = v32 + 1;
  }
  else
  {
    v31 = &word_180103AD0;
    v33 = 1;
  }
  v87 = v33;
  v84 = a18;
  v86 = v31;
  v88 = 0;
  v85 = 4LL;
  v34 = *a17;
  if ( *a17 )
  {
    v35 = -1LL;
    do
      ++v35;
    while ( v34[v35] );
    v36 = 2 * v35 + 2;
  }
  else
  {
    v34 = &Src;
    v36 = 2;
  }
  v81 = v34;
  v82 = v36;
  v83 = 0;
  v37 = *a16;
  if ( *a16 )
  {
    v38 = -1LL;
    do
      ++v38;
    while ( *((_BYTE *)v37 + v38) );
    v39 = v38 + 1;
  }
  else
  {
    v37 = &word_180103AD0;
    v39 = 1;
  }
  v79 = v39;
  v76 = a15;
  v78 = v37;
  v80 = 0;
  v77 = 4LL;
  v40 = *a14;
  if ( *a14 )
  {
    v41 = -1LL;
    do
      ++v41;
    while ( *((_BYTE *)v40 + v41) );
    v42 = v41 + 1;
  }
  else
  {
    v40 = &word_180103AD0;
    v42 = 1;
  }
  v74 = v42;
  v71 = a13;
  v73 = v40;
  v75 = 0;
  v72 = 4LL;
  v43 = *a12;
  if ( *a12 )
  {
    v44 = -1LL;
    do
      ++v44;
    while ( v43[v44] );
    v27 = 2 * v44 + 2;
  }
  else
  {
    v43 = &Src;
  }
  v66 = a11;
  v68 = v43;
  v69 = v27;
  v70 = 0;
  v45 = *a10;
  v67 = 4LL;
  if ( v45 )
  {
    v46 = -1LL;
    do
      ++v46;
    while ( *((_BYTE *)v45 + v46) );
    v47 = v46 + 1;
  }
  else
  {
    v45 = &word_180103AD0;
    v47 = 1;
  }
  v64 = v47;
  v61 = a9;
  v63 = v45;
  v65 = 0;
  v62 = 4LL;
  v48 = *a8;
  if ( *a8 )
  {
    do
      ++v23;
    while ( *((_BYTE *)v48 + v23) );
    v49 = v23 + 1;
  }
  else
  {
    v48 = &word_180103AD0;
    v49 = 1;
  }
  v56 = a7;
  v54 = a6;
  v52 = a5;
  v58 = v48;
  v59 = v49;
  v60 = 0;
  v57 = 4LL;
  v55 = 8LL;
  v53 = 8LL;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, a3, 0LL, 0x13u, &v51);
}
