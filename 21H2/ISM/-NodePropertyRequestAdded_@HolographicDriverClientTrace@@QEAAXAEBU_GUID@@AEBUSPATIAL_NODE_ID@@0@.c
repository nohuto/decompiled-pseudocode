/*
 * XREFs of ?NodePropertyRequestAdded_@HolographicDriverClientTrace@@QEAAXAEBU_GUID@@AEBUSPATIAL_NODE_ID@@0@Z @ 0x180160C50
 * Callers:
 *     ?AddNodePropertyRequests@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAXAEAVHolographicDriverHandleWrapper@234@AEBUSPATIAL_NODE_ID@@@Z @ 0x180159920 (-AddNodePropertyRequests@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAXAEAVHologra.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180018D80 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800350B8 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18003C220 (__security_check_cookie.c)
 *     ?get@?$static_lazy@VHolographicDriverClientTrace@@@details@wil@@QEAAPEAVHolographicDriverClientTrace@@P6AXXZ@Z @ 0x180167F94 (-get@-$static_lazy@VHolographicDriverClientTrace@@@details@wil@@QEAAPEAVHolographicDriverClientT.c)
 */

void __fastcall HolographicDriverClientTrace::NodePropertyRequestAdded_(
        HolographicDriverClientTrace *this,
        const struct _GUID *a2,
        const struct SPATIAL_NODE_ID *a3,
        const struct _GUID *a4)
{
  __int64 v7; // rax
  __int64 v8; // r10
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+30h] [rbp-68h] BYREF
  const struct _GUID *v10; // [rsp+50h] [rbp-48h]
  __int64 v11; // [rsp+58h] [rbp-40h]
  const struct SPATIAL_NODE_ID *v12; // [rsp+60h] [rbp-38h]
  __int64 v13; // [rsp+68h] [rbp-30h]
  const struct _GUID *v14; // [rsp+70h] [rbp-28h]
  __int64 v15; // [rsp+78h] [rbp-20h]

  v7 = wil::details::static_lazy<HolographicDriverClientTrace>::get(
         this,
         _lambda_9dbe22df4b880a8e911c86b950d68f95_::_lambda_invoker_cdecl_);
  if ( **(_DWORD **)(v7 + 8) > 4u && tlgKeywordOn(*(_QWORD *)(v7 + 8), 2LL) )
  {
    v14 = a4;
    v15 = 16LL;
    v12 = a3;
    v13 = 16LL;
    v10 = a2;
    v11 = 16LL;
    tlgWriteTransfer_EventWriteTransfer(v8, (unsigned __int8 *)dword_1801D094B, 0LL, 0LL, 5u, &v9);
  }
}
