/*
 * XREFs of VerifierObfDereferenceObject @ 0x1409EAD80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     VfUtilCheckKernelAddress @ 0x1409C959C (VfUtilCheckKernelAddress.c)
 */

__int64 __fastcall VerifierObfDereferenceObject(ULONG_PTR a1)
{
  VfUtilCheckKernelAddress(a1, 8uLL);
  return ((__int64 (__fastcall *)(ULONG_PTR))pXdvObfDereferenceObject)(a1);
}
