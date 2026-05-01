/*
 * XREFs of ??$MakeAndInitialize@VVirtualDesktopsApi@@V1@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopCollection@@AEAPEAUIVirtualDesktopVisibilityPolicy@@AEAPEAUIVirtualDesktopWindowMoveManager@@AEAPEAUIVirtualDesktopLock@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopsApi@@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopCollection@@AEAPEAUIVirtualDesktopVisibilityPolicy@@AEAPEAUIVirtualDesktopWindowMoveManager@@AEAPEAUIVirtualDesktopLock@@@Z @ 0x18044A58C
 * Callers:
 *     ?VirtualDesktopsApi_CreateInstance@@YAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopCollection@@PEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopWindowMoveManager@@PEAUIVirtualDesktopLock@@AEBU_GUID@@PEAPEAX@Z @ 0x18044AD0C (-VirtualDesktopsApi_CreateInstance@@YAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopCol.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008D2D4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ??0VirtualDesktopsApi@@QEAA@XZ @ 0x18044A650 (--0VirtualDesktopsApi@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@VirtualDesktopsApi@@QEAAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopCollection@@PEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopWindowMoveManager@@PEAUIVirtualDesktopLock@@@Z @ 0x18044AC78 (-RuntimeClassInitialize@VirtualDesktopsApi@@QEAAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtual.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<VirtualDesktopsApi,VirtualDesktopsApi,IVirtualDesktopManagerPrivate * &,IVirtualDesktopCollection * &,IVirtualDesktopVisibilityPolicy * &,IVirtualDesktopWindowMoveManager * &,IVirtualDesktopLock * &>(
        VirtualDesktopsApi **a1,
        struct IVirtualDesktopManagerPrivate **a2,
        struct IVirtualDesktopCollection **a3,
        struct IVirtualDesktopVisibilityPolicy **a4,
        struct IVirtualDesktopWindowMoveManager **a5,
        struct IVirtualDesktopLock **a6)
{
  VirtualDesktopsApi *v10; // rax
  int v11; // edi
  VirtualDesktopsApi *v12; // rbx
  struct IVirtualDesktopVisibilityPolicy *v13; // r9
  struct IVirtualDesktopCollection *v14; // r8
  VirtualDesktopsApi *v16; // [rsp+50h] [rbp+8h] BYREF

  *a1 = 0LL;
  v10 = (VirtualDesktopsApi *)operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v10 )
  {
    v12 = VirtualDesktopsApi::VirtualDesktopsApi(v10);
    v13 = *a4;
    v14 = *a3;
    v16 = v12;
    v11 = VirtualDesktopsApi::RuntimeClassInitialize(v12, *a2, v14, v13, *a5, *a6);
    if ( v11 >= 0 )
    {
      if ( v12 )
        (*(void (__fastcall **)(VirtualDesktopsApi *))(*(_QWORD *)v12 + 8LL))(v12);
      *a1 = v12;
      v11 = 0;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v11;
}
