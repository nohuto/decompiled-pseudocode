/*
 * XREFs of KeUnsecureThread @ 0x14050E028
 * Callers:
 *     PspExitThread @ 0x1406B05E0 (PspExitThread.c)
 * Callees:
 *     VslTerminateSecureThread @ 0x14088D3DC (VslTerminateSecureThread.c)
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
