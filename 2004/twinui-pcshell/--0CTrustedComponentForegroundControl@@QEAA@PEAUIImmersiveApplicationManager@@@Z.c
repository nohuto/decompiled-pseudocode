/*
 * XREFs of ??0CTrustedComponentForegroundControl@@QEAA@PEAUIImmersiveApplicationManager@@@Z @ 0x1800842E4
 * Callers:
 *     ?s_CreateInstance@CTrustedComponentForegroundControl@@SAJPEAUIImmersiveApplicationManager@@AEBU_GUID@@PEAPEAX@Z @ 0x18008420C (-s_CreateInstance@CTrustedComponentForegroundControl@@SAJPEAUIImmersiveApplicationManager@@AEBU_.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180039C74 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

CTrustedComponentForegroundControl *__fastcall CTrustedComponentForegroundControl::CTrustedComponentForegroundControl(
        CTrustedComponentForegroundControl *this,
        struct IImmersiveApplicationManager *a2)
{
  Microsoft::WRL::FtmBase::FtmBase(this);
  *((_DWORD *)this + 11) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,ITrustedComponentForegroundControl>::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,ITrustedComponentForegroundControl>>'};
  *((_QWORD *)this + 4) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,ITrustedComponentForegroundControl>::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,ITrustedComponentForegroundControl>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,ITrustedComponentForegroundControl>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &CTrustedComponentForegroundControl::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,ITrustedComponentForegroundControl>>'};
  *((_QWORD *)this + 4) = &CTrustedComponentForegroundControl::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,ITrustedComponentForegroundControl>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,ITrustedComponentForegroundControl>>'};
  *((_QWORD *)this + 6) = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct IImmersiveApplicationManager *))(*(_QWORD *)a2 + 8LL))(a2);
  return this;
}
