/*
 * XREFs of ??$MakeAndInitialize@VVirtualDesktopRemoveAnimationCoordinator@@V1@AEBUVirtualDesktopMetrics@@AEAHAEAPEAUISwitchThumbnailFactory@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopRemoveAnimationCoordinator@@AEBUVirtualDesktopMetrics@@AEAHAEAPEAUISwitchThumbnailFactory@@@Z @ 0x1803C4248
 * Callers:
 *     ?VirtualDesktopRemoveAnimationCoordinator_CreateInstance@@YAJPEAUISwitchThumbnailFactory@@AEBUVirtualDesktopMetrics@@HAEBU_GUID@@PEAPEAX@Z @ 0x1803C47A0 (-VirtualDesktopRemoveAnimationCoordinator_CreateInstance@@YAJPEAUISwitchThumbnailFactory@@AEBUVi.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008D2D4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VItemAnimationCoordinatorBase@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x180396128 (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VItemAnima.c)
 *     ?InternalRelease@?$ComPtr@VSwitchItemCloseAnimationCoordinator@@@WRL@Microsoft@@IEAAKXZ @ 0x1803BA1BC (-InternalRelease@-$ComPtr@VSwitchItemCloseAnimationCoordinator@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0VirtualDesktopRemoveAnimationCoordinator@@QEAA@XZ @ 0x1803C42E8 (--0VirtualDesktopRemoveAnimationCoordinator@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@VirtualDesktopRemoveAnimationCoordinator@@QEAAJAEBUVirtualDesktopMetrics@@HPEAUISwitchThumbnailFactory@@@Z @ 0x1803C4680 (-RuntimeClassInitialize@VirtualDesktopRemoveAnimationCoordinator@@QEAAJAEBUVirtualDesktopMetrics.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<VirtualDesktopRemoveAnimationCoordinator,VirtualDesktopRemoveAnimationCoordinator,VirtualDesktopMetrics const &,int &,ISwitchThumbnailFactory * &>(
        __int64 *a1,
        const struct VirtualDesktopMetrics *a2,
        int *a3,
        struct ISwitchThumbnailFactory **a4)
{
  VirtualDesktopRemoveAnimationCoordinator *v8; // rax
  int v9; // ebx
  VirtualDesktopRemoveAnimationCoordinator *v10; // rax
  struct ISwitchThumbnailFactory *v11; // r9
  int v12; // r8d
  __int64 v13; // rdi
  volatile int *v14; // rdx
  VirtualDesktopRemoveAnimationCoordinator *v16; // [rsp+40h] [rbp+8h] BYREF

  *a1 = 0LL;
  v8 = (VirtualDesktopRemoveAnimationCoordinator *)operator new(0x2F0uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v8 )
  {
    v10 = VirtualDesktopRemoveAnimationCoordinator::VirtualDesktopRemoveAnimationCoordinator(v8);
    v11 = *a4;
    v12 = *a3;
    v13 = (__int64)v10;
    v16 = v10;
    v9 = VirtualDesktopRemoveAnimationCoordinator::RuntimeClassInitialize(v10, a2, v12, v11);
    if ( v9 >= 0 )
    {
      if ( v13 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ItemAnimationCoordinatorBase>::InternalAddRef(
          v13,
          v14);
      *a1 = v13;
      v9 = 0;
    }
    Microsoft::WRL::ComPtr<SwitchItemCloseAnimationCoordinator>::InternalRelease((__int64 *)&v16);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v9;
}
