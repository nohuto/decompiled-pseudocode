/*
 * XREFs of ??$Write@U?$_tlgWrapSz@D@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@444@Z @ 0x1C01B2884
 * Callers:
 *     xxxKeyEventEx @ 0x1C0060840 (xxxKeyEventEx.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C002874C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        void **a5,
        void **a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11)
{
  __int64 v13; // rcx
  _BYTE *v14; // rdx
  __int64 v15; // rax
  int v16; // eax
  _BYTE *v17; // rdx
  int v18; // ecx
  struct _EVENT_DATA_DESCRIPTOR v20; // [rsp+30h] [rbp-81h] BYREF
  _BYTE *v21; // [rsp+50h] [rbp-61h]
  int v22; // [rsp+58h] [rbp-59h]
  int v23; // [rsp+5Ch] [rbp-55h]
  _BYTE *v24; // [rsp+60h] [rbp-51h]
  int v25; // [rsp+68h] [rbp-49h]
  int v26; // [rsp+6Ch] [rbp-45h]
  __int64 v27; // [rsp+70h] [rbp-41h]
  __int64 v28; // [rsp+78h] [rbp-39h]
  __int64 v29; // [rsp+80h] [rbp-31h]
  __int64 v30; // [rsp+88h] [rbp-29h]
  __int64 v31; // [rsp+90h] [rbp-21h]
  __int64 v32; // [rsp+98h] [rbp-19h]
  __int64 v33; // [rsp+A0h] [rbp-11h]
  __int64 v34; // [rsp+A8h] [rbp-9h]
  __int64 v35; // [rsp+B0h] [rbp-1h]
  __int64 v36; // [rsp+B8h] [rbp+7h]

  v35 = a11;
  v33 = a10;
  v13 = -1LL;
  v31 = a9;
  v29 = a8;
  v27 = a7;
  v36 = 4LL;
  v34 = 4LL;
  v32 = 4LL;
  v14 = *a6;
  v30 = 8LL;
  v28 = 4LL;
  if ( v14 )
  {
    v15 = -1LL;
    do
      ++v15;
    while ( v14[v15] );
    v16 = v15 + 1;
  }
  else
  {
    v14 = &unk_1C0225CC8;
    v16 = 1;
  }
  v25 = v16;
  v24 = v14;
  v26 = 0;
  v17 = *a5;
  if ( *a5 )
  {
    do
      ++v13;
    while ( v17[v13] );
    v18 = v13 + 1;
  }
  else
  {
    v17 = &unk_1C0225CC8;
    v18 = 1;
  }
  v21 = v17;
  v22 = v18;
  v23 = 0;
  return tlgWriteTransfer_EtwWriteTransfer(a1, a2, 0LL, 0LL, 9u, &v20);
}
