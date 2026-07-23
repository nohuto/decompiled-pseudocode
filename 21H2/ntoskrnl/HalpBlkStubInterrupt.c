/*
 * XREFs of HalpBlkStubInterrupt @ 0x140A19F80
 * Callers:
 *     <none>
 * Callees:
 *     HalpBlkApicEndOfInterrupt @ 0x140A1AF90 (HalpBlkApicEndOfInterrupt.c)
 */

void HalpBlkStubInterrupt()
{
  _mm_setcsr(0x1F80u);
  _InterlockedIncrement64(MK_FP(__GS__, 1896LL));
  HalpBlkApicEndOfInterrupt();
  _mm_setcsr(_mm_getcsr());
  __asm { iretq }
}
