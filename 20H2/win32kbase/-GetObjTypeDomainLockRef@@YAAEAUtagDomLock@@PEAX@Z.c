/*
 * XREFs of ?GetObjTypeDomainLockRef@@YAAEAUtagDomLock@@PEAX@Z @ 0x1C0119710
 * Callers:
 *     <none>
 * Callees:
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0045F40 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     ??0?$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1C005219C (--0-$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ.c)
 */

struct tagDomLock *__fastcall GetObjTypeDomainLockRef(_DWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  _BYTE v9[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( a1
    && (CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>(
          (__int64)v9,
          a2,
          a3,
          a4),
        *((_BYTE *)qword_1C0248D48 + dword_1C0248D50 * (unsigned int)(unsigned __int16)*a1 + 24) == 1) )
  {
    return (struct tagDomLock *)GetDomainLockRef(10LL, v5, v6, v7);
  }
  else
  {
    return (struct tagDomLock *)&gDomainDummyLock;
  }
}
