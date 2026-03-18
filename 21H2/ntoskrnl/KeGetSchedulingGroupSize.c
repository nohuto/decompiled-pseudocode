/*
 * XREFs of KeGetSchedulingGroupSize @ 0x14020758C
 * Callers:
 *     PspGetRateControlSize @ 0x140678C2C (PspGetRateControlSize.c)
 *     MiSessionObjectCreate @ 0x1407F385C (MiSessionObjectCreate.c)
 * Callees:
 *     <none>
 */

__int64 KeGetSchedulingGroupSize()
{
  return (unsigned int)(424 * KeMaximumProcessors + 128);
}
