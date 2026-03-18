/*
 * XREFs of VerifierPortKeAcquireSpinLock @ 0x1409D8AC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     VfUtilCheckKernelAddress @ 0x1409C356C (VfUtilCheckKernelAddress.c)
 *     ViTargetIncrementCounter @ 0x1409D449C (ViTargetIncrementCounter.c)
 *     ViKeRaiseIrqlSanityChecks @ 0x1409D920C (ViKeRaiseIrqlSanityChecks.c)
 */

__int64 __fastcall VerifierPortKeAcquireSpinLock(ULONG_PTR a1, _BYTE *a2, __int64 a3)
{
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 result; // rax

  ++dword_140C2A808;
  if ( (MmVerifierData & 0x1000) != 0 )
    ViTargetIncrementCounter(a3, 156LL);
  VfUtilCheckKernelAddress(a1, 8uLL);
  LOBYTE(v5) = 2;
  v6 = ViKeRaiseIrqlSanityChecks(v5, 0LL);
  result = ((__int64 (__fastcall *)(ULONG_PTR))pXdvKeAcquireSpinLockRaiseToDpc)(a1);
  *a2 = result;
  if ( v6 )
    *(_WORD *)(v6 + 10) = KeGetPcr()->Prcb.Number;
  return result;
}
