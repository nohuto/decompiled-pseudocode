/*
 * XREFs of DbgLogRequest @ 0x1C000E728
 * Callers:
 *     RaidUnitSubmitRequest @ 0x1C000A16C (RaidUnitSubmitRequest.c)
 *     RaUnitScsiIrp @ 0x1C000A2D0 (RaUnitScsiIrp.c)
 *     StorPortNotification @ 0x1C000D230 (StorPortNotification.c)
 *     RaidUnitPendingDpcRoutine @ 0x1C000DAF0 (RaidUnitPendingDpcRoutine.c)
 *     StorPortPauseDevice @ 0x1C000E310 (StorPortPauseDevice.c)
 *     StorPortResumeDevice @ 0x1C000E480 (StorPortResumeDevice.c)
 *     RaidPauseUnitQueue @ 0x1C000E5EC (RaidPauseUnitQueue.c)
 *     RaidResumeUnitQueue @ 0x1C000E680 (RaidResumeUnitQueue.c)
 *     RaidResumeAdapterQueue @ 0x1C001033C (RaidResumeAdapterQueue.c)
 *     RaidPauseAdapterQueue @ 0x1C0010574 (RaidPauseAdapterQueue.c)
 *     RaidStallDeviceQueue @ 0x1C001190C (RaidStallDeviceQueue.c)
 *     RaidAdapterResetBus @ 0x1C002CD08 (RaidAdapterResetBus.c)
 *     RaidResumeAndRestartAdapterQueues @ 0x1C0031778 (RaidResumeAndRestartAdapterQueues.c)
 *     StorPortBusy @ 0x1C0037740 (StorPortBusy.c)
 *     StorPortCompleteRequest @ 0x1C0037860 (StorPortCompleteRequest.c)
 *     StorPortDeviceBusy @ 0x1C0037AE0 (StorPortDeviceBusy.c)
 *     StorPortDeviceReady @ 0x1C0037C60 (StorPortDeviceReady.c)
 *     StorPortPause @ 0x1C0038350 (StorPortPause.c)
 *     StorPortReady @ 0x1C0038620 (StorPortReady.c)
 *     StorPortResume @ 0x1C00389D0 (StorPortResume.c)
 *     StorpMarkDeviceFailed @ 0x1C003B168 (StorpMarkDeviceFailed.c)
 *     RaidCompleteMiniportRequestCallback @ 0x1C0043558 (RaidCompleteMiniportRequestCallback.c)
 *     RaidLogRequestComplete @ 0x1C00486CC (RaidLogRequestComplete.c)
 *     RaidResumeAndRestartUnitQueue @ 0x1C0048944 (RaidResumeAndRestartUnitQueue.c)
 *     RaidUnitSubmitResetRequest @ 0x1C004A7A4 (RaidUnitSubmitResetRequest.c)
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
