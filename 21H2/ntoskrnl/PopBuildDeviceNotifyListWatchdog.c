/*
 * XREFs of PopBuildDeviceNotifyListWatchdog @ 0x1409B25A0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1403435A0 (KeSetEvent.c)
 *     PnpBugcheckPowerTimeout @ 0x14050D7E0 (PnpBugcheckPowerTimeout.c)
 */

void __fastcall __noreturn PopBuildDeviceNotifyListWatchdog(
        struct _KDPC *Dpc,
        struct _KEVENT *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  KeSetEvent(DeferredContext, 0, 0);
  PnpBugcheckPowerTimeout();
}
