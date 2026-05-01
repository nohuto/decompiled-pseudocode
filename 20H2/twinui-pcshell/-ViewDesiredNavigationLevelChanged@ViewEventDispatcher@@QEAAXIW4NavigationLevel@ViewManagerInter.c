/*
 * XREFs of ?ViewDesiredNavigationLevelChanged@ViewEventDispatcher@@QEAAXIW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@0@Z @ 0x1802A8F90
 * Callers:
 *     ?PushDesiredNavigationLevelToDerivedClass@ViewWrapperBase@@AEAAXXZ @ 0x1802CFB14 (-PushDesiredNavigationLevelToDerivedClass@ViewWrapperBase@@AEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     std::_Func_impl_no_alloc__lambda_6ca06c324c81d0fb264ad25dc2af8bef__void_unsigned_short___::_Delete_this @ 0x1800993C0 (std--_Func_impl_no_alloc__lambda_6ca06c324c81d0fb264ad25dc2af8bef__void_unsigned_short___--_Dele.c)
 */

void __fastcall ViewEventDispatcher::ViewDesiredNavigationLevelChanged(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 (__fastcall **v4)(); // [rsp+20h] [rbp-58h] BYREF
  int v5; // [rsp+28h] [rbp-50h]
  __int64 (__fastcall ***v6)(); // [rsp+58h] [rbp-20h]

  if ( a4 == 1 && a3 > 1 )
    a4 = 3;
  v5 = a4;
  v4 = off_1804B0CA8;
  v6 = &v4;
  std::_Func_impl_no_alloc__lambda_6ca06c324c81d0fb264ad25dc2af8bef__void_unsigned_short___::_Delete_this(&v4, 0);
}
