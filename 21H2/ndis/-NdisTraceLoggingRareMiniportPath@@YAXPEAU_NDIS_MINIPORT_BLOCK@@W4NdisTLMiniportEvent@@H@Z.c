/*
 * XREFs of ?NdisTraceLoggingRareMiniportPath@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4NdisTLMiniportEvent@@H@Z @ 0x1C008C27C
 * Callers:
 *     NdisMPromoteMiniport @ 0x1C0071BB0 (NdisMPromoteMiniport.c)
 *     NdisMSetMiniportSecondary @ 0x1C0072000 (NdisMSetMiniportSecondary.c)
 *     ?ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z @ 0x1C01319B4 (-ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1C00230D0 (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_.c)
 *     _tlgKeywordOn @ 0x1C00236A4 (_tlgKeywordOn.c)
 */

void NdisTraceLoggingRareMiniportPath()
{
  __int64 v0; // rcx
  __int64 v1; // r8
  __int64 v2; // r9
  int v3; // r10d
  __int64 v4; // r11
  int v5; // [rsp+40h] [rbp-18h] BYREF
  __int64 v6; // [rsp+48h] [rbp-10h] BYREF
  int v7; // [rsp+78h] [rbp+20h] BYREF

  if ( (unsigned int)dword_1C00E3108 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_1C00E3108, 0x400000000000LL) )
    {
      v7 = v2;
      v6 = v4 + 4008;
      v5 = v3;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v0,
        (int)&unk_1C00CF625,
        v1,
        v2,
        &v6,
        (__int64)&v5,
        (__int64)&v7);
    }
  }
}
