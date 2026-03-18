/*
 * XREFs of ??0?$CLockDomainExclusive@VDLT_JOB@@@@QEAA@XZ @ 0x1C006B6D4
 * Callers:
 *     RealInternalRemoveProp @ 0x1C006B000 (RealInternalRemoveProp.c)
 *     DeleteProperties @ 0x1C006B4A0 (DeleteProperties.c)
 *     HMCleanupGrantedHandle @ 0x1C0119598 (HMCleanupGrantedHandle.c)
 * Callees:
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0045F40 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 */

__int64 __fastcall CLockDomainExclusive<DLT_JOB>::CLockDomainExclusive<DLT_JOB>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 result; // rax

  *(_QWORD *)a1 = GetDomainLockRef(17LL, a2, a3, a4);
  result = a1;
  *(_BYTE *)(a1 + 8) = 0;
  return result;
}
