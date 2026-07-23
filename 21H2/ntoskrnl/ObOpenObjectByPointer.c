/*
 * XREFs of ObOpenObjectByPointer @ 0x14071DC60
 * Callers:
 *     VrpPostEnumerateKey @ 0x1405D37A4 (VrpPostEnumerateKey.c)
 *     CmFcManagerQueryFeatureConfigurationSectionInformation @ 0x1405FEEA0 (CmFcManagerQueryFeatureConfigurationSectionInformation.c)
 *     PspCombineSecurityDomains @ 0x140600714 (PspCombineSecurityDomains.c)
 *     WmipIoControl @ 0x1406061A0 (WmipIoControl.c)
 *     EtwpOpenConsumer @ 0x140618424 (EtwpOpenConsumer.c)
 *     ObpSetDeviceMap @ 0x14061C8E4 (ObpSetDeviceMap.c)
 *     PiCMDuplicateRegistryHandle @ 0x140624F24 (PiCMDuplicateRegistryHandle.c)
 *     PspCreateObjectHandle @ 0x14063F5E4 (PspCreateObjectHandle.c)
 *     PsOpenProcess @ 0x14064F550 (PsOpenProcess.c)
 *     CmLoadDifferencingKey @ 0x140664A6C (CmLoadDifferencingKey.c)
 *     CmConvertHandleToKernelHandle @ 0x140665704 (CmConvertHandleToKernelHandle.c)
 *     NtQueryInformationProcess @ 0x14068AF10 (NtQueryInformationProcess.c)
 *     PsOpenThread @ 0x140691E18 (PsOpenThread.c)
 *     PspOneDirectionSecurityDomainCombine @ 0x140696CA0 (PspOneDirectionSecurityDomainCombine.c)
 *     ExGetNextProcess @ 0x1406A5A2C (ExGetNextProcess.c)
 *     NtCreateWorkerFactory @ 0x1406AB120 (NtCreateWorkerFactory.c)
 *     NtOpenPrivateNamespace @ 0x1406BBF90 (NtOpenPrivateNamespace.c)
 *     NtGetNextThread @ 0x1406CA5A0 (NtGetNextThread.c)
 *     ExpGetProcessInformation @ 0x140708640 (ExpGetProcessInformation.c)
 *     NtOpenThreadTokenEx @ 0x14071D2E0 (NtOpenThreadTokenEx.c)
 *     NtOpenProcessTokenEx @ 0x14071DAA0 (NtOpenProcessTokenEx.c)
 *     SPCallServerHandleFileIntegrityUpdate @ 0x140727EB4 (SPCallServerHandleFileIntegrityUpdate.c)
 *     IopInvalidateVolumesForDevice @ 0x14077B9E0 (IopInvalidateVolumesForDevice.c)
 *     NtGetNextProcess @ 0x14078AA70 (NtGetNextProcess.c)
 *     CmpInitializeRegistryProcess @ 0x1407C638C (CmpInitializeRegistryProcess.c)
 *     ObInitServerSilo @ 0x1407C9400 (ObInitServerSilo.c)
 *     SmRegistrationInfoFill @ 0x1407CF468 (SmRegistrationInfoFill.c)
 *     MmManagePartitionGetMemoryEvents @ 0x1407D1E0C (MmManagePartitionGetMemoryEvents.c)
 *     VrpPreLoadKey @ 0x1408834EC (VrpPreLoadKey.c)
 *     DbgkOpenProcessDebugPort @ 0x140884548 (DbgkOpenProcessDebugPort.c)
 *     DbgkpOpenHandles @ 0x140884D94 (DbgkpOpenHandles.c)
 *     DbgkUserReportWorkRoutine @ 0x140886EB0 (DbgkUserReportWorkRoutine.c)
 *     ObOpenObjectByPointerWithTag @ 0x1408DCBF0 (ObOpenObjectByPointerWithTag.c)
 *     TtmiOpenDefaultTerminal @ 0x1408FD978 (TtmiOpenDefaultTerminal.c)
 *     SmKmFileInfoDuplicate @ 0x14092B47C (SmKmFileInfoDuplicate.c)
 *     EtwpCapturePreviousRegistryData @ 0x14093B354 (EtwpCapturePreviousRegistryData.c)
 * Callees:
 *     SepDeleteAccessState @ 0x14026A600 (SepDeleteAccessState.c)
 *     ObFastReferenceObject @ 0x14026A680 (ObFastReferenceObject.c)
 *     SepCreateAccessStateFromSubjectContext @ 0x14026A7A0 (SepCreateAccessStateFromSubjectContext.c)
 *     ObFastReferenceObjectLocked @ 0x1402AAC68 (ObFastReferenceObjectLocked.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x1402FC1C0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObject @ 0x140355F80 (ObfReferenceObject.c)
 *     ObReferenceObjectByPointerWithTag @ 0x140361460 (ObReferenceObjectByPointerWithTag.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     SeReleaseSubjectContext @ 0x14064B710 (SeReleaseSubjectContext.c)
 *     ObpCreateHandle @ 0x14070D930 (ObpCreateHandle.c)
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
      v18 = ObpCreateHandle(
              1u,
              (char *)Object,
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
