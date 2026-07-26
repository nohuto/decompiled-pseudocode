/*
 * XREFs of ?NdisTraceLoggingGreTaskeConfigOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@@Z @ 0x1C001F6A4
 * Callers:
 *     ?NdisTraceLoggingOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@1@Z @ 0x1C0022088 (-NdisTraceLoggingOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@1@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$00@@U2@U2@U2@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$00@@444AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C001F774 (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$00@@U2@U2@U2@U-$_tlgWrapperByVal@$03@@@.c)
 *     _tlgKeywordOn @ 0x1C0023384 (_tlgKeywordOn.c)
 */

void __fastcall NdisTraceLoggingGreTaskeConfigOffloads(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_OFFLOAD *a2,
        __int64 a3)
{
  int v3; // r8d
  __int64 v4; // r9
  __int64 v5; // r10
  unsigned int v6; // ecx
  char v7; // al
  char v8; // al
  char v9; // [rsp+50h] [rbp-10h] BYREF
  _BYTE v10[3]; // [rsp+51h] [rbp-Fh] BYREF
  int v11; // [rsp+54h] [rbp-Ch] BYREF
  __int64 v12; // [rsp+58h] [rbp-8h] BYREF
  char v13; // [rsp+80h] [rbp+20h] BYREF
  char v14; // [rsp+88h] [rbp+28h] BYREF

  if ( (unsigned int)dword_1C00E30F8 > 5 )
  {
    if ( (unsigned __int8)tlgKeywordOn(&dword_1C00E30F8, 0x200000000000LL, a3, a2) )
    {
      v6 = *(_DWORD *)(v4 + 148);
      v11 = *(_DWORD *)(v4 + 152);
      v13 = BYTE2(v6) & 0xF;
      v7 = BYTE1(v6) & 0xF;
      v6 >>= 4;
      v14 = v7;
      LOBYTE(v6) = v6 & 0xF;
      v8 = *(_BYTE *)(v4 + 148) & 0xF;
      v9 = v6;
      v10[0] = v8;
      v12 = v5 + 4008;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>>(
        v6,
        (unsigned int)&unk_1C00CEA2D,
        v3,
        v4,
        (__int64)&v12,
        (__int64)v10,
        (__int64)&v9,
        (__int64)&v14,
        (__int64)&v13,
        (__int64)&v11);
    }
  }
}
