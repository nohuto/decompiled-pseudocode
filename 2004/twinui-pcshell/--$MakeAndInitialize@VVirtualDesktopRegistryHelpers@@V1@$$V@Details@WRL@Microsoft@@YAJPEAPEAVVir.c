/*
 * XREFs of ??$MakeAndInitialize@VVirtualDesktopRegistryHelpers@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopRegistryHelpers@@@Z @ 0x180434B7C
 * Callers:
 *     ?VirtualDesktopRegistryHelpers_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x180435618 (-VirtualDesktopRegistryHelpers_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008D2D4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicationViewIconLoaderNotifications@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x180139F2C (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicat.c)
 *     ??0VirtualDesktopRegistryHelpers@@QEAA@XZ @ 0x180434C04 (--0VirtualDesktopRegistryHelpers@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VVirtualDesktopRegistryHelpers@@@WRL@Microsoft@@IEAAKXZ @ 0x18043515C (-InternalRelease@-$ComPtr@VVirtualDesktopRegistryHelpers@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RuntimeClassInitialize@VirtualDesktopRegistryHelpers@@QEAAJXZ @ 0x1804354C4 (-RuntimeClassInitialize@VirtualDesktopRegistryHelpers@@QEAAJXZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<VirtualDesktopRegistryHelpers,VirtualDesktopRegistryHelpers,>(
        VirtualDesktopRegistryHelpers **a1)
{
  VirtualDesktopRegistryHelpers *v2; // rax
  int v3; // ebx
  VirtualDesktopRegistryHelpers *v4; // rdi
  volatile int *v5; // rdx
  VirtualDesktopRegistryHelpers *v7; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v2 = (VirtualDesktopRegistryHelpers *)operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v7 = VirtualDesktopRegistryHelpers::VirtualDesktopRegistryHelpers(v2);
    v4 = v7;
    v3 = VirtualDesktopRegistryHelpers::RuntimeClassInitialize(v7);
    if ( v3 >= 0 )
    {
      if ( v4 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IApplicationViewIconLoaderNotifications>::InternalAddRef(
          (__int64)v4,
          v5);
      *a1 = v4;
      v3 = 0;
    }
    Microsoft::WRL::ComPtr<VirtualDesktopRegistryHelpers>::InternalRelease(&v7);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v3;
}
