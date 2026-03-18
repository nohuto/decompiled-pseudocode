/*
 * XREFs of HMUnlockObjectWorker @ 0x1C0021290
 * Callers:
 *     HMUnlockDestroyObject @ 0x1C0021250 (HMUnlockDestroyObject.c)
 *     HMFreeObject @ 0x1C00213D0 (HMFreeObject.c)
 *     HMRemoveHandleForObject @ 0x1C00218C0 (HMRemoveHandleForObject.c)
 *     ??1CHMRefHwndByHandle@@QEAA@XZ @ 0x1C00470F0 (--1CHMRefHwndByHandle@@QEAA@XZ.c)
 *     HMAssignmentUnlockWorker @ 0x1C0054B18 (HMAssignmentUnlockWorker.c)
 *     ?HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1C0055648 (-HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z.c)
 * Callees:
 *     IS_USERCRIT_NOTOWNED_ATALL @ 0x1C002131C (IS_USERCRIT_NOTOWNED_ATALL.c)
 *     IS_USERCRIT_OWNED_SHAREDONLY @ 0x1C0021350 (IS_USERCRIT_OWNED_SHAREDONLY.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0045F40 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     ?HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1C0055648 (-HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z.c)
 *     AddToDeferredUserCritThreadUnlockList @ 0x1C01194C8 (AddToDeferredUserCritThreadUnlockList.c)
 */

__int64 __fastcall HMUnlockObjectWorker(__int64 a1)
{
  struct _HANDLEENTRY *v2; // rdi
  char v3; // al
  char *v5; // rcx

  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 8), 0xFFFFFFFF) != 1 )
    return a1;
  v2 = (struct _HANDLEENTRY *)((char *)qword_1C0248D48 + dword_1C0248D50 * (unsigned int)(unsigned __int16)*(_DWORD *)a1);
  v3 = *((_BYTE *)v2 + 25);
  if ( (v3 & 1) == 0 || (v3 & 2) != 0 )
    return a1;
  if ( (unsigned int)IS_USERCRIT_OWNED_SHAREDONLY() || (unsigned int)IS_USERCRIT_NOTOWNED_ATALL() )
  {
    GetDomainLockRef(12LL);
    v5 = (char *)gpKernelHandleTable + 24 * (unsigned __int16)*(_DWORD *)a1;
    if ( !*((_QWORD *)v5 + 2) )
    {
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 8));
      AddToDeferredUserCritThreadUnlockList(v5);
    }
  }
  else
  {
    HMDestroyUnlockedObjectWorker(v2);
  }
  return 0LL;
}
