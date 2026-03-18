/*
 * XREFs of KiInitDynamicProcessorIpi @ 0x140513A20
 * Callers:
 *     <none>
 * Callees:
 *     KiConfigureDynamicProcessor @ 0x1409ACA70 (KiConfigureDynamicProcessor.c)
 */

__int64 KiInitDynamicProcessorIpi()
{
  return KiConfigureDynamicProcessor();
}
