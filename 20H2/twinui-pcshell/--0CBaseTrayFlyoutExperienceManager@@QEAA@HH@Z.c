/*
 * XREFs of ??0CBaseTrayFlyoutExperienceManager@@QEAA@HH@Z @ 0x1800A0134
 * Callers:
 *     ??$MakeAndInitialize@VCBaseTrayFlyoutExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@AEAPEBGAEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@AEAPEBG2@Z @ 0x18009FCAC (--$MakeAndInitialize@VCBaseTrayFlyoutExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ??0CSingleViewShellExperience@@QEAA@PEAVSingleViewShellExperienceEventHandler@@W4Flags@0@@Z @ 0x180473928 (--0CSingleViewShellExperience@@QEAA@PEAVSingleViewShellExperienceEventHandler@@W4Flags@0@@Z.c)
 */

CBaseTrayFlyoutExperienceManager *__fastcall CBaseTrayFlyoutExperienceManager::CBaseTrayFlyoutExperienceManager(
        CBaseTrayFlyoutExperienceManager *this)
{
  CBaseTrayFlyoutExperienceManager *result; // rax

  *((_QWORD *)this + 5) = 1LL;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,ILightDismissNotification,IInputHostLayoutChanges>::`vftable'{for `IInspectable'};
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,ILightDismissNotification,IInputHostLayoutChanges>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,ILightDismissNotification,IWeakReferenceSource,IInputHostLayoutChanges>'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,ILightDismissNotification,IInputHostLayoutChanges>::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 3) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,ILightDismissNotification,IInputHostLayoutChanges>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IInputHostLayoutChanges>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &CBaseTrayFlyoutExperienceManager::`vftable'{for `IInspectable'};
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 1) = &CBaseTrayFlyoutExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,ILightDismissNotification,IWeakReferenceSource,IInputHostLayoutChanges>'};
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,ILightDismissNotification,IInputHostLayoutChanges>::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 3) = &CBaseTrayFlyoutExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IInputHostLayoutChanges>'};
  *((_QWORD *)this + 6) = &CBaseTrayFlyoutExperienceManager::`vftable';
  CSingleViewShellExperience::CSingleViewShellExperience((char *)this + 72, (char *)this + 48, 1LL);
  *((_QWORD *)this + 36) = 0LL;
  result = this;
  *((_DWORD *)this + 74) = 0;
  *((_BYTE *)this + 304) = 0;
  *((_DWORD *)this + 77) = 56;
  *((_DWORD *)this + 70) = 2050;
  *(GUID *)((char *)this + 312) = GUID_NULL;
  *((_QWORD *)this + 41) = 0LL;
  *((_BYTE *)this + 336) = 0;
  *((_DWORD *)this + 85) = 57;
  *(GUID *)((char *)this + 344) = GUID_NULL;
  *((_QWORD *)this + 45) = 0LL;
  *((_QWORD *)this + 47) = 0LL;
  *((_DWORD *)this + 92) = 3;
  *((_QWORD *)this + 48) = 0LL;
  *(_OWORD *)((char *)this + 392) = 0LL;
  *(_OWORD *)((char *)this + 408) = 0LL;
  *(_OWORD *)((char *)this + 424) = 0LL;
  *((_QWORD *)this + 55) = 0LL;
  *((_QWORD *)this + 56) = 0LL;
  *((_QWORD *)this + 57) = 0LL;
  *((_DWORD *)this + 33) = 4;
  *((_WORD *)this + 232) = 0;
  *((_BYTE *)this + 466) = 0;
  *((_DWORD *)this + 117) = 0;
  *((_QWORD *)this + 59) = 0LL;
  return result;
}
