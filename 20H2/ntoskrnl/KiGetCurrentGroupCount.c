/*
 * XREFs of KiGetCurrentGroupCount @ 0x140331D08
 * Callers:
 *     KiUpdateProcessorCount @ 0x1409A1CB0 (KiUpdateProcessorCount.c)
 * Callees:
 *     <none>
 */

__int64 KiGetCurrentGroupCount()
{
  return (unsigned __int16)word_140C50BCC;
}
