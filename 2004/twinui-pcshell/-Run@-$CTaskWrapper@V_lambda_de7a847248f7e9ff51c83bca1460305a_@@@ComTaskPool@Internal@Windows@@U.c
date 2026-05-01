/*
 * XREFs of ?Run@?$CTaskWrapper@V_lambda_de7a847248f7e9ff51c83bca1460305a_@@@ComTaskPool@Internal@Windows@@UEAAXXZ @ 0x18000FC40
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18000FD14 (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1800922B0 (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ??$InvokeDelegates@V_lambda_f3e2ba377ecf56fb3aa66def83e00359_@@U?$ITypedEventHandler@PEAVSplashScreen@Activation@ApplicationModel@Windows@@PEAUIInspectable@@@Foundation@Windows@@@?$InvokeTraits@$0?1@WRL@Microsoft@@SAJV_lambda_f3e2ba377ecf56fb3aa66def83e00359_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@U?$ITypedEventHandler@PEAVSplashScreen@Activation@ApplicationModel@Windows@@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@12@@Z @ 0x180179028 (--$InvokeDelegates@V_lambda_f3e2ba377ecf56fb3aa66def83e00359_@@U-$ITypedEventHandler@PEAVSplashS.c)
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_de7a847248f7e9ff51c83bca1460305a_>::Run(
        __int64 a1)
{
  RTL_SRWLOCK *v1; // rax
  RTL_SRWLOCK *v2; // rdi
  RTL_SRWLOCK *v3; // rbx
  __int64 v4; // rbx
  volatile int *v5; // rdx
  _QWORD v6[2]; // [rsp+20h] [rbp-10h] BYREF
  __int64 v7; // [rsp+50h] [rbp+20h] BYREF
  RTL_SRWLOCK *v8; // [rsp+58h] [rbp+28h] BYREF
  __int64 v9; // [rsp+60h] [rbp+30h] BYREF

  v1 = *(RTL_SRWLOCK **)(a1 + 16);
  v7 = 0LL;
  v8 = v1;
  v2 = v1 + 2;
  v9 = *(_QWORD *)(a1 + 32);
  v3 = v1 + 3;
  v6[0] = &v8;
  v6[1] = &v9;
  AcquireSRWLockExclusive(v1 + 3);
  Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(&v7, v2);
  if ( v3 )
    ReleaseSRWLockExclusive(v3);
  v4 = v7;
  if ( v7 )
  {
    Microsoft::WRL::InvokeTraits<-2>::InvokeDelegates<_lambda_f3e2ba377ecf56fb3aa66def83e00359_,Windows::Foundation::ITypedEventHandler<Windows::ApplicationModel::Activation::SplashScreen *,IInspectable *>>(
      v6,
      v7,
      v2);
    if ( !Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)(v4 + 12), v5) )
    {
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 24LL))(v4, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
}
