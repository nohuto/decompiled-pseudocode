/*
 * XREFs of ?RuntimeClassInitialize@CMultitaskingViewHotKeyHandler@@QEAAJPEAUIImmersiveWindowMessageService@@PEAUIImmersiveMonitorManager@@PEAUIApplicationTargetingTracker@@PEAUIMultitaskingViewTaskScheduler@@PEAUIApplicationViewCollection@@@Z @ 0x180386C00
 * Callers:
 *     ??$MakeAndInitialize@VCMultitaskingViewHotKeyHandler@@V1@AEAPEAUIImmersiveWindowMessageService@@AEAPEAUIImmersiveMonitorManager@@AEAPEAUIApplicationTargetingTracker@@AEAPEAUIMultitaskingViewTaskScheduler@@AEAPEAUIApplicationViewCollection@@@Details@WRL@Microsoft@@YAJPEAPEAVCMultitaskingViewHotKeyHandler@@AEAPEAUIImmersiveWindowMessageService@@AEAPEAUIImmersiveMonitorManager@@AEAPEAUIApplicationTargetingTracker@@AEAPEAUIMultitaskingViewTaskScheduler@@AEAPEAUIApplicationViewCollection@@@Z @ 0x180386014 (--$MakeAndInitialize@VCMultitaskingViewHotKeyHandler@@V1@AEAPEAUIImmersiveWindowMessageService@@.c)
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180014660 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18007256C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIVirtualDesktopCollection@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopCollection@@@Z @ 0x18017A148 (--4-$ComPtr@UIVirtualDesktopCollection@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopCollectio.c)
 *     ??4?$ComPtr@UIImmersiveMonitorManager@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveMonitorManager@@@Z @ 0x1802FCB44 (--4-$ComPtr@UIImmersiveMonitorManager@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveMonitorManager@.c)
 */

__int64 __fastcall CMultitaskingViewHotKeyHandler::RuntimeClassInitialize(
        CMultitaskingViewHotKeyHandler *this,
        struct IImmersiveWindowMessageService *a2,
        struct IImmersiveMonitorManager *a3,
        struct IApplicationTargetingTracker *a4,
        struct IMultitaskingViewTaskScheduler *a5,
        struct IApplicationViewCollection *a6)
{
  struct IApplicationTargetingTracker *v10; // rax
  struct IImmersiveWindowMessageService *v12; // [rsp+30h] [rbp+8h] BYREF

  if ( *((struct IImmersiveWindowMessageService **)this + 4) != a2 )
  {
    v12 = a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v12);
    v12 = (struct IImmersiveWindowMessageService *)*((_QWORD *)this + 4);
    *((_QWORD *)this + 4) = a2;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
  }
  Microsoft::WRL::ComPtr<IImmersiveMonitorManager>::operator=((__int64 *)this + 5, (__int64)a3);
  v10 = (struct IApplicationTargetingTracker *)*((_QWORD *)this + 6);
  if ( v10 != a4 )
  {
    if ( a4 )
    {
      (*(void (__fastcall **)(struct IApplicationTargetingTracker *))(*(_QWORD *)a4 + 8LL))(a4);
      v10 = (struct IApplicationTargetingTracker *)*((_QWORD *)this + 6);
    }
    v12 = v10;
    *((_QWORD *)this + 6) = a4;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopCollection>::operator=((__int64 *)this + 7, (__int64)a5);
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 8, (__int64)a6);
  return CMultitaskingViewHotKeyHandler::_RegisterHotKeys(this);
}
