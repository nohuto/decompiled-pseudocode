/*
 * XREFs of ?NdisTraceLoggingOffloadConfigRead@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0022338
 * Callers:
 *     ?ndisReadOffloadRegistry@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0028044 (-ndisReadOffloadRegistry@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C0022D14 (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlg.c)
 *     _tlgKeywordOn @ 0x1C00236A4 (_tlgKeywordOn.c)
 */

void __fastcall NdisTraceLoggingOffloadConfigRead(struct _NDIS_MINIPORT_BLOCK *a1, __int64 a2, __int64 a3)
{
  int v3; // ecx
  int v4; // r8d
  __int64 v5; // r9
  int v6; // [rsp+48h] [rbp+10h] BYREF
  __int64 v7; // [rsp+50h] [rbp+18h] BYREF

  if ( (unsigned int)dword_1C00E3108 > 5 )
  {
    if ( (unsigned __int8)tlgKeywordOn(&dword_1C00E3108, 0x200000000000LL, a3, a1) )
    {
      v6 = *(_DWORD *)(v5 + 3680);
      v7 = v5 + 4008;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByVal<4>>(
        v3,
        (unsigned int)&unk_1C00CF47F,
        v4,
        v5,
        (__int64)&v7,
        (__int64)&v6);
    }
  }
}
