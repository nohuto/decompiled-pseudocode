/*
 * XREFs of ??0CPeopleBarJumpViewExperienceManager@@QEAA@XZ @ 0x1801CDD98
 * Callers:
 *     ??$MakeAndInitialize@VCPeopleBarJumpViewExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@@Z @ 0x1801CDBAC (--$MakeAndInitialize@VCPeopleBarJumpViewExperienceManager@@UIInspectable@@AEAPEAUIServiceProvide.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ??0CSingleViewShellExperience@@QEAA@PEAVSingleViewShellExperienceEventHandler@@W4Flags@0@@Z @ 0x180473928 (--0CSingleViewShellExperience@@QEAA@PEAVSingleViewShellExperienceEventHandler@@W4Flags@0@@Z.c)
 */

CPeopleBarJumpViewExperienceManager *__fastcall CPeopleBarJumpViewExperienceManager::CPeopleBarJumpViewExperienceManager(
        CPeopleBarJumpViewExperienceManager *this)
{
  *((_QWORD *)this + 5) = 1LL;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Shell::Experience::IPeopleBarJumpViewExperienceManager,ILightDismissNotification,Windows::Foundation::IClosable>::`vftable'{for `Windows::Internal::Shell::Experience::IPeopleBarJumpViewExperienceManager'};
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Shell::Experience::IPeopleBarJumpViewExperienceManager,ILightDismissNotification,Windows::Foundation::IClosable>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,ILightDismissNotification,Windows::Foundation::IClosable>'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Shell::Experience::IPeopleBarJumpViewExperienceManager,ILightDismissNotification,Windows::Foundation::IClosable>::`vftable'{for `ILightDismissNotification'};
  *((_QWORD *)this + 3) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Shell::Experience::IPeopleBarJumpViewExperienceManager,ILightDismissNotification,Windows::Foundation::IClosable>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Foundation::IClosable>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &CPeopleBarJumpViewExperienceManager::`vftable'{for `Windows::Internal::Shell::Experience::IPeopleBarJumpViewExperienceManager'};
  *((_QWORD *)this + 1) = &CPeopleBarJumpViewExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,ILightDismissNotification,Windows::Foundation::IClosable>'};
  *((_QWORD *)this + 2) = &CPeopleBarJumpViewExperienceManager::`vftable'{for `ILightDismissNotification'};
  *((_QWORD *)this + 3) = &CPeopleBarJumpViewExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Foundation::IClosable>'};
  *((_QWORD *)this + 6) = &CPeopleBarJumpViewExperienceManager::`vftable';
  CSingleViewShellExperience::CSingleViewShellExperience((char *)this + 56, (char *)this + 48, 2LL);
  *((_QWORD *)this + 33) = 0LL;
  *((_QWORD *)this + 34) = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  *((_QWORD *)this + 36) = 0LL;
  *((_DWORD *)this + 74) = 0;
  *((_QWORD *)this + 39) = 0LL;
  *((_DWORD *)this + 76) = 2050;
  *((_DWORD *)this + 77) = 3;
  *((_OWORD *)this + 20) = 0LL;
  *((_OWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 44) = 0LL;
  *((_QWORD *)this + 45) = 0LL;
  *((_BYTE *)this + 368) = 0;
  *((_DWORD *)this + 93) = 56;
  *(GUID *)((char *)this + 376) = GUID_NULL;
  *((_QWORD *)this + 49) = 0LL;
  *((_BYTE *)this + 400) = 0;
  *((_DWORD *)this + 101) = 57;
  *(GUID *)((char *)this + 408) = GUID_NULL;
  *((_QWORD *)this + 53) = 0LL;
  return this;
}
