/*
 * XREFs of CmKeyBodyReplicateToVirtual @ 0x1406A0A00
 * Callers:
 *     NtSetInformationKey @ 0x1405F3A00 (NtSetInformationKey.c)
 *     NtSetValueKey @ 0x140663DC0 (NtSetValueKey.c)
 *     NtRenameKey @ 0x140868C30 (NtRenameKey.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14027C520 (RtlInitUnicodeString.c)
 *     KCBNeedsVirtualImage @ 0x1402BBFDC (KCBNeedsVirtualImage.c)
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 *     CmpInitializeDelayDerefContext @ 0x1403510E8 (CmpInitializeDelayDerefContext.c)
 *     CmpDrainDelayDerefContext @ 0x140351100 (CmpDrainDelayDerefContext.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     memset @ 0x140414200 (memset.c)
 *     CmObReferenceObjectByName @ 0x1405CD0F0 (CmObReferenceObjectByName.c)
 *     CmpCheckAdminAccess @ 0x1405D9B08 (CmpCheckAdminAccess.c)
 *     SeDeleteAccessState @ 0x1405DC900 (SeDeleteAccessState.c)
 *     CmpLockKcbExclusive @ 0x1405EC35C (CmpLockKcbExclusive.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1405F4700 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpDetachFromRegistryProcess @ 0x1405F613C (CmpDetachFromRegistryProcess.c)
 *     CmpAttachToRegistryProcess @ 0x1405F6390 (CmpAttachToRegistryProcess.c)
 *     RtlFreeAnsiString @ 0x140602CB0 (RtlFreeAnsiString.c)
 *     CmpCleanupParseContext @ 0x140655A80 (CmpCleanupParseContext.c)
 *     CmpLockRegistryExclusive @ 0x14067278C (CmpLockRegistryExclusive.c)
 *     CmpReparseToVirtualPath @ 0x1406A0BEC (CmpReparseToVirtualPath.c)
 *     CmpUnlockKcb @ 0x1406F2B40 (CmpUnlockKcb.c)
 *     CmpUnlockRegistry @ 0x1406F5ED0 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1406F5F10 (CmpLockRegistry.c)
 *     CmpSearchKeyControlBlockTree @ 0x14086F1B4 (CmpSearchKeyControlBlockTree.c)
 *     CmpReplicateKeyToVirtual @ 0x1408709C4 (CmpReplicateKeyToVirtual.c)
 *     CmpExamineSaclForAuditEvent @ 0x140871C80 (CmpExamineSaclForAuditEvent.c)
 *     CmpReportAuditVirtualizationEvent @ 0x140871D98 (CmpReportAuditVirtualizationEvent.c)
 *     SeCreateAccessStateFromSubjectContext @ 0x14091D1CC (SeCreateAccessStateFromSubjectContext.c)
 */

