/*
 * XREFs of ??1?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180052AD8
 * Callers:
 *     ??1ActionInvokedActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAA@XZ @ 0x180051A88 (--1ActionInvokedActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAA.c)
 *     _lambda_b7df6605325939df64e4896ead66165a_::operator() @ 0x1800538BC (_lambda_b7df6605325939df64e4896ead66165a_--operator().c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180029D8C (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??1?$ActivityData@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180052B54 (--1-$ActivityData@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@_ea_180052B54.c)
 */

void __fastcall wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
        __int64 a1)
{
  volatile signed __int32 *v2; // rcx
  char *v3; // rdi

  v2 = *(volatile signed __int32 **)(a1 + 304);
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd(v2, 0xFFFFFFFF) == 1 )
    {
      v3 = *(char **)(a1 + 304);
      if ( v3 )
      {
        wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,_TlgReflectorTag_Param0IsProviderType>(v3 + 8);
        operator delete(v3);
      }
    }
    *(_QWORD *)(a1 + 304) = 0LL;
  }
  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,_TlgReflectorTag_Param0IsProviderType>(a1 + 56);
  if ( *(_DWORD *)(a1 + 32) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}
