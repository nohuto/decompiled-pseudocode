/*
 * XREFs of ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$07@@U2@U1@U1@U?$_tlgWrapperByVal@$03@@U2@U3@U3@U3@U3@U1@U1@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$07@@433AEBU?$_tlgWrapperByVal@$03@@45555335@Z @ 0x18021FBF4
 * Callers:
 *     ?InteractionConfigurationUpdate@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager@@@Z @ 0x18005A830 (-InteractionConfigurationUpdate@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CMa.c)
 * Callees:
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180152660 (_tlgWriteTransfer_EventWriteTransfer.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
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
        const unsigned __int16 **a17,
        __int64 a18)
{
  __int64 v19; // rdx
  const unsigned __int16 *v20; // r8
  __int64 v21; // rax
  int v22; // eax
  const unsigned __int16 *v23; // r8
  __int64 v24; // rax
  int v25; // eax
  const unsigned __int16 *v26; // r8
  __int64 v27; // rax
  int v28; // eax
  const unsigned __int16 *v29; // r8
  __int64 v30; // rax
  int v31; // eax
  const unsigned __int16 *v32; // r8
  int v33; // edx
  struct _EVENT_DATA_DESCRIPTOR v35; // [rsp+30h] [rbp-D0h] BYREF
  const unsigned __int16 *v36; // [rsp+50h] [rbp-B0h]
  int v37; // [rsp+58h] [rbp-A8h]
  int v38; // [rsp+5Ch] [rbp-A4h]
  __int64 v39; // [rsp+60h] [rbp-A0h]
  __int64 v40; // [rsp+68h] [rbp-98h]
  __int64 v41; // [rsp+70h] [rbp-90h]
  __int64 v42; // [rsp+78h] [rbp-88h]
  const unsigned __int16 *v43; // [rsp+80h] [rbp-80h]
  int v44; // [rsp+88h] [rbp-78h]
  int v45; // [rsp+8Ch] [rbp-74h]
  const unsigned __int16 *v46; // [rsp+90h] [rbp-70h]
  int v47; // [rsp+98h] [rbp-68h]
  int v48; // [rsp+9Ch] [rbp-64h]
  __int64 v49; // [rsp+A0h] [rbp-60h]
  __int64 v50; // [rsp+A8h] [rbp-58h]
  __int64 v51; // [rsp+B0h] [rbp-50h]
  __int64 v52; // [rsp+B8h] [rbp-48h]
  __int64 v53; // [rsp+C0h] [rbp-40h]
  __int64 v54; // [rsp+C8h] [rbp-38h]
  __int64 v55; // [rsp+D0h] [rbp-30h]
  __int64 v56; // [rsp+D8h] [rbp-28h]
  __int64 v57; // [rsp+E0h] [rbp-20h]
  __int64 v58; // [rsp+E8h] [rbp-18h]
  __int64 v59; // [rsp+F0h] [rbp-10h]
  __int64 v60; // [rsp+F8h] [rbp-8h]
  const unsigned __int16 *v61; // [rsp+100h] [rbp+0h]
  int v62; // [rsp+108h] [rbp+8h]
  int v63; // [rsp+10Ch] [rbp+Ch]
  const unsigned __int16 *v64; // [rsp+110h] [rbp+10h]
  int v65; // [rsp+118h] [rbp+18h]
  int v66; // [rsp+11Ch] [rbp+1Ch]
  __int64 v67; // [rsp+120h] [rbp+20h]
  __int64 v68; // [rsp+128h] [rbp+28h]

  v67 = a18;
  v19 = -1LL;
  v68 = 4LL;
  v20 = *a17;
  if ( *a17 )
  {
    v21 = -1LL;
    do
      ++v21;
    while ( *((_BYTE *)v20 + v21) );
    v22 = v21 + 1;
  }
  else
  {
    v20 = &word_1802CBA06;
    v22 = 1;
  }
  v65 = v22;
  v64 = v20;
  v66 = 0;
  v23 = *a16;
  if ( *a16 )
  {
    v24 = -1LL;
    do
      ++v24;
    while ( *((_BYTE *)v23 + v24) );
    v25 = v24 + 1;
  }
  else
  {
    v23 = &word_1802CBA06;
    v25 = 1;
  }
  v62 = v25;
  v59 = a15;
  v57 = a14;
  v55 = a13;
  v53 = a12;
  v51 = a11;
  v49 = a10;
  v61 = v23;
  v63 = 0;
  v60 = 4LL;
  v26 = *a9;
  v58 = 4LL;
  v56 = 4LL;
  v54 = 4LL;
  v52 = 8LL;
  v50 = 4LL;
  if ( v26 )
  {
    v27 = -1LL;
    do
      ++v27;
    while ( *((_BYTE *)v26 + v27) );
    v28 = v27 + 1;
  }
  else
  {
    v26 = &word_1802CBA06;
    v28 = 1;
  }
  v47 = v28;
  v46 = v26;
  v48 = 0;
  v29 = *a8;
  if ( *a8 )
  {
    v30 = -1LL;
    do
      ++v30;
    while ( *((_BYTE *)v29 + v30) );
    v31 = v30 + 1;
  }
  else
  {
    v29 = &word_1802CBA06;
    v31 = 1;
  }
  v44 = v31;
  v41 = a7;
  v39 = a6;
  v43 = v29;
  v45 = 0;
  v42 = 8LL;
  v32 = *a5;
  v40 = 8LL;
  if ( v32 )
  {
    do
      ++v19;
    while ( *((_BYTE *)v32 + v19) );
    v33 = v19 + 1;
  }
  else
  {
    v32 = &word_1802CBA06;
    v33 = 1;
  }
  v36 = v32;
  v37 = v33;
  v38 = 0;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, 0LL, 0LL, 0x10u, &v35);
}
