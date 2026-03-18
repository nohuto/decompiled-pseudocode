/*
 * XREFs of VmFlushTb @ 0x1405A0D1C
 * Callers:
 *     KeFlushMultipleRangeTb @ 0x1402BFBA0 (KeFlushMultipleRangeTb.c)
 *     KeFlushTb @ 0x1402EA180 (KeFlushTb.c)
 *     KeFlushSingleTb @ 0x140353AC8 (KeFlushSingleTb.c)
 *     KeFlushSingleCurrentTb @ 0x140389788 (KeFlushSingleCurrentTb.c)
 *     KeFlushMultipleRangeCurrentTb @ 0x1403C897C (KeFlushMultipleRangeCurrentTb.c)
 * Callees:
 *     VmpFlushTb @ 0x1405A1BE4 (VmpFlushTb.c)
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
