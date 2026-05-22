/*
 * XREFs of ??0SpatialRimDevice@SpatialInteractions@Internal@Windows@@QEAA@XZ @ 0x18009258C
 * Callers:
 *     ??$MakeAndInitialize@VSpatialRimDevice@SpatialInteractions@Internal@Windows@@UIHidDevice@234@AEAPEAVHIDDevice@@AEAPEAX@Details@WRL@Microsoft@@YAJPEAPEAUIHidDevice@SpatialInteractions@Internal@Windows@@AEAPEAVHIDDevice@@AEAPEAX@Z @ 0x180090E94 (--$MakeAndInitialize@VSpatialRimDevice@SpatialInteractions@Internal@Windows@@UIHidDevice@234@AEA.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x18002B2F4 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     memset_0 @ 0x18003C200 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 */

Windows::Internal::SpatialInteractions::SpatialRimDevice *__fastcall Windows::Internal::SpatialInteractions::SpatialRimDevice::SpatialRimDevice(
        Windows::Internal::SpatialInteractions::SpatialRimDevice *this)
{
  _QWORD *v2; // rdi

  v2 = (_QWORD *)((char *)this + 8);
  Microsoft::WRL::FtmBase::FtmBase((Windows::Internal::SpatialInteractions::SpatialRimDevice *)((char *)this + 8));
  *((_DWORD *)this + 11) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::SpatialInteractions::IHidDevice,Microsoft::WRL::FtmBase>::`vftable'{for `Windows::Internal::SpatialInteractions::IHidDevice'};
  *v2 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::SpatialInteractions::IHidDevice,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &Windows::Internal::SpatialInteractions::SpatialRimDevice::`vftable'{for `Windows::Internal::SpatialInteractions::IHidDevice'};
  *v2 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::SpatialInteractions::IHidDevice,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *((_DWORD *)this + 13) = 0;
  *((_WORD *)this + 28) = 0;
  *((_QWORD *)this + 8) = 0LL;
  memset_0((char *)this + 72, 0, 0x40uLL);
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = &Microsoft::WRL::Wrappers::HandleT<Microsoft::WRL::Wrappers::HandleTraits::HANDLENullTraits>::`vftable';
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = &Microsoft::WRL::Wrappers::HandleT<Microsoft::WRL::Wrappers::HandleTraits::HANDLENullTraits>::`vftable';
  *((_QWORD *)this + 21) = 0LL;
  return this;
}
