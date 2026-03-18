/*
 * XREFs of KiConfigureDynamicProcessor @ 0x1409ACA70
 * Callers:
 *     KiInitDynamicProcessorIpi @ 0x140513A20 (KiInitDynamicProcessorIpi.c)
 * Callees:
 *     KiEnableXSave @ 0x140997C44 (KiEnableXSave.c)
 */

__int64 KiConfigureDynamicProcessor()
{
  return KiEnableXSave();
}
