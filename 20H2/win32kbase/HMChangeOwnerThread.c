/*
 * XREFs of HMChangeOwnerThread @ 0x1C00B07F0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0045F40 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     ??0?$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1C005219C (--0-$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ.c)
 *     HMChangeOwnerThreadWorker @ 0x1C00B0834 (HMChangeOwnerThreadWorker.c)
 */

__int64 __fastcall HMChangeOwnerThread(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  _BYTE v10[24]; // [rsp+20h] [rbp-18h] BYREF

  GetDomainLockRef(20LL, a2, a3, a4);
  CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>(
    (__int64)v10,
    v6,
    v7,
    v8);
  return HMChangeOwnerThreadWorker(a1, a2);
}
