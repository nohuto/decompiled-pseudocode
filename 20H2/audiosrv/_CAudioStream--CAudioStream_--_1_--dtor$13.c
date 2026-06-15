/*
 * XREFs of _CAudioStream::CAudioStream_::_1_::dtor$13 @ 0x18007B300
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioStream::CAudioStream_::_1_::dtor_13(__int64 a1, __int64 a2)
{
  return std::vector<wil::com_ptr_t<IAudioStreamVolumeCallback,wil::err_returncode_policy>>::~vector<wil::com_ptr_t<IAudioStreamVolumeCallback,wil::err_returncode_policy>>(*(_QWORD *)(a2 + 72) + 272LL);
}
