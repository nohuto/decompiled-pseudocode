/*
 * XREFs of ??$Write@U?$_tlgWrapperByRef@$0BA@@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@3@Z @ 0x1800D4BA8
 * Callers:
 *     ?SpatialObjectEnsureDynamicNodeInfo_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXAEBU_GUID@@0@Z @ 0x1800D8A58 (-SpatialObjectEnsureDynamicNodeInfo_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXAEB.c)
 *     ?NodePropertyCache_RemoveNode_@HolographicDriverClientTrace@@QEAAXAEBU_GUID@@AEBUSPATIAL_NODE_ID@@@Z @ 0x18016059C (-NodePropertyCache_RemoveNode_@HolographicDriverClientTrace@@QEAAXAEBU_GUID@@AEBUSPATIAL_NODE_ID.c)
 *     ?PropertyUpdatedListenerThreadProcV2@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJXZ @ 0x180162598 (-PropertyUpdatedListenerThreadProcV2@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAA.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800350C8 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18003C4E0 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByRef<16>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 *a5,
        __int64 *a6)
{
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+30h] [rbp-58h] BYREF
  __int64 v8; // [rsp+50h] [rbp-38h]
  int v9; // [rsp+58h] [rbp-30h]
  int v10; // [rsp+5Ch] [rbp-2Ch]
  __int64 v11; // [rsp+60h] [rbp-28h]
  int v12; // [rsp+68h] [rbp-20h]
  int v13; // [rsp+6Ch] [rbp-1Ch]

  v11 = *a6;
  v13 = 0;
  v12 = 16;
  v8 = *a5;
  v10 = 0;
  v9 = 16;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, 0LL, 0LL, 4u, &v7);
}
