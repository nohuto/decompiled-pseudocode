/*
 * XREFs of ??0SpatialInteractionHandObjectDevice@SpatialInteractions@Internal@Windows@@QEAA@XZ @ 0x1800D560C
 * Callers:
 *     ??$MakeAndInitialize@VSpatialInteractionHandObjectDevice@SpatialInteractions@Internal@Windows@@V1234@AEAPEAUISpatialInteractionSourceDeviceCollectionInternal@234@AEAPEAUISpatialObjectDDIClientFactory@Holographic@34@AEAPEB_WPEAUISpatialObjectDevice@734@PEAUISpatialObject@734@@Details@WRL@Microsoft@@YAJPEAPEAVSpatialInteractionHandObjectDevice@SpatialInteractions@Internal@Windows@@AEAPEAUISpatialInteractionSourceDeviceCollectionInternal@456@AEAPEAUISpatialObjectDDIClientFactory@Holographic@56@AEAPEB_W$$QEAPEAUISpatialObjectDevice@956@$$QEAPEAUISpatialObject@956@@Z @ 0x1800D4874 (--$MakeAndInitialize@VSpatialInteractionHandObjectDevice@SpatialInteractions@Internal@Windows@@V.c)
 * Callees:
 *     ??0SpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@QEAA@XZ @ 0x1800D5668 (--0SpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@QEAA@XZ.c)
 */

Windows::Internal::SpatialInteractions::SpatialInteractionHandObjectDevice *__fastcall Windows::Internal::SpatialInteractions::SpatialInteractionHandObjectDevice::SpatialInteractionHandObjectDevice(
        Windows::Internal::SpatialInteractions::SpatialInteractionHandObjectDevice *this)
{
  Windows::Internal::SpatialInteractions::SpatialInteractionHandObjectDevice *result; // rax

  Windows::Internal::SpatialInteractions::SpatialInteractionObjectDevice::SpatialInteractionObjectDevice(this);
  *(_QWORD *)this = &Windows::Internal::SpatialInteractions::SpatialInteractionHandObjectDevice::`vftable'{for `IInspectable'};
  *((_QWORD *)this + 1) = &Windows::Internal::SpatialInteractions::SpatialInteractionHandObjectDevice::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Internal::Holographic::ISpatialObjectWatcherCallback,IWeakReferenceSource,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 2) = &Windows::Internal::SpatialInteractions::SpatialInteractionObjectDevice::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 3) = &Windows::Internal::SpatialInteractions::SpatialInteractionObjectDevice::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  result = this;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  return result;
}
