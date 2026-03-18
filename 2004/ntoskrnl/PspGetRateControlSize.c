/*
 * XREFs of PspGetRateControlSize @ 0x1406F11E0
 * Callers:
 *     PspFreeRateControl @ 0x1406F10FC (PspFreeRateControl.c)
 *     PspAllocateRateControl @ 0x1406F114C (PspAllocateRateControl.c)
 * Callees:
 *     KeGetSchedulingGroupSize @ 0x14034830C (KeGetSchedulingGroupSize.c)
 */

__int64 __fastcall PspGetRateControlSize(int a1)
{
  if ( a1 )
    return (unsigned int)KeGetSchedulingGroupSize() + 128;
  else
    return 72LL;
}
