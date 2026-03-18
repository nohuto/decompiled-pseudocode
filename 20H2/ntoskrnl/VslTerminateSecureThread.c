/*
 * XREFs of VslTerminateSecureThread @ 0x140892F2C
 * Callers:
 *     KeUnsecureThread @ 0x140511958 (KeUnsecureThread.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140221480 (KeLeaveCriticalRegion.c)
 *     VslpEnterIumSecureMode @ 0x1402E51E8 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     memset @ 0x140411300 (memset.c)
 */

__int64 __fastcall VslTerminateSecureThread(int a1, _QWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v5; // ebx
  __int64 result; // rax
  _QWORD v7[14]; // [rsp+20h] [rbp-88h] BYREF

  memset(v7, 0, 0x68uLL);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = VslpEnterIumSecureMode(2u, 10, a1, (__int64)v7);
  KeLeaveCriticalRegion();
  result = v5;
  *a2 = v7[2];
  return result;
}
