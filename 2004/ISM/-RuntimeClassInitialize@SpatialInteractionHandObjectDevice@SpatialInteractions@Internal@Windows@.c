/*
 * XREFs of ?RuntimeClassInitialize@SpatialInteractionHandObjectDevice@SpatialInteractions@Internal@Windows@@QEAAJPEAUISpatialInteractionSourceDeviceCollectionInternal@234@PEAUISpatialObjectDDIClientFactory@Holographic@34@PEB_WPEAUISpatialObjectDevice@734@PEAUISpatialObject@734@@Z @ 0x1800E14F0
 * Callers:
 *     ??$MakeAndInitialize@VSpatialInteractionHandObjectDevice@SpatialInteractions@Internal@Windows@@V1234@AEAPEAUISpatialInteractionSourceDeviceCollectionInternal@234@AEAPEAUISpatialObjectDDIClientFactory@Holographic@34@AEAPEB_WPEAUISpatialObjectDevice@734@PEAUISpatialObject@734@@Details@WRL@Microsoft@@YAJPEAPEAVSpatialInteractionHandObjectDevice@SpatialInteractions@Internal@Windows@@AEAPEAUISpatialInteractionSourceDeviceCollectionInternal@456@AEAPEAUISpatialObjectDDIClientFactory@Holographic@56@AEAPEB_W$$QEAPEAUISpatialObjectDevice@956@$$QEAPEAUISpatialObject@956@@Z @ 0x1800D4904 (--$MakeAndInitialize@VSpatialInteractionHandObjectDevice@SpatialInteractions@Internal@Windows@@V.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035770 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UISpatialObject@Holographic@Internal@Windows@@@WRL@Microsoft@@QEAAAEAV012@PEAUISpatialObject@Holographic@Internal@Windows@@@Z @ 0x1800752F8 (--4-$ComPtr@UISpatialObject@Holographic@Internal@Windows@@@WRL@Microsoft@@QEAAAEAV012@PEAUISpati.c)
 *     ?RuntimeClassInitialize@SpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@IEAAJPEAUISpatialInteractionSourceDeviceCollectionInternal@234@PEAUISpatialObjectDDIClientFactory@Holographic@34@PEB_WPEAUISpatialObjectDevice@734@@Z @ 0x1800D85D8 (-RuntimeClassInitialize@SpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@IEA.c)
 */

__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionHandObjectDevice::RuntimeClassInitialize(
        Windows::Internal::SpatialInteractions::SpatialInteractionHandObjectDevice *this,
        struct Windows::Internal::SpatialInteractions::ISpatialInteractionSourceDeviceCollectionInternal *a2,
        struct Windows::Internal::Holographic::ISpatialObjectDDIClientFactory *a3,
        const wchar_t *a4,
        struct Windows::Internal::Holographic::ISpatialObjectDevice *a5,
        struct Windows::Internal::Holographic::ISpatialObject *a6)
{
  int v7; // eax
  unsigned int v8; // ebx
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
    Microsoft::WRL::ComPtr<Windows::Internal::Holographic::ISpatialObject>::operator=((__int64 *)this + 25, (__int64)a6);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x342,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\hands\\spatialinteractionsourcehand.cpp",
      (const char *)(unsigned int)v7);
    return v8;
  }
}
