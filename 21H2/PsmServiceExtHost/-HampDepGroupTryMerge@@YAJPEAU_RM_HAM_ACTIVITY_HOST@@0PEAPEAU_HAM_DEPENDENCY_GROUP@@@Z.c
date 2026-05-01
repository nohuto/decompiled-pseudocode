/*
 * XREFs of ?HampDepGroupTryMerge@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18007F6AC
 * Callers:
 *     ?HampDepGroupEnsureHostDisposition@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180009E80 (-HampDepGroupEnsureHostDisposition@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@.c)
 * Callees:
 *     ?HampDepGroupAddHost@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180006354 (-HampDepGroupAddHost@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampDepGroupWaitEnterStateChange@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180008EB8 (-HampDepGroupWaitEnterStateChange@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180009FB0 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostAcquireTwoLocksExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@0@Z @ 0x18000AD54 (-HampHostAcquireTwoLocksExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@0@Z.c)
 *     CempLockTrackerMarkAcquired @ 0x18000AF70 (CempLockTrackerMarkAcquired.c)
 *     ?HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18000E0D0 (-HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18000E158 (-HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180017E70 (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupTryLockAndReferenceMembers@@YAKPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z @ 0x18001E2D0 (-HampDepGroupTryLockAndReferenceMembers@@YAKPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEPENDENCY_WORKE.c)
 *     CempLockTrackerMarkReleased @ 0x18001E700 (CempLockTrackerMarkReleased.c)
 *     ?HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x1800285A8 (-HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupCompareDependencyLinkForRbTree@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1800340AC (-HampDepGroupCompareDependencyLinkForRbTree@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 *     __security_check_cookie @ 0x1800448B0 (__security_check_cookie.c)
 *     ?HampDepGroupDereferenceMembers@@YAXPEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z @ 0x18007EE04 (-HampDepGroupDereferenceMembers@@YAXPEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z.c)
 *     ?HampDepGroupGetFirstLink@@YAPEAU_HAM_DEPENDENCY_LINK@@PEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18007EF70 (-HampDepGroupGetFirstLink@@YAPEAU_HAM_DEPENDENCY_LINK@@PEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupRemoveHostForMerge@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18007F520 (-HampDepGroupRemoveHostForMerge@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampDepGroupUnlockMembers@@YAXPEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z @ 0x18007F9F8 (-HampDepGroupUnlockMembers@@YAXPEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z.c)
 */

__int64 __fastcall HampDepGroupTryMerge(
        struct _RM_HAM_ACTIVITY_HOST *a1,
        struct _RM_HAM_ACTIVITY_HOST *a2,
        struct _HAM_DEPENDENCY_GROUP **a3)
{
  __int64 *v3; // rsi
  struct _RM_HAM_ACTIVITY_HOST *v5; // r12
  __int64 *v6; // r14
  unsigned __int64 v7; // rdi
  struct _HAM_DEPENDENCY_GROUP *v8; // rcx
  unsigned __int64 v9; // rbx
  struct _HAM_DEPENDENCY_GROUP *v10; // rcx
  struct _HAM_DEPENDENCY_WORKER_CONTEXT *i; // rbx
  struct _HAM_DEPENDENCY_WORKER_CONTEXT *j; // rbx
  unsigned int v13; // ebx
  __int64 v14; // rdx
  __int64 v15; // rcx
  struct _HAM_DEPENDENCY_LINK *FirstLink; // r13
  struct _RTL_BALANCED_NODE **v17; // r12
  struct _RTL_BALANCED_NODE *v18; // rax
  __int64 v19; // r8
  unsigned __int64 v20; // rdi
  unsigned __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  struct _HAM_DEPENDENCY_WORKER_CONTEXT *v25[2]; // [rsp+20h] [rbp-50h] BYREF
  int v26; // [rsp+30h] [rbp-40h]
  struct _RM_HAM_ACTIVITY_HOST *v27; // [rsp+40h] [rbp-30h]
  struct _HAM_DEPENDENCY_GROUP **v28; // [rsp+48h] [rbp-28h]
  struct _RTL_BALANCED_NODE *v29[2]; // [rsp+50h] [rbp-20h] BYREF

