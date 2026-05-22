/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U1@U2@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@345@Z @ 0x1800B7150
 * Callers:
 *     ?MPCInputRouter_Set3DFocusTarget_@ISMTracing@@QEAAXPEAUIMPCFocusTarget@@0@Z @ 0x1800B8944 (-MPCInputRouter_Set3DFocusTarget_@ISMTracing@@QEAAXPEAUIMPCFocusTarget@@0@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180035138 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18003C560 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        const wchar_t **a7,
        __int64 a8,
        __int64 a9,
        const wchar_t **a10)
{
  __int64 v12; // rcx
  int v13; // r9d
  const wchar_t *v14; // rdx
  __int64 v15; // rax
  int v16; // r8d
  const wchar_t *v17; // rdx
  struct _EVENT_DATA_DESCRIPTOR v19; // [rsp+30h] [rbp-69h] BYREF
  __int64 v20; // [rsp+50h] [rbp-49h]
  __int64 v21; // [rsp+58h] [rbp-41h]
  __int64 v22; // [rsp+60h] [rbp-39h]
  __int64 v23; // [rsp+68h] [rbp-31h]
  const wchar_t *v24; // [rsp+70h] [rbp-29h]
  int v25; // [rsp+78h] [rbp-21h]
  int v26; // [rsp+7Ch] [rbp-1Dh]
  __int64 v27; // [rsp+80h] [rbp-19h]
  __int64 v28; // [rsp+88h] [rbp-11h]
  __int64 v29; // [rsp+90h] [rbp-9h]
  __int64 v30; // [rsp+98h] [rbp-1h]
  const wchar_t *v31; // [rsp+A0h] [rbp+7h]
  int v32; // [rsp+A8h] [rbp+Fh]
  int v33; // [rsp+ACh] [rbp+13h]

  v12 = -1LL;
  v13 = 2;
  v14 = *a10;
  if ( *a10 )
  {
    v15 = -1LL;
    do
      ++v15;
    while ( v14[v15] );
    v16 = 2 * v15 + 2;
  }
  else
  {
    v14 = &word_1801C13CC;
    v16 = 2;
  }
  v29 = a9;
  v27 = a8;
  v31 = v14;
  v32 = v16;
  v33 = 0;
  v17 = *a7;
  v30 = 4LL;
  v28 = 8LL;
  if ( v17 )
  {
    do
      ++v12;
    while ( v17[v12] );
    v13 = 2 * v12 + 2;
  }
  else
  {
    v17 = &word_1801C13CC;
  }
  v22 = a6;
  v20 = a5;
  v24 = v17;
  v25 = v13;
  v21 = 8LL;
  v26 = 0;
  v23 = 4LL;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, 0LL, 0LL, 8u, &v19);
}
