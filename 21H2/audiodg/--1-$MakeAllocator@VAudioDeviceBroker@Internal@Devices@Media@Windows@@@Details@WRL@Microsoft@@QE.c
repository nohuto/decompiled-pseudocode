/*
 * XREFs of ??1?$MakeAllocator@VAudioDeviceBroker@Internal@Devices@Media@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x140012BB0
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_Windows::Media::Devices::Internal::AudioDeviceBroker_Windows::Media::Devices::Internal::IAudioDeviceBroker_void___&__::_1_::dtor$0 @ 0x14002D67E (_Microsoft--WRL--Details--MakeAndInitialize_Windows--Media--Devices--Internal--Audi_ea_14002D67E.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::Details::MakeAllocator<Windows::Media::Devices::Internal::AudioDeviceBroker>::~MakeAllocator<Windows::Media::Devices::Internal::AudioDeviceBroker>(
        void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    operator delete(v1);
}
