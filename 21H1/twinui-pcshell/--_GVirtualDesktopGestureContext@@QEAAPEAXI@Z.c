/*
 * XREFs of ??_GVirtualDesktopGestureContext@@QEAAPEAXI@Z @ 0x18041F30C
 * Callers:
 *     ??1?$unique_ptr@VVirtualDesktopGestureContext@@U?$default_delete@VVirtualDesktopGestureContext@@@wistd@@@wistd@@QEAA@XZ @ 0x18041ECF0 (--1-$unique_ptr@VVirtualDesktopGestureContext@@U-$default_delete@VVirtualDesktopGestureContext@@.c)
 *     ??_GVirtualDesktopGestureHandler@@UEAAPEAXI@Z @ 0x18041F380 (--_GVirtualDesktopGestureHandler@@UEAAPEAXI@Z.c)
 *     ?Cleanup@VirtualDesktopGestureHandler@@UEAAXXZ @ 0x18041F580 (-Cleanup@VirtualDesktopGestureHandler@@UEAAXXZ.c)
 *     ?StartSwipe@VirtualDesktopGestureHandler@@UEAAJHHIUTOUCHPAD_GESTURE_CONTEXT@@@Z @ 0x180421530 (-StartSwipe@VirtualDesktopGestureHandler@@UEAAJHHIUTOUCHPAD_GESTURE_CONTEXT@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18007AEDC (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008CE60 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?RemoveAll@?$CTSimpleArray@V?$ComPtr@VVirtualDesktopGestureWindow@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@VVirtualDesktopGestureWindow@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@VVirtualDesktopGestureWindow@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@VVirtualDesktopGestureWindow@@@WRL@Microsoft@@@@@@QEAAXXZ @ 0x18042132C (-RemoveAll@-$CTSimpleArray@V-$ComPtr@VVirtualDesktopGestureWindow@@@WRL@Microsoft@@$0PPPPPPPO@V-.c)
 */

// Hidden C++ exception states: #wind=2
VirtualDesktopGestureContext *__fastcall VirtualDesktopGestureContext::`scalar deleting destructor'(
        VirtualDesktopGestureContext *this)
{
  CTSimpleArray<Microsoft::WRL::ComPtr<VirtualDesktopGestureWindow>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<VirtualDesktopGestureWindow>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<VirtualDesktopGestureWindow>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<VirtualDesktopGestureWindow>>>::RemoveAll((char *)this + 72);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 5);
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)this + 4);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 3);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 2);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 1);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this);
  operator delete(this, (const struct std::nothrow_t *)0xB0);
  return this;
}
