/*
 * XREFs of ?DynamicNodePoseValidityChanged_@HolographicDriverClientContinuousTrace@@QEAAXPEBXAEBUSPATIAL_NODE_ID@@W4SPATIAL_TRACKING_VALIDITY_FLAGS@@_N@Z @ 0x18015BADC
 * Callers:
 *     ??$DynamicNodePoseValidityChanged@PEAVSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@AEBUSPATIAL_NODE_ID@@AEAW4SPATIAL_TRACKING_VALIDITY_FLAGS@@AEB_N@HolographicDriverClientContinuousTrace@@SAX$$QEAPEAVSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@AEBUSPATIAL_NODE_ID@@AEAW4SPATIAL_TRACKING_VALIDITY_FLAGS@@AEB_N@Z @ 0x18014E2D0 (--$DynamicNodePoseValidityChanged@PEAVSpatialGraphDriverHandleWrapper@Holographic@Internal@Windo.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180035138 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18003C560 (__security_check_cookie.c)
 *     ?get@?$static_lazy@VHolographicDriverClientContinuousTrace@@@details@wil@@QEAAPEAVHolographicDriverClientContinuousTrace@@P6AXXZ@Z @ 0x180167A2C (-get@-$static_lazy@VHolographicDriverClientContinuousTrace@@@details@wil@@QEAAPEAVHolographicDri.c)
 */

int __fastcall HolographicDriverClientContinuousTrace::DynamicNodePoseValidityChanged_(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5)
{
  __int64 v8; // rax
  _DWORD *v9; // rcx
  char v11; // [rsp+38h] [rbp-31h] BYREF
  int v12; // [rsp+3Ch] [rbp-2Dh] BYREF
  __int64 v13; // [rsp+40h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+48h] [rbp-21h] BYREF
  __int64 *v15; // [rsp+68h] [rbp-1h]
  __int64 v16; // [rsp+70h] [rbp+7h]
  __int64 v17; // [rsp+78h] [rbp+Fh]
  __int64 v18; // [rsp+80h] [rbp+17h]
  int *v19; // [rsp+88h] [rbp+1Fh]
  __int64 v20; // [rsp+90h] [rbp+27h]
  char *v21; // [rsp+98h] [rbp+2Fh]
  __int64 v22; // [rsp+A0h] [rbp+37h]

  v8 = wil::details::static_lazy<HolographicDriverClientContinuousTrace>::get(
         a1,
         _lambda_fbd0f72fdb52924b760b88d2d8805198_::_lambda_invoker_cdecl_);
  v9 = *(_DWORD **)(v8 + 8);
  if ( *v9 > 4u )
  {
    v11 = a5;
    v12 = a4;
    v21 = &v11;
    v13 = a2;
    v19 = &v12;
    v15 = &v13;
    v22 = 1LL;
    v20 = 4LL;
    v17 = a3;
    v18 = 16LL;
    v16 = 8LL;
    LODWORD(v8) = tlgWriteTransfer_EventWriteTransfer(
                    (__int64)v9,
                    (unsigned __int8 *)dword_1801CED06,
                    0LL,
                    0LL,
                    6u,
                    &v14);
  }
  return v8;
}
