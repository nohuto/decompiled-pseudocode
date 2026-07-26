/*
 * XREFs of ?NdisTraceLoggingRareFilterPath@@YAXPEAU_NDIS_FILTER_DRIVER_BLOCK@@W4NdisTLFilterEvent@@H@Z @ 0x1C011EA58
 * Callers:
 *     ?ndisAttachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00FFB10 (-ndisAttachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z.c)
 *     ?ndisRestartFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C00FFDB0 (-ndisRestartFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_RESTART_INF.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0022E0C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1C0023344 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C003D700 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U_tlgWrapperBinary@@U2@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU_tlgWrapperBinary@@43@Z @ 0x1C008B398 (--$Write@U-$_tlgWrapperByVal@$03@@U_tlgWrapperBinary@@U2@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgP.c)
 */

void __fastcall NdisTraceLoggingRareFilterPath(__int64 a1)
{
  __int64 v1; // r8
  __int64 v2; // r9
  int v3; // r10d
  int v4; // r11d
  __int16 v5; // ax
  __int16 v6; // ax
  int v7; // r10d
  int v8; // r11d
  int v9; // [rsp+40h] [rbp-29h] BYREF
  int v10; // [rsp+44h] [rbp-25h] BYREF
  __int64 v11; // [rsp+48h] [rbp-21h] BYREF
  __int16 v12; // [rsp+50h] [rbp-19h]
  __int64 v13; // [rsp+58h] [rbp-11h] BYREF
  __int16 v14; // [rsp+60h] [rbp-9h]
  _EVENT_DATA_DESCRIPTOR v15; // [rsp+70h] [rbp+7h] BYREF
  int *v16; // [rsp+90h] [rbp+27h]
  int v17; // [rsp+98h] [rbp+2Fh]
  int v18; // [rsp+9Ch] [rbp+33h]
  int *v19; // [rsp+A0h] [rbp+37h]
  int v20; // [rsp+A8h] [rbp+3Fh]
  int v21; // [rsp+ACh] [rbp+43h]

  if ( a1 )
  {
    if ( (unsigned int)dword_1C00E3108 > 5 )
    {
      if ( tlgKeywordOn((__int64)&dword_1C00E3108, 0x400000000000LL) )
      {
        v11 = *(_QWORD *)(v2 + 152);
        v5 = *(_WORD *)(v2 + 144) & 0xFFFE;
        v9 = v3;
        v12 = v5;
        v13 = *(_QWORD *)(v2 + 120);
        v6 = *(_WORD *)(v2 + 112) & 0xFFFE;
        v10 = v4;
        v14 = v6;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperBinary,_tlgWrapperBinary,_tlgWrapperByVal<4>>(
          65534LL,
          byte_1C00CF586,
          v1,
          v2,
          (__int64)&v10,
          &v13,
          &v11,
          (__int64)&v9);
      }
    }
  }
  else if ( (unsigned int)dword_1C00E3108 > 5 && tlgKeywordOn((__int64)&dword_1C00E3108, 0x400000000000LL) )
  {
    v21 = 0;
    v18 = 0;
    v19 = &v10;
    v20 = 4;
    v16 = &v9;
    v17 = 4;
    v10 = v7;
    v9 = v8;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C00E3108, (unsigned __int8 *)dword_1C00CF54D, 0LL, 0LL, 4u, &v15);
  }
}
