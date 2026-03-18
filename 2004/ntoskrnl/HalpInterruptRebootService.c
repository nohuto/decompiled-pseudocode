/*
 * XREFs of HalpInterruptRebootService @ 0x1404CD6E0
 * Callers:
 *     HalpNmiReboot @ 0x1404CDD18 (HalpNmiReboot.c)
 *     HalpPreprocessNmi @ 0x1404CDE10 (HalpPreprocessNmi.c)
 * Callees:
 *     HalpInterruptResetThisProcessor @ 0x1404B75A0 (HalpInterruptResetThisProcessor.c)
 */

void __noreturn HalpInterruptRebootService()
{
  if ( __readmsr(0xC0000101) < 0xFFFF800000000000uLL )
    __writemsr(0xC0000101, __readmsr(0xC0000102));
  HalpInterruptResetThisProcessor();
}
