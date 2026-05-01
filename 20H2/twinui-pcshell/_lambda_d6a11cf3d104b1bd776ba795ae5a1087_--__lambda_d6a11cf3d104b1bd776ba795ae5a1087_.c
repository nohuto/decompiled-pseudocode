/*
 * XREFs of _lambda_d6a11cf3d104b1bd776ba795ae5a1087_::__lambda_d6a11cf3d104b1bd776ba795ae5a1087_ @ 0x1800ADD30
 * Callers:
 *     ?AppViewActivationShowRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationShowRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x180078FE0 (-AppViewActivationShowRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationShowRequestedE.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)_::DelegateInvokeHelper_IAsyncCallback__lambda_df93837f5bd982e020ba6c39ddcf9d89___1_long_::_scalar_deleting_destructor_ @ 0x1800AE220 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_IAsyncCallback--_)(long)_-_ea_1800AE220.c)
 *     ?AppViewShowRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewShowRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1802B2BB0 (-AppViewShowRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewShowRequestedEventArgs@WindowManag.c)
 *     ?AppViewSwitchRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewSwitchRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1802B3110 (-AppViewSwitchRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewSwitchRequestedEventArgs@WindowM.c)
 *     __lambda_152963d5211cf6149a80abe334e76dfa_::operator()_::_1_::dtor$5 @ 0x180324AAE (__lambda_152963d5211cf6149a80abe334e76dfa_--operator()_--_1_--dtor$5.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B910 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 */

__int64 __fastcall lambda_d6a11cf3d104b1bd776ba795ae5a1087_::__lambda_d6a11cf3d104b1bd776ba795ae5a1087_(__int64 *a1)
{
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(a1 + 1);
  return wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(a1);
}
