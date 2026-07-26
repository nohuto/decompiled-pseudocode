/*
 * XREFs of ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C0022D14
 * Callers:
 *     ?NdisTraceLoggingOffloadConfigRead@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0022338 (-NdisTraceLoggingOffloadConfigRead@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?NdisTraceLoggingMiniportWakeBufferTooLarge@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C008B9E0 (-NdisTraceLoggingMiniportWakeBufferTooLarge@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C002316C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C003DA60 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByVal<4>>(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 *a5,
        __int64 a6)
{
  _EVENT_DATA_DESCRIPTOR v7; // [rsp+30h] [rbp-58h] BYREF
  __int64 v8; // [rsp+50h] [rbp-38h]
  int v9; // [rsp+58h] [rbp-30h]
  int v10; // [rsp+5Ch] [rbp-2Ch]
  __int64 v11; // [rsp+60h] [rbp-28h]
  int v12; // [rsp+68h] [rbp-20h]
  int v13; // [rsp+6Ch] [rbp-1Ch]

  v11 = a6;
  v12 = 4;
  v13 = 0;
  v8 = *a5;
  v10 = 0;
  v9 = 16;
  return tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C00E3108, a2, 0, 0, 4u, &v7);
}
