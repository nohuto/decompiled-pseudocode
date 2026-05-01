/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapSz@G@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapSz@G@@5@Z @ 0x1804739A4
 * Callers:
 *     ?Stop@WaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@QEAAXPEBG0@Z @ 0x180012748 (-Stop@WaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@QEAAXPEBG0@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18001D4A4 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
        __int64 a1,
        unsigned __int8 *a2,
        const GUID *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        const WCHAR **a8,
        const WCHAR **a9)
{
  __int64 v11; // rcx
  int v13; // r9d
  const WCHAR *v14; // rdx
  __int64 v15; // rax
  int v16; // r8d
  const WCHAR *v17; // rdx
  struct _EVENT_DATA_DESCRIPTOR v19; // [rsp+30h] [rbp-61h] BYREF
  __int64 v20; // [rsp+50h] [rbp-41h]
  __int64 v21; // [rsp+58h] [rbp-39h]
  __int64 v22; // [rsp+60h] [rbp-31h]
  __int64 v23; // [rsp+68h] [rbp-29h]
  __int64 v24; // [rsp+70h] [rbp-21h]
  __int64 v25; // [rsp+78h] [rbp-19h]
  const WCHAR *v26; // [rsp+80h] [rbp-11h]
  int v27; // [rsp+88h] [rbp-9h]
  int v28; // [rsp+8Ch] [rbp-5h]
  const WCHAR *v29; // [rsp+90h] [rbp-1h]
  int v30; // [rsp+98h] [rbp+7h]
  int v31; // [rsp+9Ch] [rbp+Bh]

  v11 = -1LL;
  v13 = 2;
  v14 = *a9;
  if ( *a9 )
  {
    v15 = -1LL;
    do
      ++v15;
    while ( v14[v15] );
    v16 = 2 * v15 + 2;
  }
  else
  {
    v14 = &szAgent;
    v16 = 2;
  }
  v29 = v14;
  v30 = v16;
  v31 = 0;
  v17 = *a8;
  if ( *a8 )
  {
    do
      ++v11;
    while ( v17[v11] );
    v13 = 2 * v11 + 2;
  }
  else
  {
    v17 = &szAgent;
  }
  v24 = a7;
  v22 = a6;
  v20 = a5;
  v26 = v17;
  v27 = v13;
  v28 = 0;
  v25 = 4LL;
  v23 = 4LL;
  v21 = 8LL;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, a3, 0LL, 7u, &v19);
}
