/*
 * XREFs of CmKeyBodyReplicateToVirtual @ 0x14064FA70
 * Callers:
 *     NtSetValueKey @ 0x1405E3650 (NtSetValueKey.c)
 *     NtSetInformationKey @ 0x1406726A0 (NtSetInformationKey.c)
 *     NtRenameKey @ 0x1408655F0 (NtRenameKey.c)
 * Callees:
 *     CmpDrainDelayDerefContext @ 0x140205E60 (CmpDrainDelayDerefContext.c)
 *     CmpInitializeDelayDerefContext @ 0x140205F64 (CmpInitializeDelayDerefContext.c)
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     KCBNeedsVirtualImage @ 0x1402787B8 (KCBNeedsVirtualImage.c)
 *     RtlInitUnicodeString @ 0x140298F60 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memset @ 0x14040A280 (memset.c)
 *     CmpLockKcbExclusive @ 0x1405DF678 (CmpLockKcbExclusive.c)
 *     CmpAttachToRegistryProcess @ 0x1405EA8E0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x1405EC100 (CmpDetachFromRegistryProcess.c)
 *     CmpUnlockKcb @ 0x1405F0C10 (CmpUnlockKcb.c)
 *     CmpUnlockRegistry @ 0x1405F3D20 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1405F3D60 (CmpLockRegistry.c)
 *     CmpLockRegistryExclusive @ 0x1406400FC (CmpLockRegistryExclusive.c)
 *     CmpReparseToVirtualPath @ 0x14064FC48 (CmpReparseToVirtualPath.c)
 *     RtlFreeAnsiString @ 0x14065EA70 (RtlFreeAnsiString.c)
 *     ObReferenceObjectByName @ 0x140668760 (ObReferenceObjectByName.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1406725F0 (CmpPerformKeyBodyDeletionCheck.c)
 *     SeDeleteAccessState @ 0x14067A200 (SeDeleteAccessState.c)
 *     CmpCleanupParseContext @ 0x140694400 (CmpCleanupParseContext.c)
 *     CmpCheckAdminAccess @ 0x1406DD098 (CmpCheckAdminAccess.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x14086BF24 (CmpSearchKeyControlBlockTreeEx.c)
 *     CmpReplicateKeyToVirtual @ 0x14086D55C (CmpReplicateKeyToVirtual.c)
 *     CmpExamineSaclForAuditEvent @ 0x14086E8DC (CmpExamineSaclForAuditEvent.c)
 *     CmpReportAuditVirtualizationEvent @ 0x14086E9F4 (CmpReportAuditVirtualizationEvent.c)
 *     SeCreateAccessStateFromSubjectContext @ 0x140919D8C (SeCreateAccessStateFromSubjectContext.c)
 */

__int64 __fastcall CmKeyBodyReplicateToVirtual(struct _DMA_ADAPTER **a1, char a2, ACCESS_MASK a3, __int64 a4)
{
  struct _DMA_ADAPTER *v7; // r14
  ULONG_PTR DmaOperations; // rdi
  __int64 v9; // rdx
  int AccessStateFromSubjectContext; // ebx
  __int64 v12; // rdx
  char v13; // [rsp+41h] [rbp-BFh]
  char v14; // [rsp+42h] [rbp-BEh]
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v16; // [rsp+58h] [rbp-A8h]
  struct _DMA_ADAPTER *v17; // [rsp+60h] [rbp-A0h]
  struct _DMA_ADAPTER **v18; // [rsp+68h] [rbp-98h]
  __int128 v19; // [rsp+70h] [rbp-90h] BYREF
  _OWORD v20[19]; // [rsp+80h] [rbp-80h] BYREF
  _OWORD v21[3]; // [rsp+1B0h] [rbp+B0h] BYREF
  _BYTE v22[160]; // [rsp+1E0h] [rbp+E0h] BYREF
  _BYTE v23[224]; // [rsp+280h] [rbp+180h] BYREF

  v16 = 0LL;
  v14 = a2;
  v18 = a1;
  v13 = 0;
  DestinationString = 0LL;
  memset(v21, 0, sizeof(v21));
  v19 = 0LL;
  memset(v22, 0, sizeof(v22));
  memset(v23, 0, sizeof(v23));
  RtlInitUnicodeString(&DestinationString, 0LL);
  v7 = *a1;
  memset(v20, 0, 0x128uLL);
  LODWORD(v20[6]) = -1;
  *((_QWORD *)&v20[9] + 1) = &v20[9];
  *(_QWORD *)&v20[9] = &v20[9];
  memset((char *)&v20[13] + 8, 0, 0x50uLL);
  v17 = 0LL;
  CmpInitializeDelayDerefContext(&v19);
  CmpAttachToRegistryProcess((__int64)v21);
  CmpLockRegistry();
  DmaOperations = (ULONG_PTR)v7->DmaOperations;
  CmpLockKcbExclusive(DmaOperations);
  if ( !KCBNeedsVirtualImage() )
  {
LABEL_5:
    AccessStateFromSubjectContext = -1073741790;
    goto LABEL_6;
  }
  AccessStateFromSubjectContext = CmpPerformKeyBodyDeletionCheck(v7, 0LL);
  if ( AccessStateFromSubjectContext < 0 )
  {
LABEL_6:
    CmpUnlockKcb(DmaOperations);
    CmpUnlockRegistry();
    goto LABEL_7;
  }
  if ( !(unsigned __int8)CmpReparseToVirtualPath(DmaOperations, v9, a4, &DestinationString) )
  {
    if ( (*(_DWORD *)(DmaOperations + 184) & 0x20) == 0 )
    {
      AccessStateFromSubjectContext = CmpCheckAdminAccess(
                                        a3,
                                        (PSECURITY_DESCRIPTOR)(*(_QWORD *)(DmaOperations + 88) + 32LL));
      if ( AccessStateFromSubjectContext < 0 )
        goto LABEL_6;
    }
    goto LABEL_5;
  }
  CmpUnlockKcb(DmaOperations);
  CmpDrainDelayDerefContext((_QWORD **)&v19);
  CmpUnlockRegistry();
  LODWORD(v20[0]) = 8;
  *((_QWORD *)&v20[4] + 1) = v7[3].DmaOperations;
  AccessStateFromSubjectContext = SeCreateAccessStateFromSubjectContext(
                                    a4,
                                    (unsigned int)v22,
                                    (unsigned int)v23,
                                    a3,
                                    (__int64)CmKeyObjectType + 76);
  if ( AccessStateFromSubjectContext >= 0 )
  {
    v12 = 1600LL;
    if ( v14 != 1 )
      v12 = 576LL;
    AccessStateFromSubjectContext = ObReferenceObjectByName(&DestinationString, v12, v22);
    if ( AccessStateFromSubjectContext >= 0 )
    {
      *v18 = v17;
      HalPutDmaAdapter(v7);
      AccessStateFromSubjectContext = 0;
    }
    SeDeleteAccessState(v22);
  }
LABEL_7:
  CmpCleanupParseContext(v20, 0LL);
  if ( DestinationString.Buffer )
    RtlFreeAnsiString(&DestinationString);
  CmpDetachFromRegistryProcess((__int64)v21);
  return (unsigned int)AccessStateFromSubjectContext;
}
