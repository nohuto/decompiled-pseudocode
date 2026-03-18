/*
 * XREFs of PoFxActivateDeviceForSystemTransition @ 0x14038BF3C
 * Callers:
 *     PopNotifyDevice @ 0x140A4ADB0 (PopNotifyDevice.c)
 * Callees:
 *     PopFxActivateDevice @ 0x1402D2864 (PopFxActivateDevice.c)
 */

LONG __fastcall PoFxActivateDeviceForSystemTransition(__int64 a1, char a2)
{
  return PopFxActivateDevice(a1, 1, a2);
}
