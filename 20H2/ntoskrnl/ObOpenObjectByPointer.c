/*
 * XREFs of ObOpenObjectByPointer @ 0x14067EA30
 * Callers:
 *     VrpPostEnumerateKey @ 0x1405D0DA4 (VrpPostEnumerateKey.c)
 *     PsOpenProcess @ 0x1406023B0 (PsOpenProcess.c)
 *     ExpGetProcessInformation @ 0x140611F60 (ExpGetProcessInformation.c)
 *     NtQueryInformationProcess @ 0x140636B80 (NtQueryInformationProcess.c)
 *     PsOpenThread @ 0x14063B5B0 (PsOpenThread.c)
 *     PiCMDuplicateRegistryHandle @ 0x1406455BC (PiCMDuplicateRegistryHandle.c)
 *     WmipIoControl @ 0x140647170 (WmipIoControl.c)
 *     ExGetNextProcess @ 0x140659A54 (ExGetNextProcess.c)
 *     NtOpenThreadTokenEx @ 0x14067E0B0 (NtOpenThreadTokenEx.c)
 *     NtOpenProcessTokenEx @ 0x14067E870 (NtOpenProcessTokenEx.c)
 *     PspCreateObjectHandle @ 0x1406880AC (PspCreateObjectHandle.c)
 *     PspCombineSecurityDomains @ 0x140699828 (PspCombineSecurityDomains.c)
 *     PspOneDirectionSecurityDomainCombine @ 0x1406B309C (PspOneDirectionSecurityDomainCombine.c)
 *     CmFcManagerQueryFeatureConfigurationSectionInformation @ 0x1406C4190 (CmFcManagerQueryFeatureConfigurationSectionInformation.c)
 *     NtGetNextThread @ 0x1406D61C0 (NtGetNextThread.c)
 *     ObpSetDeviceMap @ 0x1406DD7AC (ObpSetDeviceMap.c)
 *     CmLoadDifferencingKey @ 0x1406FE1FC (CmLoadDifferencingKey.c)
 *     CmConvertHandleToKernelHandle @ 0x1406FEE94 (CmConvertHandleToKernelHandle.c)
 *     NtCreateWorkerFactory @ 0x140709330 (NtCreateWorkerFactory.c)
 *     EtwpOpenConsumer @ 0x140712724 (EtwpOpenConsumer.c)
 *     NtOpenPrivateNamespace @ 0x14071B1A0 (NtOpenPrivateNamespace.c)
 *     SPCallServerHandleFileIntegrityUpdate @ 0x140723F74 (SPCallServerHandleFileIntegrityUpdate.c)
 *     IopInvalidateVolumesForDevice @ 0x140777870 (IopInvalidateVolumesForDevice.c)
 *     NtGetNextProcess @ 0x140786AD0 (NtGetNextProcess.c)
 *     CmpInitializeRegistryProcess @ 0x1407C1D6C (CmpInitializeRegistryProcess.c)
 *     ObInitServerSilo @ 0x1407C4E20 (ObInitServerSilo.c)
 *     SmRegistrationInfoFill @ 0x1407CB038 (SmRegistrationInfoFill.c)
 *     MmManagePartitionGetMemoryEvents @ 0x1407CD9EC (MmManagePartitionGetMemoryEvents.c)
 *     VrpPreLoadKey @ 0x140885DEC (VrpPreLoadKey.c)
 *     DbgkOpenProcessDebugPort @ 0x140886E48 (DbgkOpenProcessDebugPort.c)
 *     DbgkpOpenHandles @ 0x140887694 (DbgkpOpenHandles.c)
 *     DbgkUserReportWorkRoutine @ 0x1408897B0 (DbgkUserReportWorkRoutine.c)
 *     ObOpenObjectByPointerWithTag @ 0x1408DF2D0 (ObOpenObjectByPointerWithTag.c)
 *     TtmiOpenDefaultTerminal @ 0x140900068 (TtmiOpenDefaultTerminal.c)
 *     SmKmFileInfoDuplicate @ 0x14092DB4C (SmKmFileInfoDuplicate.c)
 *     EtwpCapturePreviousRegistryData @ 0x14093D9B4 (EtwpCapturePreviousRegistryData.c)
 * Callees:
 *     ObFastReferenceObjectLocked @ 0x140209828 (ObFastReferenceObjectLocked.c)
 *     SepDeleteAccessState @ 0x140210E90 (SepDeleteAccessState.c)
 *     ObFastReferenceObject @ 0x140210F10 (ObFastReferenceObject.c)
 *     SepCreateAccessStateFromSubjectContext @ 0x140211030 (SepCreateAccessStateFromSubjectContext.c)
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x140220C00 (ExAcquirePushLockSharedEx.c)
 *     ObfDereferenceObjectWithTag @ 0x140221210 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObject @ 0x140221300 (ObfReferenceObject.c)
 *     ExfReleasePushLockShared @ 0x140242A40 (ExfReleasePushLockShared.c)
 *     ObReferenceObjectByPointerWithTag @ 0x14029F2C0 (ObReferenceObjectByPointerWithTag.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     memset @ 0x140411300 (memset.c)
 *     SeReleaseSubjectContext @ 0x14060D710 (SeReleaseSubjectContext.c)
 *     ObpCreateHandle @ 0x140616FD0 (ObpCreateHandle.c)
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
