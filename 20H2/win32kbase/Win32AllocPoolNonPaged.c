/*
 * XREFs of Win32AllocPoolNonPaged @ 0x1C005EAB0
 * Callers:
 *     RIMRegisterForInputWithCallbacks @ 0x1C0006400 (RIMRegisterForInputWithCallbacks.c)
 *     CreateKernelSemaphore @ 0x1C0009110 (CreateKernelSemaphore.c)
 *     RIMCreateDev @ 0x1C0027880 (RIMCreateDev.c)
 *     GreCreateSemaphoreInternal @ 0x1C005E4B4 (GreCreateSemaphoreInternal.c)
 *     ?OnProcessCreation@CChannel@DirectComposition@@SAJPEAVCProcessData@2@@Z @ 0x1C0060FE0 (-OnProcessCreation@CChannel@DirectComposition@@SAJPEAVCProcessData@2@@Z.c)
 *     ?OnProcessCreation@CConnection@DirectComposition@@SAJPEAVCProcessData@2@@Z @ 0x1C00610BC (-OnProcessCreation@CConnection@DirectComposition@@SAJPEAVCProcessData@2@@Z.c)
 *     RIMAllocateHidDesc @ 0x1C006E23C (RIMAllocateHidDesc.c)
 *     RIMCreateHidDesc @ 0x1C006E4C4 (RIMCreateHidDesc.c)
 *     RIMHidGetCaps @ 0x1C006ECC8 (RIMHidGetCaps.c)
 *     QueuePowerRequest @ 0x1C006FFD0 (QueuePowerRequest.c)
 *     HmgCreate @ 0x1C007227C (HmgCreate.c)
 *     GreCreateFastMutex @ 0x1C007423C (GreCreateFastMutex.c)
 *     RIMGetKbdExId @ 0x1C0075488 (RIMGetKbdExId.c)
 *     ?Initialize@CChannel@DirectComposition@@MEAAJXZ @ 0x1C007D9D0 (-Initialize@CChannel@DirectComposition@@MEAAJXZ.c)
 *     ?SetCommitCompletionEvent@CApplicationChannel@DirectComposition@@QEAAJPEAX_N@Z @ 0x1C007FE18 (-SetCommitCompletionEvent@CApplicationChannel@DirectComposition@@QEAAJPEAX_N@Z.c)
 *     EngAllocMem @ 0x1C00833F0 (EngAllocMem.c)
 *     CreateKernelEvent @ 0x1C008F2F0 (CreateKernelEvent.c)
 *     ?vInit@W32PIDLOCK@@QEAAXXZ @ 0x1C00A87D0 (-vInit@W32PIDLOCK@@QEAAXXZ.c)
 *     ?Initialize@CMaterialPropertiesTable@DirectComposition@@SAJXZ @ 0x1C00B6228 (-Initialize@CMaterialPropertiesTable@DirectComposition@@SAJXZ.c)
 *     ?OnSessionCreation@CSynchronizationManager@DirectComposition@@SAJXZ @ 0x1C00B62E8 (-OnSessionCreation@CSynchronizationManager@DirectComposition@@SAJXZ.c)
 *     ?OnSessionCreation@CConnection@DirectComposition@@SAJH@Z @ 0x1C00B63C0 (-OnSessionCreation@CConnection@DirectComposition@@SAJH@Z.c)
 *     ?Initialize@CConnection@DirectComposition@@AEAAJXZ @ 0x1C00B64B8 (-Initialize@CConnection@DirectComposition@@AEAAJXZ.c)
 *     ?Initialize@CChannelGroup@DirectComposition@@QEAAJXZ @ 0x1C00B6684 (-Initialize@CChannelGroup@DirectComposition@@QEAAJXZ.c)
 *     ?Initialize@LegacyInputDispatcher@@QEAAJD_NIIPEAULegacyDispatcherObject@@@Z @ 0x1C00B7E50 (-Initialize@LegacyInputDispatcher@@QEAAJD_NIIPEAULegacyDispatcherObject@@@Z.c)
 *     UserPostNKAPC @ 0x1C00C64C0 (UserPostNKAPC.c)
 *     UserPostNKAPCBuffer @ 0x1C0119E70 (UserPostNKAPCBuffer.c)
 *     CreateKernelTimer @ 0x1C011C230 (CreateKernelTimer.c)
 *     xxxRemoteConnect @ 0x1C011C440 (xxxRemoteConnect.c)
 *     RIMVirtCreateDev @ 0x1C0150BC8 (RIMVirtCreateDev.c)
 *     RIMGetMaxCountFeatureDetails @ 0x1C015E16C (RIMGetMaxCountFeatureDetails.c)
 *     RIMGetProductString @ 0x1C015E8FC (RIMGetProductString.c)
 *     RIMAllocateHidConfigDesc @ 0x1C0161108 (RIMAllocateHidConfigDesc.c)
 *     RIMSendLatencyMgtDeviceRequest @ 0x1C0162364 (RIMSendLatencyMgtDeviceRequest.c)
 *     RIMSetDeviceIdleTimeout @ 0x1C01626C0 (RIMSetDeviceIdleTimeout.c)
 *     RIMVirtAllocateHidDesc @ 0x1C0162998 (RIMVirtAllocateHidDesc.c)
 *     RIMVirtCreateHidDesc @ 0x1C0162D9C (RIMVirtCreateHidDesc.c)
 *     ?PopulateCustomDispatcherObjectsArray@LegacyInputDispatcher@@UEAAJIPEAPEAX@Z @ 0x1C019F290 (-PopulateCustomDispatcherObjectsArray@LegacyInputDispatcher@@UEAAJIPEAPEAX@Z.c)
 *     InitializePowerRequestList @ 0x1C02918D8 (InitializePowerRequestList.c)
 * Callees:
 *     IsWin32AllocPoolImplSupported @ 0x1C003C684 (IsWin32AllocPoolImplSupported.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Win32AllocPoolNonPaged(__int64 a1, unsigned int a2)
{
  int v4; // eax
  __int64 v5; // r8

  v4 = IsWin32AllocPoolImplSupported();
  v5 = 0LL;
  if ( v4 < 0 )
    return 0LL;
  if ( qword_1C0250C18 )
    return qword_1C0250C18(544LL, a1, a2);
  return v5;
}
