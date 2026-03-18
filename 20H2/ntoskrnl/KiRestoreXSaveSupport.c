/*
 * XREFs of KiRestoreXSaveSupport @ 0x14099785C
 * Callers:
 *     KeRestoreProcessorSpecificFeatures @ 0x1403836DC (KeRestoreProcessorSpecificFeatures.c)
 * Callees:
 *     KiEnableXSave @ 0x14099DC84 (KiEnableXSave.c)
 */

__int64 KiRestoreXSaveSupport()
{
  return KiEnableXSave();
}
