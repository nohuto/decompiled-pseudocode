/*
 * XREFs of ??0SpatialInteractionEyeGazeObjectDevice@SpatialInteractions@Internal@Windows@@QEAA@XZ @ 0x1800D5AEC
 * Callers:
 *     ??$MakeAndInitialize@VSpatialInteractionEyeGazeObjectDevice@SpatialInteractions@Internal@Windows@@V1234@AEAPEAUISpatialInteractionSourceDeviceCollectionInternal@234@AEAPEAUISpatialObjectDDIClientFactory@Holographic@34@AEAPEB_WPEAUISpatialObjectDevice@734@PEAUISpatialObject@734@@Details@WRL@Microsoft@@YAJPEAPEAVSpatialInteractionEyeGazeObjectDevice@SpatialInteractions@Internal@Windows@@AEAPEAUISpatialInteractionSourceDeviceCollectionInternal@456@AEAPEAUISpatialObjectDDIClientFactory@Holographic@56@AEAPEB_W$$QEAPEAUISpatialObjectDevice@956@$$QEAPEAUISpatialObject@956@@Z @ 0x1800D4CB0 (--$MakeAndInitialize@VSpatialInteractionEyeGazeObjectDevice@SpatialInteractions@Internal@Windows.c)
 * Callees:
 *     ??0SpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@QEAA@XZ @ 0x1800D5BB8 (--0SpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@QEAA@XZ.c)
 */

Windows::Internal::SpatialInteractions::SpatialInteractionEyeGazeObjectDevice *__fastcall Windows::Internal::SpatialInteractions::SpatialInteractionEyeGazeObjectDevice::SpatialInteractionEyeGazeObjectDevice(
        Windows::Internal::SpatialInteractions::SpatialInteractionEyeGazeObjectDevice *this)
{
  Windows::Internal::SpatialInteractions::SpatialInteractionObjectDevice::SpatialInteractionObjectDevice(this);
  *(_QWORD *)this = &Windows::Internal::SpatialInteractions::SpatialInteractionEyeGazeObjectDevice::`vftable'{for `IInspectable'};
  *((_QWORD *)this + 1) = &Windows::Internal::SpatialInteractions::SpatialInteractionEyeGazeObjectDevice::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Internal::Holographic::ISpatialObjectWatcherCallback,IWeakReferenceSource,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 2) = &Windows::Internal::SpatialInteractions::SpatialInteractionObjectDevice::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 3) = &Windows::Internal::SpatialInteractions::SpatialInteractionObjectDevice::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_DWORD *)this + 58) = 0;
  return this;
}
