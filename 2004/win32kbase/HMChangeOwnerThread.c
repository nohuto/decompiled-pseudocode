/*
 * XREFs of HMChangeOwnerThread @ 0x1C004FCE0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1C0017700 (--0-$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ.c)
 *     HMChangeOwnerThreadWorker @ 0x1C004FD24 (HMChangeOwnerThreadWorker.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C008BA00 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 */

__int64 __fastcall HMChangeOwnerThread(__int64 a1, __int64 a2)
{
  _BYTE v5[24]; // [rsp+20h] [rbp-18h] BYREF

  GetDomainLockRef(20LL);
  CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>((__int64)v5);
  return HMChangeOwnerThreadWorker(a1, a2);
}
