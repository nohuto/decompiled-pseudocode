/*
 * XREFs of ObOpenObjectByPointer @ 0x1405E0F20
 * Callers:
 *     VrpPostEnumerateKey @ 0x1405C9814 (VrpPostEnumerateKey.c)
 *     NtQueryInformationProcess @ 0x1405DBB20 (NtQueryInformationProcess.c)
 *     NtOpenThreadTokenEx @ 0x1405E05A0 (NtOpenThreadTokenEx.c)
 *     NtOpenProcessTokenEx @ 0x1405E0D60 (NtOpenProcessTokenEx.c)
 *     PsOpenThread @ 0x1405E14B4 (PsOpenThread.c)
 *     ExGetNextProcess @ 0x1405EF224 (ExGetNextProcess.c)
 *     PsOpenProcess @ 0x140602740 (PsOpenProcess.c)
 *     ExpGetProcessInformation @ 0x140629910 (ExpGetProcessInformation.c)
 *     NtCreateWorkerFactory @ 0x1406424A0 (NtCreateWorkerFactory.c)
 *     PspOneDirectionSecurityDomainCombine @ 0x14064CB58 (PspOneDirectionSecurityDomainCombine.c)
 *     EtwpOpenConsumer @ 0x140677874 (EtwpOpenConsumer.c)
 *     NtOpenPrivateNamespace @ 0x14067DAC0 (NtOpenPrivateNamespace.c)
 *     WmipIoControl @ 0x140680CE0 (WmipIoControl.c)
 *     CmLoadDifferencingKey @ 0x14068C83C (CmLoadDifferencingKey.c)
 *     CmConvertHandleToKernelHandle @ 0x14068D4D4 (CmConvertHandleToKernelHandle.c)
 *     PiCMDuplicateRegistryHandle @ 0x1406A1E5C (PiCMDuplicateRegistryHandle.c)
 *     CmFcManagerQueryFeatureConfigurationSectionInformation @ 0x1406CF3A0 (CmFcManagerQueryFeatureConfigurationSectionInformation.c)
 *     PspCombineSecurityDomains @ 0x1406D1398 (PspCombineSecurityDomains.c)
 *     NtGetNextThread @ 0x1406E03F0 (NtGetNextThread.c)
 *     ObpSetDeviceMap @ 0x1406E7654 (ObpSetDeviceMap.c)
 *     PspCreateObjectHandle @ 0x1406F3A00 (PspCreateObjectHandle.c)
 *     SPCallServerHandleFileIntegrityUpdate @ 0x140713C24 (SPCallServerHandleFileIntegrityUpdate.c)
 *     IopInvalidateVolumesForDevice @ 0x140766E80 (IopInvalidateVolumesForDevice.c)
 *     NtGetNextProcess @ 0x1407760C0 (NtGetNextProcess.c)
 *     CmpInitializeRegistryProcess @ 0x1407878AC (CmpInitializeRegistryProcess.c)
 *     ObInitServerSilo @ 0x1407B3480 (ObInitServerSilo.c)
 *     SmRegistrationInfoFill @ 0x1407B9638 (SmRegistrationInfoFill.c)
 *     MmManagePartitionGetMemoryEvents @ 0x1407BBFEC (MmManagePartitionGetMemoryEvents.c)
 *     VrpPreLoadKey @ 0x14087EFAC (VrpPreLoadKey.c)
 *     DbgkOpenProcessDebugPort @ 0x14087FFD8 (DbgkOpenProcessDebugPort.c)
 *     DbgkpOpenHandles @ 0x140880824 (DbgkpOpenHandles.c)
 *     DbgkUserReportWorkRoutine @ 0x140882940 (DbgkUserReportWorkRoutine.c)
 *     ObOpenObjectByPointerWithTag @ 0x1408D8120 (ObOpenObjectByPointerWithTag.c)
 *     TtmiOpenDefaultTerminal @ 0x1408F9154 (TtmiOpenDefaultTerminal.c)
 *     SmKmFileInfoDuplicate @ 0x140926A74 (SmKmFileInfoDuplicate.c)
 *     EtwpCapturePreviousRegistryData @ 0x1409368E4 (EtwpCapturePreviousRegistryData.c)
 * Callees:
 *     ObReferenceObjectByPointerWithTag @ 0x1402046B0 (ObReferenceObjectByPointerWithTag.c)
 *     SepDeleteAccessState @ 0x140206590 (SepDeleteAccessState.c)
 *     ObFastReferenceObject @ 0x140206610 (ObFastReferenceObject.c)
 *     SepCreateAccessStateFromSubjectContext @ 0x140206730 (SepCreateAccessStateFromSubjectContext.c)
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ObFastReferenceObjectLocked @ 0x14025B058 (ObFastReferenceObjectLocked.c)
 *     ExAcquirePushLockSharedEx @ 0x140260BA0 (ExAcquirePushLockSharedEx.c)
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObject @ 0x1402612A0 (ObfReferenceObject.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x14035A580 (ExfReleasePushLockShared.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
 *     SeReleaseSubjectContext @ 0x1405EBD30 (SeReleaseSubjectContext.c)
 *     ObpCreateHandle @ 0x14062B8A0 (ObpCreateHandle.c)
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
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  signed __int64 *v22; // r13
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  signed __int64 *BugCheckParameter2; // [rsp+68h] [rbp-210h]
  struct _KTHREAD *v28; // [rsp+70h] [rbp-208h]
  struct _KTHREAD *v29; // [rsp+70h] [rbp-208h]
  __int128 v30; // [rsp+78h] [rbp-200h] BYREF
  ULONG_PTR v31; // [rsp+88h] [rbp-1F0h]
  signed __int64 v32; // [rsp+90h] [rbp-1E8h]
  _QWORD v33[20]; // [rsp+A0h] [rbp-1D8h] BYREF
  _QWORD v34[28]; // [rsp+140h] [rbp-138h] BYREF

  memset(v34, 0, sizeof(v34));
  memset(v33, 0, sizeof(v33));
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
        *((_QWORD *)&v30 + 1) = 0LL;
        p_Lock = (signed __int64 *)&CurrentThread->ApcState.Process->Header.Lock;
        v32 = p_Lock[136];
        if ( CurrentThread && (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
        {
          v28 = KeGetCurrentThread();
          --v28->KernelApcDisable;
          BugCheckParameter2 = (signed __int64 *)&CurrentThread[1].WaitBlockList;
          ExAcquirePushLockSharedEx((ULONG_PTR)&CurrentThread[1].WaitBlockList, 0LL);
          if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
          {
            v10 = (void *)(*(_QWORD *)((char *)&CurrentThread[1].116 + 4) & 0xFFFFFFFFFFFFFFF8uLL);
            ObfReferenceObject(v10);
            DWORD2(v30) = *((_DWORD *)&CurrentThread[1].0 + 1) & 3;
          }
          if ( _InterlockedCompareExchange64(BugCheckParameter2, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared(BugCheckParameter2);
          KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
          KeLeaveCriticalRegionThread((__int64)v28, v19, v20, v21);
        }
        *(_QWORD *)&v30 = v10;
        v15 = p_Lock + 151;
        v16 = ObFastReferenceObject(p_Lock + 151);
        if ( !v16 )
        {
          v29 = KeGetCurrentThread();
          --v29->KernelApcDisable;
          v22 = p_Lock + 135;
          ExAcquirePushLockSharedEx((ULONG_PTR)v22, 0LL);
          v16 = ObFastReferenceObjectLocked(v15);
          if ( _InterlockedCompareExchange64(v22, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared(v22);
          KeAbPostRelease((ULONG_PTR)v22);
          KeLeaveCriticalRegionThread((__int64)v29, v23, v24, v25);
        }
        v31 = v16;
        if ( SeTokenLeakTracking )
        {
          if ( v16 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v16 + 1144) + 284LL));
            if ( v16 == SepTokenLeakToken )
              __debugbreak();
          }
          if ( (_QWORD)v30 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v30 + 1144) + 284LL));
            if ( (_QWORD)v30 == SepTokenLeakToken )
              __debugbreak();
          }
        }
        v17 = SepCreateAccessStateFromSubjectContext(&v30, v33, v34, DesiredAccess, &v11->TypeInfo.GenericMapping);
        if ( v17 < 0 )
        {
          ObfDereferenceObjectWithTag(Object, 0x6E48624Fu);
          return v17;
        }
        PassedAccessState = (PACCESS_STATE)v33;
      }
      v18 = ObpCreateHandle(1LL, Object, 0LL, PassedAccessState, 0, HandleAttributes, AccessMode, 0LL, 0, 0LL, Handle);
      if ( v18 < 0 )
        ObfDereferenceObjectWithTag(Object, 0x6E48624Fu);
      if ( PassedAccessState == (PACCESS_STATE)v33 )
      {
        SepDeleteAccessState((__int64)PassedAccessState);
        SeReleaseSubjectContext(&PassedAccessState->SubjectSecurityContext);
      }
      return v18;
    }
  }
  return result;
}
