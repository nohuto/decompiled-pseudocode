/*
 * XREFs of ??0?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x18006A6A0
 * Callers:
 *     ?GetTriggeredItemsForStateAsync@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@UEAAJPEAUHSTRING__@@00PEAPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@@Foundation@5@@Z @ 0x180069310 (-GetTriggeredItemsForStateAsync@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Se.c)
 *     _lambda_b59dbdfd0007f2d89c20db91cc7697cd_::operator() @ 0x180069728 (_lambda_b59dbdfd0007f2d89c20db91cc7697cd_--operator().c)
 * Callees:
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800298F4 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002996C (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??1?$ActivityData@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180065EBC (--1-$ActivityData@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@_ea_180065EBC.c)
 *     ??0?$ActivityData@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV012@@Z @ 0x18006A92C (--0-$ActivityData@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@U_TlgReflect.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800CD574 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x1800CD9F1 (memset_0.c)
 */

__int64 __fastcall wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
        __int64 a1,
        _QWORD *a2)
{
  wil::details::ThreadFailureCallbackHolder *v2; // r14
  volatile signed __int32 *v5; // rcx
  void *v6; // rbx
  volatile signed __int32 *v7; // rax
  _DWORD *v8; // rax
  _DWORD *v9; // r14
  volatile signed __int32 *v10; // rcx
  void *v11; // rbp
  volatile signed __int32 *v12; // rcx
  void *v13; // rbx
  volatile signed __int32 *v14; // rax

  v2 = (wil::details::ThreadFailureCallbackHolder *)(a1 + 8);
  *(_QWORD *)(a1 + 16) = a1;
  *(_QWORD *)a1 = &wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::`vftable';
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_DWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0LL;
  wil::details::ThreadFailureCallbackHolder::StartWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
  *(_QWORD *)(a1 + 48) = a1 + 56;
  *(_QWORD *)(a1 + 280) = 0LL;
  *(_QWORD *)(a1 + 288) = 0LL;
  *(_DWORD *)(a1 + 56) = 0;
  *(_BYTE *)(a1 + 60) = 0;
  *(_BYTE *)(a1 + 120) = 0;
  *(_DWORD *)(a1 + 96) = 0;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 128) = 1LL;
  memset_0((void *)(a1 + 136), 0, 0x90uLL);
  *(_QWORD *)(a1 + 296) = 0LL;
  *(_QWORD *)(a1 + 304) = 0LL;
  if ( *(_DWORD *)(a1 + 32) )
    wil::details::ThreadFailureCallbackHolder::StopWatching(v2);
  if ( a2[38] )
  {
    *(_QWORD *)(a1 + 48) = a2[6];
    v5 = *(volatile signed __int32 **)(a1 + 304);
    if ( v5 )
    {
      if ( _InterlockedExchangeAdd(v5, 0xFFFFFFFF) == 1 )
      {
        v6 = *(void **)(a1 + 304);
        if ( v6 )
        {
          wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,_TlgReflectorTag_Param0IsProviderType>((__int64)v6 + 8);
          operator delete(v6);
        }
      }
      *(_QWORD *)(a1 + 304) = 0LL;
    }
    v7 = (volatile signed __int32 *)a2[38];
    *(_QWORD *)(a1 + 304) = v7;
    if ( v7 )
      _InterlockedIncrement(v7);
  }
  else
  {
    v8 = operator new(0x100uLL, (const struct std::nothrow_t *)&std::nothrow);
    v9 = v8;
    if ( v8 )
    {
      *v8 = 1;
      wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,_TlgReflectorTag_Param0IsProviderType>(
        v8 + 2,
        a2 + 7);
    }
    else
    {
      v9 = 0LL;
    }
    if ( v9 )
    {
      v10 = *(volatile signed __int32 **)(a1 + 304);
      if ( v10 )
      {
        if ( _InterlockedExchangeAdd(v10, 0xFFFFFFFF) == 1 )
        {
          v11 = *(void **)(a1 + 304);
          if ( v11 )
          {
            wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,_TlgReflectorTag_Param0IsProviderType>((__int64)v11 + 8);
            operator delete(v11);
          }
        }
      }
      *(_QWORD *)(a1 + 304) = v9;
      *(_QWORD *)(a1 + 48) = v9 + 2;
      v12 = (volatile signed __int32 *)a2[38];
      if ( v12 )
      {
        if ( _InterlockedExchangeAdd(v12, 0xFFFFFFFF) == 1 )
        {
          v13 = (void *)a2[38];
          if ( v13 )
          {
            wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,_TlgReflectorTag_Param0IsProviderType>((__int64)v13 + 8);
            operator delete(v13);
          }
        }
        a2[38] = 0LL;
      }
      v14 = *(volatile signed __int32 **)(a1 + 304);
      a2[38] = v14;
      if ( v14 )
        _InterlockedIncrement(v14);
      a2[6] = *(_QWORD *)(a1 + 48);
      a2[5] = *(_QWORD *)(a1 + 48) + 40LL;
    }
  }
  *(_QWORD *)(a1 + 40) = *(_QWORD *)(a1 + 48) + 40LL;
  return a1;
}
