/*
 * XREFs of ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C00C77FC
 * Callers:
 *     ?StoreTransform@InputTransform@@YAHPEAUtagWND@@PEBUtagINPUT_TRANSFORM@@PEA_K@Z @ 0x1C0003034 (-StoreTransform@InputTransform@@YAHPEAUtagWND@@PEBUtagINPUT_TRANSFORM@@PEA_K@Z.c)
 *     ?UpdateProcessPriorityWhenComponentAdded@PriorityBoostCUI@@YAXPEAUtagWND@@0@Z @ 0x1C0005178 (-UpdateProcessPriorityWhenComponentAdded@PriorityBoostCUI@@YAXPEAUtagWND@@0@Z.c)
 *     ?CleanupRitTimerScanWakeEvent@CRitTimerScanWakeSystem@@SAXXZ @ 0x1C000B10C (-CleanupRitTimerScanWakeEvent@CRitTimerScanWakeSystem@@SAXXZ.c)
 *     ?TransitionForegroundPriority@PriorityBoostCUI@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x1C00C40FC (-TransitionForegroundPriority@PriorityBoostCUI@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z.c)
 *     ?UpdateProcessPriorityWhenEnableStateIsChanging@PriorityBoostCUI@@YAXPEAUtagWND@@H@Z @ 0x1C00C76C4 (-UpdateProcessPriorityWhenEnableStateIsChanging@PriorityBoostCUI@@YAXPEAUtagWND@@H@Z.c)
 *     ?OnInput@InputTransform@@YAHPEAUtagWND@@_K@Z @ 0x1C01084D0 (-OnInput@InputTransform@@YAHPEAUtagWND@@_K@Z.c)
 *     ?UpdateProcessPriorityWhenComponentRemoved@PriorityBoostCUI@@YAXPEAUtagWND@@0@Z @ 0x1C0223174 (-UpdateProcessPriorityWhenComponentRemoved@PriorityBoostCUI@@YAXPEAUtagWND@@0@Z.c)
 *     SetForegroundPriority @ 0x1C0223220 (SetForegroundPriority.c)
 * Callees:
 *     <none>
 */

CAutoPushLockEx *__fastcall CAutoPushLockEx::CAutoPushLockEx(CAutoPushLockEx *this, struct _EX_PUSH_LOCK *a2)
{
  *(_QWORD *)this = a2;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(*(_QWORD *)this, 0LL);
  return this;
}
