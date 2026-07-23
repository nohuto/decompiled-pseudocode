/*
 * XREFs of KiFlushAffinity @ 0x140390EB4
 * Callers:
 *     KeFlushSingleTb @ 0x1402599A8 (KeFlushSingleTb.c)
 *     KeFlushTb @ 0x1402D4970 (KeFlushTb.c)
 *     KeFlushMultipleRangeTb @ 0x140346370 (KeFlushMultipleRangeTb.c)
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
