/*
 * XREFs of ObOpenObjectByPointer @ 0x140667220
 * Callers:
 *     VrpPostEnumerateKey @ 0x1405CABE4 (VrpPostEnumerateKey.c)
 *     PiCMDuplicateRegistryHandle @ 0x1405D3760 (PiCMDuplicateRegistryHandle.c)
 *     ExpGetProcessInformation @ 0x1405F43A0 (ExpGetProcessInformation.c)
 *     NtCreateWorkerFactory @ 0x14060D350 (NtCreateWorkerFactory.c)
 *     WmipIoControl @ 0x140645B80 (WmipIoControl.c)
 *     CmLoadDifferencingKey @ 0x140650EAC (CmLoadDifferencingKey.c)
 *     CmConvertHandleToKernelHandle @ 0x140651B44 (CmConvertHandleToKernelHandle.c)
 *     NtQueryInformationProcess @ 0x140661E20 (NtQueryInformationProcess.c)
 *     NtOpenThreadTokenEx @ 0x1406668A0 (NtOpenThreadTokenEx.c)
 *     NtOpenProcessTokenEx @ 0x140667060 (NtOpenProcessTokenEx.c)
 *     PsOpenThread @ 0x1406677B4 (PsOpenThread.c)
 *     PsOpenProcess @ 0x14067A820 (PsOpenProcess.c)
 *     ExGetNextProcess @ 0x14069873C (ExGetNextProcess.c)
 *     PspCreateObjectHandle @ 0x1406AEB60 (PspCreateObjectHandle.c)
 *     PspOneDirectionSecurityDomainCombine @ 0x1406B5B38 (PspOneDirectionSecurityDomainCombine.c)
 *     EtwpOpenConsumer @ 0x1406C6CE4 (EtwpOpenConsumer.c)
 *     CmFcManagerQueryFeatureConfigurationSectionInformation @ 0x1406F06A0 (CmFcManagerQueryFeatureConfigurationSectionInformation.c)
 *     PspCombineSecurityDomains @ 0x1406F22A4 (PspCombineSecurityDomains.c)
 *     NtOpenPrivateNamespace @ 0x1406F3C10 (NtOpenPrivateNamespace.c)
 *     NtGetNextThread @ 0x140703180 (NtGetNextThread.c)
 *     ObpSetDeviceMap @ 0x14070B584 (ObpSetDeviceMap.c)
 *     SPCallServerHandleFileIntegrityUpdate @ 0x140715FB4 (SPCallServerHandleFileIntegrityUpdate.c)
 *     IopInvalidateVolumesForDevice @ 0x140769260 (IopInvalidateVolumesForDevice.c)
 *     NtGetNextProcess @ 0x1407784D0 (NtGetNextProcess.c)
 *     CmpInitializeRegistryProcess @ 0x140781E8C (CmpInitializeRegistryProcess.c)
 *     ObInitServerSilo @ 0x1407B65F0 (ObInitServerSilo.c)
 *     SmRegistrationInfoFill @ 0x1407BC7A8 (SmRegistrationInfoFill.c)
 *     MmManagePartitionGetMemoryEvents @ 0x1407BF15C (MmManagePartitionGetMemoryEvents.c)
 *     VrpPreLoadKey @ 0x14088029C (VrpPreLoadKey.c)
 *     DbgkOpenProcessDebugPort @ 0x1408812F8 (DbgkOpenProcessDebugPort.c)
 *     DbgkpOpenHandles @ 0x140881B44 (DbgkpOpenHandles.c)
 *     DbgkUserReportWorkRoutine @ 0x140883C60 (DbgkUserReportWorkRoutine.c)
 *     ObOpenObjectByPointerWithTag @ 0x1408D9490 (ObOpenObjectByPointerWithTag.c)
 *     TtmiOpenDefaultTerminal @ 0x1408FA444 (TtmiOpenDefaultTerminal.c)
 *     SmKmFileInfoDuplicate @ 0x140927D24 (SmKmFileInfoDuplicate.c)
 *     EtwpCapturePreviousRegistryData @ 0x140937B84 (EtwpCapturePreviousRegistryData.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140207C80 (ExAcquirePushLockSharedEx.c)
 *     ObfDereferenceObjectWithTag @ 0x140208290 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObject @ 0x140208380 (ObfReferenceObject.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x1402748E0 (ExfReleasePushLockShared.c)
 *     ObReferenceObjectByPointerWithTag @ 0x14027D9C0 (ObReferenceObjectByPointerWithTag.c)
 *     ObFastReferenceObjectLocked @ 0x1402978D8 (ObFastReferenceObjectLocked.c)
 *     SepDeleteAccessState @ 0x1402990A0 (SepDeleteAccessState.c)
 *     ObFastReferenceObject @ 0x140299120 (ObFastReferenceObject.c)
 *     SepCreateAccessStateFromSubjectContext @ 0x140299240 (SepCreateAccessStateFromSubjectContext.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memset @ 0x14040A280 (memset.c)
 *     ObpCreateHandle @ 0x1405F6330 (ObpCreateHandle.c)
 *     SeReleaseSubjectContext @ 0x140695270 (SeReleaseSubjectContext.c)
 */

