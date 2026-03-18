/*
 * XREFs of KeGetSchedulingGroupSize @ 0x14034830C
 * Callers:
 *     PspGetRateControlSize @ 0x1406F11E0 (PspGetRateControlSize.c)
 *     MiSessionObjectCreate @ 0x1407740A4 (MiSessionObjectCreate.c)
 * Callees:
 *     <none>
 */

__int64 KeGetSchedulingGroupSize()
{
  return (unsigned int)(424 * KeMaximumProcessors + 128);
}
