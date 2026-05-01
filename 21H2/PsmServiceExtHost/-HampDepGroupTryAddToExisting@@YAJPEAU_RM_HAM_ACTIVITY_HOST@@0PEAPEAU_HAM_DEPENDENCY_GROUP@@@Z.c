/*
 * XREFs of ?HampDepGroupTryAddToExisting@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180008008
 * Callers:
 *     ?HampDepGroupEnsureHostDisposition@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180009E80 (-HampDepGroupEnsureHostDisposition@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@.c)
 * Callees:
 *     ?HampDepGroupAddHost@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180006354 (-HampDepGroupAddHost@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampDepGroupWaitEnterStateChange@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180008EB8 (-HampDepGroupWaitEnterStateChange@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180009FB0 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostAcquireTwoLocksExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@0@Z @ 0x18000AD54 (-HampHostAcquireTwoLocksExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@0@Z.c)
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180017E70 (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x1800285A8 (-HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 */

__int64 __fastcall HampDepGroupTryAddToExisting(
        struct _RM_HAM_ACTIVITY_HOST *a1,
        struct _RM_HAM_ACTIVITY_HOST *a2,
        struct _HAM_DEPENDENCY_GROUP **a3)
{
  struct _RM_HAM_ACTIVITY_HOST *v3; // rsi
  struct _RM_HAM_ACTIVITY_HOST *v4; // rdi
  __int64 v6; // rbx
  unsigned int v7; // edx
  unsigned int v8; // edx
  unsigned int v9; // ebp
  unsigned int v11; // edx

  v3 = a1;
  v4 = a2;
  if ( !*((_QWORD *)a1 + 86) )
  {
    v3 = a2;
    v4 = a1;
  }
  v6 = *((_QWORD *)v3 + 86);
  if ( _InterlockedIncrement64((volatile signed __int64 *)(v6 + 96)) <= 1 )
    __fastfail(0xEu);
  HampHostReleaseLockExclusiveEx(v3, (unsigned int)a2);
  HampHostReleaseLockExclusiveEx(v4, v7);
  HampDepGroupWaitEnterStateChange((struct _HAM_DEPENDENCY_GROUP *)v6);
  HampHostAcquireTwoLocksExclusive(v3, v4);
  if ( *((_QWORD *)v3 + 86) != v6 || *((_QWORD *)v4 + 86) )
  {
    v9 = -1073741267;
    if ( v6 )
    {
      HampHostReleaseLockExclusiveEx(v3, v8);
      HampHostReleaseLockExclusiveEx(v4, v11);
      HampDepGroupRunStateChangeWorker((struct _HAM_DEPENDENCY_GROUP *)v6);
      HampDepGroupDereference((struct _HAM_DEPENDENCY_GROUP *)v6);
      HampHostAcquireTwoLocksExclusive(v3, v4);
    }
  }
  else
  {
    HampDepGroupAddHost((struct _HAM_DEPENDENCY_GROUP *)v6, v4);
    v9 = 0;
    *a3 = (struct _HAM_DEPENDENCY_GROUP *)v6;
  }
  return v9;
}
