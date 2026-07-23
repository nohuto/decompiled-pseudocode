/*
 * XREFs of KiGetCurrentGroupCount @ 0x140252218
 * Callers:
 *     KiUpdateProcessorCount @ 0x1409A04B4 (KiUpdateProcessorCount.c)
 * Callees:
 *     <none>
 */

__int64 KiGetCurrentGroupCount()
{
  return (unsigned __int16)word_140C50D94;
}
