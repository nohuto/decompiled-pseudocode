/*
 * XREFs of KeGetSchedulingGroupSize @ 0x140204CEC
 * Callers:
 *     PspGetRateControlSize @ 0x1405DA0A0 (PspGetRateControlSize.c)
 *     MiSessionObjectCreate @ 0x140786644 (MiSessionObjectCreate.c)
 * Callees:
 *     <none>
 */

__int64 KeGetSchedulingGroupSize()
{
  return (unsigned int)(424 * KeMaximumProcessors + 128);
}
