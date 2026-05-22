/*
 * XREFs of _Microsoft::WRL::Details::Make_SpectrumListener_MPCRawInputProvider____::_1_::dtor$0 @ 0x180089697
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VDisplayChangedHandler@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180089E40 (--1-$ComPtr@VDisplayChangedHandler@SpatialInteractionSourceDeviceCollection@SpatialInteractions@.c)
 */

__int64 __fastcall Microsoft::WRL::Details::Make_SpectrumListener_MPCRawInputProvider____::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return Microsoft::WRL::ComPtr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::DisplayChangedHandler>::~ComPtr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::DisplayChangedHandler>(*(_QWORD *)(a2 + 64));
  }
  return result;
}
