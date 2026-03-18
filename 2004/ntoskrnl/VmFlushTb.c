/*
 * XREFs of VmFlushTb @ 0x14059D27C
 * Callers:
 *     KeFlushTb @ 0x14021E550 (KeFlushTb.c)
 *     KeFlushMultipleRangeTb @ 0x14023A4F0 (KeFlushMultipleRangeTb.c)
 *     KeFlushSingleTb @ 0x14031CE3C (KeFlushSingleTb.c)
 *     KeFlushSingleCurrentTb @ 0x1403875C8 (KeFlushSingleCurrentTb.c)
 *     KeFlushMultipleRangeCurrentTb @ 0x1403C5EEC (KeFlushMultipleRangeCurrentTb.c)
 * Callees:
 *     VmpFlushTb @ 0x14059E144 (VmpFlushTb.c)
 */

struct _KTHREAD *__fastcall VmFlushTb(__int64 a1, __int64 a2, int a3)
{
  struct _KTHREAD *result; // rax
  volatile LONG *v4; // rcx

  if ( a3 == 1 )
  {
    result = KeGetCurrentThread();
    v4 = (volatile LONG *)result->ApcState.Process[2].Affinity.Bitmap[5];
    if ( v4 )
      return (struct _KTHREAD *)VmpFlushTb(v4);
  }
  return result;
}
