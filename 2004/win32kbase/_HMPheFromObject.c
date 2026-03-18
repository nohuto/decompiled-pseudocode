/*
 * XREFs of _HMPheFromObject @ 0x1C008D3D0
 * Callers:
 *     HMChangeOwnerThreadWorker @ 0x1C004FD24 (HMChangeOwnerThreadWorker.c)
 * Callees:
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C008BA00 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 */

char *__fastcall HMPheFromObject(_DWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  GetDomainLockRef(14LL, a2, a3, a4);
  return (char *)qword_1C024AD48 + dword_1C024AD50 * (unsigned int)(unsigned __int16)*a1;
}
