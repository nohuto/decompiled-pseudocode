/*
 * XREFs of ?StartActivity@CreateSpatialGraphNodeReference@HolographicDriverClientContinuousTrace@@QEAAXAEBU_GUID@@AEBUSPATIAL_NODE_ID@@W4SPATIAL_TRACKING_STATE@@@Z @ 0x180164314
 * Callers:
 *     ?RuntimeClassInitialize@SpatialGraphNodeReference@Holographic@Internal@Windows@@QEAAJAEBV?$shared_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@AEBUDynamicNodeInfo@234@W4SPATIAL_TRACKING_STATE@@USpatialGraphSettings@234@@Z @ 0x1801638D4 (-RuntimeClassInitialize@SpatialGraphNodeReference@Holographic@Internal@Windows@@QEAAJAEBV-$share.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800350C8 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18003C4E0 (__security_check_cookie.c)
 *     ?zInternalRelatedId@?$ActivityBase@VHolographicDriverClientTrace@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x180041140 (-zInternalRelatedId@-$ActivityBase@VHolographicDriverClientTrace@@$0A@$0A@$04$0A@U_TlgReflectorT.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180095DC8 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?get@?$static_lazy@VHolographicDriverClientContinuousTrace@@@details@wil@@QEAAPEAVHolographicDriverClientContinuousTrace@@P6AXXZ@Z @ 0x180167ABC (-get@-$static_lazy@VHolographicDriverClientContinuousTrace@@@details@wil@@QEAAPEAVHolographicDri.c)
 *     ?zInternalStart@?$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180167DA0 (-zInternalStart@-$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04$0A@U_TlgRefl.c)
 */

void __fastcall HolographicDriverClientContinuousTrace::CreateSpatialGraphNodeReference::StartActivity(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4)
{
  __int64 v8; // rcx
  _DWORD *v9; // rdi
  const GUID *v10; // rax
  __int64 v11; // r8
  int v12; // [rsp+38h] [rbp-49h] BYREF
  DWORD CurrentThreadId; // [rsp+3Ch] [rbp-45h] BYREF
  __int64 v14; // [rsp+40h] [rbp-41h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+48h] [rbp-39h] BYREF
  __int64 *v16; // [rsp+68h] [rbp-19h]
  int v17; // [rsp+70h] [rbp-11h]
  int v18; // [rsp+74h] [rbp-Dh]
  DWORD *p_CurrentThreadId; // [rsp+78h] [rbp-9h]
  int v20; // [rsp+80h] [rbp-1h]
  int v21; // [rsp+84h] [rbp+3h]
  __int64 v22; // [rsp+88h] [rbp+7h]
  int v23; // [rsp+90h] [rbp+Fh]
  int v24; // [rsp+94h] [rbp+13h]
  __int64 v25; // [rsp+98h] [rbp+17h]
  int v26; // [rsp+A0h] [rbp+1Fh]
  int v27; // [rsp+A4h] [rbp+23h]
  int *v28; // [rsp+A8h] [rbp+27h]
  int v29; // [rsp+B0h] [rbp+2Fh]
  int v30; // [rsp+B4h] [rbp+33h]

  wil::ActivityBase<HolographicDriverClientContinuousTrace,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart();
  v9 = *(_DWORD **)(wil::details::static_lazy<HolographicDriverClientContinuousTrace>::get(
                      v8,
                      _lambda_fbd0f72fdb52924b760b88d2d8805198_::_lambda_invoker_cdecl_)
                  + 8);
  if ( *v9 > 5u )
  {
    v14 = 0LL;
    CurrentThreadId = GetCurrentThreadId();
    v12 = a4;
    v10 = (const GUID *)wil::ActivityBase<HolographicDriverClientTrace,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(a1);
    v11 = *(_QWORD *)(a1 + 48);
    v30 = 0;
    v27 = 0;
    v24 = 0;
    v21 = 0;
    v18 = 0;
    v28 = &v12;
    v26 = 16;
    v23 = 16;
    p_CurrentThreadId = &CurrentThreadId;
    v16 = &v14;
    v29 = 4;
    v20 = 4;
    v25 = a3;
    v22 = a2;
    v17 = 8;
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)v9,
      (unsigned __int8 *)dword_1801CE8E4,
      (const GUID *)(v11 + 8),
      v10,
      7u,
      &v15);
  }
  if ( !*(_DWORD *)(a1 + 32) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}
