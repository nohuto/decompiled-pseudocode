/*
 * XREFs of ExAllocatePoolWithQuotaTag @ 0x1402421D0
 * Callers:
 *     IopVerifierExAllocatePoolWithQuota @ 0x1402054FC (IopVerifierExAllocatePoolWithQuota.c)
 *     CmpAllocateTransientPoolWithQuotaTag @ 0x1402421A8 (CmpAllocateTransientPoolWithQuotaTag.c)
 *     IopAllocateIrpPrivate @ 0x140252FB0 (IopAllocateIrpPrivate.c)
 *     MiAllocatePool @ 0x1402A0FB0 (MiAllocatePool.c)
 *     ExAllocatePoolMm @ 0x1402A1070 (ExAllocatePoolMm.c)
 *     RtlInsertDynamicFunctionTable @ 0x1402F6FD4 (RtlInsertDynamicFunctionTable.c)
 *     IopVerifierExAllocatePoolWithQuota_1 @ 0x140307EE4 (IopVerifierExAllocatePoolWithQuota_1.c)
 *     RtlIsUntrustedObject @ 0x140315C50 (RtlIsUntrustedObject.c)
 *     PopCaptureReasonContext @ 0x14033E184 (PopCaptureReasonContext.c)
 *     PiControlAllocateBufferForUserModeCaller @ 0x14035D6D0 (PiControlAllocateBufferForUserModeCaller.c)
 *     IopVerifierExAllocatePoolWithQuota_2 @ 0x1403C6B0C (IopVerifierExAllocatePoolWithQuota_2.c)
 *     FsRtlAllocatePoolWithQuota @ 0x1404EA6F0 (FsRtlAllocatePoolWithQuota.c)
 *     FsRtlAllocatePoolWithQuotaTag @ 0x1404EA720 (FsRtlAllocatePoolWithQuotaTag.c)
 *     IopVerifierExAllocatePoolWithQuota_3 @ 0x140501324 (IopVerifierExAllocatePoolWithQuota_3.c)
 *     IopVerifierExAllocatePoolWithQuota_4 @ 0x140502C10 (IopVerifierExAllocatePoolWithQuota_4.c)
 *     IopVerifierExAllocatePoolWithQuota_5 @ 0x140502DD0 (IopVerifierExAllocatePoolWithQuota_5.c)
 *     PsSetCpuQuotaInformation @ 0x14057B588 (PsSetCpuQuotaInformation.c)
 *     ExAllocatePoolWithQuota @ 0x1405AD960 (ExAllocatePoolWithQuota.c)
 *     ExGetWakeTimerList @ 0x1405B0498 (ExGetWakeTimerList.c)
 *     ExpQuerySystemInformation @ 0x1405E5DF0 (ExpQuerySystemInformation.c)
 *     FsRtlAllocateExtraCreateParameter @ 0x1405F2C30 (FsRtlAllocateExtraCreateParameter.c)
 *     CmpNotifyChangeKey @ 0x1405F3D20 (CmpNotifyChangeKey.c)
 *     CmpAllocatePostBlock @ 0x1405F515C (CmpAllocatePostBlock.c)
 *     NtTraceControl @ 0x1405F56E0 (NtTraceControl.c)
 *     NtQueryDirectoryObject @ 0x140612FE0 (NtQueryDirectoryObject.c)
 *     NtCreateWorkerFactory @ 0x1406424A0 (NtCreateWorkerFactory.c)
 *     IopAllocateMiniCompletionPacket @ 0x14064406C (IopAllocateMiniCompletionPacket.c)
 *     NtSetInformationJobObject @ 0x140660620 (NtSetInformationJobObject.c)
 *     ExpWnfCreateNameInstance @ 0x140666D98 (ExpWnfCreateNameInstance.c)
 *     ExpWnfWriteStateData @ 0x140667AD0 (ExpWnfWriteStateData.c)
 *     ExpWnfSubscribeNameInstance @ 0x140669648 (ExpWnfSubscribeNameInstance.c)
 *     IopCreateFile @ 0x14066D230 (IopCreateFile.c)
 *     FsRtlAllocateExtraCreateParameterList @ 0x14066E820 (FsRtlAllocateExtraCreateParameterList.c)
 *     CmpNameFromAttributes @ 0x14068D57C (CmpNameFromAttributes.c)
 *     NtSetInformationProcess @ 0x14069A210 (NtSetInformationProcess.c)
 *     PiControlMakeUserModeCallersCopy @ 0x1406A7650 (PiControlMakeUserModeCallersCopy.c)
 *     PspCaptureUserProcessParameters @ 0x1406B6660 (PspCaptureUserProcessParameters.c)
 *     ExLockUserBuffer @ 0x1406BD108 (ExLockUserBuffer.c)
 *     RtlpProcessIFEOKeyFilter @ 0x1406D3A74 (RtlpProcessIFEOKeyFilter.c)
 *     ExpGetSystemFirmwareTableInformation @ 0x1406D8DBC (ExpGetSystemFirmwareTableInformation.c)
 *     PspReadIFEOPerfOptions @ 0x1406DA328 (PspReadIFEOPerfOptions.c)
 *     RtlQueryImageFileKeyOption @ 0x1406DA510 (RtlQueryImageFileKeyOption.c)
 *     RtlAcquirePrivilege @ 0x1406DD35C (RtlAcquirePrivilege.c)
 *     NtRegisterThreadTerminatePort @ 0x1406E8380 (NtRegisterThreadTerminatePort.c)
 *     PspBuildCreateProcessContext @ 0x140707AB4 (PspBuildCreateProcessContext.c)
 *     NtQueueApcThreadEx @ 0x140709C80 (NtQueueApcThreadEx.c)
 *     RtlQueryModuleInformation @ 0x1407739A0 (RtlQueryModuleInformation.c)
 *     PspIsDfssEnabled @ 0x14078FF40 (PspIsDfssEnabled.c)
 *     CmpSaveKeyByFileCopy @ 0x1408790A0 (CmpSaveKeyByFileCopy.c)
 *     VrpHandleIoctlLoadDifferencingHiveForHost @ 0x14087E960 (VrpHandleIoctlLoadDifferencingHiveForHost.c)
 *     DbgkpQueueMessage @ 0x140881108 (DbgkpQueueMessage.c)
 *     DbgkRegisterErrorPort @ 0x140882634 (DbgkRegisterErrorPort.c)
 *     KeEnableProfiling @ 0x1408B77B4 (KeEnableProfiling.c)
 *     PsCreateVsmEnclave @ 0x14090924C (PsCreateVsmEnclave.c)
 *     PsInitializeVsmEnclave @ 0x1409098B4 (PsInitializeVsmEnclave.c)
 *     PspPrepareEnclaveThreadWait @ 0x140909D74 (PspPrepareEnclaveThreadWait.c)
 *     PspVsmEnclaveHashAllocator @ 0x14090A0A4 (PspVsmEnclaveHashAllocator.c)
 *     RtlAddResourceAttributeAce @ 0x14090DEE0 (RtlAddResourceAttributeAce.c)
 *     RtlAllocateAndInitializeSidEx @ 0x14090EC2C (RtlAllocateAndInitializeSidEx.c)
 *     RtlGetAppContainerParent @ 0x14090F130 (RtlGetAppContainerParent.c)
 *     RtlpGetPolicyValueForSystemCapability @ 0x14090FCC4 (RtlpGetPolicyValueForSystemCapability.c)
 *     NtQuerySecurityPolicy @ 0x1409174C0 (NtQuerySecurityPolicy.c)
 *     ExpGetDeviceDataInformation @ 0x140945948 (ExpGetDeviceDataInformation.c)
 *     ExpQueryElamCertInfo @ 0x1409460A8 (ExpQueryElamCertInfo.c)
 *     ExpQueryPortableWorkspaceEfiLauncherInformation @ 0x1409467E0 (ExpQueryPortableWorkspaceEfiLauncherInformation.c)
 *     ExpStringCapture @ 0x140946DFC (ExpStringCapture.c)
 *     ExAllocatePool2 @ 0x1409B1280 (ExAllocatePool2.c)
 *     ExAllocatePool3 @ 0x1409B1340 (ExAllocatePool3.c)
 *     VerifierExAllocatePoolWithQuotaTag @ 0x1409D1E00 (VerifierExAllocatePoolWithQuotaTag.c)
 *     VerifierPortExAllocatePoolWithQuotaTag @ 0x1409E1BC0 (VerifierPortExAllocatePoolWithQuotaTag.c)
 * Callees:
 *     ExGetHeapFromVA @ 0x1402AC2AC (ExGetHeapFromVA.c)
 *     RtlRaiseStatus @ 0x1402EE870 (RtlRaiseStatus.c)
 *     PspExpandQuota @ 0x14030F3A8 (PspExpandQuota.c)
 *     ExpHpIsSpecialPoolHeap @ 0x1403C994C (ExpHpIsSpecialPoolHeap.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     ObpPushStackInfo @ 0x14055F238 (ObpPushStackInfo.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
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
  NTSTATUS v33; // esi
  signed __int32 v34[8]; // [rsp+0h] [rbp-78h] BYREF
  unsigned __int64 v35; // [rsp+30h] [rbp-48h] BYREF
  __int64 v36; // [rsp+38h] [rbp-40h]
  char v37; // [rsp+80h] [rbp+8h]
  char *v39; // [rsp+98h] [rbp+20h]

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
    if ( (unsigned int)ExpHpIsSpecialPoolHeap(HeapFromVA) )
      return v8;
  }
  if ( (v6 & 8) == 0 )
    return v8;
  v9 = *((_WORD *)v8 - 7);
  v10 = v8 - 16;
  v11 = ExpPoolQuotaCookie;
  v12 = 0LL;
  v13 = (unsigned __int8)v9;
  v39 = 0LL;
  *((_QWORD *)v8 - 1) = (unsigned __int64)(v8 - 16) ^ ExpPoolQuotaCookie;
  if ( (v9 & 0x400) != 0 )
  {
    v12 = &v10[-16 * (unsigned __int8)*(_WORD *)v10];
    v39 = v12;
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
  v37 = v17;
  v36 = 8 * v15;
  _m_prefetchw(v16);
  v18 = *v16;
  _InterlockedOr(v34, 0);
LABEL_12:
  v19 = v16[8];
LABEL_13:
  v35 = v19;
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
    if ( !(unsigned __int8)PspExpandQuota(v15, (_DWORD)v16, v18, v14, (__int64)&v35) )
      break;
    v19 = v35;
    v17 = v37;
  }
  v33 = *(_DWORD *)&PspResourceFlags[v36 + 4];
  if ( v33 >= 0 )
  {
LABEL_20:
    v12 = v39;
    goto LABEL_21;
  }
  ExFreePoolWithTag(v8, Tag);
  if ( !v4 )
    RtlRaiseStatus(v33);
  return 0LL;
}
