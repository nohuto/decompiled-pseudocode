/*
 * XREFs of ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UILockScreenDirectorServiceProvider@@VCImmersiveShellComponentWithGITSite@@@WRL@Microsoft@@QEAA@XZ @ 0x18021749C
 * Callers:
 *     ??0LockScreenDirectorServiceProviderImpl@@QEAA@XZ @ 0x180217540 (--0LockScreenDirectorServiceProviderImpl@@QEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ILockScreenDirectorServiceProvider,CImmersiveShellComponentWithGITSite>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ILockScreenDirectorServiceProvider,CImmersiveShellComponentWithGITSite>(
        __int64 a1)
{
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_DWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 8) = &CImmersiveShellComponentWithGITSite::`vftable';
  *(_QWORD *)(a1 + 48) = &CImmersiveShellComponentWithGITSite::`vftable'{for `IImmersiveShellComponent'};
  *(_QWORD *)(a1 + 56) = &CImmersiveShellComponentWithSite::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IServiceProvider>'};
  *(_QWORD *)a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ILockScreenDirectorServiceProvider,CImmersiveShellComponentWithGITSite>::`vftable'{for `ILockScreenDirectorServiceProvider'};
  *(_QWORD *)(a1 + 8) = &LockScreenDirectorServiceProviderImpl::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<CImmersiveShellComponentWithGITSite>>'};
  *(_QWORD *)(a1 + 48) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ILockScreenDirectorServiceProvider,CImmersiveShellComponentWithGITSite>::`vftable'{for `IImmersiveShellComponent'};
  *(_QWORD *)(a1 + 56) = &LockScreenDirectorServiceProviderImpl::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IServiceProvider>'};
  *(_DWORD *)(a1 + 124) = 1;
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  return a1;
}
