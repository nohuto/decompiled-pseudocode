/*
 * XREFs of ??0NodePropertyChangedHandler@SpatialInteractions@Internal@Windows@@QEAA@XZ @ 0x180169518
 * Callers:
 *     ??$MakeAndInitialize@VNodePropertyChangedHandler@SpatialInteractions@Internal@Windows@@V1234@PEAVSpatialInteractionSourceController@234@AEBUSPATIAL_NODE_ID@@AEAPEAUISpatialGraphDriverClient@Holographic@34@@Details@WRL@Microsoft@@YAJPEAPEAVNodePropertyChangedHandler@SpatialInteractions@Internal@Windows@@$$QEAPEAVSpatialInteractionSourceController@456@AEBUSPATIAL_NODE_ID@@AEAPEAUISpatialGraphDriverClient@Holographic@56@@Z @ 0x1801683D0 (--$MakeAndInitialize@VNodePropertyChangedHandler@SpatialInteractions@Internal@Windows@@V1234@PEA.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x18002B39C (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 */

RTL_SRWLOCK *__fastcall Windows::Internal::SpatialInteractions::NodePropertyChangedHandler::NodePropertyChangedHandler(
        RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v2; // rdi

  v2 = this + 2;
  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)&this[2]);
  this[7].Ptr = (PVOID)1;
  this->Ptr = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Holographic::ISpatialGraphNodePropertiesUpdatedCallback,Microsoft::WRL::FtmBase>::`vftable';
  this[1].Ptr = &Windows::Internal::SpatialInteractions::NodePropertyChangedHandler::`vftable'{for `IWeakReferenceSource'};
  v2->Ptr = &Windows::Internal::SpatialInteractions::NodePropertyChangedHandler::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  this->Ptr = &Windows::Internal::SpatialInteractions::NodePropertyChangedHandler::`vftable';
  this[1].Ptr = &Windows::Internal::SpatialInteractions::NodePropertyChangedHandler::`vftable'{for `IWeakReferenceSource'};
  v2->Ptr = &Windows::Internal::SpatialInteractions::NodePropertyChangedHandler::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  InitializeSRWLock(this + 10);
  this[11].Ptr = 0LL;
  this[12].Ptr = 0LL;
  LOBYTE(this[13].Ptr) = 0;
  return this;
}
