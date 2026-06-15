/*
 * XREFs of ??1?$MakeAllocator@VSpatialAudioDevicePropertyReader@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18002A58C
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_SpatialAudioDevicePropertyReader_SpatialAudioDevicePropertyReader_unsigned_short_const___&_IPropertyStore___&__::_1_::dtor$0 @ 0x18007A75A (_Microsoft--WRL--Details--MakeAndInitialize_SpatialAudioDevicePropertyReader_SpatialAudioDeviceP.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::Details::MakeAllocator<SpatialAudioDevicePropertyReader>::~MakeAllocator<SpatialAudioDevicePropertyReader>(
        void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    operator delete(v1);
}
