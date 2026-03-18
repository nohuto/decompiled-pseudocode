/*
 * XREFs of VerifierKeReleaseMutex @ 0x1409D82A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     VfUtilCheckKernelAddress @ 0x1409C356C (VfUtilCheckKernelAddress.c)
 *     VfDeadlockReleaseResource @ 0x1409DB2C8 (VfDeadlockReleaseResource.c)
 */

__int64 __fastcall VerifierKeReleaseMutex(ULONG_PTR a1, char a2)
{
  __int64 v4; // rdx

  VfUtilCheckKernelAddress(a1, 0x38uLL);
  VfDeadlockReleaseResource(a1);
  LOBYTE(v4) = a2;
  return ((__int64 (__fastcall *)(ULONG_PTR, __int64))pXdvKeReleaseMutex)(a1, v4);
}
