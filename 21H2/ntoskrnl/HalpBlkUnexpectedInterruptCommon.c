/*
 * XREFs of HalpBlkUnexpectedInterruptCommon @ 0x140AD4D00
 * Callers:
 *     HalpBlkUnexpectedInterrupt @ 0x140AD4500 (HalpBlkUnexpectedInterrupt.c)
 * Callees:
 *     HalpBlkApicEndOfInterrupt @ 0x140AD4F90 (HalpBlkApicEndOfInterrupt.c)
 */

void HalpBlkUnexpectedInterruptCommon()
{
  _UNKNOWN *retaddr; // [rsp+168h] [rbp+E0h]

  _mm_setcsr(0x1F80u);
  _InterlockedIncrement64(MK_FP(__GS__, 8LL * (unsigned __int8)retaddr + 168));
  HalpBlkApicEndOfInterrupt();
  _mm_setcsr(_mm_getcsr());
  __asm { iretq }
}
