/*
 * XREFs of KiGetCurrentGroupCount @ 0x14025E8C8
 * Callers:
 *     KiUpdateProcessorCount @ 0x140A59C88 (KiUpdateProcessorCount.c)
 * Callees:
 *     <none>
 */

__int64 KiGetCurrentGroupCount()
{
  return (unsigned __int16)word_140C54EDC;
}
