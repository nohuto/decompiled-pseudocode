/*
 * XREFs of ?NdisTraceLoggingRscConfigOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@@Z @ 0x1C0020490
 * Callers:
 *     ?NdisTraceLoggingOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@1@Z @ 0x1C0022088 (-NdisTraceLoggingOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@1@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1C0022DB0 (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_.c)
 *     _tlgKeywordOn @ 0x1C0023384 (_tlgKeywordOn.c)
 */

void __fastcall NdisTraceLoggingRscConfigOffloads(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_OFFLOAD *a2,
        __int64 a3)
{
  int v3; // ecx
  int v4; // r8d
  __int64 v5; // r9
  __int64 v6; // r10
  _QWORD v7[3]; // [rsp+40h] [rbp-18h] BYREF
  int v8; // [rsp+70h] [rbp+18h] BYREF
  int v9; // [rsp+78h] [rbp+20h] BYREF

  if ( (unsigned int)dword_1C00E30F8 > 5 )
  {
    if ( (unsigned __int8)tlgKeywordOn(&dword_1C00E30F8, 0x200000000000LL, a3, a2) )
    {
      v8 = *(unsigned __int8 *)(v5 + 145);
      v9 = *(unsigned __int8 *)(v5 + 144);
      v7[0] = v6 + 4008;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v3,
        (unsigned int)&unk_1C00CEB8B,
        v4,
        v5,
        (__int64)v7,
        (__int64)&v9,
        (__int64)&v8);
    }
  }
}
