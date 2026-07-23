/*
 * XREFs of KiConfigureDynamicProcessor @ 0x1409B0810
 * Callers:
 *     KiInitDynamicProcessorIpi @ 0x1405190D0 (KiInitDynamicProcessorIpi.c)
 * Callees:
 *     KiEnableXSave @ 0x14099C204 (KiEnableXSave.c)
 */

__int64 KiConfigureDynamicProcessor()
{
  return KiEnableXSave();
}
