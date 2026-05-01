/*
 * XREFs of ??0CVirtualTouchpadExperienceManager@@QEAA@XZ @ 0x1801E268C
 * Callers:
 *     ??$MakeAndInitialize@VCVirtualTouchpadExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@@Z @ 0x1801E1F08 (--$MakeAndInitialize@VCVirtualTouchpadExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ??0TouchpadLaunched@TouchpadControllerExperienceManagerTelemetry@@QEAA@XZ @ 0x1801E2864 (--0TouchpadLaunched@TouchpadControllerExperienceManagerTelemetry@@QEAA@XZ.c)
 *     ??0CSingleViewShellExperience@@QEAA@PEAVSingleViewShellExperienceEventHandler@@W4Flags@0@@Z @ 0x1804740CC (--0CSingleViewShellExperience@@QEAA@PEAVSingleViewShellExperienceEventHandler@@W4Flags@0@@Z.c)
 */

CVirtualTouchpadExperienceManager *__fastcall CVirtualTouchpadExperienceManager::CVirtualTouchpadExperienceManager(
        CVirtualTouchpadExperienceManager *this)
{
  CVirtualTouchpadExperienceManager *result; // rax

  *((_QWORD *)this + 6) = 1LL;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Shell::Experience::IVirtualTouchpadExperienceManager,IApplicationFrameEventHandler,IScaleChangeSink,Windows::Foundation::IClosable>::`vftable';
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Shell::Experience::IVirtualTouchpadExperienceManager,IApplicationFrameEventHandler,IScaleChangeSink,Windows::Foundation::IClosable>::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Shell::Experience::IVirtualTouchpadExperienceManager,IApplicationFrameEventHandler,IScaleChangeSink,Windows::Foundation::IClosable>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IApplicationFrameEventHandler,IScaleChangeSink,Windows::Foundation::IClosable>'};
  *((_QWORD *)this + 3) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Shell::Experience::IVirtualTouchpadExperienceManager,IApplicationFrameEventHandler,IScaleChangeSink,Windows::Foundation::IClosable>::`vftable'{for `IScaleChangeSink'};
  *((_QWORD *)this + 4) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Shell::Experience::IVirtualTouchpadExperienceManager,IApplicationFrameEventHandler,IScaleChangeSink,Windows::Foundation::IClosable>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Foundation::IClosable>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &CVirtualTouchpadExperienceManager::`vftable'{for `Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Shell::Experience::IVirtualTouchpadExperienceManager,IApplicationFrameEventHandler,IScaleChangeSink,Windows::Foundation::IClosable>'};
  *((_QWORD *)this + 1) = &CVirtualTouchpadExperienceManager::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 2) = &CVirtualTouchpadExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IApplicationFrameEventHandler,IScaleChangeSink,Windows::Foundation::IClosable>'};
  *((_QWORD *)this + 3) = &CVirtualTouchpadExperienceManager::`vftable'{for `IScaleChangeSink'};
  *((_QWORD *)this + 4) = &CVirtualTouchpadExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Foundation::IClosable>'};
  *((_QWORD *)this + 7) = &CVirtualTouchpadExperienceManager::`vftable'{for `SingleViewShellExperienceEventHandler'};
  CSingleViewShellExperience::CSingleViewShellExperience((char *)this + 64, (char *)this + 56, 1LL);
  *((_QWORD *)this + 34) = 0LL;
  *((_DWORD *)this + 70) = 317;
  *((_DWORD *)this + 71) = 420;
  *((_DWORD *)this + 72) = 420;
  *((_DWORD *)this + 73) = 360;
  *((_DWORD *)this + 74) = 4;
  *(_OWORD *)((char *)this + 300) = 0LL;
  *((_WORD *)this + 158) = 0;
  *((_QWORD *)this + 40) = 0LL;
  *((_QWORD *)this + 41) = 0LL;
  *((_QWORD *)this + 42) = 0LL;
  *((_QWORD *)this + 43) = 0LL;
  *((_QWORD *)this + 44) = 0LL;
  *((_QWORD *)this + 45) = 0LL;
  *((_QWORD *)this + 46) = 0LL;
  TouchpadControllerExperienceManagerTelemetry::TouchpadLaunched::TouchpadLaunched((CVirtualTouchpadExperienceManager *)((char *)this + 376));
  *((_BYTE *)this + 688) = 0;
  result = this;
  *((_DWORD *)this + 173) = 15;
  *(GUID *)((char *)this + 696) = GUID_NULL;
  *((_QWORD *)this + 89) = 0LL;
  *((_BYTE *)this + 720) = 0;
  *((_DWORD *)this + 181) = 17;
  *(GUID *)((char *)this + 728) = GUID_NULL;
  *((_QWORD *)this + 93) = 0LL;
  *((_DWORD *)this + 188) = 4;
  *((_QWORD *)this + 95) = 0LL;
  *((_QWORD *)this + 96) = 0LL;
  *((_QWORD *)this + 97) = 0LL;
  *((_QWORD *)this + 98) = 0LL;
  *((_QWORD *)this + 99) = 0LL;
  *((_BYTE *)this + 800) = 0;
  return result;
}
