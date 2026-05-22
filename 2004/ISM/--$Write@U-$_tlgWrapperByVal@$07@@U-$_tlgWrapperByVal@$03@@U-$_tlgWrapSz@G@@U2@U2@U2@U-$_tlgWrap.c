/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U2@U2@U2@U?$_tlgWrapperByVal@$00@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@444AEBU?$_tlgWrapperByVal@$00@@4@Z @ 0x180082D70
 * Callers:
 *     ?MPCInputProviderSourceDetectedLost_@ISMTracing@@QEAAXPEAUIMPCTarget@@PEAUInputInfo@@_NI@Z @ 0x18008427C (-MPCInputProviderSourceDetectedLost_@ISMTracing@@QEAAXPEAUIMPCTarget@@PEAUInputInfo@@_NI@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800350C8 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18003C4E0 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        const wchar_t **a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12)
{
  const wchar_t *v14; // rcx
  __int64 v15; // rax
  int v16; // edx
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+30h] [rbp-99h] BYREF
  __int64 v19; // [rsp+50h] [rbp-79h]
  __int64 v20; // [rsp+58h] [rbp-71h]
  __int64 v21; // [rsp+60h] [rbp-69h]
  __int64 v22; // [rsp+68h] [rbp-61h]
  const wchar_t *v23; // [rsp+70h] [rbp-59h]
  int v24; // [rsp+78h] [rbp-51h]
  int v25; // [rsp+7Ch] [rbp-4Dh]
  __int64 v26; // [rsp+80h] [rbp-49h]
  __int64 v27; // [rsp+88h] [rbp-41h]
  __int64 v28; // [rsp+90h] [rbp-39h]
  __int64 v29; // [rsp+98h] [rbp-31h]
  __int64 v30; // [rsp+A0h] [rbp-29h]
  __int64 v31; // [rsp+A8h] [rbp-21h]
  __int64 v32; // [rsp+B0h] [rbp-19h]
  __int64 v33; // [rsp+B8h] [rbp-11h]
  __int64 v34; // [rsp+C0h] [rbp-9h]
  __int64 v35; // [rsp+C8h] [rbp-1h]

  v34 = a12;
  v32 = a11;
  v30 = a10;
  v28 = a9;
  v26 = a8;
  v35 = 4LL;
  v33 = 1LL;
  v31 = 4LL;
  v14 = *a7;
  v29 = 4LL;
  v27 = 4LL;
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
    v14 = &word_1801C13DC;
    v16 = 2;
  }
  v21 = a6;
  v19 = a5;
  v23 = v14;
  v24 = v16;
  v25 = 0;
  v22 = 4LL;
  v20 = 8LL;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, 0LL, 0LL, 0xAu, &v18);
}
