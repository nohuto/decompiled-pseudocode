/*
 * XREFs of KiRestoreXSaveSupport @ 0x14099585C
 * Callers:
 *     KeRestoreProcessorSpecificFeatures @ 0x140383E7C (KeRestoreProcessorSpecificFeatures.c)
 * Callees:
 *     KiEnableXSave @ 0x14099C204 (KiEnableXSave.c)
 */

__int64 KiRestoreXSaveSupport()
{
  return KiEnableXSave();
}
