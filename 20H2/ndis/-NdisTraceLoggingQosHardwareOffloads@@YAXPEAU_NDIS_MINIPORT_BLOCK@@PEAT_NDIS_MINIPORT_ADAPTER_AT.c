/*
 * XREFs of ?NdisTraceLoggingQosHardwareOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAT_NDIS_MINIPORT_ADAPTER_ATTRIBUTES@@@Z @ 0x1C001FA78
 * Callers:
 *     NdisMSetMiniportAttributes @ 0x1C0022EB0 (NdisMSetMiniportAttributes.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@444@Z @ 0x1C001FBE0 (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@@-$_tlgWriteTemplate@$$A6A.c)
 *     _tlgKeywordOn @ 0x1C0023344 (_tlgKeywordOn.c)
 */

void __fastcall NdisTraceLoggingQosHardwareOffloads(
        struct _NDIS_MINIPORT_BLOCK *a1,
        union _NDIS_MINIPORT_ADAPTER_ATTRIBUTES *a2,
        __int64 a3)
{
  int v3; // ecx
  int v4; // r8d
  __int64 v5; // r9
  __int64 v6; // r10
  _DWORD *v7; // rdx
  int v8; // [rsp+50h] [rbp-18h] BYREF
  int v9; // [rsp+54h] [rbp-14h] BYREF
  __int64 v10; // [rsp+58h] [rbp-10h] BYREF
  int v11; // [rsp+80h] [rbp+18h] BYREF
  int v12; // [rsp+88h] [rbp+20h] BYREF

  if ( (unsigned int)dword_1C00E3108 > 5 )
  {
    if ( (unsigned __int8)tlgKeywordOn(&dword_1C00E3108, 0x200000000000LL, a3, a2) )
    {
      v7 = *(_DWORD **)(v5 + 64);
      v11 = v7[4];
      v12 = v7[3];
      v8 = v7[2];
      v9 = v7[1];
      v10 = v6 + 4008;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v3,
        (unsigned int)&unk_1C00CF323,
        v4,
        v5,
        (__int64)&v10,
        (__int64)&v9,
        (__int64)&v8,
        (__int64)&v12,
        (__int64)&v11);
    }
  }
}
