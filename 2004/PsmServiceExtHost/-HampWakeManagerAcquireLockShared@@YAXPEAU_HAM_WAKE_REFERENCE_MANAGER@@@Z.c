/*
 * XREFs of ?HampWakeManagerAcquireLockShared@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z @ 0x180007E60
 * Callers:
 *     ?HampWakeManagerActivityCallback@@YAXPEAU_HAM_ACTIVITY_CALLBACK_PAYLOAD@@PEAX@Z @ 0x180003970 (-HampWakeManagerActivityCallback@@YAXPEAU_HAM_ACTIVITY_CALLBACK_PAYLOAD@@PEAX@Z.c)
 *     ?HampWakeContextFindOrCreate@@YAJPEAU_HAM_WAKE_REFERENCE_MANAGER@@_KPEAXPEAPEAU_CEM_RC_OBJECT@@@Z @ 0x180007224 (-HampWakeContextFindOrCreate@@YAJPEAU_HAM_WAKE_REFERENCE_MANAGER@@_KPEAXPEAPEAU_CEM_RC_OBJECT@@@.c)
 * Callees:
 *     CempLockTrackerMarkAcquired @ 0x18000AD04 (CempLockTrackerMarkAcquired.c)
 */

void __fastcall HampWakeManagerAcquireLockShared(struct _HAM_WAKE_REFERENCE_MANAGER *a1, __int64 a2)
{
  CempLockTrackerMarkAcquired(a1, a2, 4LL);
  RtlAcquireSRWLockShared((char *)a1 + 16);
}
