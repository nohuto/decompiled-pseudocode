/*
 * XREFs of KiConfigureDynamicProcessor @ 0x1409B29E0
 * Callers:
 *     KiInitDynamicProcessorIpi @ 0x140517350 (KiInitDynamicProcessorIpi.c)
 * Callees:
 *     KiEnableXSave @ 0x14099DC84 (KiEnableXSave.c)
 */

__int64 KiConfigureDynamicProcessor()
{
  return KiEnableXSave();
}
