/*
 * XREFs of IsDestroyThreadsMessagesSupported @ 0x1C006FE3C
 * Callers:
 *     xxxCreateThreadInfo @ 0x1C0067F7C (xxxCreateThreadInfo.c)
 *     xxxDestroyThreadInfo @ 0x1C0071CF4 (xxxDestroyThreadInfo.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 IsDestroyThreadsMessagesSupported()
{
  if ( qword_1C0257F18 )
    return qword_1C0257F18();
  else
    return 3221225659LL;
}
