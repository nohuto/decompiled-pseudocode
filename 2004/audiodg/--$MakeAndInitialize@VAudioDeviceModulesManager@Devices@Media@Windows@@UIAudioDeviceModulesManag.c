/*
 * XREFs of ??$MakeAndInitialize@VAudioDeviceModulesManager@Devices@Media@Windows@@UIAudioDeviceModulesManager@234@PEAX@Details@WRL@Microsoft@@YAJPEAPEAUIAudioDeviceModulesManager@Devices@Media@Windows@@$$QEAPEAX@Z @ 0x140012E64
 * Callers:
 *     ?CreateDeviceEndpointInstance@CEndpointInstance@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140002160 (-CreateDeviceEndpointInstance@CEndpointInstance@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@.c)
 * Callees:
 *     ?RegisterBrokerEvents@AudioDeviceModulesManager@Devices@Media@Windows@@AEAAJXZ @ 0x140010AA8 (-RegisterBrokerEvents@AudioDeviceModulesManager@Devices@Media@Windows@@AEAAJXZ.c)
 *     ??0AudioDeviceModulesManager@Devices@Media@Windows@@QEAA@XZ @ 0x140010C9C (--0AudioDeviceModulesManager@Devices@Media@Windows@@QEAA@XZ.c)
 *     ??$MakeAndInitialize@VAudioDeviceBroker@Internal@Devices@Media@Windows@@UIAudioDeviceBroker@2345@AEAPEAX@Details@WRL@Microsoft@@YAJPEAPEAUIAudioDeviceBroker@Internal@Devices@Media@Windows@@AEAPEAX@Z @ 0x140011754 (--$MakeAndInitialize@VAudioDeviceBroker@Internal@Devices@Media@Windows@@UIAudioDeviceBroker@2345.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14001D34C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001F470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Windows::Media::Devices::AudioDeviceModulesManager,Windows::Media::Devices::IAudioDeviceModulesManager,void *>(
        _QWORD *a1,
        HANDLE *a2)
{
  RTL_SRWLOCK *v4; // rax
  RTL_SRWLOCK *v5; // rdi
  Windows::Media::Devices::Internal::AudioDeviceBroker **v6; // rsi
  PVOID Ptr; // rcx
  int v8; // ebx
  Windows::Media::Devices::Internal::AudioDeviceBroker *v9; // rsi
  PVOID v10; // rcx
  HANDLE v12; // [rsp+40h] [rbp+8h] BYREF
  RTL_SRWLOCK *v13; // [rsp+50h] [rbp+18h]
  __int64 v14; // [rsp+58h] [rbp+20h]

  *a1 = 0LL;
  v4 = (RTL_SRWLOCK *)operator new(0x80uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v5 = Windows::Media::Devices::AudioDeviceModulesManager::AudioDeviceModulesManager(v4);
    v13 = v5;
    v14 = 0LL;
    v12 = *a2;
    v6 = (Windows::Media::Devices::Internal::AudioDeviceBroker **)&v5[12];
    Ptr = v5[12].Ptr;
    if ( Ptr )
    {
      *v6 = 0LL;
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 16LL))(Ptr);
    }
    v8 = Microsoft::WRL::Details::MakeAndInitialize<Windows::Media::Devices::Internal::AudioDeviceBroker,Windows::Media::Devices::Internal::IAudioDeviceBroker,void * &>(
           v6,
           &v12);
    if ( v8 >= 0 )
    {
      v8 = Windows::Media::Devices::AudioDeviceModulesManager::RegisterBrokerEvents((Windows::Media::Devices::AudioDeviceModulesManager *)v5);
      if ( v8 >= 0 )
      {
        v9 = *v6;
        v10 = v5[13].Ptr;
        if ( v10 )
        {
          v5[13].Ptr = 0LL;
          (*(void (__fastcall **)(PVOID))(*(_QWORD *)v10 + 16LL))(v10);
        }
        v8 = (*(__int64 (__fastcall **)(Windows::Media::Devices::Internal::AudioDeviceBroker *, RTL_SRWLOCK *))(*(_QWORD *)v9 + 48LL))(
               v9,
               v5 + 13);
        if ( v8 >= 0 )
          v8 = (*(__int64 (__fastcall **)(RTL_SRWLOCK *, GUID *, _QWORD *))v5->Ptr)(
                 v5,
                 &GUID_6aa40c4d_960a_4d1c_b318_0022604547ed,
                 a1);
      }
    }
    if ( v5 )
      (*((void (__fastcall **)(RTL_SRWLOCK *))v5->Ptr + 2))(v5);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v8;
}
