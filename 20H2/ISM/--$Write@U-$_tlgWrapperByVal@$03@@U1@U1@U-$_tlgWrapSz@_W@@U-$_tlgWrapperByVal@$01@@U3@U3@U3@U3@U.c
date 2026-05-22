/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapSz@_W@@U?$_tlgWrapperByVal@$01@@U3@U3@U3@U3@U?$_tlgWrapperByVal@$00@@U4@U4@U1@U4@U1@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapSz@_W@@AEBU?$_tlgWrapperByVal@$01@@5555AEBU?$_tlgWrapperByVal@$00@@663634444@Z @ 0x180168970
 * Callers:
 *     ?ParsingInitialized_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXJKKPEB_WGG_N1GGG1EIKAEBUPoseData@2@2@Z @ 0x18016DCC8 (-ParsingInitialized_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXJKKPEB_WGG_N1GGG1EI.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180035138 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18003C560 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapSz<wchar_t>,_tlgWrapSz<wchar_t>,_tlgWrapSz<wchar_t>,_tlgWrapSz<wchar_t>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        const wchar_t **a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        __int64 a16,
        __int64 a17,
        __int64 a18,
        __int64 a19,
        const wchar_t **a20,
        const wchar_t **a21,
        const wchar_t **a22,
        const wchar_t **a23)
{
  __int64 v24; // rcx
  int v26; // edx
  const wchar_t *v27; // r8
  __int64 v28; // rax
  int v29; // r9d
  const wchar_t *v30; // r8
  __int64 v31; // rax
  int v32; // r9d
  const wchar_t *v33; // r8
  __int64 v34; // rax
  int v35; // r9d
  const wchar_t *v36; // r8
  __int64 v37; // rax
  int v38; // r9d
  const wchar_t *v39; // r8
  struct _EVENT_DATA_DESCRIPTOR v41; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v42; // [rsp+50h] [rbp-B0h]
  __int64 v43; // [rsp+58h] [rbp-A8h]
  __int64 v44; // [rsp+60h] [rbp-A0h]
  __int64 v45; // [rsp+68h] [rbp-98h]
  __int64 v46; // [rsp+70h] [rbp-90h]
  __int64 v47; // [rsp+78h] [rbp-88h]
  const wchar_t *v48; // [rsp+80h] [rbp-80h]
  int v49; // [rsp+88h] [rbp-78h]
  int v50; // [rsp+8Ch] [rbp-74h]
  __int64 v51; // [rsp+90h] [rbp-70h]
  __int64 v52; // [rsp+98h] [rbp-68h]
  __int64 v53; // [rsp+A0h] [rbp-60h]
  __int64 v54; // [rsp+A8h] [rbp-58h]
  __int64 v55; // [rsp+B0h] [rbp-50h]
  __int64 v56; // [rsp+B8h] [rbp-48h]
  __int64 v57; // [rsp+C0h] [rbp-40h]
  __int64 v58; // [rsp+C8h] [rbp-38h]
  __int64 v59; // [rsp+D0h] [rbp-30h]
  __int64 v60; // [rsp+D8h] [rbp-28h]
  __int64 v61; // [rsp+E0h] [rbp-20h]
  __int64 v62; // [rsp+E8h] [rbp-18h]
  __int64 v63; // [rsp+F0h] [rbp-10h]
  __int64 v64; // [rsp+F8h] [rbp-8h]
  __int64 v65; // [rsp+100h] [rbp+0h]
  __int64 v66; // [rsp+108h] [rbp+8h]
  __int64 v67; // [rsp+110h] [rbp+10h]
  __int64 v68; // [rsp+118h] [rbp+18h]
  __int64 v69; // [rsp+120h] [rbp+20h]
  __int64 v70; // [rsp+128h] [rbp+28h]
  __int64 v71; // [rsp+130h] [rbp+30h]
  __int64 v72; // [rsp+138h] [rbp+38h]
  const wchar_t *v73; // [rsp+140h] [rbp+40h]
  int v74; // [rsp+148h] [rbp+48h]
  int v75; // [rsp+14Ch] [rbp+4Ch]
  const wchar_t *v76; // [rsp+150h] [rbp+50h]
  int v77; // [rsp+158h] [rbp+58h]
  int v78; // [rsp+15Ch] [rbp+5Ch]
  const wchar_t *v79; // [rsp+160h] [rbp+60h]
  int v80; // [rsp+168h] [rbp+68h]
  int v81; // [rsp+16Ch] [rbp+6Ch]
  const wchar_t *v82; // [rsp+170h] [rbp+70h]
  int v83; // [rsp+178h] [rbp+78h]
  int v84; // [rsp+17Ch] [rbp+7Ch]

  v24 = -1LL;
  v26 = 2;
  v27 = *a23;
  if ( *a23 )
  {
    v28 = -1LL;
    do
      ++v28;
    while ( v27[v28] );
    v29 = 2 * v28 + 2;
  }
  else
  {
    v27 = &word_1801C13CC;
    v29 = 2;
  }
  v82 = v27;
  v83 = v29;
  v84 = 0;
  v30 = *a22;
  if ( *a22 )
  {
    v31 = -1LL;
    do
      ++v31;
    while ( v30[v31] );
    v32 = 2 * v31 + 2;
  }
  else
  {
    v30 = &word_1801C13CC;
    v32 = 2;
  }
  v79 = v30;
  v80 = v32;
  v81 = 0;
  v33 = *a21;
  if ( *a21 )
  {
    v34 = -1LL;
    do
      ++v34;
    while ( v33[v34] );
    v35 = 2 * v34 + 2;
  }
  else
  {
    v33 = &word_1801C13CC;
    v35 = 2;
  }
  v76 = v33;
  v77 = v35;
  v78 = 0;
  v36 = *a20;
  if ( *a20 )
  {
    v37 = -1LL;
    do
      ++v37;
    while ( v36[v37] );
    v38 = 2 * v37 + 2;
  }
  else
  {
    v36 = &word_1801C13CC;
    v38 = 2;
  }
  v71 = a19;
  v69 = a18;
  v67 = a17;
  v65 = a16;
  v63 = a15;
  v61 = a14;
  v59 = a13;
  v57 = a12;
  v55 = a11;
  v53 = a10;
  v51 = a9;
  v73 = v36;
  v74 = v38;
  v75 = 0;
  v39 = *a8;
  v72 = 4LL;
  v70 = 1LL;
  v68 = 4LL;
  v66 = 1LL;
  v64 = 1LL;
  v62 = 1LL;
  v60 = 2LL;
  v58 = 2LL;
  v56 = 2LL;
  v54 = 2LL;
  v52 = 2LL;
  if ( v39 )
  {
    do
      ++v24;
    while ( v39[v24] );
    v26 = 2 * v24 + 2;
  }
  else
  {
    v39 = &word_1801C13CC;
  }
  v46 = a7;
  v44 = a6;
  v42 = a5;
  v48 = v39;
  v49 = v26;
  v50 = 0;
  v47 = 4LL;
  v45 = 4LL;
  v43 = 4LL;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, 0LL, 0LL, 0x15u, &v41);
}
