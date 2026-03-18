/*
 * XREFs of ACPIWakeEmulationInterruptServiceRoutine @ 0x1C0057070
 * Callers:
 *     <none>
 * Callees:
 *     OSNotifyDeviceWakeByInterrupt @ 0x1C0059008 (OSNotifyDeviceWakeByInterrupt.c)
 */

char __fastcall ACPIWakeEmulationInterruptServiceRoutine(__int64 a1, __int64 a2)
{
  OSNotifyDeviceWakeByInterrupt(a2);
  return 1;
}
