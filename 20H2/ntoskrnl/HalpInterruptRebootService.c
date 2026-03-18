/*
 * XREFs of HalpInterruptRebootService @ 0x1404D0C80
 * Callers:
 *     HalpNmiReboot @ 0x1404D12B8 (HalpNmiReboot.c)
 *     HalpPreprocessNmi @ 0x1404D13B0 (HalpPreprocessNmi.c)
 * Callees:
 *     HalpInterruptResetThisProcessor @ 0x1404BAAC0 (HalpInterruptResetThisProcessor.c)
 */

void __noreturn HalpInterruptRebootService()
{
  if ( __readmsr(0xC0000101) < 0xFFFF800000000000uLL )
    __writemsr(0xC0000101, __readmsr(0xC0000102));
  HalpInterruptResetThisProcessor();
}
