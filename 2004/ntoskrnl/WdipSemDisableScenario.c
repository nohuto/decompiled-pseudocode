/*
 * XREFs of WdipSemDisableScenario @ 0x140776F70
 * Callers:
 *     WdipStartEndScenario @ 0x14077718C (WdipStartEndScenario.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140207C80 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140207FC0 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     EtwEventEnabled @ 0x140212640 (EtwEventEnabled.c)
 *     WdipSemDeleteTransitionalInstance @ 0x140776340 (WdipSemDeleteTransitionalInstance.c)
 *     WdipSemWriteSemActionsEvent @ 0x1407763C4 (WdipSemWriteSemActionsEvent.c)
 *     WdipSemMarkInstanceForDeletion @ 0x1407770C0 (WdipSemMarkInstanceForDeletion.c)
 *     WdipSemGetLoggerIds @ 0x1407773AC (WdipSemGetLoggerIds.c)
 *     WdipSemActivateInstance @ 0x1407774CC (WdipSemActivateInstance.c)
 *     WdipSemDisableContextProviders @ 0x140777520 (WdipSemDisableContextProviders.c)
 *     WdipSemValidateEndEvent @ 0x140777BCC (WdipSemValidateEndEvent.c)
 *     WdipSemShutdown @ 0x14092C810 (WdipSemShutdown.c)
 *     WdipSemWriteSemFailureEvent @ 0x14092D1B0 (WdipSemWriteSemFailureEvent.c)
 */

__int64 __fastcall WdipSemDisableScenario(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v4; // rdi
  char v5; // r14
  int LoggerIds; // ebx
  __int64 v10; // rax
  struct _KTHREAD *v12; // rax

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
  if ( LoggerIds < 0 )
  {
    v5 = 1;
    goto LABEL_8;
  }
  v10 = WdipSemMarkInstanceForDeletion(a3);
  v4 = (_QWORD *)v10;
  if ( !v10 )
  {
LABEL_14:
    LoggerIds = -1073741823;
    goto LABEL_15;
  }
  LoggerIds = WdipSemValidateEndEvent(a1, a2, *(_QWORD *)(v10 + 32));
  if ( LoggerIds < 0 )
    goto LABEL_15;
  WdipSemDisableContextProviders(v4, 0LL);
LABEL_8:
  if ( LoggerIds >= 0 )
  {
    if ( EtwEventEnabled(WdipSemRegHandle, &WDI_SEM_EVENT_SCENARIO_END) )
      WdipSemWriteSemActionsEvent((__int64)&WDI_SEM_EVENT_SCENARIO_END, (__int64)v4);
    WdipSemDeleteTransitionalInstance(v4);
    goto LABEL_12;
  }
LABEL_15:
  if ( EtwEventEnabled(WdipSemRegHandle, &WDI_SEM_EVENT_SCENARIO_END_FAILED) )
    WdipSemWriteSemFailureEvent((unsigned int)&WDI_SEM_EVENT_SCENARIO_END_FAILED, a1, a2, a3, LoggerIds);
  if ( v4 )
    WdipSemActivateInstance(v4);
LABEL_12:
  ExReleasePushLockEx((ULONG_PTR)&WdipSemPushLock, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v5 )
  {
    v12 = KeGetCurrentThread();
    --v12->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&WdipSemPushLock, 0LL);
    if ( WdipSemEnabled )
      WdipSemShutdown();
    ExReleasePushLockEx((ULONG_PTR)&WdipSemPushLock, 0LL);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  return (unsigned int)LoggerIds;
}
