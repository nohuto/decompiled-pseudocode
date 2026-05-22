/*
 * XREFs of ?UpdateNodeErrorStatus@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@QEAAXPEAUISpatialGraphDriverClient@Holographic@34@AEBUSPATIAL_NODE_ID@@@Z @ 0x18016FC70
 * Callers:
 *     ?EnsureDynamicNodeForDevice@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@AEAAJPEAUISpatialGraphDriverClient@Holographic@34@PEAUDynamicNodeInfo@634@PEAK@Z @ 0x18016BCCC (-EnsureDynamicNodeForDevice@SpatialInteractionSourceController@SpatialInteractions@Internal@Wind.c)
 *     ?OnSpatialGraphNodePropertiesUpdated@NodePropertyChangedHandler@SpatialInteractions@Internal@Windows@@UEAAJPEAUISpatialGraphDynamicNodeSource@Holographic@34@AEBUSPATIAL_NODE_ID@@W4SpatialGraphNodePropertyFlags@634@@Z @ 0x18016D3C0 (-OnSpatialGraphNodePropertiesUpdated@NodePropertyChangedHandler@SpatialInteractions@Internal@Win.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 *     ?IsEnabled@SpatialInteractionTrace@SpatialInteractionDevices@@SA_NE_K@Z @ 0x1800C6218 (-IsEnabled@SpatialInteractionTrace@SpatialInteractionDevices@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpatialInteractionTrace@SpatialInteractionDevices@@P6AXXZ@Z @ 0x1800C6E84 (-get@-$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpa.c)
 *     ?NodeStatusError_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXK_KKK@Z @ 0x18016CED4 (-NodeStatusError_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXK_KKK@Z.c)
 *     ?NodeStatusOK_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXK@Z @ 0x18016CF80 (-NodeStatusOK_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXK@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::UpdateNodeErrorStatus(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceController *this,
        struct Windows::Internal::Holographic::ISpatialGraphDriverClient *a2,
        const struct SPATIAL_NODE_ID *a3)
{
  bool v4; // dl
  char *v5; // rcx
  unsigned __int64 v6; // rsi
  char *v7; // r8
  unsigned int v8; // edx
  __int64 v9; // rcx
  SpatialInteractionDevices::SpatialInteractionTrace *v10; // rcx
  __int64 v11; // rcx
  SpatialInteractionDevices::SpatialInteractionTrace *v12; // rcx
  LPVOID pv; // [rsp+30h] [rbp-40h] BYREF
  unsigned __int64 v14; // [rsp+38h] [rbp-38h]
  __int128 v15; // [rsp+40h] [rbp-30h]
  LPVOID *p_pv; // [rsp+50h] [rbp-20h]
  void *v17; // [rsp+58h] [rbp-18h] BYREF
  char v18; // [rsp+60h] [rbp-10h]

  pv = 0LL;
  v14 = 0LL;
  p_pv = &pv;
  v17 = 0LL;
  v18 = 1;
  v4 = (*(int (__fastcall **)(struct Windows::Internal::Holographic::ISpatialGraphDriverClient *, const struct SPATIAL_NODE_ID *, LPVOID *, void **))(*(_QWORD *)a2 + 160LL))(
         a2,
         a3,
         &pv,
         &v17) >= 0;
  if ( v18 )
    p_pv[1] = v17;
  if ( v4 )
  {
    v15 = 0LL;
    *(_OWORD *)((char *)this + 908) = 0LL;
    v5 = (char *)pv;
    v6 = v14;
    v7 = (char *)pv + 16 * v14;
    if ( pv == v7 )
    {
      v8 = *((_DWORD *)this + 227);
    }
    else
    {
      do
      {
        v8 = *(_DWORD *)v5;
        if ( *(_DWORD *)v5 == 33554440 && *((_DWORD *)v5 + 1) == 1 )
        {
          *((_BYTE *)this + 1184) = 1;
          v8 = *(_DWORD *)v5;
        }
        if ( *((_DWORD *)this + 227) >= v8 )
        {
          v8 = *((_DWORD *)this + 227);
        }
        else
        {
          *((_DWORD *)this + 227) = v8;
          *((_DWORD *)this + 228) = *((_DWORD *)v5 + 1);
          *(_QWORD *)((char *)this + 916) = *((_QWORD *)v5 + 1);
        }
        v5 += 16;
      }
      while ( v5 != v7 );
      v6 = v14;
    }
    if ( v8 )
    {
      if ( SpatialInteractionDevices::SpatialInteractionTrace::IsEnabled((__int64)v5) )
      {
        wil::details::static_lazy<SpatialInteractionDevices::SpatialInteractionTrace>::get(
          v11,
          _lambda_169e34f0547c812b04d058e5b6da2245_::_lambda_invoker_cdecl_);
        SpatialInteractionDevices::SpatialInteractionTrace::NodeStatusError_(
          v12,
          *((_DWORD *)this + 2),
          v6,
          *((_DWORD *)this + 227),
          *((_DWORD *)this + 228));
      }
    }
    else if ( SpatialInteractionDevices::SpatialInteractionTrace::IsEnabled((__int64)v5) )
    {
      wil::details::static_lazy<SpatialInteractionDevices::SpatialInteractionTrace>::get(
        v9,
        _lambda_169e34f0547c812b04d058e5b6da2245_::_lambda_invoker_cdecl_);
      SpatialInteractionDevices::SpatialInteractionTrace::NodeStatusOK_(v10, *((_DWORD *)this + 2));
    }
    *((_BYTE *)this + 105) = 1;
  }
  if ( pv )
    CoTaskMemFree(pv);
}
