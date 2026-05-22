/*
 * XREFs of ?StopListeningToSpatialObjects@SpatialInteractionHandObjectDevice@SpatialInteractions@Internal@Windows@@UEAAJXZ @ 0x1800E22B0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EF94 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035710 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RemoveAllObjects@SpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@IEAAJXZ @ 0x1800D84AC (-RemoveAllObjects@SpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@IEAAJXZ.c)
 */

__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionHandObjectDevice::StopListeningToSpatialObjects(
        Windows::Internal::SpatialInteractions::SpatialInteractionHandObjectDevice *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 26);
  v2 = Windows::Internal::SpatialInteractions::SpatialInteractionObjectDevice::RemoveAllObjects(this);
  v3 = v2;
  if ( v2 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x3AF,
    (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\hands\\spatialinteractionsourcehand.cpp",
    (const char *)(unsigned int)v2);
  return v3;
}
