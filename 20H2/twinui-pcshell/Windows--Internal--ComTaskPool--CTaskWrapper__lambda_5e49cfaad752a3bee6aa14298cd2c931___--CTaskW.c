/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5e49cfaad752a3bee6aa14298cd2c931___::CTaskWrapper__lambda_5e49cfaad752a3bee6aa14298cd2c931_____lambda_5e49cfaad752a3bee6aa14298cd2c931___ @ 0x1802DBE30
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_5e49cfaad752a3bee6aa14298cd2c931___ @ 0x1802DC110 (Windows--Internal--ComTaskPool--QueueTask__lambda_5e49cfaad752a3bee6aa14298cd2c931___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18002FF10 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ??0?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@@Z @ 0x1802CC70C (--0-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Para_ea_1802CC70C.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5e49cfaad752a3bee6aa14298cd2c931___::CTaskWrapper__lambda_5e49cfaad752a3bee6aa14298cd2c931_____lambda_5e49cfaad752a3bee6aa14298cd2c931___(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // rax

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(a1);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)a2;
  v4 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(a1 + 24) = v4;
  *(_QWORD *)(a1 + 32) = *(_QWORD *)(a2 + 16);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a2 + 24);
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)(a1 + 48));
  *(_QWORD *)(a1 + 48) = &ViewManagerInteropTraceLogging::AddSessionIdleTaskCompletion::`vftable';
  *(_QWORD *)a1 = off_1804B5890;
  return a1;
}
