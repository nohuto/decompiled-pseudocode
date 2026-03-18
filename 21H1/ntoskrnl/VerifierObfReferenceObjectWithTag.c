/*
 * XREFs of VerifierObfReferenceObjectWithTag @ 0x1409E4DE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     VfUtilCheckKernelAddress @ 0x1409C356C (VfUtilCheckKernelAddress.c)
 */

__int64 __fastcall VerifierObfReferenceObjectWithTag(ULONG_PTR a1, unsigned int a2)
{
  VfUtilCheckKernelAddress(a1, 8uLL);
  return ((__int64 (__fastcall *)(ULONG_PTR, _QWORD))pXdvObfReferenceObjectWithTag)(a1, a2);
}
