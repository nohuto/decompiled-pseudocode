/*
 * XREFs of ?GetStaticNodeForPose_@HolographicDriverClientContinuousTrace@@QEAAXPEBXAEBU_GUID@@AEBUSPATIAL_NODE_ID@@AEBUXMFLOAT4X3@DirectX@@2@Z @ 0x18015E608
 * Callers:
 *     ??$GetStaticNodeForPose@PEAVSpatialGraphDriverClient@Holographic@Internal@Windows@@AEBU_GUID@@AEBUSPATIAL_NODE_ID@@AEBUXMFLOAT4X3@DirectX@@AEAU6@@HolographicDriverClientContinuousTrace@@SAX$$QEAPEAVSpatialGraphDriverClient@Holographic@Internal@Windows@@AEBU_GUID@@AEBUSPATIAL_NODE_ID@@AEBUXMFLOAT4X3@DirectX@@AEAU6@@Z @ 0x18014ED34 (--$GetStaticNodeForPose@PEAVSpatialGraphDriverClient@Holographic@Internal@Windows@@AEBU_GUID@@AE.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800190A0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByRef@$0BA@@@U2@U_tlgWrapperPtrSize@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByRef@$0BA@@@4AEBU_tlgWrapperPtrSize@@4@Z @ 0x180150994 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByRef@$0BA@@@U2@U_tlgWrapperPtrSize@@U2@@-$_tlgW.c)
 *     ?get@?$static_lazy@VHolographicDriverClientContinuousTrace@@@details@wil@@QEAAPEAVHolographicDriverClientContinuousTrace@@P6AXXZ@Z @ 0x180167ABC (-get@-$static_lazy@VHolographicDriverClientContinuousTrace@@@details@wil@@QEAAPEAVHolographicDri.c)
 */

void __fastcall HolographicDriverClientContinuousTrace::GetStaticNodeForPose_(
        HolographicDriverClientContinuousTrace *this,
        __int64 a2,
        const struct _GUID *a3,
        const struct SPATIAL_NODE_ID *a4,
        const struct DirectX::XMFLOAT4X3 *a5,
        const struct SPATIAL_NODE_ID *a6)
{
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r10
  __int64 v13; // [rsp+50h] [rbp-38h] BYREF
  __int64 v14; // [rsp+58h] [rbp-30h] BYREF
  __int64 v15; // [rsp+60h] [rbp-28h] BYREF
  __int64 v16; // [rsp+68h] [rbp-20h] BYREF
  int v17; // [rsp+70h] [rbp-18h]
  __int64 v18; // [rsp+90h] [rbp+8h] BYREF

  v18 = (__int64)this;
  v9 = wil::details::static_lazy<HolographicDriverClientContinuousTrace>::get(
         this,
         _lambda_fbd0f72fdb52924b760b88d2d8805198_::_lambda_invoker_cdecl_);
  if ( **(_DWORD **)(v9 + 8) > 4u && tlgKeywordOn(*(_QWORD *)(v9 + 8), 2LL) )
  {
    v18 = (__int64)a6;
    v16 = (__int64)a5;
    v17 = 48;
    v13 = (__int64)a4;
    v14 = (__int64)a3;
    v15 = a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByRef<16>,_tlgWrapperByRef<16>,_tlgWrapperPtrSize,_tlgWrapperByRef<16>>(
      v12,
      byte_1801CEEEB,
      v10,
      v11,
      (__int64)&v15,
      &v14,
      &v13,
      &v16,
      &v18);
  }
}
