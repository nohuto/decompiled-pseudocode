/*
 * XREFs of CIconLoadingNotificationCallback__lambda_456e5ff184e6c0b451f61a85fda58e65___::CIconLoadingNotificationCallback__lambda_456e5ff184e6c0b451f61a85fda58e65___ @ 0x180384CD8
 * Callers:
 *     CIconLoadingNotificationCallback_CreateInstance__lambda_456e5ff184e6c0b451f61a85fda58e65___ @ 0x180384A40 (CIconLoadingNotificationCallback_CreateInstance__lambda_456e5ff184e6c0b451f61a85fda58e65___.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180076E9C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ??0?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIObservableObjectArrayChanged@@@Details@WRL@Microsoft@@IEAA@XZ @ 0x18037D960 (--0-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIObservableObjectArray.c)
 */

__int64 *__fastcall CIconLoadingNotificationCallback__lambda_456e5ff184e6c0b451f61a85fda58e65___::CIconLoadingNotificationCallback__lambda_456e5ff184e6c0b451f61a85fda58e65___(
        __int64 *a1,
        __int64 *a2)
{
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IObservableObjectArrayChanged>::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IObservableObjectArrayChanged>((IApplicationViewChangeListener *)a1);
  *a1 = (__int64)&Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IApplicationViewIconLoaderNotifications>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *a1 = (__int64)off_1804BD158;
  a1[2] = *a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(a1 + 2);
  a1[3] = a2[1];
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(a1 + 3);
  return a1;
}
