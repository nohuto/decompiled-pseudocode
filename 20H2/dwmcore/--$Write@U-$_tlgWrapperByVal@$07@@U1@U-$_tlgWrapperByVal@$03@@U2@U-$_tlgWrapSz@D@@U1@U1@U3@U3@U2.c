/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapSz@D@@U1@U1@U3@U3@U2@U1@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapSz@D@@3355434444@Z @ 0x1802216A8
 * Callers:
 *     ?SetPointerResult@GestureTargeting@InputTraceLogging@@SAX_K0KKAEBUTargetingInfo@@@Z @ 0x1802246E4 (-SetPointerResult@GestureTargeting@InputTraceLogging@@SAX_K0KKAEBUTargetingInfo@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180152660 (_tlgWriteTransfer_EventWriteTransfer.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        const unsigned __int16 **a9,
        __int64 a10,
        __int64 a11,
        const unsigned __int16 **a12,
        const unsigned __int16 **a13,
        __int64 a14,
        __int64 a15,
        __int64 a16,
        __int64 a17,
        __int64 a18,
        __int64 a19)
{
  __int64 v20; // rcx
  const unsigned __int16 *v21; // r8
  __int64 v22; // rax
  int v23; // eax
  const unsigned __int16 *v24; // r8
  __int64 v25; // rax
  int v26; // eax
  const unsigned __int16 *v27; // r8
  int v28; // ecx
  struct _EVENT_DATA_DESCRIPTOR v30; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v31; // [rsp+50h] [rbp-B0h]
  __int64 v32; // [rsp+58h] [rbp-A8h]
  __int64 v33; // [rsp+60h] [rbp-A0h]
  __int64 v34; // [rsp+68h] [rbp-98h]
  __int64 v35; // [rsp+70h] [rbp-90h]
  __int64 v36; // [rsp+78h] [rbp-88h]
  __int64 v37; // [rsp+80h] [rbp-80h]
  __int64 v38; // [rsp+88h] [rbp-78h]
  const unsigned __int16 *v39; // [rsp+90h] [rbp-70h]
  int v40; // [rsp+98h] [rbp-68h]
  int v41; // [rsp+9Ch] [rbp-64h]
  __int64 v42; // [rsp+A0h] [rbp-60h]
  __int64 v43; // [rsp+A8h] [rbp-58h]
  __int64 v44; // [rsp+B0h] [rbp-50h]
  __int64 v45; // [rsp+B8h] [rbp-48h]
  const unsigned __int16 *v46; // [rsp+C0h] [rbp-40h]
  int v47; // [rsp+C8h] [rbp-38h]
  int v48; // [rsp+CCh] [rbp-34h]
  const unsigned __int16 *v49; // [rsp+D0h] [rbp-30h]
  int v50; // [rsp+D8h] [rbp-28h]
  int v51; // [rsp+DCh] [rbp-24h]
  __int64 v52; // [rsp+E0h] [rbp-20h]
  __int64 v53; // [rsp+E8h] [rbp-18h]
  __int64 v54; // [rsp+F0h] [rbp-10h]
  __int64 v55; // [rsp+F8h] [rbp-8h]
  __int64 v56; // [rsp+100h] [rbp+0h]
  __int64 v57; // [rsp+108h] [rbp+8h]
  __int64 v58; // [rsp+110h] [rbp+10h]
  __int64 v59; // [rsp+118h] [rbp+18h]
  __int64 v60; // [rsp+120h] [rbp+20h]
  __int64 v61; // [rsp+128h] [rbp+28h]
  __int64 v62; // [rsp+130h] [rbp+30h]
  __int64 v63; // [rsp+138h] [rbp+38h]

  v62 = a19;
  v20 = -1LL;
  v60 = a18;
  v58 = a17;
  v56 = a16;
  v54 = a15;
  v52 = a14;
  v63 = 4LL;
  v61 = 4LL;
  v59 = 4LL;
  v21 = *a13;
  v57 = 4LL;
  v55 = 8LL;
  v53 = 4LL;
  if ( v21 )
  {
    v22 = -1LL;
    do
      ++v22;
    while ( *((_BYTE *)v21 + v22) );
    v23 = v22 + 1;
  }
  else
  {
    v21 = &word_1802CBA06;
    v23 = 1;
  }
  v50 = v23;
  v49 = v21;
  v51 = 0;
  v24 = *a12;
  if ( *a12 )
  {
    v25 = -1LL;
    do
      ++v25;
    while ( *((_BYTE *)v24 + v25) );
    v26 = v25 + 1;
  }
  else
  {
    v24 = &word_1802CBA06;
    v26 = 1;
  }
  v47 = v26;
  v44 = a11;
  v42 = a10;
  v46 = v24;
  v48 = 0;
  v45 = 8LL;
  v27 = *a9;
  v43 = 8LL;
  if ( v27 )
  {
    do
      ++v20;
    while ( *((_BYTE *)v27 + v20) );
    v28 = v20 + 1;
  }
  else
  {
    v27 = &word_1802CBA06;
    v28 = 1;
  }
  v37 = a8;
  v35 = a7;
  v33 = a6;
  v31 = a5;
  v39 = v27;
  v40 = v28;
  v41 = 0;
  v38 = 4LL;
  v36 = 4LL;
  v34 = 8LL;
  v32 = 8LL;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, 0LL, 0LL, 0x11u, &v30);
}