  v3 = (__int64 *)*((_QWORD *)a1 + 86);
  v28 = a3;
  v27 = a1;
  v5 = a1;
  if ( _InterlockedIncrement64(v3 + 12) <= 1 )
    __fastfail(0xEu);
  v6 = (__int64 *)*((_QWORD *)a2 + 86);
  if ( _InterlockedIncrement64(v6 + 12) <= 1 )
    __fastfail(0xEu);
  HampHostReleaseLockExclusiveEx(a1);
  HampHostReleaseLockExclusiveEx(a2);
  v7 = *v3;
  v8 = (struct _HAM_DEPENDENCY_GROUP *)v3;
  v9 = *v6;
  if ( *v3 >= (unsigned __int64)*v6 )
    v8 = (struct _HAM_DEPENDENCY_GROUP *)v6;
  HampDepGroupWaitEnterStateChange(v8);
  v10 = (struct _HAM_DEPENDENCY_GROUP *)v6;
  if ( v7 >= v9 )
    v10 = (struct _HAM_DEPENDENCY_GROUP *)v3;
  HampDepGroupWaitEnterStateChange(v10);
  HampHostAcquireTwoLocksExclusive(v5, a2);
  if ( *((__int64 **)v5 + 86) == v3 && *((__int64 **)a2 + 86) == v6 )
  {
    HampHostReleaseLockExclusiveEx(v5);
    HampHostReleaseLockExclusiveEx(a2);
    v25[1] = (struct _HAM_DEPENDENCY_WORKER_CONTEXT *)v25;
    v25[0] = (struct _HAM_DEPENDENCY_WORKER_CONTEXT *)v25;
    HampDepGroupTryLockAndReferenceMembers(
      (struct _HAM_DEPENDENCY_GROUP *)v3,
      (struct _HAM_DEPENDENCY_WORKER_CONTEXT *)v25);
    for ( i = v25[0]; i != (struct _HAM_DEPENDENCY_WORKER_CONTEXT *)v25; i = *(struct _HAM_DEPENDENCY_WORKER_CONTEXT **)i )
      HampDepGroupRemoveHostForMerge(
        (struct _HAM_DEPENDENCY_GROUP *)v3,
        (struct _HAM_DEPENDENCY_WORKER_CONTEXT *)((char *)i - 728));
    HampDepGroupReleaseLockExclusive((struct _HAM_DEPENDENCY_GROUP *)v3);
    for ( j = v25[0]; j != (struct _HAM_DEPENDENCY_WORKER_CONTEXT *)v25; j = *(struct _HAM_DEPENDENCY_WORKER_CONTEXT **)j )
      HampDepGroupAddHost(
        (struct _HAM_DEPENDENCY_GROUP *)v6,
        (struct _HAM_DEPENDENCY_WORKER_CONTEXT *)((char *)j - 728));
    v13 = 0;
    FirstLink = HampDepGroupGetFirstLink((struct _HAM_DEPENDENCY_GROUP *)v3);
    if ( FirstLink )
    {
      v17 = (struct _RTL_BALANCED_NODE **)(v6 + 9);
      do
      {
        CempLockTrackerMarkAcquired(v15, v14, 2u, 0);
        RtlAcquireSRWLockExclusive((char *)FirstLink + 48);
        *((_DWORD *)FirstLink + 14) = GetCurrentThreadId();
        HampDepGroupAcquireLockExclusive((struct _HAM_DEPENDENCY_GROUP *)v3);
        RtlRbRemoveNode(v3 + 9, FirstLink);
        *((_QWORD *)FirstLink + 2) = -1LL;
        HampDepGroupReleaseLockExclusive((struct _HAM_DEPENDENCY_GROUP *)v3);
        v18 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)FirstLink + 3);
        v29[1] = *((struct _RTL_BALANCED_NODE **)FirstLink + 4);
        v29[0] = v18;
        HampDepGroupAcquireLockExclusive((struct _HAM_DEPENDENCY_GROUP *)v6);
        v20 = (unsigned __int64)*v17;
        if ( (v6[10] & 1) != 0 )
        {
          if ( v20 )
            v20 ^= (unsigned __int64)v17;
          else
            v20 = 0LL;
        }
        LOBYTE(v19) = 0;
        v26 = v6[10] & 1;
        if ( v20 )
        {
          while ( 1 )
          {
            if ( (int)HampDepGroupCompareDependencyLinkForRbTree(v29, (struct _RTL_BALANCED_NODE *)v20) < 0 )
            {
              v21 = *(_QWORD *)v20;
              if ( v26 )
              {
                if ( !v21 )
                  goto LABEL_35;
                v21 ^= v20;
              }
              if ( !v21 )
              {
LABEL_35:
                LOBYTE(v19) = 0;
                break;
              }
            }
            else
            {
              v21 = *(_QWORD *)(v20 + 8);
              if ( v26 )
              {
                if ( !v21 )
                  goto LABEL_29;
                v21 ^= v20;
              }
              if ( !v21 )
              {
LABEL_29:
                LOBYTE(v19) = 1;
                break;
              }
            }
            v20 = v21;
          }
        }
        RtlRbInsertNodeEx(v6 + 9, v20, v19, FirstLink);
        HampDepGroupReleaseLockExclusive((struct _HAM_DEPENDENCY_GROUP *)v6);
        HampDepGroupDereference(*((struct _HAM_DEPENDENCY_GROUP **)FirstLink + 5));
        if ( _InterlockedIncrement64(v6 + 12) <= 1 )
          __fastfail(0xEu);
        *((_QWORD *)FirstLink + 5) = v6;
        CempLockTrackerMarkReleased(v23, v22, 2u);
        *((_DWORD *)FirstLink + 14) = 0;
        RtlReleaseSRWLockExclusive((char *)FirstLink + 48);
        FirstLink = HampDepGroupGetFirstLink((struct _HAM_DEPENDENCY_GROUP *)v3);
      }
      while ( FirstLink );
      v5 = v27;
    }
    HampDepGroupUnlockMembers((struct _HAM_DEPENDENCY_WORKER_CONTEXT *)v25);
    HampDepGroupDereferenceMembers(v25);
    HampDepGroupRunStateChangeWorker((struct _HAM_DEPENDENCY_GROUP *)v3);
    HampDepGroupDereference((struct _HAM_DEPENDENCY_GROUP *)v3);
    *v28 = (struct _HAM_DEPENDENCY_GROUP *)v6;
  }
  else
  {
    v13 = -1073741267;
    HampHostReleaseLockExclusiveEx(v5);
    HampHostReleaseLockExclusiveEx(a2);
    HampDepGroupRunStateChangeWorker((struct _HAM_DEPENDENCY_GROUP *)v3);
    HampDepGroupRunStateChangeWorker((struct _HAM_DEPENDENCY_GROUP *)v6);
    HampDepGroupDereference((struct _HAM_DEPENDENCY_GROUP *)v3);
    HampDepGroupDereference((struct _HAM_DEPENDENCY_GROUP *)v6);
  }
  HampHostAcquireTwoLocksExclusive(v5, a2);
  return v13;
}
