/*
 * XREFs of KiRestoreXSaveSupport @ 0x140990A9C
 * Callers:
 *     KeRestoreProcessorSpecificFeatures @ 0x1403811BC (KeRestoreProcessorSpecificFeatures.c)
 * Callees:
 *     KiEnableXSave @ 0x140996874 (KiEnableXSave.c)
 */

__int64 KiRestoreXSaveSupport()
{
  return KiEnableXSave();
}
