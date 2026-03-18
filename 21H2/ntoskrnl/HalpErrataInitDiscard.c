/*
 * XREFs of HalpErrataInitDiscard @ 0x140AF3260
 * Callers:
 *     HalpErrataInitSystem @ 0x140A54AB0 (HalpErrataInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 (__fastcall *HalpErrataInitDiscard())(int a1)
{
  __int64 (__fastcall *result)(int); // rax

  result = HalpStopLegacyUsbInterrupts;
  off_140C01D10[0] = (__int64 (__fastcall *)())HalpStopLegacyUsbInterrupts;
  return result;
}
