/*
 * XREFs of PspGetRateControlSize @ 0x14067626C
 * Callers:
 *     PspFreeRateControl @ 0x140676188 (PspFreeRateControl.c)
 *     PspAllocateRateControl @ 0x1406761D8 (PspAllocateRateControl.c)
 * Callees:
 *     KeGetSchedulingGroupSize @ 0x1402DBAD0 (KeGetSchedulingGroupSize.c)
 */

__int64 __fastcall PspGetRateControlSize(int a1)
{
  if ( a1 )
    return (unsigned int)KeGetSchedulingGroupSize() + 128;
  else
    return 72LL;
}
