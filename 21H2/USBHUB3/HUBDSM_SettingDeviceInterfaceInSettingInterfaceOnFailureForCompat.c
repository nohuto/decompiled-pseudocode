/*
 * XREFs of HUBDSM_SettingDeviceInterfaceInSettingInterfaceOnFailureForCompat @ 0x1C00218E0
 * Callers:
 *     <none>
 * Callees:
 *     HUBDTX_SetDeviceInterfaceUsingControlTransfer @ 0x1C0028ED0 (HUBDTX_SetDeviceInterfaceUsingControlTransfer.c)
 */

__int64 __fastcall HUBDSM_SettingDeviceInterfaceInSettingInterfaceOnFailureForCompat(__int64 a1)
{
  HUBDTX_SetDeviceInterfaceUsingControlTransfer(*(_QWORD *)(a1 + 960));
  return 1000LL;
}
