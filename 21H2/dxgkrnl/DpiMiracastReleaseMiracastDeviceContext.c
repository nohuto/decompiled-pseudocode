/*
 * XREFs of DpiMiracastReleaseMiracastDeviceContext @ 0x1C0061CB0
 * Callers:
 *     DxgkMiracastEnforceInactiveMonitorPolicy @ 0x1C001C290 (DxgkMiracastEnforceInactiveMonitorPolicy.c)
 *     DpiMiracastStopMiracastSessionAsync @ 0x1C0061DB0 (DpiMiracastStopMiracastSessionAsync.c)
 *     DpiMiracastStopMiracastSessionSync @ 0x1C0061EE0 (DpiMiracastStopMiracastSessionSync.c)
 *     DpiMiracastTargetDeviceChange @ 0x1C0062480 (DpiMiracastTargetDeviceChange.c)
 *     DpiMiracastTearDownAssociation @ 0x1C0062950 (DpiMiracastTearDownAssociation.c)
 *     DxgkMiracastGetNextChunkInfo @ 0x1C00630FC (DxgkMiracastGetNextChunkInfo.c)
 *     DxgkMiracastStartMiracastSession @ 0x1C0063340 (DxgkMiracastStartMiracastSession.c)
 *     DxgkMiracastStopMiracastSession @ 0x1C006423C (DxgkMiracastStopMiracastSession.c)
 *     DxgkMiracastStopAllMiracastSessions @ 0x1C01DAC40 (DxgkMiracastStopAllMiracastSessions.c)
 *     DpiFdoStopMiracastSession @ 0x1C01F0830 (DpiFdoStopMiracastSession.c)
 *     DpiMiracastCbSendUserModeMessage @ 0x1C038CAE0 (DpiMiracastCbSendUserModeMessage.c)
 *     DpiMiracastStartSessionRequestCallback @ 0x1C038E080 (DpiMiracastStartSessionRequestCallback.c)
 *     DpiMiracastStopMiracastSessionWork @ 0x1C038E160 (DpiMiracastStopMiracastSessionWork.c)
 *     DpiMiracastStopSessionRequestCallback @ 0x1C038E1C0 (DpiMiracastStopSessionRequestCallback.c)
 *     DxgkHandleMiracastEscape @ 0x1C038E208 (DxgkHandleMiracastEscape.c)
 *     DxgkMiracastQueryMiracastStatus @ 0x1C038E8A8 (DxgkMiracastQueryMiracastStatus.c)
 * Callees:
 *     <none>
 */

void __fastcall DpiMiracastReleaseMiracastDeviceContext(int *P, unsigned int a2)
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
    v3 = P[7];
    memset(&LockHandle, 0, sizeof(LockHandle));
    if ( (_DWORD)v3 )
      WdLogSingleEntry2(2LL, v3, -1073741823LL);
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
