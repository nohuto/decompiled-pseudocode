/*
 * XREFs of KeGetSchedulingGroupSize @ 0x14035DAAC
 * Callers:
 *     PspGetRateControlSize @ 0x140711280 (PspGetRateControlSize.c)
 *     MiSessionObjectCreate @ 0x1407826A4 (MiSessionObjectCreate.c)
 * Callees:
 *     <none>
 */

__int64 KeGetSchedulingGroupSize()
{
  return (unsigned int)(424 * KeMaximumProcessors + 128);
}
