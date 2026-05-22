/*
 * XREFs of ??0SpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@QEAA@XZ @ 0x1800D56F8
 * Callers:
 *     ??0SpatialInteractionEyeGazeObjectDevice@SpatialInteractions@Internal@Windows@@QEAA@XZ @ 0x1800D562C (--0SpatialInteractionEyeGazeObjectDevice@SpatialInteractions@Internal@Windows@@QEAA@XZ.c)
 *     ??0SpatialInteractionHandObjectDevice@SpatialInteractions@Internal@Windows@@QEAA@XZ @ 0x1800D569C (--0SpatialInteractionHandObjectDevice@SpatialInteractions@Internal@Windows@@QEAA@XZ.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x18002B39C (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 *     ??0?$_Hash@V?$_Umap_traits@U_GUID@@V?$shared_ptr@VSpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@@std@@V?$_Uhash_compare@U_GUID@@UGuidHash@SpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@U?$equal_to@U_GUID@@@std@@@3@V?$allocator@U?$pair@$$CBU_GUID@@V?$shared_ptr@VSpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@@std@@@std@@@3@$0A@@std@@@std@@QEAA@AEBV?$_Uhash_compare@U_GUID@@UGuidHash@SpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@U?$equal_to@U_GUID@@@std@@@1@AEBV?$allocator@U?$pair@$$CBU_GUID@@V?$shared_ptr@VSpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@@std@@@std@@@1@@Z @ 0x1800D5574 (--0-$_Hash@V-$_Umap_traits@U_GUID@@V-$shared_ptr@VSpatialInteractionSourceObject@SpatialInteract.c)
 */

// Hidden C++ exception states: #wind=5
RTL_SRWLOCK *__fastcall Windows::Internal::SpatialInteractions::SpatialInteractionObjectDevice::SpatialInteractionObjectDevice(
        RTL_SRWLOCK *this)
{
  int v3; // [rsp+38h] [rbp+10h] BYREF
  int v4; // [rsp+3Ch] [rbp+14h]

  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)&this[3]);
  this[8].Ptr = (PVOID)1;
  this->Ptr = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Holographic::ISpatialObjectWatcherCallback,Microsoft::WRL::FtmBase>::`vftable'{for `IInspectable'};
  this[1].Ptr = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Holographic::ISpatialObjectWatcherCallback,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Internal::Holographic::ISpatialObjectWatcherCallback,IWeakReferenceSource,Microsoft::WRL::FtmBase>'};
  this[2].Ptr = &Windows::Internal::SpatialInteractions::SpatialInteractionObjectDevice::`vftable'{for `IWeakReferenceSource'};
  this[3].Ptr = &Windows::Internal::SpatialInteractions::SpatialInteractionObjectDevice::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  this->Ptr = &Windows::Internal::SpatialInteractions::SpatialInteractionObjectDevice::`vftable'{for `IInspectable'};
  this[1].Ptr = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Holographic::ISpatialObjectWatcherCallback,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Internal::Holographic::ISpatialObjectWatcherCallback,IWeakReferenceSource,Microsoft::WRL::FtmBase>'};
  this[2].Ptr = &Windows::Internal::SpatialInteractions::SpatialInteractionObjectDevice::`vftable'{for `IWeakReferenceSource'};
  this[3].Ptr = &Windows::Internal::SpatialInteractions::SpatialInteractionObjectDevice::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  this[9].Ptr = 0LL;
  this[12].Ptr = 0LL;
  this[13].Ptr = (PVOID)7;
  LOWORD(this[10].Ptr) = 0;
  this[14].Ptr = 0LL;
  this[15].Ptr = 0LL;
  v4 = (unsigned __int64)&this[16] >> 32;
  v3 = 0;
  std::_Hash<std::_Umap_traits<_GUID,std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceObject>,std::_Uhash_compare<_GUID,Windows::Internal::SpatialInteractions::SpatialInteractionObjectDevice::GuidHash,std::equal_to<_GUID>>,std::allocator<std::pair<_GUID const,std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceObject>>>,0>>::_Hash<std::_Umap_traits<_GUID,std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceObject>,std::_Uhash_compare<_GUID,Windows::Internal::SpatialInteractions::SpatialInteractionObjectDevice::GuidHash,std::equal_to<_GUID>>,std::allocator<std::pair<_GUID const,std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceObject>>>,0>>(
    (__int64)&this[16],
    &v3);
  InitializeSRWLock(this + 24);
  return this;
}
