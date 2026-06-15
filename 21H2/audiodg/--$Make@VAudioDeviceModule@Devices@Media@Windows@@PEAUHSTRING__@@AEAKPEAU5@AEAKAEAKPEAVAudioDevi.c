/*
 * XREFs of ??$Make@VAudioDeviceModule@Devices@Media@Windows@@PEAUHSTRING__@@AEAKPEAU5@AEAKAEAKPEAVAudioDeviceBrokerDevice@Internal@234@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VAudioDeviceModule@Devices@Media@Windows@@@12@$$QEAPEAUHSTRING__@@AEAK011$$QEAPEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@Z @ 0x14001FDE0
 * Callers:
 *     ?GetAudioModules@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@UEAAJPEAU?$IVector@PEAVAudioDeviceModule@Devices@Media@Windows@@@Collections@Foundation@5@@Z @ 0x140022CC0 (-GetAudioModules@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@UEAAJPEAU-$IVector@PEAV.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14001D6AC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0AudioDeviceModule@Devices@Media@Windows@@QEAA@PEAUHSTRING__@@I0IIPEAUIAudioDeviceBrokerDevice@Internal@123@@Z @ 0x140020A94 (--0AudioDeviceModule@Devices@Media@Windows@@QEAA@PEAUHSTRING__@@I0IIPEAUIAudioDeviceBrokerDevice.c)
 *     _guard_dispatch_icall_nop @ 0x140029E50 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall Microsoft::WRL::Details::Make<Windows::Media::Devices::AudioDeviceModule,HSTRING__ *,unsigned long &,HSTRING__ *,unsigned long &,unsigned long &,Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *>(
        __int64 *a1,
        HSTRING *a2,
        unsigned int *a3,
        HSTRING *a4,
        unsigned int *a5,
        unsigned int *a6,
        struct Windows::Media::Devices::Internal::IAudioDeviceBrokerDevice **a7)
{
  Windows::Media::Devices::AudioDeviceModule *v11; // rax
  __int64 v12; // rdi

  *a1 = 0LL;
  v11 = (Windows::Media::Devices::AudioDeviceModule *)operator new(
                                                        0x68uLL,
                                                        (const struct std::nothrow_t *)&std::nothrow);
  if ( v11 )
  {
    v12 = Windows::Media::Devices::AudioDeviceModule::AudioDeviceModule(v11, *a2, *a3, *a4, *a5, *a6, *a7);
    if ( *a1 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)*a1 + 16LL))(*a1);
    *a1 = v12;
  }
  return a1;
}
