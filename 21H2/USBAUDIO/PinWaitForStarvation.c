/*
 * XREFs of PinWaitForStarvation @ 0x1C0002460
 * Callers:
 *     USBHwDataPipeReset @ 0x1C002EB44 (USBHwDataPipeReset.c)
 *     USBMidiOutStateChangePin @ 0x1C00354A0 (USBMidiOutStateChangePin.c)
 * Callees:
 *     PinWaitForStarvationTimeout @ 0x1C00023A8 (PinWaitForStarvationTimeout.c)
 */

__int64 __fastcall PinWaitForStarvation(__int64 a1)
{
  return PinWaitForStarvationTimeout(a1, 0LL);
}
