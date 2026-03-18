/*
 * XREFs of HMPkheFromPhe @ 0x1C00848F0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0084930 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 */

char *__fastcall HMPkheFromPhe(__int64 a1)
{
  GetDomainLockRef(14LL);
  return (char *)gpKernelHandleTable + 24 * (unsigned int)((a1 - (__int64)qword_1C0250D48) >> 5);
}
