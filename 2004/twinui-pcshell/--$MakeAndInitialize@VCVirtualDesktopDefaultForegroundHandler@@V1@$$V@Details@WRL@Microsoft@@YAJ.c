/*
 * XREFs of ??$MakeAndInitialize@VCVirtualDesktopDefaultForegroundHandler@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCVirtualDesktopDefaultForegroundHandler@@@Z @ 0x180437B4C
 * Callers:
 *     ?CVirtualDesktopDefaultForegroundHandler_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x180437BF0 (-CVirtualDesktopDefaultForegroundHandler_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCVirtualDesktopDefaultForegroundHandler@@@WRL@Microsoft@@IEAAKXZ @ 0x18008610C (-InternalRelease@-$ComPtr@VCVirtualDesktopDefaultForegroundHandler@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008D2D4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicationViewIconLoaderNotifications@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x180139F2C (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicat.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CVirtualDesktopDefaultForegroundHandler,CVirtualDesktopDefaultForegroundHandler,>(
        _QWORD *a1)
{
  unsigned int v1; // edi
  _QWORD *v3; // rax
  volatile int *v4; // rdx
  _QWORD *v5; // rbx
  _QWORD *v7; // [rsp+30h] [rbp+8h] BYREF
  _QWORD *v8; // [rsp+38h] [rbp+10h]

  v1 = 0;
  *a1 = 0LL;
  v3 = operator new(0x10uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v3;
  v5 = v3;
  if ( v3 )
  {
    *((_DWORD *)v3 + 3) = 1;
    *v3 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IVirtualDesktopDefaultForegroundHandler>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    v7 = v5;
    *v5 = &CVirtualDesktopDefaultForegroundHandler::`vftable';
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IApplicationViewIconLoaderNotifications>::InternalAddRef(
      (__int64)v5,
      v4);
    *a1 = v5;
    Microsoft::WRL::ComPtr<CVirtualDesktopDefaultForegroundHandler>::InternalRelease((__int64 *)&v7);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v1;
}
