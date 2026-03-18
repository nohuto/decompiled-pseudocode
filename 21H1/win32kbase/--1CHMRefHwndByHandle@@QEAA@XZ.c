/*
 * XREFs of ??1CHMRefHwndByHandle@@QEAA@XZ @ 0x1C00862E0
 * Callers:
 *     <none>
 * Callees:
 *     HMUnlockObjectWorker @ 0x1C005ACF0 (HMUnlockObjectWorker.c)
 *     HMUnlockObjectInternal @ 0x1C0073480 (HMUnlockObjectInternal.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0084930 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 */

void __fastcall CHMRefHwndByHandle::~CHMRefHwndByHandle(CHMRefHwndByHandle *this)
{
  __int64 v1; // rdi
  __int64 v3; // rdi

  v1 = *(_QWORD *)this;
  if ( *(_QWORD *)this )
  {
    GetDomainLockRef(14LL);
    HMUnlockObjectWorker(v1);
    *(_QWORD *)this = 0LL;
  }
  v3 = *((_QWORD *)this + 1);
  if ( v3 )
  {
    GetDomainLockRef(14LL);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 8), 0xFFFFFFFF) == 1 )
      HMUnlockObjectInternal(v3);
    *((_QWORD *)this + 1) = 0LL;
  }
}
