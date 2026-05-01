/*
 * XREFs of _lambda_1837cd2421f43b992ba1f4107d6eca8c_::__lambda_1837cd2421f43b992ba1f4107d6eca8c_ @ 0x18038A130
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1837cd2421f43b992ba1f4107d6eca8c__&_::_scalar_deleting_destructor_ @ 0x18038A300 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_1837cd2421f43b992ba1f4107d6eca8c__-_--_scal.c)
 *     ?RuntimeClassInitialize@CWinRTAppIconLoader@@QEAAJPEAUIWinRTApplicationView@@AEBUtagSIZE@@11IPEAUIApplicationViewIconLoaderNotifications@@@Z @ 0x18038A490 (-RuntimeClassInitialize@CWinRTAppIconLoader@@QEAAJPEAUIWinRTApplicationView@@AEBUtagSIZE@@11IPEA.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B910 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x1801E87F0 (-InternalRelease@-$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall lambda_1837cd2421f43b992ba1f4107d6eca8c_::__lambda_1837cd2421f43b992ba1f4107d6eca8c_(__int64 *a1)
{
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(a1 + 6);
  Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease(a1 + 5);
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1);
}
