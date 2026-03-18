/*
 * XREFs of ?NtUserfnHkINLPRECT@@YA_JK_KPEAUtagRECT@@@Z @ 0x1C01F6438
 * Callers:
 *     NtUserCallNextHookEx @ 0x1C0146740 (NtUserCallNextHookEx.c)
 * Callees:
 *     xxxCallNextHookEx @ 0x1C0074EB4 (xxxCallNextHookEx.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserfnHkINLPRECT(__int64 a1, __int64 a2, struct tagRECT *a3)
{
  return xxxCallNextHookEx();
}
