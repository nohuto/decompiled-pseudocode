/*
 * XREFs of WdipSemEnableScenario @ 0x1407771FC
 * Callers:
 *     WdipStartEndScenario @ 0x14077718C (WdipStartEndScenario.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140207C80 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140207FC0 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     EtwEventEnabled @ 0x140212640 (EtwEventEnabled.c)
 *     WdipSemReserveInstanceTableEntry @ 0x1407761F8 (WdipSemReserveInstanceTableEntry.c)
 *     WdipSemDeleteTransitionalInstance @ 0x140776340 (WdipSemDeleteTransitionalInstance.c)
 *     WdipSemWriteSemActionsEvent @ 0x1407763C4 (WdipSemWriteSemActionsEvent.c)
 *     WdipSemQueryScenarioTable @ 0x140777344 (WdipSemQueryScenarioTable.c)
 *     WdipSemGetLoggerIds @ 0x1407773AC (WdipSemGetLoggerIds.c)
 *     WdipSemActivateInstance @ 0x1407774CC (WdipSemActivateInstance.c)
 *     WdipSemEnableContextProviders @ 0x14077768C (WdipSemEnableContextProviders.c)
 *     WdipSemShutdown @ 0x14092C810 (WdipSemShutdown.c)
 *     WdipSemWriteSemFailureEvent @ 0x14092D1B0 (WdipSemWriteSemFailureEvent.c)
 */

__int64 __fastcall WdipSemEnableScenario(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v4; // rdi
  char v5; // r14
  int LoggerIds; // ebx
  __int64 ScenarioTable; // rax
  _QWORD *v11; // rax
  struct _KTHREAD *v13; // rax

  CurrentThread = KeGetCurrentThread();
  v4 = 0LL;
  v5 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&WdipSemPushLock, 0LL);
  if ( !a1 || !a3 )
  {
    LoggerIds = -1073741811;
    goto LABEL_15;
  }
  if ( !WdipSemEnabled )
    goto LABEL_14;
  LoggerIds = WdipSemGetLoggerIds();
  if ( LoggerIds >= 0 )
  {
    ScenarioTable = WdipSemQueryScenarioTable(a1, a2);
    if ( ScenarioTable )
    {
      v11 = WdipSemReserveInstanceTableEntry(ScenarioTable, a3);
      v4 = v11;
      if ( v11 )
      {
        WdipSemEnableContextProviders(v11);
        goto LABEL_8;
      }
    }
LABEL_14:
    LoggerIds = -1073741823;
    goto LABEL_15;
  }
  v5 = 1;
LABEL_8:
  if ( LoggerIds >= 0 )
  {
    if ( EtwEventEnabled(WdipSemRegHandle, &WDI_SEM_EVENT_SCENARIO_START) )
      WdipSemWriteSemActionsEvent((__int64)&WDI_SEM_EVENT_SCENARIO_START, (__int64)v4);
    WdipSemActivateInstance(v4);
    goto LABEL_12;
  }
LABEL_15:
  if ( EtwEventEnabled(WdipSemRegHandle, &WDI_SEM_EVENT_SCENARIO_START_FAILED) )
    WdipSemWriteSemFailureEvent((unsigned int)&WDI_SEM_EVENT_SCENARIO_START_FAILED, a1, a2, a3, LoggerIds);
  if ( v4 )
    WdipSemDeleteTransitionalInstance(v4);
LABEL_12:
  ExReleasePushLockEx((ULONG_PTR)&WdipSemPushLock, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v5 )
  {
    v13 = KeGetCurrentThread();
    --v13->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&WdipSemPushLock, 0LL);
    if ( WdipSemEnabled )
      WdipSemShutdown();
    ExReleasePushLockEx((ULONG_PTR)&WdipSemPushLock, 0LL);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  return (unsigned int)LoggerIds;
}
