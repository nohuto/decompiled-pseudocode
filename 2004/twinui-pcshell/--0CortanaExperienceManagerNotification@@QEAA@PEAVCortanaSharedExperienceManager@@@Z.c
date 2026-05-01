/*
 * XREFs of ??0CortanaExperienceManagerNotification@@QEAA@PEAVCortanaSharedExperienceManager@@@Z @ 0x1801B70EC
 * Callers:
 *     ?RuntimeClassInitialize@CortanaSharedExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1801BAF7C (-RuntimeClassInitialize@CortanaSharedExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

CortanaExperienceManagerNotification *__fastcall CortanaExperienceManagerNotification::CortanaExperienceManagerNotification(
        CortanaExperienceManagerNotification *this,
        struct CortanaSharedExperienceManager *a2)
{
  CortanaExperienceManagerNotification *result; // rax

  *((_QWORD *)this + 5) = 1LL;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,TwinUI::Cortana::ICortanaExperienceManagerNotification,Windows::Foundation::IClosable>::`vftable'{for `IInspectable'};
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,TwinUI::Cortana::ICortanaExperienceManagerNotification,Windows::Foundation::IClosable>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,TwinUI::Cortana::ICortanaExperienceManagerNotification,IWeakReferenceSource,Windows::Foundation::IClosable>'};
  *((_QWORD *)this + 2) = &CortanaExperienceManagerNotification::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 3) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,TwinUI::Cortana::ICortanaExperienceManagerNotification,Windows::Foundation::IClosable>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Foundation::IClosable>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *((_BYTE *)this + 48) = 0;
  *(_QWORD *)this = &CortanaExperienceManagerNotification::`vftable'{for `IInspectable'};
  *((_QWORD *)this + 1) = &CortanaExperienceManagerNotification::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,TwinUI::Cortana::ICortanaExperienceManagerNotification,IWeakReferenceSource,Windows::Foundation::IClosable>'};
  *((_QWORD *)this + 2) = &CortanaExperienceManagerNotification::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 3) = &CortanaExperienceManagerNotification::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Foundation::IClosable>'};
  result = this;
  *((_QWORD *)this + 7) = a2;
  return result;
}
