/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@_W@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@_W@@454564564455@Z @ 0x180002E7C
 * Callers:
 *     ?Stop@TriggerManagerUnregisterActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXPEBD@Z @ 0x18006737C (-Stop@TriggerManagerUnregisterActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliver.c)
 *     ?Stop@DiagTrackRuleSetHandlerAddRule@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXPEBD@Z @ 0x18007CAF0 (-Stop@DiagTrackRuleSetHandlerAddRule@ContentDeliveryManagerTelemetry@Background@ContentDeliveryM.c)
 *     ?Stop@DiagTrackRuleSetHandlerRemoveRule@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXPEBD@Z @ 0x18007D140 (-Stop@DiagTrackRuleSetHandlerRemoveRule@ContentDeliveryManagerTelemetry@Background@ContentDelive.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800011F0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800CF780 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<char>>(
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
        __int64 a21,
        __int64 a22,
        const unsigned __int16 **a23,
        const unsigned __int16 **a24)
{
  __int64 v26; // rdx
  const unsigned __int16 *v27; // r8
  __int64 v28; // rax
  int v29; // eax
  const unsigned __int16 *v30; // r8
  __int64 v31; // rax
  int v32; // eax
  int v33; // r10d
  const WCHAR *v34; // r8
  __int64 v35; // rax
  int v36; // r9d
  const unsigned __int16 *v37; // r8
  __int64 v38; // rax
  int v39; // eax
  const WCHAR *v40; // r8
  __int64 v41; // rax
  int v42; // r9d
  const unsigned __int16 *v43; // r8
  __int64 v44; // rax
  int v45; // eax
  const unsigned __int16 *v46; // r8
  __int64 v47; // rax
  int v48; // eax
  const WCHAR *v49; // r8
  __int64 v50; // rax
  const unsigned __int16 *v51; // r8
  __int64 v52; // rax
  int v53; // eax
  const unsigned __int16 *v54; // r8
  int v55; // edx
  struct _EVENT_DATA_DESCRIPTOR v57; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v58; // [rsp+50h] [rbp-B0h]
  __int64 v59; // [rsp+58h] [rbp-A8h]
  __int64 v60; // [rsp+60h] [rbp-A0h]
  __int64 v61; // [rsp+68h] [rbp-98h]
  __int64 v62; // [rsp+70h] [rbp-90h]
  __int64 v63; // [rsp+78h] [rbp-88h]
  const unsigned __int16 *v64; // [rsp+80h] [rbp-80h]
  int v65; // [rsp+88h] [rbp-78h]
  int v66; // [rsp+8Ch] [rbp-74h]
  __int64 v67; // [rsp+90h] [rbp-70h]
  __int64 v68; // [rsp+98h] [rbp-68h]
  const unsigned __int16 *v69; // [rsp+A0h] [rbp-60h]
  int v70; // [rsp+A8h] [rbp-58h]
  int v71; // [rsp+ACh] [rbp-54h]
  __int64 v72; // [rsp+B0h] [rbp-50h]
  __int64 v73; // [rsp+B8h] [rbp-48h]
  const WCHAR *v74; // [rsp+C0h] [rbp-40h]
  int v75; // [rsp+C8h] [rbp-38h]
  int v76; // [rsp+CCh] [rbp-34h]
  __int64 v77; // [rsp+D0h] [rbp-30h]
  __int64 v78; // [rsp+D8h] [rbp-28h]
  const unsigned __int16 *v79; // [rsp+E0h] [rbp-20h]
  int v80; // [rsp+E8h] [rbp-18h]
  int v81; // [rsp+ECh] [rbp-14h]
  __int64 v82; // [rsp+F0h] [rbp-10h]
  __int64 v83; // [rsp+F8h] [rbp-8h]
  const unsigned __int16 *v84; // [rsp+100h] [rbp+0h]
  int v85; // [rsp+108h] [rbp+8h]
  int v86; // [rsp+10Ch] [rbp+Ch]
  const WCHAR *v87; // [rsp+110h] [rbp+10h]
  int v88; // [rsp+118h] [rbp+18h]
  int v89; // [rsp+11Ch] [rbp+1Ch]
  __int64 v90; // [rsp+120h] [rbp+20h]
  __int64 v91; // [rsp+128h] [rbp+28h]
  const unsigned __int16 *v92; // [rsp+130h] [rbp+30h]
  int v93; // [rsp+138h] [rbp+38h]
  int v94; // [rsp+13Ch] [rbp+3Ch]
  const WCHAR *v95; // [rsp+140h] [rbp+40h]
  int v96; // [rsp+148h] [rbp+48h]
  int v97; // [rsp+14Ch] [rbp+4Ch]
  __int64 v98; // [rsp+150h] [rbp+50h]
  __int64 v99; // [rsp+158h] [rbp+58h]
  __int64 v100; // [rsp+160h] [rbp+60h]
  __int64 v101; // [rsp+168h] [rbp+68h]
  const unsigned __int16 *v102; // [rsp+170h] [rbp+70h]
  int v103; // [rsp+178h] [rbp+78h]
  int v104; // [rsp+17Ch] [rbp+7Ch]
  const unsigned __int16 *v105; // [rsp+180h] [rbp+80h]
  int v106; // [rsp+188h] [rbp+88h]
  int v107; // [rsp+18Ch] [rbp+8Ch]

  v26 = -1LL;
  v27 = *a24;
  if ( *a24 )
  {
    v28 = -1LL;
    do
      ++v28;
    while ( *((_BYTE *)v27 + v28) );
    v29 = v28 + 1;
  }
  else
  {
    v27 = &word_180106598;
    v29 = 1;
  }
  v106 = v29;
  v105 = v27;
  v107 = 0;
  v30 = *a23;
  if ( *a23 )
  {
    v31 = -1LL;
    do
      ++v31;
    while ( *((_BYTE *)v30 + v31) );
    v32 = v31 + 1;
  }
  else
  {
    v30 = &word_180106598;
    v32 = 1;
  }
  v103 = v32;
  v33 = 2;
  v100 = a22;
  v98 = a21;
  v102 = v30;
  v104 = 0;
  v101 = 4LL;
  v34 = *a20;
  v99 = 4LL;
  if ( v34 )
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
  v95 = v34;
  v96 = v36;
  v97 = 0;
  v37 = *a19;
  if ( *a19 )
  {
    v38 = -1LL;
    do
      ++v38;
    while ( *((_BYTE *)v37 + v38) );
    v39 = v38 + 1;
  }
  else
  {
    v37 = &word_180106598;
    v39 = 1;
  }
  v93 = v39;
  v90 = a18;
  v92 = v37;
  v94 = 0;
  v91 = 4LL;
  v40 = *a17;
  if ( *a17 )
  {
    v41 = -1LL;
    do
      ++v41;
    while ( v40[v41] );
    v42 = 2 * v41 + 2;
  }
  else
  {
    v40 = &Src;
    v42 = 2;
  }
  v87 = v40;
  v88 = v42;
  v89 = 0;
  v43 = *a16;
  if ( *a16 )
  {
    v44 = -1LL;
    do
      ++v44;
    while ( *((_BYTE *)v43 + v44) );
    v45 = v44 + 1;
  }
  else
  {
    v43 = &word_180106598;
    v45 = 1;
  }
  v85 = v45;
  v82 = a15;
  v84 = v43;
  v86 = 0;
  v83 = 4LL;
  v46 = *a14;
  if ( *a14 )
  {
    v47 = -1LL;
    do
      ++v47;
    while ( *((_BYTE *)v46 + v47) );
    v48 = v47 + 1;
  }
  else
  {
    v46 = &word_180106598;
    v48 = 1;
  }
  v80 = v48;
  v77 = a13;
  v79 = v46;
  v81 = 0;
  v78 = 4LL;
  v49 = *a12;
  if ( *a12 )
  {
    v50 = -1LL;
    do
      ++v50;
    while ( v49[v50] );
    v33 = 2 * v50 + 2;
  }
  else
  {
    v49 = &Src;
  }
  v72 = a11;
  v74 = v49;
  v75 = v33;
  v76 = 0;
  v51 = *a10;
  v73 = 4LL;
  if ( v51 )
  {
    v52 = -1LL;
    do
      ++v52;
    while ( *((_BYTE *)v51 + v52) );
    v53 = v52 + 1;
  }
  else
  {
    v51 = &word_180106598;
    v53 = 1;
  }
  v70 = v53;
  v67 = a9;
  v69 = v51;
  v71 = 0;
  v68 = 4LL;
  v54 = *a8;
  if ( *a8 )
  {
    do
      ++v26;
    while ( *((_BYTE *)v54 + v26) );
    v55 = v26 + 1;
  }
  else
  {
    v54 = &word_180106598;
    v55 = 1;
  }
  v62 = a7;
  v60 = a6;
  v58 = a5;
  v64 = v54;
  v65 = v55;
  v66 = 0;
  v63 = 4LL;
  v61 = 8LL;
  v59 = 8LL;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, a3, 0LL, 0x16u, &v57);
}
