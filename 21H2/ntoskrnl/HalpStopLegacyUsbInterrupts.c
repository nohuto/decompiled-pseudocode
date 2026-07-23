/*
 * XREFs of HalpStopLegacyUsbInterrupts @ 0x14099A240
 * Callers:
 *     <none>
 * Callees:
 *     HalpStopLegacyUsbInterruptsInternal @ 0x1409AA104 (HalpStopLegacyUsbInterruptsInternal.c)
 */

__int64 __fastcall HalpStopLegacyUsbInterrupts(int a1)
{
  __int64 result; // rax

  if ( a1 < 5 )
    return HalpStopLegacyUsbInterruptsInternal();
  return result;
}
