/*
 * XREFs of DbgLogRequest @ 0x1C00104E8
 * Callers:
 *     RaidUnitSubmitRequest @ 0x1C000A75C (RaidUnitSubmitRequest.c)
 *     RaUnitScsiIrp @ 0x1C000A8C0 (RaUnitScsiIrp.c)
 *     StorPortNotification @ 0x1C000D820 (StorPortNotification.c)
 *     RaidUnitPendingDpcRoutine @ 0x1C000F8B0 (RaidUnitPendingDpcRoutine.c)
 *     StorPortPauseDevice @ 0x1C00100D0 (StorPortPauseDevice.c)
 *     StorPortResumeDevice @ 0x1C0010240 (StorPortResumeDevice.c)
 *     RaidPauseUnitQueue @ 0x1C00103AC (RaidPauseUnitQueue.c)
 *     RaidResumeUnitQueue @ 0x1C0010440 (RaidResumeUnitQueue.c)
 *     RaidResumeAdapterQueue @ 0x1C00121B0 (RaidResumeAdapterQueue.c)
 *     RaidPauseAdapterQueue @ 0x1C00123E8 (RaidPauseAdapterQueue.c)
 *     RaidStallDeviceQueue @ 0x1C001377C (RaidStallDeviceQueue.c)
 *     RaidAdapterResetBus @ 0x1C002D2B8 (RaidAdapterResetBus.c)
 *     RaidResumeAndRestartAdapterQueues @ 0x1C0031CC8 (RaidResumeAndRestartAdapterQueues.c)
 *     StorPortBusy @ 0x1C0037CC0 (StorPortBusy.c)
 *     StorPortCompleteRequest @ 0x1C0037DE0 (StorPortCompleteRequest.c)
 *     StorPortDeviceBusy @ 0x1C0038060 (StorPortDeviceBusy.c)
 *     StorPortDeviceReady @ 0x1C00381E0 (StorPortDeviceReady.c)
 *     StorPortPause @ 0x1C00388D0 (StorPortPause.c)
 *     StorPortReady @ 0x1C0038BA0 (StorPortReady.c)
 *     StorPortResume @ 0x1C0038F50 (StorPortResume.c)
 *     StorpMarkDeviceFailed @ 0x1C003B738 (StorpMarkDeviceFailed.c)
 *     RaidCompleteMiniportRequestCallback @ 0x1C0043C40 (RaidCompleteMiniportRequestCallback.c)
 *     RaidLogRequestComplete @ 0x1C0048DDC (RaidLogRequestComplete.c)
 *     RaidResumeAndRestartUnitQueue @ 0x1C0049054 (RaidResumeAndRestartUnitQueue.c)
 *     RaidUnitSubmitResetRequest @ 0x1C004AEB4 (RaidUnitSubmitResetRequest.c)
 * Callees:
 *     <none>
 */

void __fastcall DbgLogRequest(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7)
{
  __int64 v7; // rax
  __int64 v8; // rcx

  if ( a1 && *(_DWORD *)(a1 + 5060) && *(_QWORD *)(a1 + 5064) )
  {
    v7 = a7;
    v8 = *(_QWORD *)(a1 + 5064)
       + 48LL * ((unsigned int)_InterlockedIncrement((volatile signed __int32 *)(a1 + 5056)) % *(_DWORD *)(a1 + 5060));
    *(_DWORD *)v8 = a2;
    if ( !a7 )
      v7 = MEMORY[0xFFFFF78000000014];
    *(_QWORD *)(v8 + 40) = v7;
    *(_QWORD *)(v8 + 24) = a5;
    *(_QWORD *)(v8 + 32) = a6;
    *(_QWORD *)(v8 + 8) = a3;
    *(_QWORD *)(v8 + 16) = a4;
  }
}
