/*
 * XREFs of DestroyThreadsMessages @ 0x1C00D1CE8
 * Callers:
 *     xxxCreateThreadInfo @ 0x1C0067F7C (xxxCreateThreadInfo.c)
 *     xxxDestroyThreadInfo @ 0x1C0071CF4 (xxxDestroyThreadInfo.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 (*DestroyThreadsMessages())(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C0257F20;
  if ( qword_1C0257F20 )
    return (__int64 (*)(void))qword_1C0257F20();
  return result;
}
