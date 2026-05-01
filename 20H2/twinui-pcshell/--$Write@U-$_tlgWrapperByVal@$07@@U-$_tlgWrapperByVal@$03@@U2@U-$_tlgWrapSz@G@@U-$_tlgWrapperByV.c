/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$00@@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$00@@6@Z @ 0x180458084
 * Callers:
 *     ?Stop@UpdateAppView@AppUsageTelemetry@@QEAAXPEBG_N1@Z @ 0x180459AD8 (-Stop@UpdateAppView@AppUsageTelemetry@@QEAAXPEBG_N1@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18004AB5C (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
        __int64 a1,
        unsigned __int8 *a2,
        const GUID *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        const WCHAR **a8,
        __int64 a9,
        __int64 a10)
{
  const WCHAR *v12; // rcx
  __int64 v13; // rax
  int v14; // edx
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+30h] [rbp-69h] BYREF
  __int64 v17; // [rsp+50h] [rbp-49h]
  __int64 v18; // [rsp+58h] [rbp-41h]
  __int64 v19; // [rsp+60h] [rbp-39h]
  __int64 v20; // [rsp+68h] [rbp-31h]
  __int64 v21; // [rsp+70h] [rbp-29h]
  __int64 v22; // [rsp+78h] [rbp-21h]
  const WCHAR *v23; // [rsp+80h] [rbp-19h]
  int v24; // [rsp+88h] [rbp-11h]
  int v25; // [rsp+8Ch] [rbp-Dh]
  __int64 v26; // [rsp+90h] [rbp-9h]
  __int64 v27; // [rsp+98h] [rbp-1h]
  __int64 v28; // [rsp+A0h] [rbp+7h]
  __int64 v29; // [rsp+A8h] [rbp+Fh]

  v28 = a10;
  v26 = a9;
  v29 = 1LL;
  v27 = 1LL;
  v12 = *a8;
  if ( *a8 )
  {
    v13 = -1LL;
    do
      ++v13;
    while ( v12[v13] );
    v14 = 2 * v13 + 2;
  }
  else
  {
    v12 = &szAgent;
    v14 = 2;
  }
  v21 = a7;
  v19 = a6;
  v23 = v12;
  v17 = a5;
  v24 = v14;
  v18 = 8LL;
  v25 = 0;
  v22 = 4LL;
  v20 = 4LL;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, a3, 0LL, 8u, &v16);
}
