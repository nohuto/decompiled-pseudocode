/*
 * XREFs of UsbhFdoCheckUpstreamConnectionState @ 0x1C0015EB4
 * Callers:
 *     UsbhSshResumeDownstream @ 0x1C000C0F0 (UsbhSshResumeDownstream.c)
 *     UsbhReset2Complete @ 0x1C0010540 (UsbhReset2Complete.c)
 *     UsbhSyncSendCommandToDevice @ 0x1C00177A8 (UsbhSyncSendCommandToDevice.c)
 *     UsbhFdoSetD0Warm @ 0x1C003BD90 (UsbhFdoSetD0Warm.c)
 *     UsbhHardReset_Action @ 0x1C003CBD8 (UsbhHardReset_Action.c)
 *     UsbhFdoPnp_QueryStop @ 0x1C0042AE0 (UsbhFdoPnp_QueryStop.c)
 *     Usbh_FDO_WaitPnpStop @ 0x1C0044420 (Usbh_FDO_WaitPnpStop.c)
 * Callees:
 *     Log @ 0x1C000FD80 (Log.c)
 *     UsbhSyncSendInternalIoctl @ 0x1C0015F10 (UsbhSyncSendInternalIoctl.c)
 */

__int64 __fastcall UsbhFdoCheckUpstreamConnectionState(__int64 a1, unsigned int *a2)
{
  int v4; // eax
  unsigned int v5; // r10d

  v4 = UsbhSyncSendInternalIoctl(a1, 2228243LL, a2, 0LL);
  Log(a1, 8, 1970303827, *a2, v4);
  return v5;
}
