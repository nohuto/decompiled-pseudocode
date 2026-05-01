/*
 * XREFs of ??$MakeAndInitialize@VVirtualDesktopItemFactory@@V1@AEAPEAUIVirtualDesktopManagerInternal@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopItemFactory@@AEAPEAUIVirtualDesktopManagerInternal@@@Z @ 0x1803924A0
 * Callers:
 *     ?VirtualDesktopItemFactory_CreateInstance@@YAJPEAUIVirtualDesktopManagerInternal@@AEBU_GUID@@PEAPEAX@Z @ 0x1803925F0 (-VirtualDesktopItemFactory_CreateInstance@@YAJPEAUIVirtualDesktopManagerInternal@@AEBU_GUID@@PEA.c)
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180010000 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008D2D4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicationViewIconLoaderNotifications@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x180139F2C (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicat.c)
 *     ?InternalRelease@?$ComPtr@VSwitchItemFactory@@@WRL@Microsoft@@IEAAKXZ @ 0x18035E40C (-InternalRelease@-$ComPtr@VSwitchItemFactory@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIObservableObjectArrayChanged@@@Details@WRL@Microsoft@@IEAA@XZ @ 0x18037D960 (--0-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIObservableObjectArray.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<VirtualDesktopItemFactory,VirtualDesktopItemFactory,IVirtualDesktopManagerInternal * &>(
        __int64 *a1,
        __int64 *a2)
{
  unsigned int v2; // edi
  IApplicationViewChangeListener *v5; // rax
  __int64 v6; // rbx
  volatile int *v7; // rdx
  volatile int *v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  *a1 = 0LL;
  v5 = (IApplicationViewChangeListener *)operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = (__int64)v5;
  if ( v5 )
  {
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IObservableObjectArrayChanged>::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IObservableObjectArrayChanged>(v5);
    *(_QWORD *)v6 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ISwitchItemFactory>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    v9 = (volatile int *)v6;
    *(_QWORD *)v6 = &VirtualDesktopItemFactory::`vftable';
    *(_QWORD *)(v6 + 16) = 0LL;
    Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)(v6 + 16), *a2);
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IApplicationViewIconLoaderNotifications>::InternalAddRef(
      v6,
      v7);
    *a1 = v6;
    Microsoft::WRL::ComPtr<SwitchItemFactory>::InternalRelease(&v9);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v2;
}
