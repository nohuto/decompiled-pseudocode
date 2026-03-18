/*
 * XREFs of ?GetObjTypeDomainLockRef@@YAAEAUtagDomLock@@PEAX@Z @ 0x1C011BA50
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1C0017700 (--0-$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C008BA00 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 */

struct tagDomLock *__fastcall GetObjTypeDomainLockRef(_DWORD *a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  _BYTE v6[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( a1
    && (CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>((__int64)v6),
        *((_BYTE *)qword_1C024AD48 + dword_1C024AD50 * (unsigned int)(unsigned __int16)*a1 + 24) == 1) )
  {
    return (struct tagDomLock *)GetDomainLockRef(10LL, v2, v3, v4);
  }
  else
  {
    return (struct tagDomLock *)&gDomainDummyLock;
  }
}
