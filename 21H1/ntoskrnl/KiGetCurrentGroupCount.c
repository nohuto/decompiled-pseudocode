/*
 * XREFs of KiGetCurrentGroupCount @ 0x140323438
 * Callers:
 *     KiUpdateProcessorCount @ 0x14099A414 (KiUpdateProcessorCount.c)
 * Callees:
 *     <none>
 */

__int64 KiGetCurrentGroupCount()
{
  return (unsigned __int16)word_140C50C74;
}
