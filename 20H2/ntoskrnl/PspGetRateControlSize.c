/*
 * XREFs of PspGetRateControlSize @ 0x140711280
 * Callers:
 *     PspFreeRateControl @ 0x14071119C (PspFreeRateControl.c)
 *     PspAllocateRateControl @ 0x1407111EC (PspAllocateRateControl.c)
 * Callees:
 *     KeGetSchedulingGroupSize @ 0x14035DAAC (KeGetSchedulingGroupSize.c)
 */

__int64 __fastcall PspGetRateControlSize(int a1)
{
  if ( a1 )
    return (unsigned int)KeGetSchedulingGroupSize() + 128;
  else
    return 72LL;
}
