/*
 * XREFs of IsDestroyThreadsMessagesSupported @ 0x1C0051DBC
 * Callers:
 *     xxxCreateThreadInfo @ 0x1C004FF68 (xxxCreateThreadInfo.c)
 *     xxxDestroyThreadInfo @ 0x1C00533CC (xxxDestroyThreadInfo.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 IsDestroyThreadsMessagesSupported()
{
  if ( qword_1C024FF58 )
    return qword_1C024FF58();
  else
    return 3221225659LL;
}
