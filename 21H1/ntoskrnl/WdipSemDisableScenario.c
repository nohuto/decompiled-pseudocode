/*
 * XREFs of WdipSemDisableScenario @ 0x140774B60
 * Callers:
 *     WdipStartEndScenario @ 0x140774D7C (WdipStartEndScenario.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140260BA0 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140260EE0 (ExReleasePushLockEx.c)
 *     EtwEventEnabled @ 0x14026B690 (EtwEventEnabled.c)
 *     WdipSemDeleteTransitionalInstance @ 0x140773F30 (WdipSemDeleteTransitionalInstance.c)
 *     WdipSemWriteSemActionsEvent @ 0x140773FB4 (WdipSemWriteSemActionsEvent.c)
 *     WdipSemMarkInstanceForDeletion @ 0x140774CB0 (WdipSemMarkInstanceForDeletion.c)
 *     WdipSemGetLoggerIds @ 0x140774F9C (WdipSemGetLoggerIds.c)
 *     WdipSemActivateInstance @ 0x1407750BC (WdipSemActivateInstance.c)
 *     WdipSemDisableContextProviders @ 0x140775110 (WdipSemDisableContextProviders.c)
 *     WdipSemValidateEndEvent @ 0x1407757BC (WdipSemValidateEndEvent.c)
 *     WdipSemShutdown @ 0x14092B560 (WdipSemShutdown.c)
 *     WdipSemWriteSemFailureEvent @ 0x14092BF00 (WdipSemWriteSemFailureEvent.c)
 */

__int64 __fastcall WdipSemDisableScenario(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v4; // rdi
  char v5; // r14
  int LoggerIds; // ebx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  struct _KTHREAD *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9

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
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v11, v12, v13);
  if ( v5 )
  {
    v15 = KeGetCurrentThread();
    --v15->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&WdipSemPushLock, 0LL);
    if ( WdipSemEnabled )
      WdipSemShutdown();
    ExReleasePushLockEx((ULONG_PTR)&WdipSemPushLock, 0LL);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v16, v17, v18);
  }
  return (unsigned int)LoggerIds;
}
