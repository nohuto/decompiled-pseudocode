/*
 * XREFs of _CAudioStream::CAudioStream_::_1_::dtor$4 @ 0x18007BCA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioStream::CAudioStream_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::Details::MakeAllocator<SpatialAudioDeviceStateReader>::~MakeAllocator<SpatialAudioDeviceStateReader>(*(_QWORD *)(a2 + 72) + 120LL);
}
