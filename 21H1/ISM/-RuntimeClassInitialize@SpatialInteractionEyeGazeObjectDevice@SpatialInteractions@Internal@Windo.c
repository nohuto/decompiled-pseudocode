/*
 * XREFs of ?RuntimeClassInitialize@SpatialInteractionEyeGazeObjectDevice@SpatialInteractions@Internal@Windows@@QEAAJPEAUISpatialInteractionSourceDeviceCollectionInternal@234@PEAUISpatialObjectDDIClientFactory@Holographic@34@PEB_WPEAUISpatialObjectDevice@734@PEAUISpatialObject@734@@Z @ 0x1800DC810
 * Callers:
 *     ??$MakeAndInitialize@VSpatialInteractionEyeGazeObjectDevice@SpatialInteractions@Internal@Windows@@V1234@AEAPEAUISpatialInteractionSourceDeviceCollectionInternal@234@AEAPEAUISpatialObjectDDIClientFactory@Holographic@34@AEAPEB_WPEAUISpatialObjectDevice@734@PEAUISpatialObject@734@@Details@WRL@Microsoft@@YAJPEAPEAVSpatialInteractionEyeGazeObjectDevice@SpatialInteractions@Internal@Windows@@AEAPEAUISpatialInteractionSourceDeviceCollectionInternal@456@AEAPEAUISpatialObjectDDIClientFactory@Holographic@56@AEAPEB_W$$QEAPEAUISpatialObjectDevice@956@$$QEAPEAUISpatialObject@956@@Z @ 0x1800D4CB0 (--$MakeAndInitialize@VSpatialInteractionEyeGazeObjectDevice@SpatialInteractions@Internal@Windows.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035710 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UISpatialObject@Holographic@Internal@Windows@@@WRL@Microsoft@@QEAAAEAV012@PEAUISpatialObject@Holographic@Internal@Windows@@@Z @ 0x1800758C8 (--4-$ComPtr@UISpatialObject@Holographic@Internal@Windows@@@WRL@Microsoft@@QEAAAEAV012@PEAUISpati.c)
 *     ?IsEnabled@SpatialInteractionTrace@SpatialInteractionDevices@@SA_NE_K@Z @ 0x1800C66D8 (-IsEnabled@SpatialInteractionTrace@SpatialInteractionDevices@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpatialInteractionTrace@SpatialInteractionDevices@@P6AXXZ@Z @ 0x1800C7344 (-get@-$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpa.c)
 *     ?RuntimeClassInitialize@SpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@IEAAJPEAUISpatialInteractionSourceDeviceCollectionInternal@234@PEAUISpatialObjectDDIClientFactory@Holographic@34@PEB_WPEAUISpatialObjectDevice@734@@Z @ 0x1800D8A98 (-RuntimeClassInitialize@SpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@IEA.c)
 *     ?SpatialInteractionEyeGazeObjectDevice_Added_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXXZ @ 0x1800DC984 (-SpatialInteractionEyeGazeObjectDevice_Added_@SpatialInteractionTrace@SpatialInteractionDevices@.c)
 */

__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionEyeGazeObjectDevice::RuntimeClassInitialize(
        Windows::Internal::SpatialInteractions::SpatialInteractionEyeGazeObjectDevice *this,
        struct Windows::Internal::SpatialInteractions::ISpatialInteractionSourceDeviceCollectionInternal *a2,
        struct Windows::Internal::Holographic::ISpatialObjectDDIClientFactory *a3,
        const wchar_t *a4,
        struct Windows::Internal::Holographic::ISpatialObjectDevice *a5,
        struct Windows::Internal::Holographic::ISpatialObject *a6)
{
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v10; // rcx
  __int64 v11; // rcx
  SpatialInteractionDevices::SpatialInteractionTrace *v12; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v7 = Windows::Internal::SpatialInteractions::SpatialInteractionObjectDevice::RuntimeClassInitialize(
         this,
         a2,
         a3,
         a4,
         a5);
  v8 = v7;
  if ( v7 >= 0 )
  {
    Microsoft::WRL::ComPtr<Windows::Internal::Holographic::ISpatialObject>::operator=((__int64 *)this + 26, (__int64)a6);
    if ( SpatialInteractionDevices::SpatialInteractionTrace::IsEnabled(v10) )
    {
      wil::details::static_lazy<SpatialInteractionDevices::SpatialInteractionTrace>::get(
        v11,
        _lambda_169e34f0547c812b04d058e5b6da2245_::_lambda_invoker_cdecl_);
      SpatialInteractionDevices::SpatialInteractionTrace::SpatialInteractionEyeGazeObjectDevice_Added_(v12);
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3E,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\head\\spatialinteractionhead.cpp",
      (const char *)(unsigned int)v7);
    return v8;
  }
}
