/*
 * XREFs of KiGetCurrentGroupCount @ 0x140360F08
 * Callers:
 *     KiUpdateProcessorCount @ 0x14099BBB0 (KiUpdateProcessorCount.c)
 * Callees:
 *     <none>
 */

__int64 KiGetCurrentGroupCount()
{
  return (unsigned __int16)word_140C50B3C;
}
