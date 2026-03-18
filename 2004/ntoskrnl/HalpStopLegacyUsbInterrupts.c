/*
 * XREFs of HalpStopLegacyUsbInterrupts @ 0x140995F30
 * Callers:
 *     <none>
 * Callees:
 *     HalpStopLegacyUsbInterruptsInternal @ 0x1409A63A4 (HalpStopLegacyUsbInterruptsInternal.c)
 */

__int64 __fastcall HalpStopLegacyUsbInterrupts(int a1)
{
  __int64 result; // rax

  if ( a1 < 5 )
    return HalpStopLegacyUsbInterruptsInternal();
  return result;
}
