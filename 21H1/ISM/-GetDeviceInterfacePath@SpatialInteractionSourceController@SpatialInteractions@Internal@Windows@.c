/*
 * XREFs of ?GetDeviceInterfacePath@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEBAPEB_WXZ @ 0x18016CA80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PCWSTR __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::GetDeviceInterfacePath(
        HSTRING *this)
{
  return WindowsGetStringRawBuffer(this[5], 0LL);
}
