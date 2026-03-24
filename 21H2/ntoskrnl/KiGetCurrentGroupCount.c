/*
 * XREFs of KiGetCurrentGroupCount @ 0x1402D3FA8
 * Callers:
 *     KiUpdateProcessorCount @ 0x14099F584 (KiUpdateProcessorCount.c)
 * Callees:
 *     <none>
 */

__int64 KiGetCurrentGroupCount()
{
  return (unsigned __int16)word_140C50D5C;
}
