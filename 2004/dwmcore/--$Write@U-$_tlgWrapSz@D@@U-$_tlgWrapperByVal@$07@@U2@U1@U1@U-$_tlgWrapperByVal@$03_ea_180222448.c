/*
 * XREFs of ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$07@@U2@U1@U1@U?$_tlgWrapperByVal@$03@@U2@U3@U3@U3@U3@U3@U3@U2@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$07@@433AEBU?$_tlgWrapperByVal@$03@@45555554AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x180222448
 * Callers:
 *     ?UpdateCapture@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager@@@Z @ 0x180226934 (-UpdateCapture@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager.c)
 * Callees:
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1801506E8 (_tlgWriteTransfer_EventWriteTransfer.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>>(
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
        __int64 a16,
        __int64 a17,
        __int64 a18,
        __int64 a19)
{
  __int64 v21; // rcx
  const unsigned __int16 *v22; // rdx
  __int64 v23; // rax
  int v24; // eax
  const unsigned __int16 *v25; // rdx
  __int64 v26; // rax
  int v27; // eax
  const unsigned __int16 *v28; // rdx
  int v29; // ecx
  struct _EVENT_DATA_DESCRIPTOR v31; // [rsp+30h] [rbp-D0h] BYREF
  const unsigned __int16 *v32; // [rsp+50h] [rbp-B0h]
  int v33; // [rsp+58h] [rbp-A8h]
  int v34; // [rsp+5Ch] [rbp-A4h]
  __int64 v35; // [rsp+60h] [rbp-A0h]
  __int64 v36; // [rsp+68h] [rbp-98h]
  __int64 v37; // [rsp+70h] [rbp-90h]
  __int64 v38; // [rsp+78h] [rbp-88h]
  const unsigned __int16 *v39; // [rsp+80h] [rbp-80h]
  int v40; // [rsp+88h] [rbp-78h]
  int v41; // [rsp+8Ch] [rbp-74h]
  const unsigned __int16 *v42; // [rsp+90h] [rbp-70h]
  int v43; // [rsp+98h] [rbp-68h]
  int v44; // [rsp+9Ch] [rbp-64h]
  __int64 v45; // [rsp+A0h] [rbp-60h]
  __int64 v46; // [rsp+A8h] [rbp-58h]
  __int64 v47; // [rsp+B0h] [rbp-50h]
  __int64 v48; // [rsp+B8h] [rbp-48h]
  __int64 v49; // [rsp+C0h] [rbp-40h]
  __int64 v50; // [rsp+C8h] [rbp-38h]
  __int64 v51; // [rsp+D0h] [rbp-30h]
  __int64 v52; // [rsp+D8h] [rbp-28h]
  __int64 v53; // [rsp+E0h] [rbp-20h]
  __int64 v54; // [rsp+E8h] [rbp-18h]
  __int64 v55; // [rsp+F0h] [rbp-10h]
  __int64 v56; // [rsp+F8h] [rbp-8h]
  __int64 v57; // [rsp+100h] [rbp+0h]
  __int64 v58; // [rsp+108h] [rbp+8h]
  __int64 v59; // [rsp+110h] [rbp+10h]
  __int64 v60; // [rsp+118h] [rbp+18h]
  __int64 v61; // [rsp+120h] [rbp+20h]
  __int64 v62; // [rsp+128h] [rbp+28h]
  __int64 v63; // [rsp+130h] [rbp+30h]
  __int64 v64; // [rsp+138h] [rbp+38h]

  v63 = a19;
  v61 = a18;
  v21 = -1LL;
  v59 = a17;
  v57 = a16;
  v55 = a15;
  v53 = a14;
  v51 = a13;
  v49 = a12;
  v47 = a11;
  v45 = a10;
  v64 = 1LL;
  v62 = 8LL;
  v60 = 4LL;
  v22 = *a9;
  v58 = 4LL;
  v56 = 4LL;
  v54 = 4LL;
  v52 = 4LL;
  v50 = 4LL;
  v48 = 8LL;
  v46 = 4LL;
  if ( v22 )
  {
    v23 = -1LL;
    do
      ++v23;
    while ( *((_BYTE *)v22 + v23) );
    v24 = v23 + 1;
  }
  else
  {
    v22 = &word_1802CD8A6;
    v24 = 1;
  }
  v43 = v24;
  v42 = v22;
  v44 = 0;
  v25 = *a8;
  if ( *a8 )
  {
    v26 = -1LL;
    do
      ++v26;
    while ( *((_BYTE *)v25 + v26) );
    v27 = v26 + 1;
  }
  else
  {
    v25 = &word_1802CD8A6;
    v27 = 1;
  }
  v40 = v27;
  v37 = a7;
  v35 = a6;
  v39 = v25;
  v41 = 0;
  v38 = 8LL;
  v28 = *a5;
  v36 = 8LL;
  if ( v28 )
  {
    do
      ++v21;
    while ( *((_BYTE *)v28 + v21) );
    v29 = v21 + 1;
  }
  else
  {
    v28 = &word_1802CD8A6;
    v29 = 1;
  }
  v32 = v28;
  v33 = v29;
  v34 = 0;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, 0LL, 0LL, 0x11u, &v31);
}
