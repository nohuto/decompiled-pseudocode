/*
 * XREFs of ExAllocatePoolWithQuotaTag @ 0x140353020
 * Callers:
 *     IopVerifierExAllocatePoolWithQuota @ 0x14022BCD0 (IopVerifierExAllocatePoolWithQuota.c)
 *     MiAllocatePool @ 0x14025AD70 (MiAllocatePool.c)
 *     CmpAllocateTransientPoolWithQuotaTag @ 0x14027EF58 (CmpAllocateTransientPoolWithQuotaTag.c)
 *     PopCaptureReasonContext @ 0x1402838E0 (PopCaptureReasonContext.c)
 *     RtlInsertDynamicFunctionTable @ 0x1402A75C8 (RtlInsertDynamicFunctionTable.c)
 *     IopVerifierExAllocatePoolWithQuota_0 @ 0x1402B7B3C (IopVerifierExAllocatePoolWithQuota_0.c)
 *     PiControlAllocateBufferForUserModeCaller @ 0x1402C27E0 (PiControlAllocateBufferForUserModeCaller.c)
 *     ExAllocatePoolMm @ 0x14033B3B0 (ExAllocatePoolMm.c)
 *     IopAllocateIrpPrivate @ 0x140351A70 (IopAllocateIrpPrivate.c)
 *     RtlIsUntrustedObject @ 0x14035F3B0 (RtlIsUntrustedObject.c)
 *     IopVerifierExAllocatePoolWithQuota_2 @ 0x1403CAF28 (IopVerifierExAllocatePoolWithQuota_2.c)
 *     CmpAllocatePoolWithQuotaTag @ 0x1404ECE10 (CmpAllocatePoolWithQuotaTag.c)
 *     FsRtlAllocatePoolWithQuota @ 0x1404F0150 (FsRtlAllocatePoolWithQuota.c)
 *     FsRtlAllocatePoolWithQuotaTag @ 0x1404F0180 (FsRtlAllocatePoolWithQuotaTag.c)
 *     IopVerifierExAllocatePoolWithQuota_3 @ 0x140506DCC (IopVerifierExAllocatePoolWithQuota_3.c)
 *     IopVerifierExAllocatePoolWithQuota_4 @ 0x1405087A0 (IopVerifierExAllocatePoolWithQuota_4.c)
 *     IopVerifierExAllocatePoolWithQuota_5 @ 0x140508960 (IopVerifierExAllocatePoolWithQuota_5.c)
 *     PsSetCpuQuotaInformation @ 0x140581008 (PsSetCpuQuotaInformation.c)
 *     ExAllocatePoolWithQuota @ 0x1405B35E0 (ExAllocatePoolWithQuota.c)
 *     ExGetWakeTimerList @ 0x1405B6148 (ExGetWakeTimerList.c)
 *     NtQueueApcThreadEx2 @ 0x1405CF9B0 (NtQueueApcThreadEx2.c)
 *     NtTraceControl @ 0x1405EAF60 (NtTraceControl.c)
 *     PspCaptureUserProcessParameters @ 0x1406068CC (PspCaptureUserProcessParameters.c)
 *     PspBuildCreateProcessContext @ 0x140608C44 (PspBuildCreateProcessContext.c)
 *     IopCreateFile @ 0x14060B4C0 (IopCreateFile.c)
 *     FsRtlAllocateExtraCreateParameterList @ 0x14060CEF0 (FsRtlAllocateExtraCreateParameterList.c)
 *     ExpWnfCreateNameInstance @ 0x14060DA34 (ExpWnfCreateNameInstance.c)
 *     ExpWnfSubscribeNameInstance @ 0x14060FD38 (ExpWnfSubscribeNameInstance.c)
 *     ExpWnfWriteStateData @ 0x1406104B0 (ExpWnfWriteStateData.c)
 *     NtSetInformationJobObject @ 0x140614200 (NtSetInformationJobObject.c)
 *     PiControlMakeUserModeCallersCopy @ 0x1406356D0 (PiControlMakeUserModeCallersCopy.c)
 *     FsRtlAllocateExtraCreateParameter @ 0x1406446A0 (FsRtlAllocateExtraCreateParameter.c)
 *     ExpQuerySystemInformation @ 0x140651070 (ExpQuerySystemInformation.c)
 *     NtQueryDirectoryObject @ 0x1406613C0 (NtQueryDirectoryObject.c)
 *     CmpAllocatePostBlock @ 0x140663960 (CmpAllocatePostBlock.c)
 *     CmpNotifyChangeKey @ 0x140663AA0 (CmpNotifyChangeKey.c)
 *     CmpNameFromAttributes @ 0x14066F2CC (CmpNameFromAttributes.c)
 *     ExLockUserBuffer @ 0x140683180 (ExLockUserBuffer.c)
 *     RtlpProcessIFEOKeyFilter @ 0x1406A67B4 (RtlpProcessIFEOKeyFilter.c)
 *     ExpGetSystemFirmwareTableInformation @ 0x1406AD66C (ExpGetSystemFirmwareTableInformation.c)
 *     PspReadIFEOPerfOptions @ 0x1406AED10 (PspReadIFEOPerfOptions.c)
 *     RtlQueryImageFileKeyOption @ 0x1406AEF00 (RtlQueryImageFileKeyOption.c)
 *     RtlAcquirePrivilege @ 0x1406B118C (RtlAcquirePrivilege.c)
 *     NtRegisterThreadTerminatePort @ 0x1406BE310 (NtRegisterThreadTerminatePort.c)
 *     NtCreateWorkerFactory @ 0x1406D3E40 (NtCreateWorkerFactory.c)
 *     IopAllocateMiniCompletionPacket @ 0x1406D4C3C (IopAllocateMiniCompletionPacket.c)
 *     NtSetInformationProcess @ 0x14070A4B0 (NtSetInformationProcess.c)
 *     RtlQueryModuleInformation @ 0x140788190 (RtlQueryModuleInformation.c)
 *     PspIsDfssEnabled @ 0x1407A8CA0 (PspIsDfssEnabled.c)
 *     CmpSaveKeyByFileCopy @ 0x14087D8A0 (CmpSaveKeyByFileCopy.c)
 *     VrpHandleIoctlLoadDifferencingHiveForHost @ 0x140882D40 (VrpHandleIoctlLoadDifferencingHiveForHost.c)
 *     DbgkpQueueMessage @ 0x140885518 (DbgkpQueueMessage.c)
 *     DbgkRegisterErrorPort @ 0x140886A44 (DbgkRegisterErrorPort.c)
 *     KeEnableProfiling @ 0x1408BBFDC (KeEnableProfiling.c)
 *     PsCreateVsmEnclave @ 0x14090D8E8 (PsCreateVsmEnclave.c)
 *     PsInitializeVsmEnclave @ 0x14090DF50 (PsInitializeVsmEnclave.c)
 *     PspPrepareEnclaveThreadWait @ 0x14090E410 (PspPrepareEnclaveThreadWait.c)
 *     PspVsmEnclaveHashAllocator @ 0x14090E740 (PspVsmEnclaveHashAllocator.c)
 *     RtlAddResourceAttributeAce @ 0x140912570 (RtlAddResourceAttributeAce.c)
 *     RtlAllocateAndInitializeSidEx @ 0x1409132BC (RtlAllocateAndInitializeSidEx.c)
 *     RtlGetAppContainerParent @ 0x1409137C0 (RtlGetAppContainerParent.c)
 *     RtlpGetPolicyValueForSystemCapability @ 0x140914354 (RtlpGetPolicyValueForSystemCapability.c)
 *     NtQuerySecurityPolicy @ 0x14091BB40 (NtQuerySecurityPolicy.c)
 *     ExpGetDeviceDataInformation @ 0x14094A178 (ExpGetDeviceDataInformation.c)
 *     ExpQueryElamCertInfo @ 0x14094A8D8 (ExpQueryElamCertInfo.c)
 *     ExpQueryPortableWorkspaceEfiLauncherInformation @ 0x14094B010 (ExpQueryPortableWorkspaceEfiLauncherInformation.c)
 *     ExpStringCapture @ 0x14094B680 (ExpStringCapture.c)
 *     ExAllocatePool2 @ 0x1409B41B0 (ExAllocatePool2.c)
 *     ExAllocatePool3 @ 0x1409B4270 (ExAllocatePool3.c)
 *     VerifierExAllocatePoolWithQuotaTag @ 0x1409D4E70 (VerifierExAllocatePoolWithQuotaTag.c)
 *     VerifierPortExAllocatePoolWithQuotaTag @ 0x1409E4C30 (VerifierPortExAllocatePoolWithQuotaTag.c)
 * Callees:
 *     RtlRaiseStatus @ 0x14029AF80 (RtlRaiseStatus.c)
 *     PspExpandQuota @ 0x1402BF1E8 (PspExpandQuota.c)
 *     ExGetHeapFromVA @ 0x1402FAC7C (ExGetHeapFromVA.c)
 *     ExpHpIsSpecialPoolHeap @ 0x1403CDD4C (ExpHpIsSpecialPoolHeap.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     ObpPushStackInfo @ 0x140564D28 (ObpPushStackInfo.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
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
  signed int v33; // esi
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
      RtlRaiseStatus(0xC000009A);
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
