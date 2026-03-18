/*
 * XREFs of KiFlushAffinity @ 0x14038D834
 * Callers:
 *     KeFlushTb @ 0x1402775A0 (KeFlushTb.c)
 *     KeFlushMultipleRangeTb @ 0x140293520 (KeFlushMultipleRangeTb.c)
 *     KeFlushSingleTb @ 0x14034C17C (KeFlushSingleTb.c)
 * Callees:
 *     <none>
 */

volatile _KAFFINITY_EX *__fastcall KiFlushAffinity(int a1)
{
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  if ( a1 )
    return 0LL;
  _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
  return &KeGetCurrentThread()->ApcState.Process->ActiveProcessors;
}
