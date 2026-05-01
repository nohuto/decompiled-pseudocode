/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d5a2e35645378a0caf28c8561966fc73___::CTaskWrapper__lambda_d5a2e35645378a0caf28c8561966fc73_____lambda_d5a2e35645378a0caf28c8561966fc73___ @ 0x1802BABF8
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_d5a2e35645378a0caf28c8561966fc73___ @ 0x1802BAEF0 (Windows--Internal--ComTaskPool--QueueTask__lambda_d5a2e35645378a0caf28c8561966fc73___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180038890 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ??0?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@@Z @ 0x1802AB45C (--0-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Para_ea_1802AB45C.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d5a2e35645378a0caf28c8561966fc73___::CTaskWrapper__lambda_d5a2e35645378a0caf28c8561966fc73_____lambda_d5a2e35645378a0caf28c8561966fc73___(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v4; // rax

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(a1);
  *(_QWORD *)(a1 + 16) = *a2;
  v4 = a2[1];
  a2[1] = 0LL;
  *(_QWORD *)(a1 + 24) = v4;
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)(a1 + 32));
  *(_QWORD *)(a1 + 32) = &ViewManagerInteropTraceLogging::RemoveSessionIdleTaskCompletion::`vftable';
  *(_QWORD *)a1 = off_180490700;
  return a1;
}
