/*
 * XREFs of ExAllocatePoolWithQuotaTag @ 0x14035DD70
 * Callers:
 *     RtlInsertDynamicFunctionTable @ 0x140225708 (RtlInsertDynamicFunctionTable.c)
 *     IopVerifierExAllocatePoolWithQuota @ 0x140235D1C (IopVerifierExAllocatePoolWithQuota.c)
 *     IopVerifierExAllocatePoolWithQuota_0 @ 0x140236060 (IopVerifierExAllocatePoolWithQuota_0.c)
 *     PiControlAllocateBufferForUserModeCaller @ 0x140240C80 (PiControlAllocateBufferForUserModeCaller.c)
 *     CmpAllocateTransientPoolWithQuotaTag @ 0x14026CEF8 (CmpAllocateTransientPoolWithQuotaTag.c)
 *     PopCaptureReasonContext @ 0x140271AF0 (PopCaptureReasonContext.c)
 *     MiAllocatePool @ 0x14027C2E0 (MiAllocatePool.c)
 *     RtlIsUntrustedObject @ 0x1402A42E0 (RtlIsUntrustedObject.c)
 *     ExAllocatePoolMm @ 0x140346100 (ExAllocatePoolMm.c)
 *     IopAllocateIrpPrivate @ 0x14035C7C0 (IopAllocateIrpPrivate.c)
 *     IopVerifierExAllocatePoolWithQuota_2 @ 0x1403CB09C (IopVerifierExAllocatePoolWithQuota_2.c)
 *     CmpAllocatePoolWithQuotaTag @ 0x1404ED050 (CmpAllocatePoolWithQuotaTag.c)
 *     FsRtlAllocatePoolWithQuota @ 0x1404F00D0 (FsRtlAllocatePoolWithQuota.c)
 *     FsRtlAllocatePoolWithQuotaTag @ 0x1404F0100 (FsRtlAllocatePoolWithQuotaTag.c)
 *     IopVerifierExAllocatePoolWithQuota_3 @ 0x140506D4C (IopVerifierExAllocatePoolWithQuota_3.c)
 *     IopVerifierExAllocatePoolWithQuota_4 @ 0x1405089DC (IopVerifierExAllocatePoolWithQuota_4.c)
 *     IopVerifierExAllocatePoolWithQuota_5 @ 0x140508B9C (IopVerifierExAllocatePoolWithQuota_5.c)
 *     PsSetCpuQuotaInformation @ 0x140581248 (PsSetCpuQuotaInformation.c)
 *     ExAllocatePoolWithQuota @ 0x1405B3810 (ExAllocatePoolWithQuota.c)
 *     ExGetWakeTimerList @ 0x1405B6378 (ExGetWakeTimerList.c)
 *     NtQueueApcThreadEx2 @ 0x1405CF9B0 (NtQueueApcThreadEx2.c)
 *     ExLockUserBuffer @ 0x1405E45FC (ExLockUserBuffer.c)
 *     RtlpProcessIFEOKeyFilter @ 0x1406043E4 (RtlpProcessIFEOKeyFilter.c)
 *     ExpGetSystemFirmwareTableInformation @ 0x14060BD5C (ExpGetSystemFirmwareTableInformation.c)
 *     PspReadIFEOPerfOptions @ 0x14060D5B0 (PspReadIFEOPerfOptions.c)
 *     RtlQueryImageFileKeyOption @ 0x14060D7A0 (RtlQueryImageFileKeyOption.c)
 *     RtlAcquirePrivilege @ 0x14061013C (RtlAcquirePrivilege.c)
 *     NtRegisterThreadTerminatePort @ 0x14061D570 (NtRegisterThreadTerminatePort.c)
 *     PiControlMakeUserModeCallersCopy @ 0x14062A4E0 (PiControlMakeUserModeCallersCopy.c)
 *     FsRtlAllocateExtraCreateParameter @ 0x1406394B0 (FsRtlAllocateExtraCreateParameter.c)
 *     ExpQuerySystemInformation @ 0x140645E90 (ExpQuerySystemInformation.c)
 *     NtQueryDirectoryObject @ 0x1406561E0 (NtQueryDirectoryObject.c)
 *     CmpAllocatePostBlock @ 0x140658780 (CmpAllocatePostBlock.c)
 *     CmpNotifyChangeKey @ 0x1406588C0 (CmpNotifyChangeKey.c)
 *     CmpNameFromAttributes @ 0x1406657AC (CmpNameFromAttributes.c)
 *     NtSetInformationJobObject @ 0x14067DE60 (NtSetInformationJobObject.c)
 *     PspCaptureUserProcessParameters @ 0x14069635C (PspCaptureUserProcessParameters.c)
 *     PspBuildCreateProcessContext @ 0x1406986F4 (PspBuildCreateProcessContext.c)
 *     IopCreateFile @ 0x14069AF70 (IopCreateFile.c)
 *     FsRtlAllocateExtraCreateParameterList @ 0x14069C9A0 (FsRtlAllocateExtraCreateParameterList.c)
 *     ExpWnfCreateNameInstance @ 0x14069D4E4 (ExpWnfCreateNameInstance.c)
 *     ExpWnfSubscribeNameInstance @ 0x14069F7E8 (ExpWnfSubscribeNameInstance.c)
 *     ExpWnfWriteStateData @ 0x14069FF60 (ExpWnfWriteStateData.c)
 *     NtCreateWorkerFactory @ 0x1406AB120 (NtCreateWorkerFactory.c)
 *     IopAllocateMiniCompletionPacket @ 0x1406ABF1C (IopAllocateMiniCompletionPacket.c)
 *     NtTraceControl @ 0x1406DA6C0 (NtTraceControl.c)
 *     NtSetInformationProcess @ 0x140721890 (NtSetInformationProcess.c)
 *     RtlQueryModuleInformation @ 0x140788350 (RtlQueryModuleInformation.c)
 *     PspIsDfssEnabled @ 0x1407A8EA0 (PspIsDfssEnabled.c)
 *     CmpSaveKeyByFileCopy @ 0x14087DA00 (CmpSaveKeyByFileCopy.c)
 *     VrpHandleIoctlLoadDifferencingHiveForHost @ 0x140882EA0 (VrpHandleIoctlLoadDifferencingHiveForHost.c)
 *     DbgkpQueueMessage @ 0x140885678 (DbgkpQueueMessage.c)
 *     DbgkRegisterErrorPort @ 0x140886BA4 (DbgkRegisterErrorPort.c)
 *     KeEnableProfiling @ 0x1408BC13C (KeEnableProfiling.c)
 *     PsCreateVsmEnclave @ 0x14090DA48 (PsCreateVsmEnclave.c)
 *     PsInitializeVsmEnclave @ 0x14090E0B0 (PsInitializeVsmEnclave.c)
 *     PspPrepareEnclaveThreadWait @ 0x14090E570 (PspPrepareEnclaveThreadWait.c)
 *     PspVsmEnclaveHashAllocator @ 0x14090E8A0 (PspVsmEnclaveHashAllocator.c)
 *     RtlAddResourceAttributeAce @ 0x1409126D0 (RtlAddResourceAttributeAce.c)
 *     RtlAllocateAndInitializeSidEx @ 0x14091341C (RtlAllocateAndInitializeSidEx.c)
 *     RtlGetAppContainerParent @ 0x140913920 (RtlGetAppContainerParent.c)
 *     RtlpGetPolicyValueForSystemCapability @ 0x1409144B4 (RtlpGetPolicyValueForSystemCapability.c)
 *     NtQuerySecurityPolicy @ 0x14091BCA0 (NtQuerySecurityPolicy.c)
 *     ExpGetDeviceDataInformation @ 0x14094A348 (ExpGetDeviceDataInformation.c)
 *     ExpQueryElamCertInfo @ 0x14094AAA8 (ExpQueryElamCertInfo.c)
 *     ExpQueryPortableWorkspaceEfiLauncherInformation @ 0x14094B1E0 (ExpQueryPortableWorkspaceEfiLauncherInformation.c)
 *     ExpStringCapture @ 0x14094B850 (ExpStringCapture.c)
 *     ExAllocatePool2 @ 0x1409B51B0 (ExAllocatePool2.c)
 *     ExAllocatePool3 @ 0x1409B5270 (ExAllocatePool3.c)
 *     VerifierExAllocatePoolWithQuotaTag @ 0x1409D5E70 (VerifierExAllocatePoolWithQuotaTag.c)
 *     VerifierPortExAllocatePoolWithQuotaTag @ 0x1409E5C30 (VerifierPortExAllocatePoolWithQuotaTag.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140212910 (RtlRaiseStatus.c)
 *     PspExpandQuota @ 0x14023D638 (PspExpandQuota.c)
 *     ExGetHeapFromVA @ 0x1403059CC (ExGetHeapFromVA.c)
 *     ExpHpIsSpecialPoolHeap @ 0x1403CDEBC (ExpHpIsSpecialPoolHeap.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     ObpPushStackInfo @ 0x140564F68 (ObpPushStackInfo.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
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
  __int64 v14; // rsi
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
    if ( !PspExpandQuota(v15, (__int64)v16, v18, v14, &v35) )
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
