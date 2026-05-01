/*
 * XREFs of ?HampDepGroupVerifyHostDispositionAndEnterWorker@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18007F078
 * Callers:
 *     ?HampDepGroupRemoveDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0W4_HAM_HOST_DEPENDENCY_TYPE@@@Z @ 0x18007E97C (-HampDepGroupRemoveDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0W4_HAM_HOST_DEPENDENCY_TYPE@@@Z.c)
 * Callees:
 *     ?HampDepGroupWaitEnterStateChange@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180008C90 (-HampDepGroupWaitEnterStateChange@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180009D90 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostGetDepGroupDisposition@@YA?AW4_HAM_HOST_DEPENDENCY_GROUP_DISPOSITION@@PEAU_RM_HAM_ACTIVITY_HOST@@0@Z @ 0x180009DE8 (-HampHostGetDepGroupDisposition@@YA-AW4_HAM_HOST_DEPENDENCY_GROUP_DISPOSITION@@PEAU_RM_HAM_ACTIV.c)
 *     ?HampHostAcquireTwoLocksExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@0@Z @ 0x18000AAF4 (-HampHostAcquireTwoLocksExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@0@Z.c)
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180017CF0 (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180028438 (-HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 */

__int64 __fastcall HampDepGroupVerifyHostDispositionAndEnterWorker(
        struct _RM_HAM_ACTIVITY_HOST *a1,
        struct _RM_HAM_ACTIVITY_HOST *a2,
        struct _HAM_DEPENDENCY_GROUP **a3)
{
  unsigned int v6; // ebp
  __int64 v7; // rbx

  HampHostAcquireTwoLocksExclusive(a1, a2);
  v6 = 0;
  if ( (unsigned int)HampHostGetDepGroupDisposition((__int64)a1, (__int64)a2) )
  {
    v6 = -1073740007;
  }
  else
  {
    while ( 1 )
    {
      v7 = *((_QWORD *)a1 + 86);
      if ( _InterlockedIncrement64((volatile signed __int64 *)(v7 + 96)) <= 1 )
        __fastfail(0xEu);
      HampHostReleaseLockExclusiveEx(a1);
      HampHostReleaseLockExclusiveEx(a2);
      HampDepGroupWaitEnterStateChange((struct _HAM_DEPENDENCY_GROUP *)v7);
      HampHostAcquireTwoLocksExclusive(a1, a2);
      if ( *((_QWORD *)a1 + 86) == v7 )
        break;
      HampHostReleaseLockExclusiveEx(a1);
      HampHostReleaseLockExclusiveEx(a2);
      HampDepGroupRunStateChangeWorker((struct _HAM_DEPENDENCY_GROUP *)v7);
      HampDepGroupDereference((struct _HAM_DEPENDENCY_GROUP *)v7);
      HampHostAcquireTwoLocksExclusive(a1, a2);
    }
    *a3 = (struct _HAM_DEPENDENCY_GROUP *)v7;
  }
  HampHostReleaseLockExclusiveEx(a1);
  HampHostReleaseLockExclusiveEx(a2);
  return v6;
}
