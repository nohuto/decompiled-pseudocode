/*
 * XREFs of KeUnsecureThread @ 0x1405136D8
 * Callers:
 *     PspExitThread @ 0x14063F658 (PspExitThread.c)
 * Callees:
 *     VslTerminateSecureThread @ 0x14089065C (VslTerminateSecureThread.c)
 */

__int64 __fastcall KeUnsecureThread(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 SecureThreadCookie; // rcx

  CurrentThread = KeGetCurrentThread();
  SecureThreadCookie = CurrentThread->SecureThreadCookie;
  CurrentThread->SecureThreadCookie = 0;
  return VslTerminateSecureThread(SecureThreadCookie, a1);
}
