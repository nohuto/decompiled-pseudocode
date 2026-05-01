/*
 * XREFs of ?HampHostTrySetPpleCommitTarget@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z @ 0x18007EB50
 * Callers:
 *     ?RmSrvHostTrySetCommitTargetForPple@@YAJPEAU_RM_SERVICE_GLOBALS@@_KK1@Z @ 0x18006A38C (-RmSrvHostTrySetCommitTargetForPple@@YAJPEAU_RM_SERVICE_GLOBALS@@_KK1@Z.c)
 * Callees:
 *     ?HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180006008 (-HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z @ 0x180006054 (-HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180009240 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180009FB0 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000A04C (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostAcquireTwoLocksExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@0@Z @ 0x18000AD54 (-HampHostAcquireTwoLocksExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@0@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18000F2A0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180017E70 (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001CB50 (-HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001E250 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmHamFindHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_KPEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180022C80 (-RmHamFindHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_KPEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostCheckEnterDependencyWorker@@YAPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18002A928 (-HampHostCheckEnterDependencyWorker@@YAPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostCanStaticallyDonateCommit@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z @ 0x18007DCDC (-HampHostCanStaticallyDonateCommit@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z.c)
 */

__int64 __fastcall HampHostTrySetPpleCommitTarget(struct _RM_HAM_ACTIVITY_HOST *a1, __int64 a2)
{
  struct _RM_HAM_ACTIVITY_HOST *v2; // rsi
  int CanStaticallyDonateCommit; // ebx
  int v6; // ebp
  struct _HAM_ACTIVITY *i; // rax
  __int64 v8; // rax
  struct _HAM_ACTIVITY *v9; // rcx
  __int64 v10; // rdx
  __int64 v13; // rbx
  int Host; // eax
  __int64 v15; // rax
  struct _HAM_DEPENDENCY_GROUP *v16; // r14
  struct _RM_HAM_ACTIVITY_HOST *v17; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0LL;
  v17 = 0LL;
  if ( (*((_QWORD *)a1 + 81) & 0x400000000000000LL) == 0 )
    return (unsigned int)-1073700845;
  if ( a2 == -1 )
    return (unsigned int)-1073741584;
  if ( a2 )
  {
    HampHostAcquireLockExclusiveEx(a1, 0);
    for ( i = HampHostGetFirstActivity(a1); ; i = HampHostGetNextActivity(v9) )
    {
      v9 = i;
      if ( !i )
        goto LABEL_12;
      v8 = *((_QWORD *)i + 9);
      if ( v8 )
      {
        if ( *(_BYTE *)(v8 + 40) == 2 )
          break;
      }
    }
    v13 = *(_QWORD *)(*(_QWORD *)(v8 + 8) + 24LL);
    if ( v13 == -1 )
    {
LABEL_12:
      CanStaticallyDonateCommit = -1058275323;
      goto LABEL_13;
    }
    HampHostReleaseLockExclusiveEx(a1);
    v6 = 0;
    Host = RmHamFindHost(
             (struct _HOST_ACTIVITY_MANAGER *)((*(_QWORD *)(*(_QWORD *)((*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 97)
                                                                                               + 88LL)
                                                                                   + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                                                                      + 120)
                                                          + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                                             - 168),
             v13,
             &v17);
    v2 = v17;
    CanStaticallyDonateCommit = Host;
    if ( Host >= 0 )
    {
      v6 = 1;
      HampHostAcquireTwoLocksExclusive(v17, a1);
      v15 = *((_QWORD *)v2 + 87);
      if ( v15 )
      {
        if ( *(struct _RM_HAM_ACTIVITY_HOST **)(*(_QWORD *)v15 + 80LL) == a1 )
        {
          CanStaticallyDonateCommit = HampHostCanStaticallyDonateCommit(v2, a2);
          if ( CanStaticallyDonateCommit >= 0 )
          {
            *((_QWORD *)a1 + 118) = a2;
            HampHostCheckQueueStateWorker(a1, 0);
            CanStaticallyDonateCommit = 0;
          }
        }
        else
        {
          CanStaticallyDonateCommit = -1058275322;
        }
      }
      else
      {
        CanStaticallyDonateCommit = -1058275323;
      }
    }
    if ( v2 )
      HampHostReleaseLockExclusiveEx(v2);
    if ( CanStaticallyDonateCommit < 0 )
      goto LABEL_34;
    if ( !v6 )
      HampHostAcquireLockExclusiveEx(a1, 0);
  }
  else
  {
    v6 = 1;
    HampHostAcquireLockExclusiveEx(a1, 0);
    *((_QWORD *)a1 + 118) = 0LL;
    CanStaticallyDonateCommit = 0;
  }
  v16 = HampHostCheckEnterDependencyWorker(a1);
  if ( v16 )
  {
    HampHostReleaseLockExclusiveEx(a1);
    v6 = 0;
    HampDepGroupRunStateChangeWorker(v16);
  }
LABEL_34:
  if ( v6 )
LABEL_13:
    HampHostReleaseLockExclusiveEx(a1);
  if ( v2 )
  {
    RmpAcquireGlobalLock();
    if ( (*((_QWORD *)v2 + 74))-- == 1LL )
      RmpActivityHostCheckQueueDelete((struct _RM_HAM_ACTIVITY_HOST *)((char *)v2 - 64), v10);
    RmpReleaseGlobalLock();
  }
  return (unsigned int)CanStaticallyDonateCommit;
}
