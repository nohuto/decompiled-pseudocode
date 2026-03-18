/*
 * XREFs of ??1CHMRefHwndByHandle@@QEAA@XZ @ 0x1C00470F0
 * Callers:
 *     <none>
 * Callees:
 *     HMUnlockObjectWorker @ 0x1C0021290 (HMUnlockObjectWorker.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0045F40 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     HMUnlockObjectInternal @ 0x1C0054B50 (HMUnlockObjectInternal.c)
 */

void __fastcall CHMRefHwndByHandle::~CHMRefHwndByHandle(CHMRefHwndByHandle *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  __int64 v6; // rdi

  v4 = *(_QWORD *)this;
  if ( *(_QWORD *)this )
  {
    GetDomainLockRef(14LL, a2, a3, a4);
    HMUnlockObjectWorker(v4);
    *(_QWORD *)this = 0LL;
  }
  v6 = *((_QWORD *)this + 1);
  if ( v6 )
  {
    GetDomainLockRef(14LL, a2, a3, a4);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 8), 0xFFFFFFFF) == 1 )
      HMUnlockObjectInternal(v6);
    *((_QWORD *)this + 1) = 0LL;
  }
}
