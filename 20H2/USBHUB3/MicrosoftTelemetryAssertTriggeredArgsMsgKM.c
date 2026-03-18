/*
 * XREFs of MicrosoftTelemetryAssertTriggeredArgsMsgKM @ 0x1C003F67C
 * Callers:
 *     HUBFDO_EvtDeviceD0Entry @ 0x1C000C140 (HUBFDO_EvtDeviceD0Entry.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x1C003F0E8 (MicrosoftTelemetryAssertTriggeredWorker.c)
 */

void __fastcall MicrosoftTelemetryAssertTriggeredArgsMsgKM(__int64 a1, int a2)
{
  unsigned __int64 retaddr; // [rsp+38h] [rbp+0h]

  MicrosoftTelemetryAssertTriggeredWorker(retaddr, 1LL, (__int64)"usbhub3.sys", a2);
}
