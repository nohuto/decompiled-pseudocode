/*
 * XREFs of CmKeyBodyReplicateToVirtual @ 0x1405FFD40
 * Callers:
 *     NtSetValueKey @ 0x140658BE0 (NtSetValueKey.c)
 *     NtSetInformationKey @ 0x1406E3160 (NtSetInformationKey.c)
 *     NtRenameKey @ 0x140868D90 (NtRenameKey.c)
 * Callees:
 *     KCBNeedsVirtualImage @ 0x14023A1EC (KCBNeedsVirtualImage.c)
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     CmpInitializeDelayDerefContext @ 0x14035BE38 (CmpInitializeDelayDerefContext.c)
 *     CmpDrainDelayDerefContext @ 0x14035BE50 (CmpDrainDelayDerefContext.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     CmObReferenceObjectByName @ 0x1405CD0F0 (CmObReferenceObjectByName.c)
 *     CmpCheckAdminAccess @ 0x1405EA888 (CmpCheckAdminAccess.c)
 *     CmpReparseToVirtualPath @ 0x1405FFF2C (CmpReparseToVirtualPath.c)
 *     RtlFreeAnsiString @ 0x14063DA40 (RtlFreeAnsiString.c)
 *     CmpCleanupParseContext @ 0x14064A8A0 (CmpCleanupParseContext.c)
 *     CmpLockRegistryExclusive @ 0x1406679BC (CmpLockRegistryExclusive.c)
 *     SeDeleteAccessState @ 0x1406CC080 (SeDeleteAccessState.c)
 *     CmpLockKcbExclusive @ 0x1406DBABC (CmpLockKcbExclusive.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1406E3E60 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpDetachFromRegistryProcess @ 0x1406E589C (CmpDetachFromRegistryProcess.c)
 *     CmpAttachToRegistryProcess @ 0x1406E5AF0 (CmpAttachToRegistryProcess.c)
 *     CmpUnlockKcb @ 0x140709F20 (CmpUnlockKcb.c)
 *     CmpUnlockRegistry @ 0x14070D2B0 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x14070D2F0 (CmpLockRegistry.c)
 *     CmpSearchKeyControlBlockTree @ 0x14086F314 (CmpSearchKeyControlBlockTree.c)
 *     CmpReplicateKeyToVirtual @ 0x140870B24 (CmpReplicateKeyToVirtual.c)
 *     CmpExamineSaclForAuditEvent @ 0x140871DE0 (CmpExamineSaclForAuditEvent.c)
 *     CmpReportAuditVirtualizationEvent @ 0x140871EF8 (CmpReportAuditVirtualizationEvent.c)
 *     SeCreateAccessStateFromSubjectContext @ 0x14091D32C (SeCreateAccessStateFromSubjectContext.c)
 */

