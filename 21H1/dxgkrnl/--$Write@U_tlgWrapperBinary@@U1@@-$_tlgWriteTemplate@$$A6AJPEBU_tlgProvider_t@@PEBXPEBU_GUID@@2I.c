/*
 * XREFs of ??$Write@U_tlgWrapperBinary@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU_tlgWrapperBinary@@3@Z @ 0x1C0043BAC
 * Callers:
 *     ?WriteDxgDiagnosticsEvent_SDCDesktopCheckFailPacket@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C00443B4 (-WriteDxgDiagnosticsEvent_SDCDesktopCheckFailPacket@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0020E2C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperBinary,_tlgWrapperBinary>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 *a5,
        __int64 *a6)
{
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+30h] [rbp-29h] BYREF
  _DWORD *v8; // [rsp+50h] [rbp-9h]
  __int64 v9; // [rsp+58h] [rbp-1h]
  __int64 v10; // [rsp+60h] [rbp+7h]
  _DWORD v11[2]; // [rsp+68h] [rbp+Fh] BYREF
  _DWORD *v12; // [rsp+70h] [rbp+17h]
  __int64 v13; // [rsp+78h] [rbp+1Fh]
  __int64 v14; // [rsp+80h] [rbp+27h]
  _DWORD v15[2]; // [rsp+88h] [rbp+2Fh] BYREF

  v12 = v15;
  v13 = 2LL;
  v15[1] = 0;
  v14 = *a6;
  v15[0] = *((unsigned __int16 *)a6 + 4);
  v8 = v11;
  v9 = 2LL;
  v10 = *a5;
  v11[0] = *((unsigned __int16 *)a5 + 4);
  v11[1] = 0;
  return tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C00AEA20, a2, 0LL, 0LL, 6u, &v7);
}
