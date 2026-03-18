/*
 * XREFs of Win32AllocPoolNonPaged @ 0x1C00A5C70
 * Callers:
 *     RIMRegisterForInputWithCallbacks @ 0x1C0006400 (RIMRegisterForInputWithCallbacks.c)
 *     HmgCreate @ 0x1C00087BC (HmgCreate.c)
 *     GreCreateFastMutex @ 0x1C000A9CC (GreCreateFastMutex.c)
 *     CreateKernelSemaphore @ 0x1C000BAC0 (CreateKernelSemaphore.c)
 *     ?Initialize@CMaterialPropertiesTable@DirectComposition@@SAJXZ @ 0x1C000BC6C (-Initialize@CMaterialPropertiesTable@DirectComposition@@SAJXZ.c)
 *     RIMGetKbdExId @ 0x1C001A61C (RIMGetKbdExId.c)
 *     ?SetCommitCompletionEvent@CApplicationChannel@DirectComposition@@QEAAJPEAX_N@Z @ 0x1C001DB28 (-SetCommitCompletionEvent@CApplicationChannel@DirectComposition@@QEAAJPEAX_N@Z.c)
 *     EngAllocMem @ 0x1C001F720 (EngAllocMem.c)
 *     CreateKernelEvent @ 0x1C002C530 (CreateKernelEvent.c)
 *     ?OnSessionCreation@CSynchronizationManager@DirectComposition@@SAJXZ @ 0x1C0056A78 (-OnSessionCreation@CSynchronizationManager@DirectComposition@@SAJXZ.c)
 *     ?OnSessionCreation@CConnection@DirectComposition@@SAJH@Z @ 0x1C0056B50 (-OnSessionCreation@CConnection@DirectComposition@@SAJH@Z.c)
 *     ?Initialize@CConnection@DirectComposition@@AEAAJXZ @ 0x1C0056C48 (-Initialize@CConnection@DirectComposition@@AEAAJXZ.c)
 *     ?Initialize@CChannelGroup@DirectComposition@@QEAAJXZ @ 0x1C0056E14 (-Initialize@CChannelGroup@DirectComposition@@QEAAJXZ.c)
 *     ?Initialize@LegacyInputDispatcher@@QEAAJD_NIIPEAULegacyDispatcherObject@@@Z @ 0x1C00585B0 (-Initialize@LegacyInputDispatcher@@QEAAJD_NIIPEAULegacyDispatcherObject@@@Z.c)
 *     QueuePowerRequest @ 0x1C0064F40 (QueuePowerRequest.c)
 *     ?Initialize@CChannel@DirectComposition@@MEAAJXZ @ 0x1C00A3B50 (-Initialize@CChannel@DirectComposition@@MEAAJXZ.c)
 *     ?OnProcessCreation@CConnection@DirectComposition@@SAJPEAVCProcessData@2@@Z @ 0x1C00A4AA0 (-OnProcessCreation@CConnection@DirectComposition@@SAJPEAVCProcessData@2@@Z.c)
 *     ?OnProcessCreation@CChannel@DirectComposition@@SAJPEAVCProcessData@2@@Z @ 0x1C00A4B28 (-OnProcessCreation@CChannel@DirectComposition@@SAJPEAVCProcessData@2@@Z.c)
 *     GreCreateSemaphoreInternal @ 0x1C00A56B4 (GreCreateSemaphoreInternal.c)
 *     ?vInit@W32PIDLOCK@@QEAAXXZ @ 0x1C00A68C4 (-vInit@W32PIDLOCK@@QEAAXXZ.c)
 *     RIMCreateHidDesc @ 0x1C00ABE60 (RIMCreateHidDesc.c)
 *     RIMCreateDev @ 0x1C00AE678 (RIMCreateDev.c)
 *     RIMHidGetCaps @ 0x1C00AED04 (RIMHidGetCaps.c)
 *     RIMAllocateHidDesc @ 0x1C00AF298 (RIMAllocateHidDesc.c)
 *     UserPostNKAPC @ 0x1C00C7250 (UserPostNKAPC.c)
 *     UserPostNKAPCBuffer @ 0x1C011C1B0 (UserPostNKAPCBuffer.c)
 *     CreateKernelTimer @ 0x1C011E570 (CreateKernelTimer.c)
 *     xxxRemoteConnect @ 0x1C011E780 (xxxRemoteConnect.c)
 *     RIMVirtCreateDev @ 0x1C0153148 (RIMVirtCreateDev.c)
 *     RIMGetMaxCountFeatureDetails @ 0x1C01606CC (RIMGetMaxCountFeatureDetails.c)
 *     RIMGetProductString @ 0x1C0160E5C (RIMGetProductString.c)
 *     RIMAllocateHidConfigDesc @ 0x1C0163668 (RIMAllocateHidConfigDesc.c)
 *     RIMSendLatencyMgtDeviceRequest @ 0x1C01648C4 (RIMSendLatencyMgtDeviceRequest.c)
 *     RIMSetDeviceIdleTimeout @ 0x1C0164C20 (RIMSetDeviceIdleTimeout.c)
 *     RIMVirtAllocateHidDesc @ 0x1C0164EF8 (RIMVirtAllocateHidDesc.c)
 *     RIMVirtCreateHidDesc @ 0x1C01652FC (RIMVirtCreateHidDesc.c)
 *     ?PopulateCustomDispatcherObjectsArray@LegacyInputDispatcher@@UEAAJIPEAPEAX@Z @ 0x1C01A1630 (-PopulateCustomDispatcherObjectsArray@LegacyInputDispatcher@@UEAAJIPEAPEAX@Z.c)
 *     InitializePowerRequestList @ 0x1C02938D8 (InitializePowerRequestList.c)
 * Callees:
 *     IsWin32AllocPoolImplSupported @ 0x1C0080E64 (IsWin32AllocPoolImplSupported.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Win32AllocPoolNonPaged(__int64 a1, unsigned int a2)
{
  int v4; // eax
  __int64 v5; // r8

  v4 = IsWin32AllocPoolImplSupported();
  v5 = 0LL;
  if ( v4 < 0 )
    return 0LL;
  if ( qword_1C0252C18 )
    return qword_1C0252C18(544LL, a1, a2);
  return v5;
}
