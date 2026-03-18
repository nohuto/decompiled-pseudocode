/*
 * XREFs of ?GetObjTypeDomainLockRef@@YAAEAUtagDomLock@@PEAX@Z @ 0x1C0121F10
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1C0071754 (--0-$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0084930 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 */

struct tagDomLock *__fastcall GetObjTypeDomainLockRef(_DWORD *a1)
{
  _BYTE v3[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( a1
    && (CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>((__int64)v3),
        *((_BYTE *)qword_1C0250D48 + dword_1C0250D50 * (unsigned int)(unsigned __int16)*a1 + 24) == 1) )
  {
    return (struct tagDomLock *)GetDomainLockRef(10LL);
  }
  else
  {
    return (struct tagDomLock *)&gDomainDummyLock;
  }
}
