/*
 * XREFs of ?Remove@?$EventSource@U?$ITypedEventHandler@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x14002657C
 * Callers:
 *     ??$InvokeDelegates@V_lambda_684246e06c70477e7c65fe35849694f0_@@U?$ITypedEventHandler@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@Windows@@@?$InvokeTraits@$0?1@WRL@Microsoft@@SAJV_lambda_684246e06c70477e7c65fe35849694f0_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@U?$ITypedEventHandler@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@12@@Z @ 0x14001FC6C (--$InvokeDelegates@V_lambda_684246e06c70477e7c65fe35849694f0_@@U-$ITypedEventHandler@PEAVAudioDe.c)
 *     ?remove_ModuleNotificationReceived@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@UEAAJUEventRegistrationToken@@@Z @ 0x1400285E0 (-remove_ModuleNotificationReceived@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@UEAAJ.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x140010F50 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x14001A65C (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ??$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@AEA_K@Details@WRL@Microsoft@@YAJPEAPEAVEventTargetArray@012@AEA_K@Z @ 0x140054078 (--$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@AEA_K@Details@WRL@Microsoft@.c)
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x140054E38 (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ?AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z @ 0x14005572C (-AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *,Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::Remove(
        RTL_SRWLOCK *a1,
        struct IUnknown *a2)
{
  __int64 v4; // rbx
  _QWORD *Ptr; // rax
  int v6; // esi
  struct IUnknown **v7; // rcx
  bool v8; // r15
  __int64 v9; // r12
  RTL_SRWLOCK *v10; // r12
  struct IUnknown **v11; // rsi
  void **v12; // r13
  PSRWLOCK v14[2]; // [rsp+20h] [rbp-10h] BYREF
  Microsoft::WRL::Details::EventTargetArray *v15; // [rsp+70h] [rbp+40h] BYREF
  __int64 v16; // [rsp+80h] [rbp+50h] BYREF
  PSRWLOCK SRWLock; // [rsp+88h] [rbp+58h] BYREF

  v4 = 0LL;
  v16 = 0LL;
  wil::srwlock::lock_exclusive(a1 + 2, &SRWLock);
  Ptr = a1->Ptr;
  if ( !a1->Ptr )
  {
    v6 = 0;
LABEL_8:
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
    return (unsigned int)v6;
  }
  v7 = (struct IUnknown **)Ptr[2];
  v8 = 0;
  v9 = Ptr[3];
  v15 = 0LL;
  v10 = (RTL_SRWLOCK *)(((v9 - (__int64)v7) >> 3) - 1);
  v14[0] = v10;
  if ( !v10 )
  {
    v8 = *v7 == a2;
LABEL_17:
    if ( v8 )
    {
      wil::srwlock::lock_exclusive(a1 + 1, v14);
      Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(&v16, a1);
      Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(a1, &v15);
      if ( v14[0] )
        ReleaseSRWLockExclusive(v14[0]);
      v4 = v16;
    }
    goto LABEL_21;
  }
  v6 = Microsoft::WRL::Details::MakeAndInitialize<Microsoft::WRL::Details::EventTargetArray,Microsoft::WRL::Details::EventTargetArray,unsigned __int64 &>(
         &v15,
         v14);
  if ( v6 < 0 )
  {
    if ( v15 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((__int64)v15);
    goto LABEL_8;
  }
  v11 = (struct IUnknown **)*((_QWORD *)a1->Ptr + 2);
  v12 = (void **)*((_QWORD *)a1->Ptr + 4);
  if ( v11 != *((struct IUnknown ***)a1->Ptr + 3) )
  {
    do
    {
      if ( v8 || a2 != *v11 )
      {
        if ( !v10 )
          goto LABEL_17;
        Microsoft::WRL::Details::EventTargetArray::AddTail(v15, *v11, *v12++);
        v10 = (RTL_SRWLOCK *)((char *)v10 - 1);
      }
      else
      {
        v8 = 1;
      }
      ++v11;
    }
    while ( v11 != *((struct IUnknown ***)a1->Ptr + 3) );
    goto LABEL_17;
  }
LABEL_21:
  if ( v15 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((__int64)v15);
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  v6 = 0;
  if ( v4 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v4);
  return (unsigned int)v6;
}
