/*
 * XREFs of ??0?$CComPtr@UISaDeviceProxy@@@ATL@@QEAA@AEBV01@@Z @ 0x1800CE528
 * Callers:
 *     ?GetOffloadStreamGroups@CDeviceGraphObjectsStore@@UEAAJAEAV?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x18006F8D0 (-GetOffloadStreamGroups@CDeviceGraphObjectsStore@@UEAAJAEAV-$vector@V-$ComPtr@UIStreamGroupProxy.c)
 *     std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_390f66de9da3e24cab3ad3e60ecadd9e___ @ 0x18006FD78 (std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--_ea_18006FD78.c)
 *     std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_413ceff6df6ff7d9a560b32e6a719ff0___ @ 0x18006FF18 (std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--_ea_18006FF18.c)
 *     _lambda_413ceff6df6ff7d9a560b32e6a719ff0_::_lambda_413ceff6df6ff7d9a560b32e6a719ff0_ @ 0x18007033C (_lambda_413ceff6df6ff7d9a560b32e6a719ff0_--_lambda_413ceff6df6ff7d9a560b32e6a719ff0_.c)
 *     _lambda_db18f22ab46b33b274128dc9e227aeaf_::operator() @ 0x18007082C (_lambda_db18f22ab46b33b274128dc9e227aeaf_--operator().c)
 *     ?RegisterForShellReadyNotifications@AtmosCheck@@AEAAJXZ @ 0x1800743B4 (-RegisterForShellReadyNotifications@AtmosCheck@@AEAAJXZ.c)
 *     ?RegisterForUserWatcherNotifications@AtmosCheck@@AEAAJXZ @ 0x180074514 (-RegisterForUserWatcherNotifications@AtmosCheck@@AEAAJXZ.c)
 *     wistd::__function::__func__lambda_2063a14e497e422c377e3fb701730ef5__void___cdecl(void)_::__clone @ 0x1800748D0 (wistd--__function--__func__lambda_2063a14e497e422c377e3fb701730ef5__void___cdecl(void)_--__clone.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall ATL::CComPtr<ISaDeviceProxy>::CComPtr<ISaDeviceProxy>(__int64 *a1, __int64 *a2)
{
  __int64 v3; // rcx

  v3 = *a2;
  *a1 = *a2;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  return a1;
}
