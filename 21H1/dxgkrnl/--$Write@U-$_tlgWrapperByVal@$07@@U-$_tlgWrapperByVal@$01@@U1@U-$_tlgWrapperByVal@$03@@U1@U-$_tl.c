/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$01@@U1@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapSz@D@@U1@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByRef@$0BA@@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$01@@3AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapSz@D@@3AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByRef@$0BA@@@@Z @ 0x1C0020D1C
 * Callers:
 *     ?DestroyAdapterInfo@DXGPROCESS@@QEAAXPEAUDXGPROCESS_ADAPTER_INFO@@@Z @ 0x1C011684C (-DestroyAdapterInfo@DXGPROCESS@@QEAAXPEAUDXGPROCESS_ADAPTER_INFO@@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0020E2C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByRef<16>>(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        const CHAR **a10,
        __int64 a11,
        __int64 a12,
        __int64 *a13)
{
  __int64 v13; // rcx
  const CHAR *v14; // rcx
  __int64 v15; // rax
  int v16; // eax
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+30h] [rbp-B1h] BYREF
  __int64 v19; // [rsp+50h] [rbp-91h]
  __int64 v20; // [rsp+58h] [rbp-89h]
  __int64 v21; // [rsp+60h] [rbp-81h]
  __int64 v22; // [rsp+68h] [rbp-79h]
  __int64 v23; // [rsp+70h] [rbp-71h]
  __int64 v24; // [rsp+78h] [rbp-69h]
  __int64 v25; // [rsp+80h] [rbp-61h]
  __int64 v26; // [rsp+88h] [rbp-59h]
  __int64 v27; // [rsp+90h] [rbp-51h]
  __int64 v28; // [rsp+98h] [rbp-49h]
  const CHAR *v29; // [rsp+A0h] [rbp-41h]
  int v30; // [rsp+A8h] [rbp-39h]
  int v31; // [rsp+ACh] [rbp-35h]
  __int64 v32; // [rsp+B0h] [rbp-31h]
  __int64 v33; // [rsp+B8h] [rbp-29h]
  __int64 v34; // [rsp+C0h] [rbp-21h]
  __int64 v35; // [rsp+C8h] [rbp-19h]
  __int64 v36; // [rsp+D0h] [rbp-11h]
  __int64 v37; // [rsp+D8h] [rbp-9h]

  v37 = 16LL;
  v33 = 8LL;
  v13 = *a13;
  v34 = a12;
  v32 = a11;
  v36 = v13;
  v35 = 1LL;
  v14 = *a10;
  if ( *a10 )
  {
    v15 = -1LL;
    do
      ++v15;
    while ( v14[v15] );
    v16 = v15 + 1;
  }
  else
  {
    v14 = File;
    v16 = 1;
  }
  v30 = v16;
  v27 = a9;
  v25 = a8;
  v23 = a7;
  v21 = a6;
  v19 = a5;
  v29 = v14;
  v31 = 0;
  v28 = 8LL;
  v26 = 4LL;
  v24 = 8LL;
  v22 = 2LL;
  v20 = 8LL;
  return tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C00AEA90, a2, 0, 0, 0xBu, &v18);
}
