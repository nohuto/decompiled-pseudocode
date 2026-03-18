/*
 * XREFs of KiInitDynamicProcessorIpi @ 0x1405133D0
 * Callers:
 *     <none>
 * Callees:
 *     KiConfigureDynamicProcessor @ 0x1409ABC10 (KiConfigureDynamicProcessor.c)
 */

__int64 KiInitDynamicProcessorIpi()
{
  return KiConfigureDynamicProcessor();
}
