/*
 * XREFs of PinWaitForStarvation @ 0x1C0003120
 * Callers:
 *     USBHwDataPipeReset @ 0x1C002E220 (USBHwDataPipeReset.c)
 *     USBMidiOutStateChangePin @ 0x1C0034070 (USBMidiOutStateChangePin.c)
 * Callees:
 *     PinWaitForStarvationTimeout @ 0x1C0003068 (PinWaitForStarvationTimeout.c)
 */

__int64 __fastcall PinWaitForStarvation(__int64 a1)
{
  return PinWaitForStarvationTimeout(a1, 0LL);
}
