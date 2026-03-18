/*
 * XREFs of KiIntRedirectQueueRequestOnProcessor @ 0x1402DE348
 * Callers:
 *     KiCallInterruptServiceRoutine @ 0x1402DE090 (KiCallInterruptServiceRoutine.c)
 * Callees:
 *     HalRequestIpiSpecifyVector @ 0x140212190 (HalRequestIpiSpecifyVector.c)
 *     KeAddProcessorAffinityEx @ 0x14021E120 (KeAddProcessorAffinityEx.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     memset @ 0x14040A280 (memset.c)
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
