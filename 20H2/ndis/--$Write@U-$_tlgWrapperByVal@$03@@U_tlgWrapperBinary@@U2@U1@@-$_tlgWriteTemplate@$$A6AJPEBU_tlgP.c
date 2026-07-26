/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@U_tlgWrapperBinary@@U2@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU_tlgWrapperBinary@@43@Z @ 0x1C008B398
 * Callers:
 *     ?NdisTraceLoggingRareFilterPath@@YAXPEAU_NDIS_FILTER_DRIVER_BLOCK@@W4NdisTLFilterEvent@@H@Z @ 0x1C011EA58 (-NdisTraceLoggingRareFilterPath@@YAXPEAU_NDIS_FILTER_DRIVER_BLOCK@@W4NdisTLFilterEvent@@H@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0022E0C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C003D700 (__security_check_cookie.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperBinary,_tlgWrapperBinary,_tlgWrapperByVal<4>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 *a6,
        __int64 *a7,
        __int64 a8)
{
  _EVENT_DATA_DESCRIPTOR v9; // [rsp+30h] [rbp-59h] BYREF
  __int64 v10; // [rsp+50h] [rbp-39h]
  __int64 v11; // [rsp+58h] [rbp-31h]
  _DWORD *v12; // [rsp+60h] [rbp-29h]
  __int64 v13; // [rsp+68h] [rbp-21h]
  __int64 v14; // [rsp+70h] [rbp-19h]
  _DWORD v15[2]; // [rsp+78h] [rbp-11h] BYREF
  _DWORD *v16; // [rsp+80h] [rbp-9h]
  __int64 v17; // [rsp+88h] [rbp-1h]
  __int64 v18; // [rsp+90h] [rbp+7h]
  _DWORD v19[2]; // [rsp+98h] [rbp+Fh] BYREF
  __int64 v20; // [rsp+A0h] [rbp+17h]
  __int64 v21; // [rsp+A8h] [rbp+1Fh]

  v20 = a8;
  v16 = v19;
  v18 = *a7;
  v19[0] = *((unsigned __int16 *)a7 + 4);
  v12 = v15;
  v21 = 4LL;
  v14 = *a6;
  v15[0] = *((unsigned __int16 *)a6 + 4);
  v10 = a5;
  v17 = 2LL;
  v19[1] = 0;
  v13 = 2LL;
  v15[1] = 0;
  v11 = 4LL;
  return tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C00E3108, a2, 0LL, 0LL, 8u, &v9);
}
