/*
 * XREFs of ?GetWindowId@MPCFocusTarget@@WEA@EAA_KXZ @ 0x18004BB10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_PenDevicePrincipal_Principal *__fastcall MPCFocusTarget::GetWindowId(
        __int64 a1)
{
  return BamoPenDeviceManagerPrincipal::GetDevices((BamoPenDeviceManagerPrincipal *)(a1 - 64));
}
