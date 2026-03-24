/*
 * XREFs of KeGetSchedulingGroupSize @ 0x140287B4C
 * Callers:
 *     PspGetRateControlSize @ 0x14067F600 (PspGetRateControlSize.c)
 *     MiSessionObjectCreate @ 0x140786484 (MiSessionObjectCreate.c)
 * Callees:
 *     <none>
 */

__int64 KeGetSchedulingGroupSize()
{
  return (unsigned int)(424 * KeMaximumProcessors + 128);
}
