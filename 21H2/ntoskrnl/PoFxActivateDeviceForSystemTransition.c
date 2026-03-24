/*
 * XREFs of PoFxActivateDeviceForSystemTransition @ 0x140383410
 * Callers:
 *     PopNotifyDevice @ 0x14099290C (PopNotifyDevice.c)
 * Callees:
 *     PopFxActivateDevice @ 0x14036FCD0 (PopFxActivateDevice.c)
 */

LONG __fastcall PoFxActivateDeviceForSystemTransition(__int64 a1, char a2)
{
  return PopFxActivateDevice(a1, 1, a2);
}
