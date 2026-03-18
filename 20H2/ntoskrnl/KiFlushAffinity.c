/*
 * XREFs of KiFlushAffinity @ 0x140390894
 * Callers:
 *     KeFlushMultipleRangeTb @ 0x1402BFBA0 (KeFlushMultipleRangeTb.c)
 *     KeFlushTb @ 0x1402EA180 (KeFlushTb.c)
 *     KeFlushSingleTb @ 0x140353AC8 (KeFlushSingleTb.c)
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
