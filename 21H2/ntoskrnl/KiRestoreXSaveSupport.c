/*
 * XREFs of KiRestoreXSaveSupport @ 0x140A4DC5C
 * Callers:
 *     KeRestoreProcessorSpecificFeatures @ 0x14038D0F4 (KeRestoreProcessorSpecificFeatures.c)
 * Callees:
 *     KiEnableXSave @ 0x140A5433C (KiEnableXSave.c)
 */

__int64 KiRestoreXSaveSupport()
{
  return KiEnableXSave();
}
