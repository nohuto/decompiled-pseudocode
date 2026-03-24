/*
 * XREFs of KiRestoreXSaveSupport @ 0x14099485C
 * Callers:
 *     KeRestoreProcessorSpecificFeatures @ 0x140383CCC (KeRestoreProcessorSpecificFeatures.c)
 * Callees:
 *     KiEnableXSave @ 0x14099B204 (KiEnableXSave.c)
 */

__int64 KiRestoreXSaveSupport()
{
  return KiEnableXSave();
}
