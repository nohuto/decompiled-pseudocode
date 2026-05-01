/*
 * XREFs of ?RuntimeClassInitialize@CVirtualDesktopManager@@QEAAJPEAUIVirtualDesktopCollection@@PEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopNotification2@@PEAUIVirtualDesktopForegroundPolicy@@PEAUIVirtualDesktopPersistence2@@PEAUIVirtualDesktopGroupedViewsPolicy@@PEAUIVirtualDesktopLock@@@Z @ 0x180417AC4
 * Callers:
 *     ??$MakeAndInitialize@VCVirtualDesktopManager@@V1@AEAPEAUIVirtualDesktopCollection@@AEAPEAUIVirtualDesktopVisibilityPolicy@@AEAPEAUIVirtualDesktopNotification2@@AEAPEAUIVirtualDesktopForegroundPolicy@@AEAPEAUIVirtualDesktopPersistence2@@AEAPEAUIVirtualDesktopGroupedViewsPolicy@@AEAPEAUIVirtualDesktopLock@@@Details@WRL@Microsoft@@YAJPEAPEAVCVirtualDesktopManager@@AEAPEAUIVirtualDesktopCollection@@AEAPEAUIVirtualDesktopVisibilityPolicy@@AEAPEAUIVirtualDesktopNotification2@@AEAPEAUIVirtualDesktopForegroundPolicy@@AEAPEAUIVirtualDesktopPersistence2@@AEAPEAUIVirtualDesktopGroupedViewsPolicy@@AEAPEAUIVirtualDesktopLock@@@Z @ 0x180414D30 (--$MakeAndInitialize@VCVirtualDesktopManager@@V1@AEAPEAUIVirtualDesktopCollection@@AEAPEAUIVirtu.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIVirtualDesktopCollection@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopCollection@@@Z @ 0x180155FF8 (--4-$ComPtr@UIVirtualDesktopCollection@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopCollectio.c)
 */

__int64 __fastcall CVirtualDesktopManager::RuntimeClassInitialize(
        CVirtualDesktopManager *this,
        struct IVirtualDesktopCollection *a2,
        struct IVirtualDesktopVisibilityPolicy *a3,
        struct IVirtualDesktopNotification2 *a4,
        struct IVirtualDesktopForegroundPolicy *a5,
        struct IVirtualDesktopPersistence2 *a6,
        struct IVirtualDesktopGroupedViewsPolicy *a7,
        struct IVirtualDesktopLock *a8)
{
  struct IVirtualDesktopNotification2 *v11; // rax
  struct IVirtualDesktopPersistence2 *v12; // rax
  struct IVirtualDesktopPersistence2 *v13; // rbx
  __int64 v14; // rsi
  __int64 (__fastcall *v15)(__int64, _QWORD, __int64, GUID *, char *); // rdi
  int v16; // eax
  unsigned int v17; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IVirtualDesktopNotification2 *v20; // [rsp+40h] [rbp+8h] BYREF

  Microsoft::WRL::ComPtr<IVirtualDesktopCollection>::operator=((__int64 *)this + 11, (__int64)a2);
  Microsoft::WRL::ComPtr<IVirtualDesktopCollection>::operator=((__int64 *)this + 13, (__int64)a3);
  v11 = (struct IVirtualDesktopNotification2 *)*((_QWORD *)this + 14);
  if ( v11 != a4 )
  {
    if ( a4 )
    {
      (*(void (__fastcall **)(struct IVirtualDesktopNotification2 *))(*(_QWORD *)a4 + 8LL))(a4);
      v11 = (struct IVirtualDesktopNotification2 *)*((_QWORD *)this + 14);
    }
    v20 = v11;
    *((_QWORD *)this + 14) = a4;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v20);
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopCollection>::operator=((__int64 *)this + 15, (__int64)a5);
  v12 = (struct IVirtualDesktopPersistence2 *)*((_QWORD *)this + 16);
  v13 = a6;
  if ( v12 != a6 )
  {
    if ( a6 )
    {
      (*(void (__fastcall **)(struct IVirtualDesktopPersistence2 *))(*(_QWORD *)a6 + 8LL))(a6);
      v12 = (struct IVirtualDesktopPersistence2 *)*((_QWORD *)this + 16);
    }
    a6 = v12;
    *((_QWORD *)this + 16) = v13;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&a6);
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopCollection>::operator=((__int64 *)this + 17, (__int64)a7);
  Microsoft::WRL::ComPtr<IVirtualDesktopCollection>::operator=((__int64 *)this + 19, (__int64)a8);
  v14 = *((_QWORD *)this + 11);
  v15 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, GUID *, char *))(*(_QWORD *)v14 + 72LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 20);
  v16 = v15(v14, 0LL, 5LL, &GUID_ff72ffdd_be7e_43fc_9c03_ad81681e88e4, (char *)this + 160);
  v17 = v16;
  if ( v16 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2BA,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)(unsigned int)v16);
  return v17;
}
