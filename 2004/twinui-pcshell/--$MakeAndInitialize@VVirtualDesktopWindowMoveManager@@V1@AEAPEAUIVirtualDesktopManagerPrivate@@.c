/*
 * XREFs of ??$MakeAndInitialize@VVirtualDesktopWindowMoveManager@@V1@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopCollection@@AEAPEAUIVirtualDesktopVisibilityPolicy@@AEAPEAUIVirtualDesktopPinnedAppsPrivate@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopWindowMoveManager@@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopCollection@@AEAPEAUIVirtualDesktopVisibilityPolicy@@AEAPEAUIVirtualDesktopPinnedAppsPrivate@@@Z @ 0x180449E84
 * Callers:
 *     ?VirtualDesktopWindowMoveManager_CreateInstance@@YAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopCollection@@PEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopPinnedAppsPrivate@@AEBU_GUID@@PEAPEAX@Z @ 0x18044A4DC (-VirtualDesktopWindowMoveManager_CreateInstance@@YAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirt.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008D2D4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ??0VirtualDesktopWindowMoveManager@@QEAA@XZ @ 0x180449F3C (--0VirtualDesktopWindowMoveManager@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@VirtualDesktopWindowMoveManager@@QEAAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopCollection@@PEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopPinnedAppsPrivate@@@Z @ 0x18044A3C8 (-RuntimeClassInitialize@VirtualDesktopWindowMoveManager@@QEAAJPEAUIVirtualDesktopManagerPrivate@.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<VirtualDesktopWindowMoveManager,VirtualDesktopWindowMoveManager,IVirtualDesktopManagerPrivate * &,IVirtualDesktopCollection * &,IVirtualDesktopVisibilityPolicy * &,IVirtualDesktopPinnedAppsPrivate * &>(
        VirtualDesktopWindowMoveManager **a1,
        struct IVirtualDesktopManagerPrivate **a2,
        struct IVirtualDesktopCollection **a3,
        struct IVirtualDesktopVisibilityPolicy **a4,
        struct IVirtualDesktopPinnedAppsPrivate **a5)
{
  VirtualDesktopWindowMoveManager *v9; // rax
  int v10; // edi
  VirtualDesktopWindowMoveManager *v11; // rbx
  struct IVirtualDesktopVisibilityPolicy *v12; // r9
  struct IVirtualDesktopCollection *v13; // r8
  struct IVirtualDesktopManagerPrivate *v14; // rdx
  struct IVirtualDesktopPinnedAppsPrivate *v16; // [rsp+20h] [rbp-28h]
  VirtualDesktopWindowMoveManager *v17; // [rsp+50h] [rbp+8h] BYREF

  *a1 = 0LL;
  v9 = (VirtualDesktopWindowMoveManager *)operator new(0x78uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v9 )
  {
    v11 = VirtualDesktopWindowMoveManager::VirtualDesktopWindowMoveManager(v9);
    v12 = *a4;
    v13 = *a3;
    v14 = *a2;
    v16 = *a5;
    v17 = v11;
    v10 = VirtualDesktopWindowMoveManager::RuntimeClassInitialize(v11, v14, v13, v12, v16);
    if ( v10 >= 0 )
    {
      if ( v11 )
        (*(void (__fastcall **)(VirtualDesktopWindowMoveManager *))(*(_QWORD *)v11 + 8LL))(v11);
      *a1 = v11;
      v10 = 0;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v10;
}
