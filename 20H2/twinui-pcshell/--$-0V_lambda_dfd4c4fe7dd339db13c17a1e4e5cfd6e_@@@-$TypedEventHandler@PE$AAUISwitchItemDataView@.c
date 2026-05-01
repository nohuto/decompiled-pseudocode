/*
 * XREFs of ??$?0V_lambda_dfd4c4fe7dd339db13c17a1e4e5cfd6e_@@@?$TypedEventHandler@PE$AAUISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@@PE$AAUIEvaluateItemEventArgs@2345@@Foundation@Windows@@QE$AAA@V_lambda_dfd4c4fe7dd339db13c17a1e4e5cfd6e_@@W4CallbackContext@Platform@@_N@Z @ 0x1802F6764
 * Callers:
 *     ?AddCallback@MonitorFrame@@AEAAXXZ @ 0x1802FE73C (-AddCallback@MonitorFrame@@AEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18007256C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0__abi_FTMWeakRefData@@QEAA@PE$AAVObject@Platform@@W4CallbackContext@2@@Z @ 0x1802EC718 (--0__abi_FTMWeakRefData@@QEAA@PE$AAVObject@Platform@@W4CallbackContext@2@@Z.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall Windows::Foundation::TypedEventHandler<Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView __gc *,Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs __gc *>::TypedEventHandler<Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView __gc *,Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs __gc *>(
        _QWORD *a1,
        __int64 *a2)
{
  _QWORD *v4; // rdi
  __int64 v5; // rbx
  _QWORD *v7; // [rsp+48h] [rbp+10h] BYREF

  v7 = a2;
  Platform::Delegate::Delegate(a1 + 2);
  *a1 = &Windows::Foundation::TypedEventHandler<Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView __gc *,Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs __gc *>::`vftable'{for `__abi_IUnknown'};
  a1[1] = &Windows::Foundation::TypedEventHandler<Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView __gc *,Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs __gc *>::`vftable'{for `Platform::Object'};
  a1[2] = &Windows::Foundation::TypedEventHandler<Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView __gc *,Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs __gc *>::`vftable';
  __abi_FTMWeakRefData::__abi_FTMWeakRefData((__int64)(a1 + 3));
  v4 = a1 + 5;
  a1[37] = a1 + 5;
  v7 = a1 + 5;
  if ( a1 != (_QWORD *)-40LL )
  {
    v7 = (_QWORD *)*a2;
    v5 = (__int64)v7;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v7);
    *v4 = &Platform::Details::__abi_FunctorCapture<_lambda_dfd4c4fe7dd339db13c17a1e4e5cfd6e_,void,Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView __gc *,Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs __gc *>::`vftable';
    a1[6] = v5;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(a1 + 6);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v7);
  }
  a1[37] = v4;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a2);
  return a1;
}