__int64 __fastcall CmKeyBodyReplicateToVirtual(struct _DMA_ADAPTER **a1, char a2, ACCESS_MASK a3, __int64 a4)
{
  char v7; // r15
  struct _DMA_ADAPTER *v8; // r14
  __int64 v9; // rdx
  __int64 v10; // rcx
  ULONG_PTR DmaOperations; // rdi
  __int64 v12; // rdx
  int AccessStateFromSubjectContext; // ebx
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r9
  int v24; // eax
  BOOLEAN v25; // [rsp+40h] [rbp-C0h] BYREF
  char v26; // [rsp+41h] [rbp-BFh] BYREF
  char v27; // [rsp+42h] [rbp-BEh]
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v29; // [rsp+58h] [rbp-A8h]
  struct _DMA_ADAPTER *v30; // [rsp+60h] [rbp-A0h] BYREF
  struct _DMA_ADAPTER **v31; // [rsp+68h] [rbp-98h]
  __int128 v32; // [rsp+70h] [rbp-90h] BYREF
  __int128 v33; // [rsp+80h] [rbp-80h] BYREF
  __int128 v34; // [rsp+90h] [rbp-70h]
  __int128 v35; // [rsp+A0h] [rbp-60h]
  _OWORD v36[19]; // [rsp+B0h] [rbp-50h] BYREF
  _OWORD v37[3]; // [rsp+1E0h] [rbp+E0h] BYREF
  _BYTE v38[160]; // [rsp+210h] [rbp+110h] BYREF
  _BYTE v39[224]; // [rsp+2B0h] [rbp+1B0h] BYREF

  v29 = 0LL;
  v27 = a2;
  v31 = a1;
  v25 = 0;
  v26 = 0;
  DestinationString = 0LL;
  memset(v37, 0, sizeof(v37));
  v32 = 0LL;
  memset(v38, 0, sizeof(v38));
  memset(v39, 0, sizeof(v39));
  v7 = 0;
  v33 = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  v8 = *a1;
  memset(v36, 0, 0x128uLL);
  LODWORD(v36[6]) = -1;
  *((_QWORD *)&v36[9] + 1) = &v36[9];
  *(_QWORD *)&v36[9] = &v36[9];
  memset((char *)&v36[13] + 8, 0, 0x50uLL);
  v30 = 0LL;
  CmpInitializeDelayDerefContext(&v32);
  CmpAttachToRegistryProcess(v37);
  while ( 1 )
  {
    if ( v7 )
      CmpLockRegistryExclusive(v10, v9);
    else
      CmpLockRegistry();
    DmaOperations = (ULONG_PTR)v8->DmaOperations;
    CmpLockKcbExclusive(DmaOperations);
    if ( !KCBNeedsVirtualImage() )
    {
LABEL_8:
      AccessStateFromSubjectContext = -1073741790;
LABEL_9:
      CmpUnlockKcb(DmaOperations);
      CmpUnlockRegistry(v15, v14);
      goto LABEL_10;
    }
    AccessStateFromSubjectContext = CmpPerformKeyBodyDeletionCheck(v8, 0LL);
    if ( AccessStateFromSubjectContext < 0 )
      goto LABEL_9;
    if ( (unsigned __int8)CmpReparseToVirtualPath(DmaOperations, v12, a4, &DestinationString) )
    {
      CmpUnlockKcb(DmaOperations);
      goto LABEL_26;
    }
    if ( (*(_DWORD *)(DmaOperations + 184) & 0x20) != 0 )
      goto LABEL_8;
    AccessStateFromSubjectContext = CmpCheckAdminAccess(
                                      a3,
                                      (PSECURITY_DESCRIPTOR)(*(_QWORD *)(DmaOperations + 88) + 32LL),
                                      a4,
                                      &v25);
    if ( AccessStateFromSubjectContext < 0 )
      goto LABEL_9;
    if ( !v25 )
      goto LABEL_8;
    v17 = CmpReplicateKeyToVirtual(DmaOperations);
    AccessStateFromSubjectContext = v17;
    if ( v17 != -1073741739 )
      break;
    CmpUnlockKcb(DmaOperations);
    CmpUnlockRegistry(v19, v18);
    v7 = 1;
  }
  if ( v17 < 0 )
    goto LABEL_9;
  AccessStateFromSubjectContext = CmpExamineSaclForAuditEvent(*(_QWORD *)(DmaOperations + 88) + 32LL, a4, &v26);
  if ( AccessStateFromSubjectContext < 0 )
    goto LABEL_9;
  if ( v26 )
  {
    AccessStateFromSubjectContext = CmpReportAuditVirtualizationEvent(DmaOperations, a4);
    if ( AccessStateFromSubjectContext < 0 )
      goto LABEL_9;
  }
  if ( !(unsigned __int8)CmpReparseToVirtualPath(DmaOperations, v20, a4, &DestinationString) )
  {
    AccessStateFromSubjectContext = -1073741670;
    goto LABEL_9;
  }
  CmpUnlockKcb(DmaOperations);
  CmpSearchKeyControlBlockTree(CmpSyncKcbCacheForHive, v29, &v32);
LABEL_26:
  CmpDrainDelayDerefContext((_QWORD **)&v32);
  CmpUnlockRegistry(v22, v21);
  LODWORD(v36[0]) = 8;
  *((_QWORD *)&v36[4] + 1) = v8[3].DmaOperations;
  AccessStateFromSubjectContext = SeCreateAccessStateFromSubjectContext(
                                    a4,
                                    (unsigned int)v38,
                                    (unsigned int)v39,
                                    a3,
                                    (__int64)CmKeyObjectType + 76);
  if ( AccessStateFromSubjectContext >= 0 )
  {
    *((_QWORD *)&v33 + 1) = 0LL;
    v24 = 1600;
    LODWORD(v33) = 48;
    if ( v27 != 1 )
      v24 = 576;
    DWORD2(v34) = v24;
    *(_QWORD *)&v34 = &DestinationString;
    v35 = 0LL;
    AccessStateFromSubjectContext = CmObReferenceObjectByName((int)&v33, (int)v38, a3, v23, 0, (__int64)v36, &v30);
    if ( AccessStateFromSubjectContext >= 0 )
    {
      *v31 = v30;
      HalPutDmaAdapter(v8);
      AccessStateFromSubjectContext = 0;
    }
    SeDeleteAccessState(v38);
  }
LABEL_10:
  CmpCleanupParseContext(v36, 0LL);
  if ( DestinationString.Buffer )
    RtlFreeAnsiString(&DestinationString);
  CmpDetachFromRegistryProcess(v37);
  return (unsigned int)AccessStateFromSubjectContext;
}
