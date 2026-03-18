/*
 * XREFs of HMChangeOwnerThread @ 0x1C002D040
 * Callers:
 *     <none>
 * Callees:
 *     HMChangeOwnerThreadWorker @ 0x1C002D084 (HMChangeOwnerThreadWorker.c)
 *     ??0?$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1C0071754 (--0-$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0084930 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 */

__int64 __fastcall HMChangeOwnerThread(__int64 a1, __int64 a2)
{
  _BYTE v5[24]; // [rsp+20h] [rbp-18h] BYREF

  GetDomainLockRef(20LL);
  CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>(v5);
  return HMChangeOwnerThreadWorker(a1, a2);
}
