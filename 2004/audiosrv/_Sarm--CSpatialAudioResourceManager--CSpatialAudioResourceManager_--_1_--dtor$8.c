/*
 * XREFs of _Sarm::CSpatialAudioResourceManager::CSpatialAudioResourceManager_::_1_::dtor$8 @ 0x18007D423
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Sarm::CSpatialAudioResourceManager::CSpatialAudioResourceManager_::_1_::dtor_8(
        __int64 a1,
        __int64 a2)
{
  return wil::com_ptr_t<CExclusiveModeListener,wil::err_returncode_policy>::~com_ptr_t<CExclusiveModeListener,wil::err_returncode_policy>(*(_QWORD *)(a2 + 64) + 576LL);
}
