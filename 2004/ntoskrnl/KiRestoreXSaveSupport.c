/*
 * XREFs of KiRestoreXSaveSupport @ 0x1409917EC
 * Callers:
 *     KeRestoreProcessorSpecificFeatures @ 0x1403819FC (KeRestoreProcessorSpecificFeatures.c)
 * Callees:
 *     KiEnableXSave @ 0x140997C44 (KiEnableXSave.c)
 */

__int64 KiRestoreXSaveSupport()
{
  return KiEnableXSave();
}
