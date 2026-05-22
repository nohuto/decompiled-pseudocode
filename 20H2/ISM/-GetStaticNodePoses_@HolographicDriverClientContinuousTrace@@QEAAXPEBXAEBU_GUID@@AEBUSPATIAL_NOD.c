/*
 * XREFs of ?GetStaticNodePoses_@HolographicDriverClientContinuousTrace@@QEAAXPEBXAEBU_GUID@@AEBUSPATIAL_NODE_ID@@KPEBU3@PEBUSPATIAL_GRAPH_STATIC_NODE_POSE@@@Z @ 0x18015E8B0
 * Callers:
 *     ??$GetStaticNodePoses@PEAVSpatialGraphDriverClient@Holographic@Internal@Windows@@AEBU_GUID@@AEBUSPATIAL_NODE_ID@@AEAKAEAPEBU6@AEAPEAUSPATIAL_GRAPH_STATIC_NODE_POSE@@@HolographicDriverClientContinuousTrace@@SAX$$QEAPEAVSpatialGraphDriverClient@Holographic@Internal@Windows@@AEBU_GUID@@AEBUSPATIAL_NODE_ID@@AEAKAEAPEBU6@AEAPEAUSPATIAL_GRAPH_STATIC_NODE_POSE@@@Z @ 0x18014ED14 (--$GetStaticNodePoses@PEAVSpatialGraphDriverClient@Holographic@Internal@Windows@@AEBU_GUID@@AEBU.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800190D0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByRef@$0BA@@@U2@U?$_tlgWrapperArray@$0BA@@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByRef@$0BA@@@4AEBU?$_tlgWrapperArray@$0BA@@@@Z @ 0x1801507AC (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByRef@$0BA@@@U2@U-$_tlgWrapperArray@$0BA@@@@-$_t.c)
 *     ?get@?$static_lazy@VHolographicDriverClientContinuousTrace@@@details@wil@@QEAAPEAVHolographicDriverClientContinuousTrace@@P6AXXZ@Z @ 0x180167A2C (-get@-$static_lazy@VHolographicDriverClientContinuousTrace@@@details@wil@@QEAAPEAVHolographicDri.c)
 */

void __fastcall HolographicDriverClientContinuousTrace::GetStaticNodePoses_(
        HolographicDriverClientContinuousTrace *this,
        __int64 a2,
        const struct _GUID *a3,
        const struct SPATIAL_NODE_ID *a4,
        __int16 a5,
        const struct SPATIAL_NODE_ID *a6,
        const struct SPATIAL_GRAPH_STATIC_NODE_POSE *a7)
{
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r10
  __int64 v14; // [rsp+40h] [rbp-28h] BYREF
  __int64 v15; // [rsp+48h] [rbp-20h] BYREF
  __int16 v16; // [rsp+50h] [rbp-18h]
  __int64 v17; // [rsp+70h] [rbp+8h] BYREF

  v17 = (__int64)this;
  v10 = wil::details::static_lazy<HolographicDriverClientContinuousTrace>::get(
          this,
          _lambda_fbd0f72fdb52924b760b88d2d8805198_::_lambda_invoker_cdecl_);
  if ( **(_DWORD **)(v10 + 8) > 5u && tlgKeywordOn(*(_QWORD *)(v10 + 8), 2LL) )
  {
    v15 = (__int64)a6;
    v16 = a5;
    v17 = (__int64)a4;
    a7 = (const struct SPATIAL_GRAPH_STATIC_NODE_POSE *)a3;
    v14 = a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByRef<16>,_tlgWrapperByRef<16>,_tlgWrapperArray<16>>(
      v13,
      byte_1801D0699,
      v11,
      v12,
      (__int64)&v14,
      (__int64 *)&a7,
      &v17,
      &v15);
  }
}
