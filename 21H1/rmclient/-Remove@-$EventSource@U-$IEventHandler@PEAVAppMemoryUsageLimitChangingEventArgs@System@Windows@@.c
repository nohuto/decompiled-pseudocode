/*
 * XREFs of ?Remove@?$EventSource@U?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x18000F5D4
 * Callers:
 *     ??$InvokeDelegates@V_lambda_46c8720b1b7964c7fc659f01aa7c951a_@@U?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@@?$InvokeTraits@$0?1@WRL@Microsoft@@SAJV_lambda_46c8720b1b7964c7fc659f01aa7c951a_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@U?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@12@@Z @ 0x180001D48 (--$InvokeDelegates@V_lambda_46c8720b1b7964c7fc659f01aa7c951a_@@U-$IEventHandler@PEAVAppMemoryUsa.c)
 *     ?remove_AppMemoryUsageLimitChanging@CMemoryManager@System@Windows@@UEAAJUEventRegistrationToken@@@Z @ 0x18000F8C0 (-remove_AppMemoryUsageLimitChanging@CMemoryManager@System@Windows@@UEAAJUEventRegistrationToken@.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800020F0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z @ 0x180002148 (-AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z.c)
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x18000267C (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ??$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@AEA_K@Details@WRL@Microsoft@@YAJPEAPEAVEventTargetArray@012@AEA_K@Z @ 0x18000E2B8 (--$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@AEA_K@Details@WRL@Microsoft@.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource<Windows::Foundation::IEventHandler<Windows::System::AppMemoryUsageLimitChangingEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::Remove(
        Microsoft::WRL::Details::EventTargetArray *a1,
        struct IUnknown *a2)
{
  __int64 v2; // rdi
  volatile int *v4; // rdx
  int v5; // ebx
  struct IUnknown **v6; // rcx
  Microsoft::WRL::Details::EventTargetArray *v7; // rbx
  bool v8; // r15
  __int64 v9; // r12
  __int64 v10; // r12
  __int64 v11; // rax
  struct IUnknown **v12; // r14
  void **v13; // r13
  volatile int *v14; // rdx
  Microsoft::WRL::Details::EventTargetArray *v16; // [rsp+60h] [rbp+40h] BYREF
  __int64 v17; // [rsp+70h] [rbp+50h] BYREF
  __int64 v18; // [rsp+78h] [rbp+58h] BYREF

  v16 = a1;
  v2 = 0LL;
  v17 = 0LL;
  AcquireSRWLockExclusive(&SRWLock);
  if ( !Windows::System::CMemoryManager::s_limitChangeEvent )
  {
    v5 = 0;
LABEL_8:
    ReleaseSRWLockExclusive(&SRWLock);
    return (unsigned int)v5;
  }
  v6 = *(struct IUnknown ***)(Windows::System::CMemoryManager::s_limitChangeEvent + 16);
  v7 = 0LL;
  v8 = 0;
  v9 = *(_QWORD *)(Windows::System::CMemoryManager::s_limitChangeEvent + 24) - (_QWORD)v6;
  v16 = 0LL;
  v10 = (v9 >> 3) - 1;
  v18 = v10;
  if ( !v10 )
  {
    v8 = *v6 == a2;
LABEL_16:
    if ( v8 )
    {
      AcquireSRWLockExclusive(&stru_1800247C8);
      Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(
        &v17,
        (volatile int *)&Windows::System::CMemoryManager::s_limitChangeEvent);
      Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(
        &Windows::System::CMemoryManager::s_limitChangeEvent,
        (volatile int *)&v16);
      ReleaseSRWLockExclusive(&stru_1800247C8);
      v2 = v17;
      v7 = v16;
    }
    goto LABEL_18;
  }
  v5 = Microsoft::WRL::Details::MakeAndInitialize<Microsoft::WRL::Details::EventTargetArray,Microsoft::WRL::Details::EventTargetArray,unsigned __int64 &>(
         &v16,
         (unsigned __int64 *)&v18);
  if ( v5 < 0 )
  {
    if ( v16 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(
        (__int64)v16,
        v4);
    goto LABEL_8;
  }
  v11 = Windows::System::CMemoryManager::s_limitChangeEvent;
  v7 = v16;
  v12 = *(struct IUnknown ***)(Windows::System::CMemoryManager::s_limitChangeEvent + 16);
  v13 = *(void ***)(Windows::System::CMemoryManager::s_limitChangeEvent + 32);
  if ( v12 != *(struct IUnknown ***)(Windows::System::CMemoryManager::s_limitChangeEvent + 24) )
  {
    do
    {
      if ( v8 || a2 != *v12 )
      {
        if ( !v10 )
          goto LABEL_16;
        Microsoft::WRL::Details::EventTargetArray::AddTail(v7, *v12, *v13);
        v11 = Windows::System::CMemoryManager::s_limitChangeEvent;
        ++v13;
        --v10;
      }
      else
      {
        v8 = 1;
      }
      ++v12;
    }
    while ( v12 != *(struct IUnknown ***)(v11 + 24) );
    goto LABEL_16;
  }
LABEL_18:
  if ( v7 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(
      (__int64)v7,
      v4);
  ReleaseSRWLockExclusive(&SRWLock);
  v5 = 0;
  if ( v2 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v2, v14);
  return (unsigned int)v5;
}
