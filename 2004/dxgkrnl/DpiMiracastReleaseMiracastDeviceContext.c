/*
 * XREFs of DpiMiracastReleaseMiracastDeviceContext @ 0x1C0053200
 * Callers:
 *     DxgkMiracastEnforceInactiveMonitorPolicy @ 0x1C00185C0 (DxgkMiracastEnforceInactiveMonitorPolicy.c)
 *     DpiMiracastStopMiracastSessionAsync @ 0x1C0053300 (DpiMiracastStopMiracastSessionAsync.c)
 *     DpiMiracastStopMiracastSessionSync @ 0x1C0053450 (DpiMiracastStopMiracastSessionSync.c)
 *     DpiMiracastTargetDeviceChange @ 0x1C0053A20 (DpiMiracastTargetDeviceChange.c)
 *     DpiMiracastTearDownAssociation @ 0x1C0053F08 (DpiMiracastTearDownAssociation.c)
 *     DxgkMiracastGetNextChunkInfo @ 0x1C00546C8 (DxgkMiracastGetNextChunkInfo.c)
 *     DxgkMiracastStartMiracastSession @ 0x1C0054920 (DxgkMiracastStartMiracastSession.c)
 *     DxgkMiracastStopMiracastSession @ 0x1C0055868 (DxgkMiracastStopMiracastSession.c)
 *     DxgkMiracastStopAllMiracastSessions @ 0x1C0159E80 (DxgkMiracastStopAllMiracastSessions.c)
 *     DpiFdoStopMiracastSession @ 0x1C0172830 (DpiFdoStopMiracastSession.c)
 *     DpiMiracastCbSendUserModeMessage @ 0x1C02CD650 (DpiMiracastCbSendUserModeMessage.c)
 *     DpiMiracastStartSessionRequestCallback @ 0x1C02CECB0 (DpiMiracastStartSessionRequestCallback.c)
 *     DpiMiracastStopMiracastSessionWork @ 0x1C02CED90 (DpiMiracastStopMiracastSessionWork.c)
 *     DpiMiracastStopSessionRequestCallback @ 0x1C02CEDF0 (DpiMiracastStopSessionRequestCallback.c)
 *     DxgkHandleMiracastEscape @ 0x1C02CEE38 (DxgkHandleMiracastEscape.c)
 *     DxgkMiracastQueryMiracastStatus @ 0x1C02CF5A8 (DxgkMiracastQueryMiracastStatus.c)
 * Callees:
 *     <none>
 */

void __fastcall DpiMiracastReleaseMiracastDeviceContext(int *P, __int64 a2)
{
  __int64 v3; // rax
  void *v4; // rcx
  void *v5; // rcx
  _QWORD *v6; // rcx
  PVOID *v7; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  _InterlockedXor(P + 7, a2);
  if ( _InterlockedExchangeAdd(P + 6, 0xFFFFFFFF) == 1 )
  {
    if ( P[7] )
    {
      v3 = WdLogNewEntry5_WdError(P, a2);
      *(_QWORD *)(v3 + 24) = P[7];
      *(_QWORD *)(v3 + 32) = -1073741823LL;
      WdLogEvent5_WdError(v3);
    }
    P[4] = 0;
    v4 = (void *)*((_QWORD *)P + 60);
    if ( v4 )
      ObfDereferenceObject(v4);
    ObfDereferenceObject(*((PVOID *)P + 58));
    v5 = (void *)*((_QWORD *)P + 74);
    if ( v5 )
      ExFreePoolWithTag(v5, 0);
    KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
    v6 = *(_QWORD **)P;
    if ( *(int **)(*(_QWORD *)P + 8LL) != P || (v7 = (PVOID *)*((_QWORD *)P + 1), *v7 != P) )
      __fastfail(3u);
    *v7 = v6;
    v6[1] = v7;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    ExFreePoolWithTag(P, 0);
  }
}
