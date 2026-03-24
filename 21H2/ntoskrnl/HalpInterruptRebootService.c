/*
 * XREFs of HalpInterruptRebootService @ 0x1404D2650
 * Callers:
 *     HalpNmiReboot @ 0x1404D2C88 (HalpNmiReboot.c)
 *     HalpPreprocessNmi @ 0x1404D2D80 (HalpPreprocessNmi.c)
 * Callees:
 *     HalpInterruptResetThisProcessor @ 0x1404BC480 (HalpInterruptResetThisProcessor.c)
 */

void __noreturn HalpInterruptRebootService()
{
  if ( __readmsr(0xC0000101) < 0xFFFF800000000000uLL )
    __writemsr(0xC0000101, __readmsr(0xC0000102));
  HalpInterruptResetThisProcessor();
}
