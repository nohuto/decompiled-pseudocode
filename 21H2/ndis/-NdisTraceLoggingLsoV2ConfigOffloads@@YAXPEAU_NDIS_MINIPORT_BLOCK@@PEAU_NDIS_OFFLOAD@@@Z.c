/*
 * XREFs of ?NdisTraceLoggingLsoV2ConfigOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@@Z @ 0x1C0022A3C
 * Callers:
 *     ?NdisTraceLoggingOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@1@Z @ 0x1C00223A8 (-NdisTraceLoggingOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@1@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U?$_tlgWrapperByVal@$00@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@44444AEBU?$_tlgWrapperByVal@$00@@5@Z @ 0x1C0022FDC (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U-$_tlgWrapperByVal@.c)
 *     _tlgKeywordOn @ 0x1C00236A4 (_tlgKeywordOn.c)
 */

void __fastcall NdisTraceLoggingLsoV2ConfigOffloads(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_OFFLOAD *a2,
        __int64 a3)
{
  int v3; // ecx
  int v4; // r8d
  _DWORD *v5; // r9
  __int64 v6; // r10
  int v7; // [rsp+70h] [rbp+37h] BYREF
  int v8; // [rsp+74h] [rbp+3Bh] BYREF
  int v9; // [rsp+78h] [rbp+3Fh] BYREF
  int v10; // [rsp+7Ch] [rbp+43h] BYREF
  int v11; // [rsp+80h] [rbp+47h] BYREF
  int v12; // [rsp+84h] [rbp+4Bh] BYREF
  __int64 v13; // [rsp+88h] [rbp+4Fh] BYREF
  char v14; // [rsp+B0h] [rbp+77h] BYREF
  char v15; // [rsp+B8h] [rbp+7Fh] BYREF

  if ( (unsigned int)dword_1C00E3108 > 5 )
  {
    if ( (unsigned __int8)tlgKeywordOn(&dword_1C00E3108, 0x200000000000LL, a3, a2) )
    {
      v14 = (v5[26] >> 2) & 3;
      v15 = v5[26] & 3;
      v7 = v5[25];
      v8 = v5[24];
      v9 = v5[23];
      v10 = v5[22];
      v11 = v5[21];
      v12 = v5[20];
      v13 = v6 + 4008;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
        v3,
        (unsigned int)&unk_1C00CEC6B,
        v4,
        (_DWORD)v5,
        (__int64)&v13,
        (__int64)&v12,
        (__int64)&v11,
        (__int64)&v10,
        (__int64)&v9,
        (__int64)&v8,
        (__int64)&v7,
        (__int64)&v15,
        (__int64)&v14);
    }
  }
}
