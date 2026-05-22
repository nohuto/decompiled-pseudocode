/*
 * XREFs of ??$As@UISpatialInteractionSourceDeviceCollectionInternal@SpatialInteractions@Internal@Windows@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UISpatialInteractionSourceDeviceCollectionInternal@SpatialInteractions@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800D4A3C
 * Callers:
 *     ?RemoveAllObjects@SpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@IEAAJXZ @ 0x1800D84AC (-RemoveAllObjects@SpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@IEAAJXZ.c)
 *     ?OnDeviceRemoved@SpatialInteractionEyeGazeObjectDevice@SpatialInteractions@Internal@Windows@@UEAAJXZ @ 0x1800DC120 (-OnDeviceRemoved@SpatialInteractionEyeGazeObjectDevice@SpatialInteractions@Internal@Windows@@UEA.c)
 *     ?StartListeningToSpatialObjects@SpatialInteractionEyeGazeObjectDevice@SpatialInteractions@Internal@Windows@@UEAAJXZ @ 0x1800DCBA0 (-StartListeningToSpatialObjects@SpatialInteractionEyeGazeObjectDevice@SpatialInteractions@Intern.c)
 *     ?StopListeningToSpatialObjects@SpatialInteractionEyeGazeObjectDevice@SpatialInteractions@Internal@Windows@@UEAAJXZ @ 0x1800DCF50 (-StopListeningToSpatialObjects@SpatialInteractionEyeGazeObjectDevice@SpatialInteractions@Interna.c)
 *     ?OnHandSpatialObjectAdded@SpatialInteractionHandObjectDevice@SpatialInteractions@Internal@Windows@@AEAAJAEBU_GUID@@@Z @ 0x1800E07E4 (-OnHandSpatialObjectAdded@SpatialInteractionHandObjectDevice@SpatialInteractions@Internal@Window.c)
 *     ?OnHandSpatialObjectRemoved@SpatialInteractionHandObjectDevice@SpatialInteractions@Internal@Windows@@AEAAJAEBU_GUID@@@Z @ 0x1800E0B90 (-OnHandSpatialObjectRemoved@SpatialInteractionHandObjectDevice@SpatialInteractions@Internal@Wind.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EF94 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::WeakRef::As<Windows::Internal::SpatialInteractions::ISpatialInteractionSourceDeviceCollectionInternal>(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 result; // rax

  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(a2);
  result = 0LL;
  *a2 = 0LL;
  if ( *a1 )
    return (*(__int64 (__fastcall **)(_QWORD, GUID *, __int64 *))(*(_QWORD *)*a1 + 24LL))(
             *a1,
             &GUID_981351b4_74ca_46e5_83e7_55640c3aae9d,
             a2);
  return result;
}
