/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_bb8876069d118ed8c7de1f7a35d44c02___::CTaskWrapper__lambda_bb8876069d118ed8c7de1f7a35d44c02_____lambda_bb8876069d118ed8c7de1f7a35d44c02___ @ 0x1802CACE8
 * Callers:
 *     ?_ReconcileSessionIdleTaskCompletion@ViewWrapperBase@@AEAAJXZ @ 0x1802D27D4 (-_ReconcileSessionIdleTaskCompletion@ViewWrapperBase@@AEAAJXZ.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18002FF10 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18007256C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@@Z @ 0x1802CC70C (--0-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Para_ea_1802CC70C.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_bb8876069d118ed8c7de1f7a35d44c02___::CTaskWrapper__lambda_bb8876069d118ed8c7de1f7a35d44c02_____lambda_bb8876069d118ed8c7de1f7a35d44c02___(
        __int64 a1,
        __int64 a2)
{
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(a1);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)a2;
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a2 + 8);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)(a1 + 24));
  *(_QWORD *)(a1 + 32) = *(_QWORD *)(a2 + 16);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a2 + 24);
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    a1 + 48,
    a2 + 32);
  *(_QWORD *)(a1 + 48) = &ViewManagerInteropTraceLogging::AddSessionIdleTaskCompletion::`vftable';
  *(_QWORD *)a1 = off_1804B36B0;
  return a1;
}
