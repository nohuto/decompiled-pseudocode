/*
 * XREFs of ?NdisTraceLoggingVxLanHardwareOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@@Z @ 0x1C001F2BC
 * Callers:
 *     ?NdisTraceLoggingOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@1@Z @ 0x1C00223A8 (-NdisTraceLoggingOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@1@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$00@@U2@U2@U2@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$01@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$00@@444AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$01@@4@Z @ 0x1C001F4BC (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$00@@U2@U2@U2@U-$_tlgWrapperByVal@$03@@U.c)
 *     _tlgKeywordOn @ 0x1C00236A4 (_tlgKeywordOn.c)
 */

void __fastcall NdisTraceLoggingVxLanHardwareOffloads(
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
  char v9; // [rsp+60h] [rbp-20h] BYREF
  char v10; // [rsp+61h] [rbp-1Fh] BYREF
  _BYTE v11[2]; // [rsp+62h] [rbp-1Eh] BYREF
  __int16 v12; // [rsp+64h] [rbp-1Ch] BYREF
  int v13; // [rsp+68h] [rbp-18h] BYREF
  __int64 v14; // [rsp+70h] [rbp-10h] BYREF
  char v15; // [rsp+A0h] [rbp+20h] BYREF
  char v16; // [rsp+A8h] [rbp+28h] BYREF

  if ( (unsigned int)dword_1C00E3108 > 5 )
  {
    if ( (unsigned __int8)tlgKeywordOn(&dword_1C00E3108, 0x200000000000LL, a3, a2) )
    {
      v6 = *(_DWORD *)(v4 + 156);
      v15 = *(_BYTE *)(v4 + 166) & 1;
      v12 = *(_WORD *)(v4 + 164);
      v13 = *(_DWORD *)(v4 + 160);
      v16 = BYTE2(v6) & 0xF;
      v7 = BYTE1(v6) & 0xF;
      v6 >>= 4;
      v9 = v7;
      LOBYTE(v6) = v6 & 0xF;
      v8 = *(_BYTE *)(v4 + 156) & 0xF;
      v10 = v6;
      v11[0] = v8;
      v14 = v5 + 4008;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<1>>(
        v6,
        (unsigned int)&unk_1C00CE8EB,
        v3,
        v4,
        (__int64)&v14,
        (__int64)v11,
        (__int64)&v10,
        (__int64)&v9,
        (__int64)&v16,
        (__int64)&v13,
        (__int64)&v12,
        (__int64)&v15);
    }
  }
}
