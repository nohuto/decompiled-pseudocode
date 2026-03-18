/*
 * XREFs of PoFxActivateDeviceForSystemTransition @ 0x140382E28
 * Callers:
 *     PopNotifyDevice @ 0x14099590C (PopNotifyDevice.c)
 * Callees:
 *     PopFxActivateDevice @ 0x14036D700 (PopFxActivateDevice.c)
 */

LONG __fastcall PoFxActivateDeviceForSystemTransition(__int64 a1, char a2)
{
  return PopFxActivateDevice(a1, 1, a2);
}
