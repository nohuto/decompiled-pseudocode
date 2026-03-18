/*
 * XREFs of HalpErrataInitDiscard @ 0x140A360C0
 * Callers:
 *     HalpErrataInitSystem @ 0x14099C840 (HalpErrataInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 (__fastcall *HalpErrataInitDiscard())(int a1)
{
  __int64 (__fastcall *result)(int); // rax

  result = HalpStopLegacyUsbInterrupts;
  off_140C006C0[0] = (__int64 (__fastcall *)())HalpStopLegacyUsbInterrupts;
  return result;
}
