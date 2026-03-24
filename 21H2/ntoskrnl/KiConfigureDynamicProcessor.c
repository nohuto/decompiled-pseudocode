/*
 * XREFs of KiConfigureDynamicProcessor @ 0x1409AF8E0
 * Callers:
 *     KiInitDynamicProcessorIpi @ 0x140518E90 (KiInitDynamicProcessorIpi.c)
 * Callees:
 *     KiEnableXSave @ 0x14099B204 (KiEnableXSave.c)
 */

__int64 KiConfigureDynamicProcessor()
{
  return KiEnableXSave();
}
