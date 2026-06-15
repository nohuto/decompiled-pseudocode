/*
 * XREFs of ??0?$CComPtr@UISaDeviceProxy@@@ATL@@QEAA@AEBV01@@Z @ 0x1800CD898
 * Callers:
 *     ?GetOffloadStreamGroups@CDeviceGraphObjectsStore@@UEAAJAEAV?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x18006EE10 (-GetOffloadStreamGroups@CDeviceGraphObjectsStore@@UEAAJAEAV-$vector@V-$ComPtr@UIStreamGroupProxy.c)
 *     std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_390f66de9da3e24cab3ad3e60ecadd9e___ @ 0x18006F2B8 (std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--_ea_18006F2B8.c)
 *     std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_413ceff6df6ff7d9a560b32e6a719ff0___ @ 0x18006F458 (std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--_ea_18006F458.c)
 *     _lambda_413ceff6df6ff7d9a560b32e6a719ff0_::_lambda_413ceff6df6ff7d9a560b32e6a719ff0_ @ 0x18006F87C (_lambda_413ceff6df6ff7d9a560b32e6a719ff0_--_lambda_413ceff6df6ff7d9a560b32e6a719ff0_.c)
 *     _lambda_db18f22ab46b33b274128dc9e227aeaf_::operator() @ 0x18006FD6C (_lambda_db18f22ab46b33b274128dc9e227aeaf_--operator().c)
 *     ?RegisterForShellReadyNotifications@AtmosCheck@@AEAAJXZ @ 0x1800738F4 (-RegisterForShellReadyNotifications@AtmosCheck@@AEAAJXZ.c)
 *     ?RegisterForUserWatcherNotifications@AtmosCheck@@AEAAJXZ @ 0x180073A54 (-RegisterForUserWatcherNotifications@AtmosCheck@@AEAAJXZ.c)
 *     wistd::__function::__func__lambda_2063a14e497e422c377e3fb701730ef5__void___cdecl(void)_::__clone @ 0x180073E10 (wistd--__function--__func__lambda_2063a14e497e422c377e3fb701730ef5__void___cdecl(void)_--__clone.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
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
