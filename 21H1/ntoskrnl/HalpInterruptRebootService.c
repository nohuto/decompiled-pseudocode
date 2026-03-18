/*
 * XREFs of HalpInterruptRebootService @ 0x1404CD230
 * Callers:
 *     HalpNmiReboot @ 0x1404CD868 (HalpNmiReboot.c)
 *     HalpPreprocessNmi @ 0x1404CD960 (HalpPreprocessNmi.c)
 * Callees:
 *     HalpInterruptResetThisProcessor @ 0x1404B6EC0 (HalpInterruptResetThisProcessor.c)
 */

void __noreturn HalpInterruptRebootService()
{
  if ( __readmsr(0xC0000101) < 0xFFFF800000000000uLL )
    __writemsr(0xC0000101, __readmsr(0xC0000102));
  HalpInterruptResetThisProcessor();
}
