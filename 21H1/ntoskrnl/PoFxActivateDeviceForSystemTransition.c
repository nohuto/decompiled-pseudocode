/*
 * XREFs of PoFxActivateDeviceForSystemTransition @ 0x140380828
 * Callers:
 *     PopNotifyDevice @ 0x14098EBFC (PopNotifyDevice.c)
 * Callees:
 *     PopFxActivateDevice @ 0x14036B650 (PopFxActivateDevice.c)
 */

LONG __fastcall PoFxActivateDeviceForSystemTransition(__int64 a1, char a2)
{
  return PopFxActivateDevice(a1, 1, a2);
}
