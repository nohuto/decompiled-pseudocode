/*
 * XREFs of ?NtUserfnHkINLPMSLLHOOKSTRUCT@@YA_JK_KPEAUtagMSLLHOOKSTRUCT@@@Z @ 0x1C01F7220
 * Callers:
 *     NtUserCallNextHookEx @ 0x1C0144110 (NtUserCallNextHookEx.c)
 * Callees:
 *     xxxCallNextHookEx @ 0x1C0045FF4 (xxxCallNextHookEx.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserfnHkINLPMSLLHOOKSTRUCT(__int64 a1, __int64 a2, struct tagMSLLHOOKSTRUCT *a3)
{
  return xxxCallNextHookEx();
}