NTSTATUS __stdcall ObOpenObjectByPointer(
        PVOID Object,
        ULONG HandleAttributes,
        PACCESS_STATE PassedAccessState,
        ACCESS_MASK DesiredAccess,
        POBJECT_TYPE ObjectType,
        KPROCESSOR_MODE AccessMode,
        PHANDLE Handle)
{
  void *v10; // r12
  POBJECT_TYPE v11; // rdi
  NTSTATUS result; // eax
  struct _KTHREAD *CurrentThread; // rbx
  signed __int64 *p_Lock; // r13
  _QWORD *v15; // r12
  ULONG_PTR v16; // rbx
  NTSTATUS v17; // ebx
  NTSTATUS v18; // edi
  signed __int64 *v19; // r13
  signed __int64 *BugCheckParameter2; // [rsp+68h] [rbp-210h]
  struct _KTHREAD *v22; // [rsp+70h] [rbp-208h]
  struct _KTHREAD *v23; // [rsp+70h] [rbp-208h]
  __int128 v24; // [rsp+78h] [rbp-200h] BYREF
  ULONG_PTR v25; // [rsp+88h] [rbp-1F0h]
  signed __int64 v26; // [rsp+90h] [rbp-1E8h]
  _QWORD v27[20]; // [rsp+A0h] [rbp-1D8h] BYREF
  _QWORD v28[28]; // [rsp+140h] [rbp-138h] BYREF

  memset(v28, 0, sizeof(v28));
  memset(v27, 0, sizeof(v27));
  v10 = 0LL;
  v11 = ObjectType;
  *Handle = 0LL;
  result = ObReferenceObjectByPointerWithTag(Object, 0, ObjectType, AccessMode, 0x6E48624Fu);
  if ( result >= 0 )
  {
    if ( !ObjectType )
      v11 = (POBJECT_TYPE)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*((char *)Object - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Object - 48) >> 8)];
    if ( (HandleAttributes & v11->TypeInfo.InvalidAttributes) != 0
      || (*((char *)Object - 21) & 1) != 0 && *((_QWORD *)Object - 2) )
    {
      ++ObpInvalidOpenByPointer;
      ObfDereferenceObjectWithTag(Object, 0x6E48624Fu);
      return -1073741811;
    }
    else
    {
      if ( !PassedAccessState )
      {
        CurrentThread = KeGetCurrentThread();
        *((_QWORD *)&v24 + 1) = 0LL;
        p_Lock = (signed __int64 *)&CurrentThread->ApcState.Process->Header.Lock;
        v26 = p_Lock[136];
        if ( CurrentThread && (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
        {
          v22 = KeGetCurrentThread();
          --v22->KernelApcDisable;
          BugCheckParameter2 = (signed __int64 *)&CurrentThread[1].WaitBlockList;
          ExAcquirePushLockSharedEx((ULONG_PTR)&CurrentThread[1].WaitBlockList, 0LL);
          if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
          {
            v10 = (void *)(*(_QWORD *)((char *)&CurrentThread[1].116 + 4) & 0xFFFFFFFFFFFFFFF8uLL);
            ObfReferenceObject(v10);
            DWORD2(v24) = *((_DWORD *)&CurrentThread[1].0 + 1) & 3;
          }
          if ( _InterlockedCompareExchange64(BugCheckParameter2, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared(BugCheckParameter2);
          KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
          KeLeaveCriticalRegionThread((__int64)v22);
        }
        *(_QWORD *)&v24 = v10;
        v15 = p_Lock + 151;
        v16 = ObFastReferenceObject(p_Lock + 151);
        if ( !v16 )
        {
          v23 = KeGetCurrentThread();
          --v23->KernelApcDisable;
          v19 = p_Lock + 135;
          ExAcquirePushLockSharedEx((ULONG_PTR)v19, 0LL);
          v16 = ObFastReferenceObjectLocked(v15);
          if ( _InterlockedCompareExchange64(v19, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared(v19);
          KeAbPostRelease((ULONG_PTR)v19);
          KeLeaveCriticalRegionThread((__int64)v23);
        }
        v25 = v16;
        if ( SeTokenLeakTracking )
        {
          if ( v16 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v16 + 1144) + 284LL));
            if ( v16 == SepTokenLeakToken )
              __debugbreak();
          }
          if ( (_QWORD)v24 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v24 + 1144) + 284LL));
            if ( (_QWORD)v24 == SepTokenLeakToken )
              __debugbreak();
          }
        }
        v17 = SepCreateAccessStateFromSubjectContext(&v24, v27, v28, DesiredAccess, &v11->TypeInfo.GenericMapping);
        if ( v17 < 0 )
        {
          ObfDereferenceObjectWithTag(Object, 0x6E48624Fu);
          return v17;
        }
        PassedAccessState = (PACCESS_STATE)v27;
      }
      v18 = ObpCreateHandle(
              1u,
              Object,
              0,
              PassedAccessState,
              0,
              HandleAttributes,
              AccessMode,
              0LL,
              0,
              0LL,
              (unsigned __int64 *)Handle);
      if ( v18 < 0 )
        ObfDereferenceObjectWithTag(Object, 0x6E48624Fu);
      if ( PassedAccessState == (PACCESS_STATE)v27 )
      {
        SepDeleteAccessState((__int64)PassedAccessState);
        SeReleaseSubjectContext(&PassedAccessState->SubjectSecurityContext);
      }
      return v18;
    }
  }
  return result;
}
