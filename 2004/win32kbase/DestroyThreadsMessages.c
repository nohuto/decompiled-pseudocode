/*
 * XREFs of DestroyThreadsMessages @ 0x1C00D2758
 * Callers:
 *     xxxCreateThreadInfo @ 0x1C0072F8C (xxxCreateThreadInfo.c)
 *     xxxDestroyThreadInfo @ 0x1C0074C34 (xxxDestroyThreadInfo.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 (*DestroyThreadsMessages())(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C0251F60;
  if ( qword_1C0251F60 )
    return (__int64 (*)(void))qword_1C0251F60();
  return result;
}
