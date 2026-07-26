/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@_W@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@_W@@3@Z @ 0x1C008B01C
 * Callers:
 *     ?NdisTraceLoggingDeviceAdded@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_TRACEFORMAT_FAILURE_REASON@@PEBUNDIS_MINIPORT_CREATION_CONFIG@@JPEB_WE@Z @ 0x1C0021CA0 (-NdisTraceLoggingDeviceAdded@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_TRACEFORMAT_FAILURE_REASON@@PEBUNDI.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0022E0C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C003D700 (__security_check_cookie.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<8>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 *a7,
        __int64 a8,
        void **a9,
        __int64 a10)
{
  _WORD *v11; // rcx
  __int64 v12; // rax
  int v13; // edx
  __int64 v14; // rcx
  _EVENT_DATA_DESCRIPTOR v16; // [rsp+30h] [rbp-69h] BYREF
  __int64 v17; // [rsp+50h] [rbp-49h]
  __int64 v18; // [rsp+58h] [rbp-41h]
  __int64 v19; // [rsp+60h] [rbp-39h]
  __int64 v20; // [rsp+68h] [rbp-31h]
  __int64 v21; // [rsp+70h] [rbp-29h]
  __int64 v22; // [rsp+78h] [rbp-21h]
  __int64 v23; // [rsp+80h] [rbp-19h]
  __int64 v24; // [rsp+88h] [rbp-11h]
  _WORD *v25; // [rsp+90h] [rbp-9h]
  int v26; // [rsp+98h] [rbp-1h]
  int v27; // [rsp+9Ch] [rbp+3h]
  __int64 v28; // [rsp+A0h] [rbp+7h]
  __int64 v29; // [rsp+A8h] [rbp+Fh]

  v28 = a10;
  v29 = 4LL;
  v11 = *a9;
  if ( *a9 )
  {
    v12 = -1LL;
    do
      ++v12;
    while ( v11[v12] );
    v13 = 2 * v12 + 2;
  }
  else
  {
    v11 = &unk_1C00C9700;
    v13 = 2;
  }
  v23 = a8;
  v25 = v11;
  v26 = v13;
  v24 = 8LL;
  v14 = *a7;
  v19 = a6;
  v17 = a5;
  v21 = v14;
  v27 = 0;
  v22 = 16LL;
  v20 = 4LL;
  v18 = 4LL;
  return tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C00E3108, a2, 0LL, 0LL, 8u, &v16);
}
