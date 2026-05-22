/*
 * XREFs of ??$Write@U?$_tlgWrapSz@_W@@U?$_tlgWrapperByVal@$03@@U2@U2@U?$_tlgWrapperByVal@$00@@U3@U1@U?$_tlgWrapperByRef@$0BA@@@U2@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@_W@@AEBU?$_tlgWrapperByVal@$03@@44AEBU?$_tlgWrapperByVal@$00@@53AEBU?$_tlgWrapperByRef@$0BA@@@433@Z @ 0x1800CCF08
 * Callers:
 *     ?TrackingRequestedHeartbeat_@SpatialInteractionTraceContinuous@SpatialInteractionDevices@@QEAAXPEB_WKKI_N10AEBU_GUID@@IAEAY02$$CBMAEAY03$$CBM34@Z @ 0x1800D3658 (-TrackingRequestedHeartbeat_@SpatialInteractionTraceContinuous@SpatialInteractionDevices@@QEAAXP.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180035068 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18003C480 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapSz<wchar_t>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapSz<wchar_t>,_tlgWrapSz<wchar_t>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        const wchar_t **a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        const wchar_t **a11,
        __int64 *a12,
        __int64 a13,
        const wchar_t **a14,
        const wchar_t **a15)
{
  __int64 v17; // rdx
  int v18; // r8d
  const wchar_t *v19; // rcx
  __int64 v20; // rax
  int v21; // r9d
  const wchar_t *v22; // rcx
  __int64 v23; // rax
  int v24; // r9d
  const wchar_t *v25; // rcx
  __int64 v26; // rax
  int v27; // r9d
  const wchar_t *v28; // rcx
  struct _EVENT_DATA_DESCRIPTOR v30; // [rsp+30h] [rbp-D0h] BYREF
  const wchar_t *v31; // [rsp+50h] [rbp-B0h]
  int v32; // [rsp+58h] [rbp-A8h]
  int v33; // [rsp+5Ch] [rbp-A4h]
  __int64 v34; // [rsp+60h] [rbp-A0h]
  __int64 v35; // [rsp+68h] [rbp-98h]
  __int64 v36; // [rsp+70h] [rbp-90h]
  __int64 v37; // [rsp+78h] [rbp-88h]
  __int64 v38; // [rsp+80h] [rbp-80h]
  __int64 v39; // [rsp+88h] [rbp-78h]
  __int64 v40; // [rsp+90h] [rbp-70h]
  __int64 v41; // [rsp+98h] [rbp-68h]
  __int64 v42; // [rsp+A0h] [rbp-60h]
  __int64 v43; // [rsp+A8h] [rbp-58h]
  const wchar_t *v44; // [rsp+B0h] [rbp-50h]
  int v45; // [rsp+B8h] [rbp-48h]
  int v46; // [rsp+BCh] [rbp-44h]
  __int64 v47; // [rsp+C0h] [rbp-40h]
  __int64 v48; // [rsp+C8h] [rbp-38h]
  __int64 v49; // [rsp+D0h] [rbp-30h]
  __int64 v50; // [rsp+D8h] [rbp-28h]
  const wchar_t *v51; // [rsp+E0h] [rbp-20h]
  int v52; // [rsp+E8h] [rbp-18h]
  int v53; // [rsp+ECh] [rbp-14h]
  const wchar_t *v54; // [rsp+F0h] [rbp-10h]
  int v55; // [rsp+F8h] [rbp-8h]
  int v56; // [rsp+FCh] [rbp-4h]

  v17 = -1LL;
  v18 = 2;
  v19 = *a15;
  if ( *a15 )
  {
    v20 = -1LL;
    do
      ++v20;
    while ( v19[v20] );
    v21 = 2 * v20 + 2;
  }
  else
  {
    v19 = &word_1801C23BC;
    v21 = 2;
  }
  v54 = v19;
  v55 = v21;
  v56 = 0;
  v22 = *a14;
  if ( *a14 )
  {
    v23 = -1LL;
    do
      ++v23;
    while ( v22[v23] );
    v24 = 2 * v23 + 2;
  }
  else
  {
    v22 = &word_1801C23BC;
    v24 = 2;
  }
  v49 = a13;
  v51 = v22;
  v52 = v24;
  v53 = 0;
  v47 = *a12;
  v50 = 4LL;
  v48 = 16LL;
  v25 = *a11;
  if ( *a11 )
  {
    v26 = -1LL;
    do
      ++v26;
    while ( v25[v26] );
    v27 = 2 * v26 + 2;
  }
  else
  {
    v25 = &word_1801C23BC;
    v27 = 2;
  }
  v42 = a10;
  v40 = a9;
  v38 = a8;
  v36 = a7;
  v34 = a6;
  v44 = v25;
  v45 = v27;
  v46 = 0;
  v28 = *a5;
  v43 = 1LL;
  v41 = 1LL;
  v39 = 4LL;
  v37 = 4LL;
  v35 = 4LL;
  if ( v28 )
  {
    do
      ++v17;
    while ( v28[v17] );
    v18 = 2 * v17 + 2;
  }
  else
  {
    v28 = &word_1801C23BC;
  }
  v31 = v28;
  v32 = v18;
  v33 = 0;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, 0LL, 0LL, 0xDu, &v30);
}
