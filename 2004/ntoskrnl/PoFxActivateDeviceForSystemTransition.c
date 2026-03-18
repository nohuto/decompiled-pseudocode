/*
 * XREFs of PoFxActivateDeviceForSystemTransition @ 0x140381068
 * Callers:
 *     PopNotifyDevice @ 0x14098F950 (PopNotifyDevice.c)
 * Callees:
 *     PopFxActivateDevice @ 0x14036B720 (PopFxActivateDevice.c)
 */

LONG __fastcall PoFxActivateDeviceForSystemTransition(__int64 a1, char a2)
{
  return PopFxActivateDevice(a1, 1, a2);
}
