/*
 * XREFs of ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByVal@$07@@U4@U4@U4@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByVal@$07@@6664@Z @ 0x1801F7988
 * Callers:
 *     ??1CBindInfo@CGlobalCompositionSurfaceInfo@@QEAA@XZ @ 0x1800450C4 (--1CBindInfo@CGlobalCompositionSurfaceInfo@@QEAA@XZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180152660 (_tlgWriteTransfer_EventWriteTransfer.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        wchar_t **a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13)
{
  wchar_t *v14; // rcx
  __int64 v15; // rax
  int v16; // edx
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+30h] [rbp-B1h] BYREF
  wchar_t *v19; // [rsp+50h] [rbp-91h]
  int v20; // [rsp+58h] [rbp-89h]
  int v21; // [rsp+5Ch] [rbp-85h]
  __int64 v22; // [rsp+60h] [rbp-81h]
  __int64 v23; // [rsp+68h] [rbp-79h]
  __int64 v24; // [rsp+70h] [rbp-71h]
  __int64 v25; // [rsp+78h] [rbp-69h]
  __int64 v26; // [rsp+80h] [rbp-61h]
  __int64 v27; // [rsp+88h] [rbp-59h]
  __int64 v28; // [rsp+90h] [rbp-51h]
  __int64 v29; // [rsp+98h] [rbp-49h]
  __int64 v30; // [rsp+A0h] [rbp-41h]
  __int64 v31; // [rsp+A8h] [rbp-39h]
  __int64 v32; // [rsp+B0h] [rbp-31h]
  __int64 v33; // [rsp+B8h] [rbp-29h]
  __int64 v34; // [rsp+C0h] [rbp-21h]
  __int64 v35; // [rsp+C8h] [rbp-19h]
  __int64 v36; // [rsp+D0h] [rbp-11h]
  __int64 v37; // [rsp+D8h] [rbp-9h]

  v36 = a13;
  v34 = a12;
  v32 = a11;
  v30 = a10;
  v28 = a9;
  v26 = a8;
  v24 = a7;
  v22 = a6;
  v37 = 4LL;
  v35 = 8LL;
  v33 = 8LL;
  v14 = *a5;
  v31 = 8LL;
  v29 = 8LL;
  v27 = 1LL;
  v25 = 4LL;
  v23 = 4LL;
  if ( v14 )
  {
    v15 = -1LL;
    do
      ++v15;
    while ( v14[v15] );
    v16 = 2 * v15 + 2;
  }
  else
  {
    v14 = word_180288730;
    v16 = 2;
  }
  v19 = v14;
  v20 = v16;
  v21 = 0;
  return tlgWriteTransfer_EventWriteTransfer((__int64)&dword_180341EF0, a2, 0LL, 0LL, 0xBu, &v18);
}
