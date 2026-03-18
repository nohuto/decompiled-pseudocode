/*
 * XREFs of KiConfigureDynamicProcessor @ 0x1409ABC10
 * Callers:
 *     KiInitDynamicProcessorIpi @ 0x1405133D0 (KiInitDynamicProcessorIpi.c)
 * Callees:
 *     KiEnableXSave @ 0x140996874 (KiEnableXSave.c)
 */

__int64 KiConfigureDynamicProcessor()
{
  return KiEnableXSave();
}
