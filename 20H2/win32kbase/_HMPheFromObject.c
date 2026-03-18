/*
 * XREFs of _HMPheFromObject @ 0x1C0047160
 * Callers:
 *     HMChangeOwnerThreadWorker @ 0x1C00B0834 (HMChangeOwnerThreadWorker.c)
 * Callees:
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0045F40 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 */

char *__fastcall HMPheFromObject(_DWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  GetDomainLockRef(14LL, a2, a3, a4);
  return (char *)qword_1C0248D48 + dword_1C0248D50 * (unsigned int)(unsigned __int16)*a1;
}
