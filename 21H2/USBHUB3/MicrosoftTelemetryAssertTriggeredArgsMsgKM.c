/*
 * XREFs of MicrosoftTelemetryAssertTriggeredArgsMsgKM @ 0x1C004025C
 * Callers:
 *     HUBSM_LogUnhandledEvent @ 0x1C000A29C (HUBSM_LogUnhandledEvent.c)
 *     HUBFDO_EvtDeviceD0Entry @ 0x1C000C530 (HUBFDO_EvtDeviceD0Entry.c)
 *     HUBPSM20_CheckingIfPortErrorShouldBeTreatedAsConnect @ 0x1C0011B30 (HUBPSM20_CheckingIfPortErrorShouldBeTreatedAsConnect.c)
 *     TUNNEL_EvtInterfaceChange @ 0x1C00883B0 (TUNNEL_EvtInterfaceChange.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x1C003FC14 (MicrosoftTelemetryAssertTriggeredWorker.c)
 */

void __fastcall MicrosoftTelemetryAssertTriggeredArgsMsgKM(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        const char *a4)
{
  unsigned __int64 retaddr; // [rsp+38h] [rbp+0h]

  MicrosoftTelemetryAssertTriggeredWorker(retaddr, 1LL, (__int64)"usbhub3.sys", a2, a3, a4);
}
