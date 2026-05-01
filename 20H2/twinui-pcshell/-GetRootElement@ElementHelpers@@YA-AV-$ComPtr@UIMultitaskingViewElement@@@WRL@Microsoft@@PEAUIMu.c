/*
 * XREFs of ?GetRootElement@ElementHelpers@@YA?AV?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@PEAUIMultitaskingViewElement@@@Z @ 0x1803ACC28
 * Callers:
 *     ?_RaiseFocusEvent@CMultitaskingViewElementBase@@IEAAJXZ @ 0x1803A44B0 (-_RaiseFocusEvent@CMultitaskingViewElementBase@@IEAAJXZ.c)
 *     ?ItemOperationBegin@CSwitchItemGrid@@UEAAXPEAUIObservableObjectArray@@W4ObservableArrayOperation@@PEAUIObservableItem@@@Z @ 0x1803A6BF0 (-ItemOperationBegin@CSwitchItemGrid@@UEAAXPEAUIObservableObjectArray@@W4ObservableArrayOperation.c)
 *     ?ItemOperationEnd@CSwitchItemGrid@@UEAAXPEAUIObservableObjectArray@@W4ObservableArrayOperation@@PEAUIObservableItem@@@Z @ 0x1803A6C90 (-ItemOperationEnd@CSwitchItemGrid@@UEAAXPEAUIObservableObjectArray@@W4ObservableArrayOperation@@.c)
 *     ?ItemAddedInternal@CVirtualDesktopContainerElement@@IEAAXPEAUIObservableItem@@@Z @ 0x1803BFD78 (-ItemAddedInternal@CVirtualDesktopContainerElement@@IEAAXPEAUIObservableItem@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18007256C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??4?$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x180083294 (--4-$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall ElementHelpers::GetRootElement(__int64 *a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 *v4; // rax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  *a1 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(a1);
  while ( 1 )
  {
    v3 = *(_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)*a1 + 24LL))(*a1, &v6);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v6);
    if ( !v3 )
      break;
    v4 = (__int64 *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)*a1 + 24LL))(*a1, &v7);
    Microsoft::WRL::ComPtr<WeakReference::IWeakReference>::operator=(a1, v4);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v7);
  }
  return a1;
}
