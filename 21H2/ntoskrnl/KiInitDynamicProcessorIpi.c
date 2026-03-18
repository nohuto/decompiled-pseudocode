/*
 * XREFs of KiInitDynamicProcessorIpi @ 0x14056EB90
 * Callers:
 *     <none>
 * Callees:
 *     KiConfigureDynamicProcessor @ 0x140A699D0 (KiConfigureDynamicProcessor.c)
 */

void __noreturn KiInitDynamicProcessorIpi()
{
  KiConfigureDynamicProcessor();
}