__int64 __fastcall CmKeyBodyReplicateToVirtual(__int64 *a1, char a2, ACCESS_MASK a3, __int64 a4)
{
  char v7; // r15
  __int64 v8; // r14
  __int64 v9; // rdx
  __int64 v10; // r8
  _DWORD *v11; // r9
  __int64 v12; // rcx
  ULONG_PTR v13; // rdi
  __int64 v14; // rdx
  int AccessStateFromSubjectContext; // ebx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v19; // r8
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r9
  int v27; // eax
  BOOLEAN v28; // [rsp+40h] [rbp-C0h] BYREF
  char v29; // [rsp+41h] [rbp-BFh] BYREF
  char v30; // [rsp+42h] [rbp-BEh]
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v32; // [rsp+58h] [rbp-A8h] BYREF
  struct _DMA_ADAPTER *v33; // [rsp+60h] [rbp-A0h] BYREF
  __int64 *v34; // [rsp+68h] [rbp-98h]
  __int128 v35; // [rsp+70h] [rbp-90h] BYREF
  __int128 v36; // [rsp+80h] [rbp-80h] BYREF
  __int128 v37; // [rsp+90h] [rbp-70h]
  __int128 v38; // [rsp+A0h] [rbp-60h]
  _OWORD v39[19]; // [rsp+B0h] [rbp-50h] BYREF
  _OWORD v40[3]; // [rsp+1E0h] [rbp+E0h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT v41[5]; // [rsp+210h] [rbp+110h] BYREF
  _BYTE v42[224]; // [rsp+2B0h] [rbp+1B0h] BYREF

  v32 = 0LL;
  v30 = a2;
  v34 = a1;
  v28 = 0;
  v29 = 0;
  DestinationString = 0LL;
  memset(v40, 0, sizeof(v40));
  v35 = 0LL;
  memset(v41, 0, sizeof(v41));
  memset(v42, 0, sizeof(v42));
  v7 = 0;
  v36 = 0LL;
  v37 = 0LL;
  v38 = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  v8 = *a1;
  memset(v39, 0, 0x128uLL);
  LODWORD(v39[6]) = -1;
  *((_QWORD *)&v39[9] + 1) = &v39[9];
  *(_QWORD *)&v39[9] = &v39[9];
  memset((char *)&v39[13] + 8, 0, 0x50uLL);
  v33 = 0LL;
  CmpInitializeDelayDerefContext(&v35);
  CmpAttachToRegistryProcess((__int64)v40, v9, v10, v11);
  while ( 1 )
  {
    if ( v7 )
      CmpLockRegistryExclusive();
    else
      CmpLockRegistry(v12);
    v13 = *(_QWORD *)(v8 + 8);
    CmpLockKcbExclusive(v13);
    if ( !KCBNeedsVirtualImage(*(_QWORD *)(v8 + 8)) )
    {
LABEL_8:
      AccessStateFromSubjectContext = -1073741790;
LABEL_9:
      CmpUnlockKcb(v13);
      CmpUnlockRegistry(v17, v16);
      goto LABEL_10;
    }
    AccessStateFromSubjectContext = CmpPerformKeyBodyDeletionCheck(v8, 0LL);
    if ( AccessStateFromSubjectContext < 0 )
      goto LABEL_9;
    if ( (unsigned __int8)CmpReparseToVirtualPath(v13, v14, a4, &DestinationString) )
    {
      CmpUnlockKcb(v13);
      goto LABEL_26;
    }
    if ( (*(_DWORD *)(v13 + 184) & 0x20) != 0 )
      goto LABEL_8;
    AccessStateFromSubjectContext = CmpCheckAdminAccess(
                                      a3,
                                      (PSECURITY_DESCRIPTOR)(*(_QWORD *)(v13 + 88) + 32LL),
                                      a4,
                                      &v28);
    if ( AccessStateFromSubjectContext < 0 )
      goto LABEL_9;
    if ( !v28 )
      goto LABEL_8;
    LOBYTE(v19) = v7;
    v20 = CmpReplicateKeyToVirtual(v13, a4, v19, &v32);
    AccessStateFromSubjectContext = v20;
    if ( v20 != -1073741739 )
      break;
    CmpUnlockKcb(v13);
    CmpUnlockRegistry(v22, v21);
    v7 = 1;
  }
  if ( v20 < 0 )
    goto LABEL_9;
  AccessStateFromSubjectContext = CmpExamineSaclForAuditEvent(*(_QWORD *)(v13 + 88) + 32LL, a4, &v29);
  if ( AccessStateFromSubjectContext < 0 )
    goto LABEL_9;
  if ( v29 )
  {
    AccessStateFromSubjectContext = CmpReportAuditVirtualizationEvent(v13, a4);
    if ( AccessStateFromSubjectContext < 0 )
      goto LABEL_9;
  }
  if ( !(unsigned __int8)CmpReparseToVirtualPath(v13, v23, a4, &DestinationString) )
  {
    AccessStateFromSubjectContext = -1073741670;
    goto LABEL_9;
  }
  CmpUnlockKcb(v13);
  CmpSearchKeyControlBlockTree(CmpSyncKcbCacheForHive, v32, &v35);
LABEL_26:
  CmpDrainDelayDerefContext((_QWORD **)&v35);
  CmpUnlockRegistry(v25, v24);
  LODWORD(v39[0]) = 8;
  *((_QWORD *)&v39[4] + 1) = *(_QWORD *)(v8 + 56);
  AccessStateFromSubjectContext = SeCreateAccessStateFromSubjectContext(
                                    a4,
                                    (unsigned int)v41,
                                    (unsigned int)v42,
                                    a3,
                                    (__int64)CmKeyObjectType + 76);
  if ( AccessStateFromSubjectContext >= 0 )
  {
    *((_QWORD *)&v36 + 1) = 0LL;
    v27 = 1600;
    LODWORD(v36) = 48;
    if ( v30 != 1 )
      v27 = 576;
    DWORD2(v37) = v27;
    *(_QWORD *)&v37 = &DestinationString;
    v38 = 0LL;
    AccessStateFromSubjectContext = CmObReferenceObjectByName((int)&v36, (int)v41, a3, v26, 0, (__int64)v39, &v33);
    if ( AccessStateFromSubjectContext >= 0 )
    {
      *v34 = (__int64)v33;
      HalPutDmaAdapter((PADAPTER_OBJECT)v8);
      AccessStateFromSubjectContext = 0;
    }
    SeDeleteAccessState(v41);
  }
LABEL_10:
  CmpCleanupParseContext((__int64)v39, 0);
  if ( DestinationString.Buffer )
    RtlFreeAnsiString(&DestinationString);
  CmpDetachFromRegistryProcess((__int64)v40);
  return (unsigned int)AccessStateFromSubjectContext;
}
