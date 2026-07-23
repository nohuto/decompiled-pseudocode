/*
 * XREFs of ExAllocatePoolWithQuotaTag @ 0x140297DA0
 * Callers:
 *     MiAllocatePool @ 0x140247F80 (MiAllocatePool.c)
 *     ExAllocatePoolMm @ 0x140248040 (ExAllocatePoolMm.c)
 *     PopCaptureReasonContext @ 0x1402777D4 (PopCaptureReasonContext.c)
 *     IopAllocateIrpPrivate @ 0x14028F830 (IopAllocateIrpPrivate.c)
 *     IopVerifierExAllocatePoolWithQuota_0 @ 0x140297CB0 (IopVerifierExAllocatePoolWithQuota_0.c)
 *     CmpAllocateTransientPoolWithQuotaTag @ 0x140297D80 (CmpAllocateTransientPoolWithQuotaTag.c)
 *     PiControlAllocateBufferForUserModeCaller @ 0x1402DCE68 (PiControlAllocateBufferForUserModeCaller.c)
 *     RtlInsertDynamicFunctionTable @ 0x140334114 (RtlInsertDynamicFunctionTable.c)
 *     IopVerifierExAllocatePoolWithQuota_1 @ 0x140345CE4 (IopVerifierExAllocatePoolWithQuota_1.c)
 *     RtlIsUntrustedObject @ 0x140350430 (RtlIsUntrustedObject.c)
 *     IopVerifierExAllocatePoolWithQuota_2 @ 0x1403C791C (IopVerifierExAllocatePoolWithQuota_2.c)
 *     FsRtlAllocatePoolWithQuota @ 0x1404EAD20 (FsRtlAllocatePoolWithQuota.c)
 *     FsRtlAllocatePoolWithQuotaTag @ 0x1404EAD50 (FsRtlAllocatePoolWithQuotaTag.c)
 *     IopVerifierExAllocatePoolWithQuota_3 @ 0x140501974 (IopVerifierExAllocatePoolWithQuota_3.c)
 *     IopVerifierExAllocatePoolWithQuota_4 @ 0x140503260 (IopVerifierExAllocatePoolWithQuota_4.c)
 *     IopVerifierExAllocatePoolWithQuota_5 @ 0x140503420 (IopVerifierExAllocatePoolWithQuota_5.c)
 *     PsSetCpuQuotaInformation @ 0x14057BBC8 (PsSetCpuQuotaInformation.c)
 *     ExAllocatePoolWithQuota @ 0x1405AE080 (ExAllocatePoolWithQuota.c)
 *     ExGetWakeTimerList @ 0x1405B0BB8 (ExGetWakeTimerList.c)
 *     PiControlMakeUserModeCallersCopy @ 0x1405D9020 (PiControlMakeUserModeCallersCopy.c)
 *     CmpNotifyChangeKey @ 0x1405E2980 (CmpNotifyChangeKey.c)
 *     NtCreateWorkerFactory @ 0x14060D350 (NtCreateWorkerFactory.c)
 *     IopAllocateMiniCompletionPacket @ 0x14060EE3C (IopAllocateMiniCompletionPacket.c)
 *     IopCreateFile @ 0x140615C80 (IopCreateFile.c)
 *     FsRtlAllocateExtraCreateParameterList @ 0x140617270 (FsRtlAllocateExtraCreateParameterList.c)
 *     NtSetInformationJobObject @ 0x14061AF00 (NtSetInformationJobObject.c)
 *     ExpWnfCreateNameInstance @ 0x140621678 (ExpWnfCreateNameInstance.c)
 *     ExpWnfWriteStateData @ 0x1406223B0 (ExpWnfWriteStateData.c)
 *     ExpWnfSubscribeNameInstance @ 0x140623F28 (ExpWnfSubscribeNameInstance.c)
 *     CmpNameFromAttributes @ 0x140651BEC (CmpNameFromAttributes.c)
 *     FsRtlAllocateExtraCreateParameter @ 0x14066AF30 (FsRtlAllocateExtraCreateParameter.c)
 *     NtQueryDirectoryObject @ 0x14068B160 (NtQueryDirectoryObject.c)
 *     CmpAllocatePostBlock @ 0x14068D808 (CmpAllocatePostBlock.c)
 *     NtTraceControl @ 0x14068D910 (NtTraceControl.c)
 *     ExpQuerySystemInformation @ 0x14068F290 (ExpQuerySystemInformation.c)
 *     NtSetInformationProcess @ 0x1406A02E0 (NtSetInformationProcess.c)
 *     PspBuildCreateProcessContext @ 0x1406B1BF4 (PspBuildCreateProcessContext.c)
 *     NtQueueApcThreadEx @ 0x1406B3E30 (NtQueueApcThreadEx.c)
 *     PspCaptureUserProcessParameters @ 0x1406D49F0 (PspCaptureUserProcessParameters.c)
 *     ExLockUserBuffer @ 0x1406DE498 (ExLockUserBuffer.c)
 *     RtlpProcessIFEOKeyFilter @ 0x1406F6868 (RtlpProcessIFEOKeyFilter.c)
 *     ExpGetSystemFirmwareTableInformation @ 0x1406FC96C (ExpGetSystemFirmwareTableInformation.c)
 *     PspReadIFEOPerfOptions @ 0x1406FD3A8 (PspReadIFEOPerfOptions.c)
 *     RtlQueryImageFileKeyOption @ 0x1406FD590 (RtlQueryImageFileKeyOption.c)
 *     RtlAcquirePrivilege @ 0x1406FFFBC (RtlAcquirePrivilege.c)
 *     NtRegisterThreadTerminatePort @ 0x14070C180 (NtRegisterThreadTerminatePort.c)
 *     RtlQueryModuleInformation @ 0x140775DB0 (RtlQueryModuleInformation.c)
 *     PspIsDfssEnabled @ 0x140792340 (PspIsDfssEnabled.c)
 *     CmpSaveKeyByFileCopy @ 0x14087A390 (CmpSaveKeyByFileCopy.c)
 *     VrpHandleIoctlLoadDifferencingHiveForHost @ 0x14087FC50 (VrpHandleIoctlLoadDifferencingHiveForHost.c)
 *     DbgkpQueueMessage @ 0x140882428 (DbgkpQueueMessage.c)
 *     DbgkRegisterErrorPort @ 0x140883954 (DbgkRegisterErrorPort.c)
 *     KeEnableProfiling @ 0x1408B8AD4 (KeEnableProfiling.c)
 *     PsCreateVsmEnclave @ 0x14090A4FC (PsCreateVsmEnclave.c)
 *     PsInitializeVsmEnclave @ 0x14090AB64 (PsInitializeVsmEnclave.c)
 *     PspPrepareEnclaveThreadWait @ 0x14090B024 (PspPrepareEnclaveThreadWait.c)
 *     PspVsmEnclaveHashAllocator @ 0x14090B354 (PspVsmEnclaveHashAllocator.c)
 *     RtlAddResourceAttributeAce @ 0x14090F280 (RtlAddResourceAttributeAce.c)
 *     RtlAllocateAndInitializeSidEx @ 0x14090FFCC (RtlAllocateAndInitializeSidEx.c)
 *     RtlGetAppContainerParent @ 0x1409104D0 (RtlGetAppContainerParent.c)
 *     RtlpGetPolicyValueForSystemCapability @ 0x140911064 (RtlpGetPolicyValueForSystemCapability.c)
 *     NtQuerySecurityPolicy @ 0x140918730 (NtQuerySecurityPolicy.c)
 *     ExpGetDeviceDataInformation @ 0x140946BE8 (ExpGetDeviceDataInformation.c)
 *     ExpQueryElamCertInfo @ 0x140947348 (ExpQueryElamCertInfo.c)
 *     ExpQueryPortableWorkspaceEfiLauncherInformation @ 0x140947A80 (ExpQueryPortableWorkspaceEfiLauncherInformation.c)
 *     ExpStringCapture @ 0x1409480F0 (ExpStringCapture.c)
 *     ExAllocatePool2 @ 0x1409B1280 (ExAllocatePool2.c)
 *     ExAllocatePool3 @ 0x1409B1340 (ExAllocatePool3.c)
 *     VerifierExAllocatePoolWithQuotaTag @ 0x1409D1E60 (VerifierExAllocatePoolWithQuotaTag.c)
 *     VerifierPortExAllocatePoolWithQuotaTag @ 0x1409E1C20 (VerifierPortExAllocatePoolWithQuotaTag.c)
 * Callees:
 *     ExGetHeapFromVA @ 0x14025327C (ExGetHeapFromVA.c)
 *     RtlRaiseStatus @ 0x1403281A0 (RtlRaiseStatus.c)
 *     PspExpandQuota @ 0x14034CA78 (PspExpandQuota.c)
 *     ExpHpIsSpecialPoolHeap @ 0x1403CA72C (ExpHpIsSpecialPoolHeap.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     ObpPushStackInfo @ 0x14055F888 (ObpPushStackInfo.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

PVOID __stdcall ExAllocatePoolWithQuotaTag(POOL_TYPE PoolType, SIZE_T NumberOfBytes, ULONG Tag)
{
  unsigned __int32 v3; // r9d
  __int32 v4; // r13d
  PEPROCESS Process; // rdi
  POOL_TYPE v6; // ebp
  ULONG_PTR PoolWithTag; // rax
  char *v8; // r15
  __int16 v9; // cx
  char *v10; // rbx
  __int64 v11; // rdx
  char *v12; // r8
  __int64 v13; // rsi
  unsigned __int64 v14; // rsi
  __int64 v15; // rbp
  unsigned __int64 *v16; // r14
  char v17; // r8
  unsigned __int64 v18; // r12
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rdx
  bool v21; // zf
  signed __int64 v22; // rax
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // rax
  __int64 v26; // rcx
  signed __int64 BugCheckParameter4; // rbx
  unsigned __int64 v29; // rcx
  unsigned __int64 v30; // rcx
  unsigned __int64 v31; // rcx
  __int64 HeapFromVA; // rax
  __int64 v33; // rdx
  NTSTATUS v34; // esi
  signed __int32 v35[8]; // [rsp+0h] [rbp-78h] BYREF
  unsigned __int64 v36; // [rsp+30h] [rbp-48h] BYREF
  __int64 v37; // [rsp+38h] [rbp-40h]
  char v38; // [rsp+80h] [rbp+8h]
  char *v40; // [rsp+98h] [rbp+20h]

  v3 = PoolType & 0xFFFFFFF7;
  v4 = PoolType & 8;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( (PoolType & 8) == 0 )
    v3 = PoolType;
  v6 = v3 + 8;
  if ( Process == PsInitialSystemProcess )
    v6 = v3;
  PoolWithTag = (ULONG_PTR)ExAllocatePoolWithTag(v6, NumberOfBytes, Tag);
  v8 = (char *)PoolWithTag;
  if ( (PoolWithTag & 0xFFF) == 0 )
  {
    if ( !PoolWithTag && !v4 )
      RtlRaiseStatus(-1073741670);
    return v8;
  }
  if ( ExpSpecialAllocations )
  {
    HeapFromVA = ExGetHeapFromVA(PoolWithTag);
    if ( (unsigned int)ExpHpIsSpecialPoolHeap(HeapFromVA, v33) )
      return v8;
  }
  if ( (v6 & 8) == 0 )
    return v8;
  v9 = *((_WORD *)v8 - 7);
  v10 = v8 - 16;
  v11 = ExpPoolQuotaCookie;
  v12 = 0LL;
  v13 = (unsigned __int8)v9;
  v40 = 0LL;
  *((_QWORD *)v8 - 1) = (unsigned __int64)(v8 - 16) ^ ExpPoolQuotaCookie;
  if ( (v9 & 0x400) != 0 )
  {
    v12 = &v10[-16 * (unsigned __int8)*(_WORD *)v10];
    v40 = v12;
    v13 = (unsigned __int8)*((_WORD *)v12 + 1);
    *((_QWORD *)v12 + 1) = (unsigned __int64)v12 ^ v11;
  }
  v14 = 16 * v13;
  if ( Process == PsInitialSystemProcess )
  {
LABEL_21:
    v26 = ExpPoolQuotaCookie;
    *((_QWORD *)v10 + 1) = (unsigned __int64)Process ^ (unsigned __int64)v10 ^ ExpPoolQuotaCookie;
    if ( v12 )
      *((_QWORD *)v12 + 1) = (unsigned __int64)Process ^ (unsigned __int64)v12 ^ v26;
    if ( ObpTraceFlags )
      ObpPushStackInfo((_DWORD)Process - 48);
    BugCheckParameter4 = _InterlockedIncrement64((volatile signed __int64 *)&Process[-1].EndPadding[2]);
    if ( BugCheckParameter4 <= 1 )
      KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)Process, 0x10uLL, BugCheckParameter4);
    return v8;
  }
  v15 = v6 & 1;
  v16 = (unsigned __int64 *)(Process[1].AffinityPadding[7] + ((unsigned __int64)(unsigned int)v15 << 7));
  v17 = PspResourceFlags[8 * v15];
  v38 = v17;
  v37 = 8 * v15;
  _m_prefetchw(v16);
  v18 = *v16;
  _InterlockedOr(v35, 0);
LABEL_12:
  v19 = v16[8];
LABEL_13:
  v36 = v19;
  while ( 1 )
  {
    v20 = v18 + v14;
    if ( v18 + v14 < v18 )
      break;
    if ( v20 <= v19 )
    {
      v22 = _InterlockedCompareExchange64((volatile signed __int64 *)v16, v20, v18);
      v21 = v18 == v22;
      v18 = v22;
      if ( !v21 )
        goto LABEL_12;
      _m_prefetchw(v16 + 1);
      v23 = v16[1];
      if ( v20 > v23 )
      {
        do
        {
          v30 = v23;
          v23 = _InterlockedCompareExchange64((volatile signed __int64 *)v16 + 1, v20, v23);
        }
        while ( v23 != v30 && v20 > v23 );
      }
      if ( (v17 & 4) != 0 )
      {
        v24 = v14 + _InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].ThreadListHead.Blink + v15, v14);
        _m_prefetchw(&Process[1].DeepFreezeStartTime + v15);
        v25 = *(&Process[1].DeepFreezeStartTime + v15);
        if ( v24 > v25 )
        {
          do
          {
            v29 = v25;
            v25 = _InterlockedCompareExchange64(
                    (volatile signed __int64 *)&Process[1].DeepFreezeStartTime + v15,
                    v24,
                    v25);
          }
          while ( v25 != v29 && v24 > v25 );
        }
      }
      goto LABEL_20;
    }
    if ( (v17 & 1) == 0 || !v16[10] )
      break;
    v31 = _InterlockedExchange64((volatile __int64 *)v16 + 9, 0LL);
    if ( v31 )
    {
      v19 = v31 + _InterlockedExchangeAdd64((volatile signed __int64 *)v16 + 8, v31);
      goto LABEL_13;
    }
    if ( !(unsigned __int8)PspExpandQuota(v15, (_DWORD)v16, v18, v14, (__int64)&v36) )
      break;
    v19 = v36;
    v17 = v38;
  }
  v34 = *(_DWORD *)&PspResourceFlags[v37 + 4];
  if ( v34 >= 0 )
  {
LABEL_20:
    v12 = v40;
    goto LABEL_21;
  }
  ExFreePoolWithTag(v8, Tag);
  if ( !v4 )
    RtlRaiseStatus(v34);
  return 0LL;
}
