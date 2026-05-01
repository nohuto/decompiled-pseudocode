/*
 * XREFs of ?HampHostSnapshotCleanup@@YAXPEAU_HAM_HOST_SNAPSHOT@@@Z @ 0x18003B730
 * Callers:
 *     ?HampSessionTerminate@@YAJPEAU_HAM_SESSION@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@K@Z @ 0x18003B688 (-HampSessionTerminate@@YAJPEAU_HAM_SESSION@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU.c)
 *     ?HampAppTerminate@@YAJPEAU_HAM_APPLICATION@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@K@Z @ 0x180080150 (-HampAppTerminate@@YAJPEAU_HAM_APPLICATION@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU.c)
 *     ?HampPkgSuspend@@YAJPEAU_HAM_PACKAGE@@PEAU_HAM_CLIENT_CONTEXT@@PEAW4_HAM_APPLICATION_EXECUTION_STATE@@@Z @ 0x18008097C (-HampPkgSuspend@@YAJPEAU_HAM_PACKAGE@@PEAU_HAM_CLIENT_CONTEXT@@PEAW4_HAM_APPLICATION_EXECUTION_S.c)
 *     ?HampPkgTerminate@@YAJPEAU_HAM_PACKAGE@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@K@Z @ 0x180080AEC (-HampPkgTerminate@@YAJPEAU_HAM_PACKAGE@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM.c)
 *     ?HampUserTerminate@@YAJPEAU_HAM_USER@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@K@Z @ 0x1800822A8 (-HampUserTerminate@@YAJPEAU_HAM_USER@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_C.c)
 * Callees:
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000A04C (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18000F2A0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001E250 (-RmpAcquireGlobalLock@@YAXXZ.c)
 */

void __fastcall HampHostSnapshotCleanup(struct _HAM_HOST_SNAPSHOT *a1)
{
  unsigned int i; // ebx
  __int64 v3; // rsi
  __int64 v4; // rdx

  for ( i = 0; i < *((_DWORD *)a1 + 2); ++i )
  {
    v3 = *(_QWORD *)(*(_QWORD *)a1 + 16LL * i);
    RmpAcquireGlobalLock();
    if ( (*(_QWORD *)(v3 + 592))-- == 1LL )
      RmpActivityHostCheckQueueDelete((struct _RM_ACTIVITY_HOST *)(v3 - 64), v4);
    RmpReleaseGlobalLock();
  }
  if ( *(_QWORD *)a1 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, *(PVOID *)a1);
}
