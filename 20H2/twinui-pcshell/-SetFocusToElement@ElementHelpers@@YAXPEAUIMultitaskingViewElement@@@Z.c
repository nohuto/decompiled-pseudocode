/*
 * XREFs of ?SetFocusToElement@ElementHelpers@@YAXPEAUIMultitaskingViewElement@@@Z @ 0x1803ACEB0
 * Callers:
 *     ?KeyDown@CVirtualDesktopBarElement@@UEAA_NIW4ModifierKeys@@@Z @ 0x1803ADEE0 (-KeyDown@CVirtualDesktopBarElement@@UEAA_NIW4ModifierKeys@@@Z.c)
 *     ?Invoke@AccessibleElementBase@@UEAAJXZ @ 0x1803B3FA0 (-Invoke@AccessibleElementBase@@UEAAJXZ.c)
 *     ?ItemAddedInternal@CVirtualDesktopContainerElement@@IEAAXPEAUIObservableItem@@@Z @ 0x1803BFD78 (-ItemAddedInternal@CVirtualDesktopContainerElement@@IEAAXPEAUIObservableItem@@@Z.c)
 * Callees:
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18000BE8C (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18007256C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??4?$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x180083294 (--4-$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ElementHelpers::SetFocusToElement(ElementHelpers *this, struct IMultitaskingViewElement *a2)
{
  ElementHelpers *v2; // rbx
  __int64 *v3; // rax
  __int64 v4; // [rsp+30h] [rbp+10h] BYREF
  ElementHelpers *v5; // [rsp+38h] [rbp+18h] BYREF
  __int64 v6; // [rsp+40h] [rbp+20h] BYREF

  v2 = this;
  v5 = this;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v5);
  (*(void (__fastcall **)(ElementHelpers *, __int64 *))(*(_QWORD *)v2 + 24LL))(v2, &v4);
  while ( v4 )
  {
    (*(void (__fastcall **)(__int64, ElementHelpers *))(*(_QWORD *)v4 + 288LL))(v4, v2);
    Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)&v5, &v4);
    v3 = (__int64 *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v4 + 24LL))(v4, &v6);
    Microsoft::WRL::ComPtr<WeakReference::IWeakReference>::operator=(&v4, v3);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v6);
    v2 = v5;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v4);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v5);
}
