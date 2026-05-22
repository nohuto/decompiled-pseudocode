/*
 * XREFs of ??_ESpatialInteractionEyeGazeObjectDevice@SpatialInteractions@Internal@Windows@@UEAAPEAXI@Z @ 0x1800D6610
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EF94 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18003B368 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C740 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1SpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@MEAA@XZ @ 0x1800D5AF4 (--1SpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@MEAA@XZ.c)
 */

Windows::Internal::SpatialInteractions::SpatialInteractionEyeGazeObjectDevice *__fastcall Windows::Internal::SpatialInteractions::SpatialInteractionEyeGazeObjectDevice::`vector deleting destructor'(
        Windows::Internal::SpatialInteractions::SpatialInteractionEyeGazeObjectDevice *this,
        char a2)
{
  std::_Ref_count_base *v4; // rcx

  v4 = (std::_Ref_count_base *)*((_QWORD *)this + 28);
  if ( v4 )
    std::_Ref_count_base::_Decref(v4);
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 26);
  Windows::Internal::SpatialInteractions::SpatialInteractionObjectDevice::~SpatialInteractionObjectDevice(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xF0);
  return this;
}
