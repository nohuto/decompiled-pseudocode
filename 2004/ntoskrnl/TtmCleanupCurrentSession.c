/*
 * XREFs of TtmCleanupCurrentSession @ 0x1408FB11C
 * Callers:
 *     NtPowerInformation @ 0x140649BC0 (NtPowerInformation.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140208500 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x140208540 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x140208CF0 (ExAcquireResourceExclusiveLite.c)
 *     PsGetProcessSessionIdEx @ 0x140347CD0 (PsGetProcessSessionIdEx.c)
 *     ObCloseHandle @ 0x140602510 (ObCloseHandle.c)
 *     PoUnregisterPowerSettingCallback @ 0x14075FEA0 (PoUnregisterPowerSettingCallback.c)
 *     TtmpCleanupPowerRequestsTrackingFromCurrentSession @ 0x1408FC384 (TtmpCleanupPowerRequestsTrackingFromCurrentSession.c)
 *     TtmpDereferenceSessionMaybeLast @ 0x1408FC568 (TtmpDereferenceSessionMaybeLast.c)
 *     TtmiLogCleanupCurrentSessionStart @ 0x1408FE44C (TtmiLogCleanupCurrentSessionStart.c)
 *     TtmiLogCleanupCurrentSessionStop @ 0x1408FE4F4 (TtmiLogCleanupCurrentSessionStop.c)
 */

__int64 TtmCleanupCurrentSession()
{
  int ProcessSessionId; // eax
  struct _KTHREAD *CurrentThread; // rcx
  int v2; // edi
  __int64 v3; // rbx
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx

  TtmiLogCleanupCurrentSessionStart();
  ProcessSessionId = PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
  CurrentThread = KeGetCurrentThread();
  v2 = ProcessSessionId;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&TtmpSessionLock, 1u);
  v3 = TtmpSession;
  if ( !TtmpSession || *(_DWORD *)TtmpSession == v2 )
  {
    TtmpCleanupPowerRequestsTrackingFromCurrentSession(TtmpSession);
    v4 = *(void **)(v3 + 24);
    *(_QWORD *)(v3 + 32) = 0LL;
    ObCloseHandle(v4, 0);
    *(_QWORD *)(v3 + 24) = 0LL;
    *(_DWORD *)(v3 + 4) |= 4u;
    TtmpDereferenceSessionMaybeLast(v3);
    TtmpSession = 0LL;
    ExReleaseResourceLite(&TtmpSessionLock);
    KeLeaveCriticalRegion();
    v5 = *(void **)(v3 + 248);
    if ( v5 )
    {
      PoUnregisterPowerSettingCallback(v5);
      *(_QWORD *)(v3 + 248) = 0LL;
      TtmpDereferenceSessionMaybeLast(v3);
    }
    v6 = *(void **)(v3 + 256);
    if ( v6 )
    {
      PoUnregisterPowerSettingCallback(v6);
      *(_QWORD *)(v3 + 256) = 0LL;
      TtmpDereferenceSessionMaybeLast(v3);
    }
  }
  else
  {
    ExReleaseResourceLite(&TtmpSessionLock);
    KeLeaveCriticalRegion();
  }
  return TtmiLogCleanupCurrentSessionStop();
}
