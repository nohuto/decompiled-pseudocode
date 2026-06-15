/*
 * XREFs of ?ThreadpoolCallback@AudioDeviceBroker@Internal@Devices@Media@Windows@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z @ 0x140051720
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x14001A8BC (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14001D34C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001F470 (_guard_dispatch_icall_nop.c)
 *     ??$DoInvoke@V_lambda_9131e0e9ec3a2508b9ac6c88df60671b_@@@?$EventSource@U?$ITypedEventHandler@PEAVAudioDeviceBroker@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJV_lambda_9131e0e9ec3a2508b9ac6c88df60671b_@@@Z @ 0x1400499F4 (--$DoInvoke@V_lambda_9131e0e9ec3a2508b9ac6c88df60671b_@@@-$EventSource@U-$ITypedEventHandler@PEA.c)
 *     ??0AudioDeviceBrokerChangedEventArgs@Internal@Devices@Media@Windows@@QEAA@PEAUIBuffer@Streams@Storage@4@@Z @ 0x14004A954 (--0AudioDeviceBrokerChangedEventArgs@Internal@Devices@Media@Windows@@QEAA@PEAUIBuffer@Streams@St.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAudioDeviceBrokerChangedEventArgs@Internal@Devices@Media@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x140050930 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAud_ea_140050930.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall Windows::Media::Devices::Internal::AudioDeviceBroker::ThreadpoolCallback(
        PTP_CALLBACK_INSTANCE Instance,
        RTL_SRWLOCK *Context,
        PTP_WAIT Wait,
        TP_WAIT_RESULT WaitResult)
{
  BOOL v6; // r14d
  Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *v7; // rbx
  PVOID Ptr; // rdi
  struct Windows::Storage::Streams::IBuffer *v9; // rdi
  Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *v10; // rax
  struct Windows::Storage::Streams::IBuffer *v11; // [rsp+20h] [rbp-30h] BYREF
  RTL_SRWLOCK *v12; // [rsp+28h] [rbp-28h] BYREF
  Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *v13; // [rsp+30h] [rbp-20h] BYREF
  __int128 v14; // [rsp+40h] [rbp-10h] BYREF
  int v15; // [rsp+78h] [rbp+28h] BYREF

  v6 = CoInitializeEx(0LL, 0) >= 0;
  if ( Context )
  {
    v15 = 0;
    while ( (*(int (__fastcall **)(PVOID, int *))(*(_QWORD *)Context[25].Ptr + 56LL))(Context[25].Ptr, &v15) >= 0 && v15 )
    {
      v11 = 0LL;
      v7 = 0LL;
      v13 = 0LL;
      Ptr = Context[25].Ptr;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v11);
      (*(void (__fastcall **)(PVOID, _QWORD, struct Windows::Storage::Streams::IBuffer **))(*(_QWORD *)Ptr + 48LL))(
        Ptr,
        0LL,
        &v11);
      if ( v11 )
      {
        (*(void (__fastcall **)(PVOID, _QWORD))(*(_QWORD *)Context[25].Ptr + 96LL))(Context[25].Ptr, 0LL);
        v9 = v11;
        v10 = (Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *)operator new(
                                                                                        0x48uLL,
                                                                                        (const struct std::nothrow_t *)&std::nothrow);
        if ( v10 )
          v7 = Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs::AudioDeviceBrokerChangedEventArgs(
                 v10,
                 v9);
        if ( v7 )
        {
          v13 = v7;
          v12 = Context;
          *(_QWORD *)&v14 = &v12;
          *((_QWORD *)&v14 + 1) = &v13;
          Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::Internal::AudioDeviceBroker *,Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::DoInvoke<_lambda_9131e0e9ec3a2508b9ac6c88df60671b_>(
            Context + 16,
            &v14);
        }
      }
      if ( v7 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Media::Devices::Internal::IAudioDeviceBrokerChangedEventArgs,Microsoft::WRL::FtmBase>::Release((__int64)v7);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v11);
    }
    AcquireSRWLockExclusive(Context + 21);
    if ( !LOBYTE(Context[24].Ptr) )
      SetThreadpoolWait(Wait, Context[23].Ptr, 0LL);
    if ( Context != (RTL_SRWLOCK *)-168LL )
      ReleaseSRWLockExclusive(Context + 21);
  }
  if ( v6 )
    CoUninitialize();
}
