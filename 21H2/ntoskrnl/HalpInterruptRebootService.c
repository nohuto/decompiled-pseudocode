/*
 * XREFs of HalpInterruptRebootService @ 0x14051F5B0
 * Callers:
 *     HalpPreprocessNmi @ 0x140259C50 (HalpPreprocessNmi.c)
 *     HalpNmiReboot @ 0x14051FA44 (HalpNmiReboot.c)
 * Callees:
 *     HalpInterruptResetThisProcessor @ 0x140508F00 (HalpInterruptResetThisProcessor.c)
 */

void __noreturn HalpInterruptRebootService()
{
  if ( __readmsr(0xC0000101) < 0xFFFF800000000000uLL )
    __writemsr(0xC0000101, __readmsr(0xC0000102));
  HalpInterruptResetThisProcessor();
}
