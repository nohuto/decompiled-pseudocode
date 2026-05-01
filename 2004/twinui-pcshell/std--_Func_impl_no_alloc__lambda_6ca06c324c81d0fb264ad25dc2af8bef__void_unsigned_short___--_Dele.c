/*
 * XREFs of std::_Func_impl_no_alloc__lambda_6ca06c324c81d0fb264ad25dc2af8bef__void_unsigned_short___::_Delete_this @ 0x1801A3670
 * Callers:
 *     ?ViewDesiredNavigationLevelChanged@ViewEventDispatcher@@QEAAXIW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@0@Z @ 0x1802A9880 (-ViewDesiredNavigationLevelChanged@ViewEventDispatcher@@QEAAXIW4NavigationLevel@ViewManagerInter.c)
 *     ?ViewDestroyed@ViewEventDispatcher@@QEAAXI@Z @ 0x1802A98E4 (-ViewDestroyed@ViewEventDispatcher@@QEAAXI@Z.c)
 *     ?ViewNavigationLevelChanged@ViewEventDispatcher@@QEAAXIW4ViewNavigationLevel@Navigation@@@Z @ 0x1802A9BA0 (-ViewNavigationLevelChanged@ViewEventDispatcher@@QEAAXIW4ViewNavigationLevel@Navigation@@@Z.c)
 *     ?PropagateViewStateOverridesToComponentsIfNecessary@ViewWrapperBase@@AEAAXAEBUAPPLICATION_VIEW_DATA@@0@Z @ 0x1802D0354 (-PropagateViewStateOverridesToComponentsIfNecessary@ViewWrapperBase@@AEAAXAEBUAPPLICATION_VIEW_D.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008D714 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_6ca06c324c81d0fb264ad25dc2af8bef__void_unsigned_short___::_Delete_this(
        void *a1,
        char a2)
{
  if ( a2 )
    operator delete(a1, (const struct std::nothrow_t *)0x10);
}
