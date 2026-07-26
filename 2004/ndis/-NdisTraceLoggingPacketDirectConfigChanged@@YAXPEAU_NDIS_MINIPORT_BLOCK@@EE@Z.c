/*
 * XREFs of ?NdisTraceLoggingPacketDirectConfigChanged@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x1C001E318
 * Callers:
 *     ?ndisMIndicatePDConfigChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEBXKE@Z @ 0x1C001E1CC (-ndisMIndicatePDConfigChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEBXKE@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1C0022D70 (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_.c)
 *     _tlgKeywordOn @ 0x1C0023344 (_tlgKeywordOn.c)
 */

void __fastcall NdisTraceLoggingPacketDirectConfigChanged(struct _NDIS_MINIPORT_BLOCK *a1, __int64 a2, __int64 a3)
{
  int v3; // ecx
  int v4; // r8d
  int v5; // r9d
  int v6; // r10d
  __int64 v7; // r11
  int v8; // [rsp+40h] [rbp-18h] BYREF
  __int64 v9; // [rsp+48h] [rbp-10h] BYREF
  int v10; // [rsp+78h] [rbp+20h] BYREF

  if ( (unsigned int)dword_1C00E3108 > 5 )
  {
    if ( (unsigned __int8)tlgKeywordOn(&dword_1C00E3108, 0x200000000000LL, a3, (unsigned __int8)a3) )
    {
      v10 = v5;
      v9 = v7 + 4008;
      v8 = v6;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v3,
        (unsigned int)&unk_1C00CE371,
        v4,
        v5,
        (__int64)&v9,
        (__int64)&v8,
        (__int64)&v10);
    }
  }
}
