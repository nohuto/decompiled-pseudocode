/*
 * XREFs of KiFlushAffinity @ 0x14039E55C
 * Callers:
 *     KeFlushSingleTb @ 0x1402EA644 (KeFlushSingleTb.c)
 *     KeFlushTb @ 0x1402F391C (KeFlushTb.c)
 *     KeFlushMultipleRangeTb @ 0x1402F3C40 (KeFlushMultipleRangeTb.c)
 *     MiFlushTbList @ 0x14032F1B0 (MiFlushTbList.c)
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
