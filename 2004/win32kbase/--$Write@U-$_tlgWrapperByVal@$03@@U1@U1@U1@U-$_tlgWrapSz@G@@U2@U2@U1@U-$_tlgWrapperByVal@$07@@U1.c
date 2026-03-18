/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U?$_tlgWrapSz@G@@U2@U2@U1@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333AEBU?$_tlgWrapSz@G@@443AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x1C0126430
 * Callers:
 *     EtwTraceMessageCheckDelay @ 0x1C0078070 (EtwTraceMessageCheckDelay.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0038CF8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        const WCHAR **a9,
        const WCHAR **a10,
        const WCHAR **a11,
        __int64 a12,
        __int64 a13,
        __int64 a14)
{
  __int64 v15; // rcx
  int v16; // r9d
  const WCHAR *v17; // rdx
  __int64 v18; // rax
  int v19; // r8d
  const WCHAR *v20; // rdx
  __int64 v21; // rax
  int v22; // r8d
  const WCHAR *v23; // rdx
  struct _EVENT_DATA_DESCRIPTOR v25; // [rsp+30h] [rbp-C9h] BYREF
  __int64 v26; // [rsp+50h] [rbp-A9h]
  __int64 v27; // [rsp+58h] [rbp-A1h]
  __int64 v28; // [rsp+60h] [rbp-99h]
  __int64 v29; // [rsp+68h] [rbp-91h]
  __int64 v30; // [rsp+70h] [rbp-89h]
  __int64 v31; // [rsp+78h] [rbp-81h]
  __int64 v32; // [rsp+80h] [rbp-79h]
  __int64 v33; // [rsp+88h] [rbp-71h]
  const WCHAR *v34; // [rsp+90h] [rbp-69h]
  int v35; // [rsp+98h] [rbp-61h]
  int v36; // [rsp+9Ch] [rbp-5Dh]
  const WCHAR *v37; // [rsp+A0h] [rbp-59h]
  int v38; // [rsp+A8h] [rbp-51h]
  int v39; // [rsp+ACh] [rbp-4Dh]
  const WCHAR *v40; // [rsp+B0h] [rbp-49h]
  int v41; // [rsp+B8h] [rbp-41h]
  int v42; // [rsp+BCh] [rbp-3Dh]
  __int64 v43; // [rsp+C0h] [rbp-39h]
  __int64 v44; // [rsp+C8h] [rbp-31h]
  __int64 v45; // [rsp+D0h] [rbp-29h]
  __int64 v46; // [rsp+D8h] [rbp-21h]
  __int64 v47; // [rsp+E0h] [rbp-19h]
  __int64 v48; // [rsp+E8h] [rbp-11h]

  v47 = a14;
  v15 = -1LL;
  v45 = a13;
  v16 = 2;
  v43 = a12;
  v48 = 4LL;
  v46 = 8LL;
  v44 = 4LL;
  v17 = *a11;
  if ( *a11 )
  {
    v18 = -1LL;
    do
      ++v18;
    while ( v17[v18] );
    v19 = 2 * v18 + 2;
  }
  else
  {
    v17 = &word_1C020BCB0;
    v19 = 2;
  }
  v40 = v17;
  v41 = v19;
  v42 = 0;
  v20 = *a10;
  if ( *a10 )
  {
    v21 = -1LL;
    do
      ++v21;
    while ( v20[v21] );
    v22 = 2 * v21 + 2;
  }
  else
  {
    v20 = &word_1C020BCB0;
    v22 = 2;
  }
  v37 = v20;
  v38 = v22;
  v39 = 0;
  v23 = *a9;
  if ( *a9 )
  {
    do
      ++v15;
    while ( v23[v15] );
    v16 = 2 * v15 + 2;
  }
  else
  {
    v23 = &word_1C020BCB0;
  }
  v32 = a8;
  v30 = a7;
  v28 = a6;
  v26 = a5;
  v34 = v23;
  v35 = v16;
  v36 = 0;
  v33 = 4LL;
  v31 = 4LL;
  v29 = 4LL;
  v27 = 4LL;
  return tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C0245250, a2, 0LL, 0LL, 0xCu, &v25);
}
