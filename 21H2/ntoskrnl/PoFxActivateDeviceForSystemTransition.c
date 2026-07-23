/*
 * XREFs of PoFxActivateDeviceForSystemTransition @ 0x1403835C0
 * Callers:
 *     PopNotifyDevice @ 0x14099390C (PopNotifyDevice.c)
 * Callees:
 *     PopFxActivateDevice @ 0x14036FE80 (PopFxActivateDevice.c)
 */

LONG __fastcall PoFxActivateDeviceForSystemTransition(__int64 a1, char a2)
{
  return PopFxActivateDevice(a1, 1, a2);
}
