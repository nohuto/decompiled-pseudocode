/*
 * XREFs of Win32AllocPoolNonPaged @ 0x1C00912D0
 * Callers:
 *     EngAllocMem @ 0x1C0009B50 (EngAllocMem.c)
 *     CreateKernelEvent @ 0x1C0015350 (CreateKernelEvent.c)
 *     HmgCreate @ 0x1C001EE8C (HmgCreate.c)
 *     GreCreateFastMutex @ 0x1C002109C (GreCreateFastMutex.c)
 *     CreateKernelSemaphore @ 0x1C0021520 (CreateKernelSemaphore.c)
 *     RIMRegisterForInputWithCallbacks @ 0x1C0037400 (RIMRegisterForInputWithCallbacks.c)
 *     ?vInit@W32PIDLOCK@@QEAAXXZ @ 0x1C003A620 (-vInit@W32PIDLOCK@@QEAAXXZ.c)
 *     ?Initialize@CMaterialPropertiesTable@DirectComposition@@SAJXZ @ 0x1C0048968 (-Initialize@CMaterialPropertiesTable@DirectComposition@@SAJXZ.c)
 *     ?OnSessionCreation@CSynchronizationManager@DirectComposition@@SAJXZ @ 0x1C0048A28 (-OnSessionCreation@CSynchronizationManager@DirectComposition@@SAJXZ.c)
 *     ?OnSessionCreation@CConnection@DirectComposition@@SAJH@Z @ 0x1C0048B00 (-OnSessionCreation@CConnection@DirectComposition@@SAJH@Z.c)
 *     ?Initialize@CConnection@DirectComposition@@AEAAJXZ @ 0x1C0048BF8 (-Initialize@CConnection@DirectComposition@@AEAAJXZ.c)
 *     ?Initialize@CChannelGroup@DirectComposition@@QEAAJXZ @ 0x1C0048DC4 (-Initialize@CChannelGroup@DirectComposition@@QEAAJXZ.c)
 *     ?Initialize@LegacyInputDispatcher@@QEAAJD_NIIPEAULegacyDispatcherObject@@@Z @ 0x1C004A740 (-Initialize@LegacyInputDispatcher@@QEAAJD_NIIPEAULegacyDispatcherObject@@@Z.c)
 *     xxxRemoteConnect @ 0x1C0054D30 (xxxRemoteConnect.c)
 *     RIMGetKbdExId @ 0x1C005678C (RIMGetKbdExId.c)
 *     QueuePowerRequest @ 0x1C005C560 (QueuePowerRequest.c)
 *     GreCreateSemaphoreInternal @ 0x1C00737B0 (GreCreateSemaphoreInternal.c)
 *     ?OnProcessCreation@CChannel@DirectComposition@@SAJPEAVCProcessData@2@@Z @ 0x1C0094570 (-OnProcessCreation@CChannel@DirectComposition@@SAJPEAVCProcessData@2@@Z.c)
 *     ?OnProcessCreation@CConnection@DirectComposition@@SAJPEAVCProcessData@2@@Z @ 0x1C009464C (-OnProcessCreation@CConnection@DirectComposition@@SAJPEAVCProcessData@2@@Z.c)
 *     RIMAllocateHidDesc @ 0x1C009E724 (RIMAllocateHidDesc.c)
 *     RIMCreateHidDesc @ 0x1C009F54C (RIMCreateHidDesc.c)
 *     RIMCreateDev @ 0x1C00A1B30 (RIMCreateDev.c)
 *     RIMHidGetCaps @ 0x1C00A2DB4 (RIMHidGetCaps.c)
 *     ?SetCommitCompletionEvent@CApplicationChannel@DirectComposition@@QEAAJPEAX_N@Z @ 0x1C00B2468 (-SetCommitCompletionEvent@CApplicationChannel@DirectComposition@@QEAAJPEAX_N@Z.c)
 *     ?Initialize@CChannel@DirectComposition@@MEAAJXZ @ 0x1C00B6530 (-Initialize@CChannel@DirectComposition@@MEAAJXZ.c)
 *     UserPostNKAPC @ 0x1C00C6B30 (UserPostNKAPC.c)
 *     UserPostNKAPCBuffer @ 0x1C0122670 (UserPostNKAPCBuffer.c)
 *     CreateKernelTimer @ 0x1C0124C00 (CreateKernelTimer.c)
 *     RIMVirtCreateDev @ 0x1C0159498 (RIMVirtCreateDev.c)
 *     RIMGetMaxCountFeatureDetails @ 0x1C0166A1C (RIMGetMaxCountFeatureDetails.c)
 *     RIMGetProductString @ 0x1C01671AC (RIMGetProductString.c)
 *     RIMAllocateHidConfigDesc @ 0x1C01699B8 (RIMAllocateHidConfigDesc.c)
 *     RIMSendLatencyMgtDeviceRequest @ 0x1C016AC14 (RIMSendLatencyMgtDeviceRequest.c)
 *     RIMSetDeviceIdleTimeout @ 0x1C016AF70 (RIMSetDeviceIdleTimeout.c)
 *     RIMVirtAllocateHidDesc @ 0x1C016B248 (RIMVirtAllocateHidDesc.c)
 *     RIMVirtCreateHidDesc @ 0x1C016B64C (RIMVirtCreateHidDesc.c)
 *     ?PopulateCustomDispatcherObjectsArray@LegacyInputDispatcher@@UEAAJIPEAPEAX@Z @ 0x1C01A7390 (-PopulateCustomDispatcherObjectsArray@LegacyInputDispatcher@@UEAAJIPEAPEAX@Z.c)
 *     InitializePowerRequestList @ 0x1C029AA70 (InitializePowerRequestList.c)
 * Callees:
 *     IsWin32AllocPoolImplSupported @ 0x1C008D834 (IsWin32AllocPoolImplSupported.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Win32AllocPoolNonPaged(__int64 a1, unsigned int a2)
{
  int v4; // eax
  __int64 v5; // r8

  v4 = IsWin32AllocPoolImplSupported();
  v5 = 0LL;
  if ( v4 < 0 )
    return 0LL;
  if ( qword_1C0258BD8 )
    return qword_1C0258BD8(544LL, a1, a2);
  return v5;
}
