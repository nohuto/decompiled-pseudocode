/*
 * XREFs of KeGetSchedulingGroupSize @ 0x1402DBAD0
 * Callers:
 *     PspGetRateControlSize @ 0x14067626C (PspGetRateControlSize.c)
 *     MiSessionObjectCreate @ 0x140771C94 (MiSessionObjectCreate.c)
 * Callees:
 *     <none>
 */

__int64 KeGetSchedulingGroupSize()
{
  return (unsigned int)(424 * KeMaximumProcessors + 128);
}
