/*
 * XREFs of KiIntRedirectQueueRequestOnProcessor @ 0x140328168
 * Callers:
 *     KiCallInterruptServiceRoutine @ 0x140327EB0 (KiCallInterruptServiceRoutine.c)
 * Callees:
 *     HalRequestIpiSpecifyVector @ 0x14026B1E0 (HalRequestIpiSpecifyVector.c)
 *     KeAddProcessorAffinityEx @ 0x140277170 (KeAddProcessorAffinityEx.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     memset @ 0x140408F80 (memset.c)
 */

__int64 __fastcall KiIntRedirectQueueRequestOnProcessor(ULONG_PTR BugCheckParameter3, unsigned int a2)
{
  ULONG_PTR v3; // rdi
  __int64 result; // rax
  _DWORD v5[44]; // [rsp+30h] [rbp-C8h] BYREF

  v3 = (unsigned int)BugCheckParameter3;
  v5[0] = 1310721;
  memset(&v5[1], 0, 0xA4uLL);
  KeAddProcessorAffinityEx(v5, v3);
  result = HalRequestIpiSpecifyVector(0, v5, a2);
  if ( (int)result < 0 )
    KeBugCheckEx(0xA0u, 0x4001uLL, 0x103uLL, v3, (int)result);
  return result;
}
