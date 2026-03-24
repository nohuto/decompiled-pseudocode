/*
 * XREFs of PopDirectedDripsHandleResiliencyNotification @ 0x1408E3194
 * Callers:
 *     PopDirectedDripsWorkerRoutine @ 0x1407B9990 (PopDirectedDripsWorkerRoutine.c)
 * Callees:
 *     PopDeepSleepClearDisengageReason @ 0x1402815D0 (PopDeepSleepClearDisengageReason.c)
 *     PopQueueWorkItem @ 0x1402D3A34 (PopQueueWorkItem.c)
 *     ExfTryToWakePushLock @ 0x1402F1570 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140348C80 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
 *     PopDirectedDripsDiagPnpActionQueueAccountingUpdate @ 0x14057C80C (PopDirectedDripsDiagPnpActionQueueAccountingUpdate.c)
 *     PopDirectedDripsResumeDevices @ 0x1408E3880 (PopDirectedDripsResumeDevices.c)
 *     PopDirectedDripsSuspendDevices @ 0x1408E3A78 (PopDirectedDripsSuspendDevices.c)
 */

__int64 __fastcall PopDirectedDripsHandleResiliencyNotification(__int64 a1)
{
  volatile signed __int64 *v1; // rdi
  char v3; // bp
  int v4; // r14d
  __int64 v5; // rcx

  v1 = (volatile signed __int64 *)(a1 + 136);
  ExAcquirePushLockExclusiveEx(a1 + 136, 0LL);
  v3 = *(_BYTE *)(a1 + 145);
  v4 = *(_DWORD *)(a1 + 148);
  if ( (_InterlockedExchangeAdd64(v1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v1);
  KeAbPostRelease((ULONG_PTR)v1);
  if ( *(_BYTE *)(a1 + 144) != v3 )
  {
    PopDirectedDripsDiagPnpActionQueueAccountingUpdate(v5, v3);
    if ( v3 )
      PopDirectedDripsSuspendDevices(a1);
    else
      PopDirectedDripsResumeDevices(a1, 0LL);
  }
  *(_BYTE *)(a1 + 144) = v3;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)v1, 0LL);
  if ( *(_DWORD *)(a1 + 148) == v4 )
  {
    *(_BYTE *)(a1 + 152) = 1;
    PopQueueWorkItem(a1 + 160, DelayedWorkQueue);
  }
  if ( (_InterlockedExchangeAdd64(v1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v1);
  KeAbPostRelease((ULONG_PTR)v1);
  return PopDeepSleepClearDisengageReason(8u);
}
