/*
 * XREFs of ?RmpRundownAllModules@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x1800645D4
 * Callers:
 *     PsmInitializeServiceExtension4 @ 0x18003EDF0 (PsmInitializeServiceExtension4.c)
 * Callees:
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18000F2A0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001E250 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?Rundown@ResourceManager@ExecutionModel@@QEAAXXZ @ 0x1800683C4 (-Rundown@ResourceManager@ExecutionModel@@QEAAXXZ.c)
 *     ?RmpActivatorCleanup@@YAXPEAU_RM_ACTIVATOR@@@Z @ 0x18006ABE4 (-RmpActivatorCleanup@@YAXPEAU_RM_ACTIVATOR@@@Z.c)
 *     ?RmpGameModeRundown@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x18006FE04 (-RmpGameModeRundown@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z.c)
 *     ?RmpSystemNotificationContextRundown@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180070D30 (-RmpSystemNotificationContextRundown@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 *     ?RmpPartitionTableRundown@@YAXPEAU_RM_PARTITION_TABLE@@@Z @ 0x1800712F8 (-RmpPartitionTableRundown@@YAXPEAU_RM_PARTITION_TABLE@@@Z.c)
 *     ?RmpEnforcerContextRundown@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180071A20 (-RmpEnforcerContextRundown@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 *     ?HampManagerRundown@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x18007C8F8 (-HampManagerRundown@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 */

void __fastcall RmpRundownAllModules(struct _RM_SERVICE_GLOBALS *a1)
{
  char *v1; // rbx
  ExecutionModel::ResourceManager *v3; // rcx
  struct _RM_SERVICE_GLOBALS **v4; // rbx
  struct _RM_SERVICE_GLOBALS *v5; // rdi

  v1 = (char *)a1 + 1688;
  RtlAcquireSRWLockExclusive((char *)a1 + 1688);
  *((_DWORD *)a1 + 424) = GetCurrentThreadId();
  RmpAcquireGlobalLock();
  *((_DWORD *)a1 + 678) |= 1u;
  RmpReleaseGlobalLock();
  *((_DWORD *)a1 + 424) = 0;
  RtlReleaseSRWLockExclusive(v1);
  HampManagerRundown((struct _RM_SERVICE_GLOBALS *)((char *)a1 + 1768));
  v3 = (ExecutionModel::ResourceManager *)*((_QWORD *)a1 + 340);
  if ( v3 )
    ExecutionModel::ResourceManager::Rundown(v3);
  RmpAcquireGlobalLock();
  v4 = *(struct _RM_SERVICE_GLOBALS ***)a1;
  if ( *(struct _RM_SERVICE_GLOBALS **)a1 != a1 )
  {
    do
    {
      v5 = *v4;
      RmpActivatorCleanup((struct _RM_ACTIVATOR *)(v4 - 1));
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v4 - 1);
      v4 = (struct _RM_SERVICE_GLOBALS **)v5;
    }
    while ( v5 != a1 );
  }
  RmpReleaseGlobalLock();
  if ( *((_QWORD *)a1 + 198) )
  {
    RtlUnsubscribeWnfNotificationWaitForCompletion();
    *((_QWORD *)a1 + 198) = 0LL;
  }
  RmpEnforcerContextRundown(a1);
  RmpGameModeRundown((struct _RM_SERVICE_GLOBALS *)((char *)a1 + 1616));
  RmpPartitionTableRundown((struct _RM_SERVICE_GLOBALS *)((char *)a1 + 312));
  RmpSystemNotificationContextRundown(a1);
  if ( *((_QWORD *)a1 + 70) )
  {
    RmpAcquireGlobalLock();
    TpSetTimer(*((_QWORD *)a1 + 70), 0LL, 0LL, 0LL);
    RmpReleaseGlobalLock();
    TpWaitForTimer(*((_QWORD *)a1 + 70), 1LL);
  }
}
