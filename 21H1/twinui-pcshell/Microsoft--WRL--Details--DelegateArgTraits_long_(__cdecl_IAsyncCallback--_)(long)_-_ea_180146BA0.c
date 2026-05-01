/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)_::DelegateInvokeHelper_IAsyncCallback__lambda_4eb51ed923c3c5026d1aa1b932d3fcbb___1_long_::Invoke @ 0x180146BA0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x180022534 (--0-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsPro_ea_180022534.c)
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x1801258C4 (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 *     ?_ContinueSwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@VSwitchAsyncWorker@CAppViewManagerTelemetry@@PEAUIAsyncCallback@@@Z @ 0x18014B9F8 (-_ContinueSwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@VSwitc.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_IAsyncCallback::___long__::DelegateInvokeHelper_IAsyncCallback__lambda_4eb51ed923c3c5026d1aa1b932d3fcbb___1_long_::Invoke(
        __int64 a1)
{
  __int64 v1; // rsi
  __int64 v2; // rbx
  __int64 v4; // r9
  __int64 v5; // r8
  __int64 v6; // rdx
  signed int v7; // eax
  unsigned int v8; // ebx
  _QWORD v10[40]; // [rsp+30h] [rbp-148h] BYREF

  v1 = *(_QWORD *)(a1 + 16);
  v2 = *(_QWORD *)(a1 + 680);
  *(_BYTE *)(a1 + 672) = 0;
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v10,
    (_QWORD *)(a1 + 48));
  v4 = *(unsigned int *)(a1 + 40);
  v5 = *(_QWORD *)(a1 + 32);
  v6 = *(_QWORD *)(a1 + 24);
  v10[0] = &CAppViewManagerTelemetry::SwitchAsyncWorker::`vftable';
  v7 = ((__int64 (__fastcall *)(__int64, __int64, __int64, __int64, _QWORD *, __int64))CAppViewManager::_ContinueSwitchAsyncWorker)(
         v1,
         v6,
         v5,
         v4,
         v10,
         v2);
  v8 = v7;
  if ( v7 < 0 )
    Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot(v7);
  return v8;
}
