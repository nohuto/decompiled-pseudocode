/*
 * XREFs of ?HampDepGroupDereferenceMembers@@YAXPEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z @ 0x18007E434
 * Callers:
 *     ?HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18001B090 (-HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampHostGetTransitiveAppliedTaskCompletions@@YA_KPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18007D9F0 (-HampHostGetTransitiveAppliedTaskCompletions@@YA_KPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampDepGroupLockAndReferenceMembers@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z @ 0x18007E80C (-HampDepGroupLockAndReferenceMembers@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEPENDENCY_WORKER_C.c)
 *     ?HampDepGroupTryMerge@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18007ECDC (-HampDepGroupTryMerge@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 * Callees:
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180009020 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180009D90 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180009E2C (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001CA10 (-HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001E110 (-RmpAcquireGlobalLock@@YAXXZ.c)
 */

void __fastcall HampDepGroupDereferenceMembers(struct _HAM_DEPENDENCY_WORKER_CONTEXT **a1)
{
  struct _HAM_DEPENDENCY_WORKER_CONTEXT *v2; // rbx
  char *v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct _HAM_DEPENDENCY_WORKER_CONTEXT **v6; // rax

  RmpAcquireGlobalLock();
  while ( 1 )
  {
    v2 = *a1;
    if ( *a1 == (struct _HAM_DEPENDENCY_WORKER_CONTEXT *)a1 )
      break;
    v3 = (char *)v2 - 728;
    HampHostAcquireLockExclusiveEx((struct _HAM_DEPENDENCY_WORKER_CONTEXT *)((char *)v2 - 728), 0);
    HampHostCheckQueueStateWorker((struct _HAM_DEPENDENCY_WORKER_CONTEXT *)((char *)v2 - 728), 0);
    HampHostReleaseLockExclusiveEx((struct _HAM_DEPENDENCY_WORKER_CONTEXT *)((char *)v2 - 728));
    v5 = *(_QWORD *)v2;
    if ( *(struct _HAM_DEPENDENCY_WORKER_CONTEXT **)(*(_QWORD *)v2 + 8LL) != v2
      || (v6 = (struct _HAM_DEPENDENCY_WORKER_CONTEXT **)*((_QWORD *)v2 + 1), *v6 != v2) )
    {
      __fastfail(3u);
    }
    *v6 = (struct _HAM_DEPENDENCY_WORKER_CONTEXT *)v5;
    *(_QWORD *)(v5 + 8) = v6;
    *(_OWORD *)v2 = 0LL;
    *((_DWORD *)v3 + 192) = 0;
    if ( (*((_QWORD *)v3 + 74))-- == 1LL )
      RmpActivityHostCheckQueueDelete((struct _HAM_DEPENDENCY_WORKER_CONTEXT *)((char *)v2 - 792), v4);
  }
  RmpReleaseGlobalLock();
}
