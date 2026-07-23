/*
 * XREFs of PiUEventSendDeviceInstallNotification @ 0x1408A2E3C
 * Callers:
 *     PiUEventNotifyUserMode @ 0x1406FDB3C (PiUEventNotifyUserMode.c)
 * Callees:
 *     ZwUpdateWnfStateData @ 0x1403FDF80 (ZwUpdateWnfStateData.c)
 *     McTemplateK0z_EtwWriteTransfer @ 0x14050DCF4 (McTemplateK0z_EtwWriteTransfer.c)
 */

int __fastcall PiUEventSendDeviceInstallNotification(const wchar_t *a1)
{
  int result; // eax
  __int64 v3; // rcx
  __int64 v4; // r8

  result = ZwUpdateWnfStateData(&WNF_PNPC_DEVICE_INSTALL_REQUESTED, 0LL, 0, 0LL, 0LL, 0, 0);
  if ( result >= 0 && (byte_140C1327A & 8) != 0 )
    return McTemplateK0z_EtwWriteTransfer(v3, (const EVENT_DESCRIPTOR *)KMPnPEvt_DeviceInstall_Requested, v4, a1);
  return result;
}
