/*
 * XREFs of KiFlushAffinity @ 0x14038E3A4
 * Callers:
 *     KeFlushTb @ 0x14021E550 (KeFlushTb.c)
 *     KeFlushMultipleRangeTb @ 0x14023A4F0 (KeFlushMultipleRangeTb.c)
 *     KeFlushSingleTb @ 0x14031CE3C (KeFlushSingleTb.c)
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
