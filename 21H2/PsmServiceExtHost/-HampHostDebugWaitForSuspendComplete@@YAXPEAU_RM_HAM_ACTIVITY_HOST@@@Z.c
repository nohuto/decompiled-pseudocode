/*
 * XREFs of ?HampHostDebugWaitForSuspendComplete@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18007E330
 * Callers:
 *     ?HampPkgSuspend@@YAJPEAU_HAM_PACKAGE@@PEAU_HAM_CLIENT_CONTEXT@@PEAW4_HAM_APPLICATION_EXECUTION_STATE@@@Z @ 0x18008097C (-HampPkgSuspend@@YAJPEAU_HAM_PACKAGE@@PEAU_HAM_CLIENT_CONTEXT@@PEAW4_HAM_APPLICATION_EXECUTION_S.c)
 * Callees:
 *     CempLockSleepConditionVariableExclusive @ 0x1800054A4 (CempLockSleepConditionVariableExclusive.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180009240 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180009FB0 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18000F2A0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?HampHostCheckStartPendingActivities@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180017DB0 (-HampHostCheckStartPendingActivities@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001E250 (-RmpAcquireGlobalLock@@YAXXZ.c)
 */

void __fastcall HampHostDebugWaitForSuspendComplete(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  RmpAcquireGlobalLock();
  while ( *((char *)a1 + 1184) < 0 || *((char *)a1 + 1180) >= 0 )
    CempLockSleepConditionVariableExclusive((__int64)&RmpGlobalLock, (__int64)a1 + 1168, 0LL);
  RmpReleaseGlobalLock();
  HampHostAcquireLockExclusiveEx(a1, 0);
  *((_QWORD *)a1 + 81) &= ~0x20000000000000uLL;
  HampHostCheckStartPendingActivities(a1);
  HampHostReleaseLockExclusiveEx(a1);
  RtlWakeAddressAll((char *)a1 + 648);
}
