/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U2@U1@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@435@Z @ 0x180149A94
 * Callers:
 *     ?OnInput@ContextualProcessing@InputTraceLogging@@SAXPEBUInputInfo@@PEBGW4ContextualProcessorDecision@@PEBUIInputTarget@@J@Z @ 0x18014C9F0 (-OnInput@ContextualProcessing@InputTraceLogging@@SAXPEBUInputInfo@@PEBGW4ContextualProcessorDeci.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180035138 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18003C560 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        const unsigned __int16 **a6,
        __int64 a7,
        const wchar_t **a8,
        const unsigned __int16 **a9,
        __int64 a10,
        __int64 a11)
{
  __int64 v13; // rcx
  const unsigned __int16 *v14; // rdx
  __int64 v15; // rax
  int v16; // eax
  const wchar_t *v17; // rdx
  __int64 v18; // rax
  int v19; // r8d
  const unsigned __int16 *v20; // rdx
  int v21; // ecx
  struct _EVENT_DATA_DESCRIPTOR v23; // [rsp+30h] [rbp-81h] BYREF
  __int64 v24; // [rsp+50h] [rbp-61h]
  __int64 v25; // [rsp+58h] [rbp-59h]
  const unsigned __int16 *v26; // [rsp+60h] [rbp-51h]
  int v27; // [rsp+68h] [rbp-49h]
  int v28; // [rsp+6Ch] [rbp-45h]
  __int64 v29; // [rsp+70h] [rbp-41h]
  __int64 v30; // [rsp+78h] [rbp-39h]
  const wchar_t *v31; // [rsp+80h] [rbp-31h]
  int v32; // [rsp+88h] [rbp-29h]
  int v33; // [rsp+8Ch] [rbp-25h]
  const unsigned __int16 *v34; // [rsp+90h] [rbp-21h]
  int v35; // [rsp+98h] [rbp-19h]
  int v36; // [rsp+9Ch] [rbp-15h]
  __int64 v37; // [rsp+A0h] [rbp-11h]
  __int64 v38; // [rsp+A8h] [rbp-9h]
  __int64 v39; // [rsp+B0h] [rbp-1h]
  __int64 v40; // [rsp+B8h] [rbp+7h]

  v39 = a11;
  v37 = a10;
  v13 = -1LL;
  v40 = 4LL;
  v38 = 8LL;
  v14 = *a9;
  if ( *a9 )
  {
    v15 = -1LL;
    do
      ++v15;
    while ( *((_BYTE *)v14 + v15) );
    v16 = v15 + 1;
  }
  else
  {
    v14 = &word_1801C13C8;
    v16 = 1;
  }
  v35 = v16;
  v34 = v14;
  v36 = 0;
  v17 = *a8;
  if ( *a8 )
  {
    v18 = -1LL;
    do
      ++v18;
    while ( v17[v18] );
    v19 = 2 * v18 + 2;
  }
  else
  {
    v17 = &word_1801C13CC;
    v19 = 2;
  }
  v29 = a7;
  v31 = v17;
  v32 = v19;
  v33 = 0;
  v20 = *a6;
  v30 = 4LL;
  if ( v20 )
  {
    do
      ++v13;
    while ( *((_BYTE *)v20 + v13) );
    v21 = v13 + 1;
  }
  else
  {
    v20 = &word_1801C13C8;
    v21 = 1;
  }
  v24 = a5;
  v26 = v20;
  v27 = v21;
  v28 = 0;
  v25 = 8LL;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, 0LL, 0LL, 9u, &v23);
}
