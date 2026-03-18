/*
 * XREFs of ??0?$CLockDomainExclusive@VDLT_JOB@@@@QEAA@XZ @ 0x1C000F304
 * Callers:
 *     RealInternalRemoveProp @ 0x1C000EC30 (RealInternalRemoveProp.c)
 *     DeleteProperties @ 0x1C000F0D0 (DeleteProperties.c)
 *     HMCleanupGrantedHandle @ 0x1C011B058 (HMCleanupGrantedHandle.c)
 * Callees:
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C008BA00 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 */

__int64 __fastcall CLockDomainExclusive<DLT_JOB>::CLockDomainExclusive<DLT_JOB>(__int64 a1)
{
  __int64 result; // rax

  *(_QWORD *)a1 = GetDomainLockRef(17LL);
  result = a1;
  *(_BYTE *)(a1 + 8) = 0;
  return result;
}
