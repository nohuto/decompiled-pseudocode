/*
 * XREFs of ?EnsureDynamicNodeInfo@SpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@IEAAJPEAUISpatialGraphDriverClient@Holographic@34@PEAUDynamicNodeInfo@634@@Z @ 0x1800D7184
 * Callers:
 *     ?StartTracking@SpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@UEAAJPEAUISpatialGraphNodeReferenceFactory@Holographic@34@PEAUISpatialGraphDriverClient@634@PEAUHSTRING__@@W4SPATIAL_TRACKING_STATE@@@Z @ 0x1800D9210 (-StartTracking@SpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@UEAAJPEAUISp.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035770 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 *     ?GetDynamicNodeInfo@SpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@QEBA_NPEAUDynamicNodeInfo@Holographic@34@@Z @ 0x1800CFE74 (-GetDynamicNodeInfo@SpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@QEBA_NP.c)
 *     _lambda_8af77e303c344d221a281039b3d8ff10_::operator() @ 0x1800D65E8 (_lambda_8af77e303c344d221a281039b3d8ff10_--operator().c)
 *     ?SetDynamicNodeInfo@SpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@QEAAXAEBUDynamicNodeInfo@Holographic@34@@Z @ 0x1800D87B0 (-SetDynamicNodeInfo@SpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@QEAAXAE.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceObject::EnsureDynamicNodeInfo(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceObject *this,
        struct Windows::Internal::Holographic::ISpatialGraphDriverClient *a2,
        struct Windows::Internal::Holographic::DynamicNodeInfo *a3)
{
  int v6; // ebx
  __int64 v7; // rdx
  _QWORD v9[3]; // [rsp+20h] [rbp-20h] BYREF
  char v10; // [rsp+38h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  unsigned int v12; // [rsp+78h] [rbp+38h] BYREF

  v12 = 0;
  if ( !Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice::GetDynamicNodeInfo(this, a3) )
  {
    v9[0] = this;
    v9[1] = &v12;
    v9[2] = a3;
    v10 = 1;
    v6 = (*(__int64 (__fastcall **)(Windows::Internal::SpatialInteractions::SpatialInteractionSourceObject *, struct Windows::Internal::Holographic::DynamicNodeInfo *))(*(_QWORD *)this + 256LL))(
           this,
           a3);
    v12 = v6;
    if ( v6 < 0 )
    {
      if ( v6 != -2147024846 )
      {
        v7 = 118LL;
LABEL_9:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v7,
          (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ddidevices\\spatialinteractionobjectdevice.cpp",
          (const char *)(unsigned int)v6);
        goto LABEL_10;
      }
      goto LABEL_10;
    }
    v6 = (*(__int64 (__fastcall **)(struct Windows::Internal::Holographic::ISpatialGraphDriverClient *, struct Windows::Internal::Holographic::DynamicNodeInfo *, char *))(*(_QWORD *)a2 + 144LL))(
           a2,
           a3,
           (char *)a3 + 16);
    v12 = v6;
    if ( v6 < 0 )
    {
      if ( v6 != -2147024846 )
      {
        v7 = 119LL;
        goto LABEL_9;
      }
      v6 = -2147024846;
LABEL_10:
      v10 = 0;
      lambda_8af77e303c344d221a281039b3d8ff10_::operator()(v9);
      return (unsigned int)v6;
    }
    Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice::SetDynamicNodeInfo(this, a3);
    v10 = 0;
    lambda_8af77e303c344d221a281039b3d8ff10_::operator()(v9);
  }
  return v12;
}
