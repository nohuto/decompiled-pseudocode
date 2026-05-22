/*
 * XREFs of ?GetDevices@BamoPenDeviceManagerPrincipal@@UEAAPEAVBamoList_PenDevicePrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@XZ @ 0x18001BB50
 * Callers:
 *     ?GetWindowId@MPCFocusTarget@@WEA@EAA_KXZ @ 0x18004AF40 (-GetWindowId@MPCFocusTarget@@WEA@EAA_KXZ.c)
 * Callees:
 *     <none>
 */

struct Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_PenDevicePrincipal_Principal *__fastcall BamoPenDeviceManagerPrincipal::GetDevices(
        BamoPenDeviceManagerPrincipal *this)
{
  return (struct Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_PenDevicePrincipal_Principal *)*((_QWORD *)this + 6);
}
