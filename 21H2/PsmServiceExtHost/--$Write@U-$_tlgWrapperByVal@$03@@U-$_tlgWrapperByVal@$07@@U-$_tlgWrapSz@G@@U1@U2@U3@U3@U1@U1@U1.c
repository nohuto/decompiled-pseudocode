/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U1@U2@U3@U3@U1@U1@U1@U1@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapSid@U_SID@@@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@34553333AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapSid@U_SID@@@@@Z @ 0x1800797BC
 * Callers:
 *     ?HampSrvTraceActivityCreateStop@@YAXJ_KPEAU_HAM_CLIENT_CONTEXT@@PEBGKPEAT_RM_SID@@0PEAU_HAM_ACTIVITY_PROPERTIES@@KKE@Z @ 0x18000F8A0 (-HampSrvTraceActivityCreateStop@@YAXJ_KPEAU_HAM_CLIENT_CONTEXT@@PEBGKPEAT_RM_SID@@0PEAU_HAM_ACTI.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18002E148 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800448B0 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapSid<_SID>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        void **a7,
        __int64 a8,
        __int64 a9,
        void **a10,
        void **a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        __int64 a16,
        __int64 *a17)
{
  int v18; // r8d
  int v19; // eax
  __int64 v20; // rcx
  _WORD *v21; // rdx
  __int64 v22; // rax
  int v23; // r9d
  _WORD *v24; // rdx
  __int64 v25; // rax
  int v26; // r9d
  _WORD *v27; // rdx
  struct _EVENT_DATA_DESCRIPTOR v29; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v30; // [rsp+50h] [rbp-B0h]
  __int64 v31; // [rsp+58h] [rbp-A8h]
  __int64 v32; // [rsp+60h] [rbp-A0h]
  __int64 v33; // [rsp+68h] [rbp-98h]
  _WORD *v34; // [rsp+70h] [rbp-90h]
  int v35; // [rsp+78h] [rbp-88h]
  int v36; // [rsp+7Ch] [rbp-84h]
  __int64 v37; // [rsp+80h] [rbp-80h]
  __int64 v38; // [rsp+88h] [rbp-78h]
  __int64 v39; // [rsp+90h] [rbp-70h]
  __int64 v40; // [rsp+98h] [rbp-68h]
  _WORD *v41; // [rsp+A0h] [rbp-60h]
  int v42; // [rsp+A8h] [rbp-58h]
  int v43; // [rsp+ACh] [rbp-54h]
  _WORD *v44; // [rsp+B0h] [rbp-50h]
  int v45; // [rsp+B8h] [rbp-48h]
  int v46; // [rsp+BCh] [rbp-44h]
  __int64 v47; // [rsp+C0h] [rbp-40h]
  __int64 v48; // [rsp+C8h] [rbp-38h]
  __int64 v49; // [rsp+D0h] [rbp-30h]
  __int64 v50; // [rsp+D8h] [rbp-28h]
  __int64 v51; // [rsp+E0h] [rbp-20h]
  __int64 v52; // [rsp+E8h] [rbp-18h]
  __int64 v53; // [rsp+F0h] [rbp-10h]
  __int64 v54; // [rsp+F8h] [rbp-8h]
  __int64 v55; // [rsp+100h] [rbp+0h]
  __int64 v56; // [rsp+108h] [rbp+8h]
  __int64 v57; // [rsp+110h] [rbp+10h]
  int v58; // [rsp+118h] [rbp+18h]
  int v59; // [rsp+11Ch] [rbp+1Ch]

  v18 = 2;
  v19 = *(unsigned __int8 *)(*a17 + 1);
  v57 = *a17;
  v20 = -1LL;
  v59 = 0;
  v56 = 1LL;
  v54 = 4LL;
  v58 = 4 * v19 + 8;
  v55 = a16;
  v53 = a15;
  v51 = a14;
  v49 = a13;
  v47 = a12;
  v52 = 4LL;
  v50 = 4LL;
  v48 = 4LL;
  v21 = *a11;
  if ( *a11 )
  {
    v22 = -1LL;
    do
      ++v22;
    while ( v21[v22] );
    v23 = 2 * v22 + 2;
  }
  else
  {
    v21 = &unk_180095550;
    v23 = 2;
  }
  v44 = v21;
  v45 = v23;
  v46 = 0;
  v24 = *a10;
  if ( *a10 )
  {
    v25 = -1LL;
    do
      ++v25;
    while ( v24[v25] );
    v26 = 2 * v25 + 2;
  }
  else
  {
    v24 = &unk_180095550;
    v26 = 2;
  }
  v39 = a9;
  v37 = a8;
  v41 = v24;
  v42 = v26;
  v43 = 0;
  v27 = *a7;
  v40 = 8LL;
  v38 = 4LL;
  if ( v27 )
  {
    do
      ++v20;
    while ( v27[v20] );
    v18 = 2 * v20 + 2;
  }
  else
  {
    v27 = &unk_180095550;
  }
  v32 = a6;
  v30 = a5;
  v34 = v27;
  v35 = v18;
  v36 = 0;
  v33 = 8LL;
  v31 = 4LL;
  return tlgWriteTransfer_EventWriteTransfer((__int64)&dword_1800B3218, a2, 0LL, 0LL, 0xFu, &v29);
}
