/*
 * XREFs of PiUEventSendDeviceInstallNotification @ 0x1408A2CDC
 * Callers:
 *     PiUEventNotifyUserMode @ 0x1406E675C (PiUEventNotifyUserMode.c)
 * Callees:
 *     ZwUpdateWnfStateData @ 0x1403FDDA0 (ZwUpdateWnfStateData.c)
 *     McTemplateK0z_EtwWriteTransfer @ 0x14050DAB4 (McTemplateK0z_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall PiUEventSendDeviceInstallNotification(const wchar_t *a1)
{
  NTSTATUS result; // eax
  __int64 v3; // rcx
  __int64 v4; // r8

  result = ZwUpdateWnfStateData((__int64)&WNF_PNPC_DEVICE_INSTALL_REQUESTED, 0LL);
  if ( result >= 0 && (byte_140C1327A & 8) != 0 )
    return McTemplateK0z_EtwWriteTransfer(v3, (const EVENT_DESCRIPTOR *)KMPnPEvt_DeviceInstall_Requested, v4, a1);
  return result;
}
