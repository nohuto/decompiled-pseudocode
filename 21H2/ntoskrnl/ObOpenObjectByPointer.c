/*
 * XREFs of ObOpenObjectByPointer @ 0x1407277A0
 * Callers:
 *     SPCallServerHandleFileIntegrityUpdate @ 0x14065EA54 (SPCallServerHandleFileIntegrityUpdate.c)
 *     PsOpenThread @ 0x1406634A0 (PsOpenThread.c)
 *     PspOneDirectionSecurityDomainCombine @ 0x14066CC94 (PspOneDirectionSecurityDomainCombine.c)
 *     CmLoadDifferencingKey @ 0x14067CE4C (CmLoadDifferencingKey.c)
 *     CmConvertHandleToKernelHandle @ 0x14067DA70 (CmConvertHandleToKernelHandle.c)
 *     VrpPreLoadKey @ 0x14069061C (VrpPreLoadKey.c)
 *     VrpPostEnumerateKey @ 0x140691CD8 (VrpPostEnumerateKey.c)
 *     ObpSetDeviceMap @ 0x14069B8FC (ObpSetDeviceMap.c)
 *     PiCMDuplicateRegistryHandle @ 0x1406BAD74 (PiCMDuplicateRegistryHandle.c)
 *     CmFcManagerQueryFeatureConfigurationSectionInformation @ 0x1406BC6A8 (CmFcManagerQueryFeatureConfigurationSectionInformation.c)
 *     NtOpenPrivateNamespace @ 0x1406C0720 (NtOpenPrivateNamespace.c)
 *     WmipIoControl @ 0x1406C3540 (WmipIoControl.c)
 *     NtGetNextProcess @ 0x1406D2920 (NtGetNextProcess.c)
 *     NtGetNextThread @ 0x1406D7150 (NtGetNextThread.c)
 *     EtwpOpenConsumer @ 0x1406ECA80 (EtwpOpenConsumer.c)
 *     PspCreateObjectHandle @ 0x140701A98 (PspCreateObjectHandle.c)
 *     NtOpenThreadTokenEx @ 0x140725A50 (NtOpenThreadTokenEx.c)
 *     PsOpenProcess @ 0x1407292A0 (PsOpenProcess.c)
 *     NtQueryInformationProcess @ 0x14073DA00 (NtQueryInformationProcess.c)
 *     PspCombineSecurityDomains @ 0x1407527F4 (PspCombineSecurityDomains.c)
 *     ExGetNextProcess @ 0x1407B69F0 (ExGetNextProcess.c)
 *     NtCreateWorkerFactory @ 0x1407D5050 (NtCreateWorkerFactory.c)
 *     IopInvalidateVolumesForDevice @ 0x14080AB40 (IopInvalidateVolumesForDevice.c)
 *     CmpInitializeRegistryProcess @ 0x140831BF4 (CmpInitializeRegistryProcess.c)
 *     ObInitServerSilo @ 0x140859318 (ObInitServerSilo.c)
 *     SmRegistrationInfoFill @ 0x14085EA64 (SmRegistrationInfoFill.c)
 *     MmManagePartitionGetMemoryEvents @ 0x140861BA4 (MmManagePartitionGetMemoryEvents.c)
 *     DbgkOpenProcessDebugPort @ 0x1409272A0 (DbgkOpenProcessDebugPort.c)
 *     DbgkpOpenHandles @ 0x140927AE4 (DbgkpOpenHandles.c)
 *     DbgkUserReportWorkRoutine @ 0x140929C60 (DbgkUserReportWorkRoutine.c)
 *     MiOpenSpecialPurposeMemory @ 0x14096E7E4 (MiOpenSpecialPurposeMemory.c)
 *     ObOpenObjectByPointerWithTag @ 0x140985170 (ObOpenObjectByPointerWithTag.c)
 *     TtmiOpenDefaultTerminal @ 0x1409A325C (TtmiOpenDefaultTerminal.c)
 *     SmKmFileInfoDuplicate @ 0x1409D5860 (SmKmFileInfoDuplicate.c)
 *     EtwpCapturePreviousRegistryData @ 0x1409E5A54 (EtwpCapturePreviousRegistryData.c)
 * Callees:
 *     ObReferenceObjectByPointerWithTag @ 0x1402A48C0 (ObReferenceObjectByPointerWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     SepDeleteAccessState @ 0x1403478A0 (SepDeleteAccessState.c)
 *     SepCreateAccessStateFromSubjectContext @ 0x140347A20 (SepCreateAccessStateFromSubjectContext.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     SeCaptureSubjectContextEx @ 0x14072A390 (SeCaptureSubjectContextEx.c)
 *     ObpCreateHandle @ 0x140731DA0 (ObpCreateHandle.c)
 *     SeReleaseSubjectContext @ 0x1407CA9B0 (SeReleaseSubjectContext.c)
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
  POBJECT_TYPE v11; // rdi
  NTSTATUS result; // eax
  NTSTATUS v13; // edi
  NTSTATUS v14; // ebx
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+60h] [rbp-1F8h] BYREF
  _QWORD v16[20]; // [rsp+80h] [rbp-1D8h] BYREF
  _QWORD v17[28]; // [rsp+120h] [rbp-138h] BYREF

  memset(v17, 0, sizeof(v17));
  memset(v16, 0, sizeof(v16));
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
        memset(&SubjectContext, 0, sizeof(SubjectContext));
        SeCaptureSubjectContextEx(KeGetCurrentThread(), KeGetCurrentThread()->ApcState.Process, &SubjectContext);
        v14 = SepCreateAccessStateFromSubjectContext(
                &SubjectContext,
                v16,
                v17,
                DesiredAccess,
                &v11->TypeInfo.GenericMapping);
        if ( v14 < 0 )
        {
          ObfDereferenceObjectWithTag(Object, 0x6E48624Fu);
          return v14;
        }
        PassedAccessState = (PACCESS_STATE)v16;
      }
      v13 = ObpCreateHandle(1LL, Object, 0LL, PassedAccessState, 0, HandleAttributes, AccessMode, 0LL, 0, 0LL, Handle);
      if ( v13 < 0 )
        ObfDereferenceObjectWithTag(Object, 0x6E48624Fu);
      if ( PassedAccessState == (PACCESS_STATE)v16 )
      {
        SepDeleteAccessState((__int64)PassedAccessState);
        SeReleaseSubjectContext(&PassedAccessState->SubjectSecurityContext);
      }
      return v13;
    }
  }
  return result;
}
