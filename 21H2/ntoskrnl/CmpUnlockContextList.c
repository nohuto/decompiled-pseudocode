/*
 * XREFs of CmpUnlockContextList @ 0x1406930B0
 * Callers:
 *     CmpGetCallbackObjectContext @ 0x140692DB8 (CmpGetCallbackObjectContext.c)
 *     CmpFreeCallbackObjectContexts @ 0x140692E2C (CmpFreeCallbackObjectContexts.c)
 *     CmSetCallbackObjectContext @ 0x140692F40 (CmSetCallbackObjectContext.c)
 *     CmUnRegisterCallback @ 0x14090FD60 (CmUnRegisterCallback.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 */

void CmpUnlockContextList()
{
  ExReleasePushLockEx((ULONG_PTR)&CmpContextListLock, 0LL);
  KeLeaveCriticalRegion();
}
