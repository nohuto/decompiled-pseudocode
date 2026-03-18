/*
 * XREFs of DestroyThreadsMessages @ 0x1C00D2628
 * Callers:
 *     xxxCreateThreadInfo @ 0x1C004FF68 (xxxCreateThreadInfo.c)
 *     xxxDestroyThreadInfo @ 0x1C00533CC (xxxDestroyThreadInfo.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 (*DestroyThreadsMessages())(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C024FF60;
  if ( qword_1C024FF60 )
    return (__int64 (*)(void))qword_1C024FF60();
  return result;
}
