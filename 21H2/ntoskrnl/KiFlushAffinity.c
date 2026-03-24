/*
 * XREFs of KiFlushAffinity @ 0x140390D64
 * Callers:
 *     KeFlushTb @ 0x140230120 (KeFlushTb.c)
 *     KeFlushSingleTb @ 0x14026BA08 (KeFlushSingleTb.c)
 *     KeFlushMultipleRangeTb @ 0x14033B620 (KeFlushMultipleRangeTb.c)
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
