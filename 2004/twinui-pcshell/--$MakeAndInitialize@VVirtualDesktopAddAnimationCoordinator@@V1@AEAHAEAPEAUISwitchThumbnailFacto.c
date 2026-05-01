/*
 * XREFs of ??$MakeAndInitialize@VVirtualDesktopAddAnimationCoordinator@@V1@AEAHAEAPEAUISwitchThumbnailFactory@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopAddAnimationCoordinator@@AEAHAEAPEAUISwitchThumbnailFactory@@@Z @ 0x1803C3AB0
 * Callers:
 *     ?VirtualDesktopAddAnimationCoordinator_CreateInstance@@YAJPEAUISwitchThumbnailFactory@@HAEBU_GUID@@PEAPEAX@Z @ 0x1803C4158 (-VirtualDesktopAddAnimationCoordinator_CreateInstance@@YAJPEAUISwitchThumbnailFactory@@HAEBU_GUI.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008D2D4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VItemAnimationCoordinatorBase@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x180396128 (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VItemAnima.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VItemAnimationCoordinatorBase@@@WRL@Microsoft@@QEAA@XZ @ 0x1803B9C74 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VItemAnimationCoordinatorBase@@@WRL@Mi.c)
 *     ?InternalRelease@?$ComPtr@VSwitchItemCloseAnimationCoordinator@@@WRL@Microsoft@@IEAAKXZ @ 0x1803BA1BC (-InternalRelease@-$ComPtr@VSwitchItemCloseAnimationCoordinator@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RuntimeClassInitialize@ItemAnimationCoordinatorBase@@QEAAJPEAUISwitchThumbnailFactory@@AEBU_GUID@@@Z @ 0x1803C30D8 (-RuntimeClassInitialize@ItemAnimationCoordinatorBase@@QEAAJPEAUISwitchThumbnailFactory@@AEBU_GUI.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<VirtualDesktopAddAnimationCoordinator,VirtualDesktopAddAnimationCoordinator,int &,ISwitchThumbnailFactory * &>(
        ItemAnimationCoordinatorBase **a1,
        _DWORD *a2,
        struct ISwitchThumbnailFactory **a3)
{
  ItemAnimationCoordinatorBase *v6; // rax
  ItemAnimationCoordinatorBase *v7; // rbx
  unsigned int v8; // edi
  struct ISwitchThumbnailFactory *v9; // rdx
  int v10; // eax
  volatile int *v11; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  ItemAnimationCoordinatorBase *v14; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v6 = (ItemAnimationCoordinatorBase *)operator new(0x100uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v6;
  if ( v6 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ItemAnimationCoordinatorBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ItemAnimationCoordinatorBase>(v6);
    *((_DWORD *)v7 + 62) = 0;
    *(_QWORD *)v7 = &VirtualDesktopAddAnimationCoordinator::`vftable';
    v9 = *a3;
    *((_DWORD *)v7 + 62) = *a2;
    v14 = v7;
    v10 = ItemAnimationCoordinatorBase::RuntimeClassInitialize(v7, v9, &stru_180542300);
    v8 = v10;
    if ( v10 >= 0 )
    {
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ItemAnimationCoordinatorBase>::InternalAddRef(
        (__int64)v7,
        v11);
      v8 = 0;
      *a1 = v7;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x8A,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopaddanimationcoordinator.cpp",
        (const char *)(unsigned int)v10);
    }
    Microsoft::WRL::ComPtr<SwitchItemCloseAnimationCoordinator>::InternalRelease((__int64 *)&v14);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v8;
}
