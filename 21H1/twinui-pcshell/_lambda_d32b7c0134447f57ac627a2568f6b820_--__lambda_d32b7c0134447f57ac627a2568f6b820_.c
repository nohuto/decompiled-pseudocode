/*
 * XREFs of _lambda_d32b7c0134447f57ac627a2568f6b820_::__lambda_d32b7c0134447f57ac627a2568f6b820_ @ 0x1800A9A34
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d32b7c0134447f57ac627a2568f6b820___::_scalar_deleting_destructor_ @ 0x1800A9B70 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_d32b7c0134447f57ac627a2568f6b820___--_scala.c)
 *     ?UpdateAppView@Win32AppStateManager@@UEAAXPEAUIApplicationView@@W4ViewState@AppLimits@FamilySafety@Internal@Windows@@PEAUIAppStateChangeNotification@4567@_N@Z @ 0x180439F70 (-UpdateAppView@Win32AppStateManager@@UEAAXPEAUIApplicationView@@W4ViewState@AppLimits@FamilySafe.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180016A14 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 */

__int64 __fastcall lambda_d32b7c0134447f57ac627a2568f6b820_::__lambda_d32b7c0134447f57ac627a2568f6b820_(__int64 a1)
{
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a1 + 16));
  return wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a1 + 8));
}
