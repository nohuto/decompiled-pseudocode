/*
 * XREFs of CmKeyBodyReplicateToVirtual @ 0x1406C4A0C
 * Callers:
 *     NtSetValueKey @ 0x14066DEB0 (NtSetValueKey.c)
 *     NtSetInformationKey @ 0x1406766B0 (NtSetInformationKey.c)
 *     NtRenameKey @ 0x14086B010 (NtRenameKey.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140210D50 (RtlInitUnicodeString.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     CmpInitializeDelayDerefContext @ 0x140227238 (CmpInitializeDelayDerefContext.c)
 *     CmpDrainDelayDerefContext @ 0x140227250 (CmpDrainDelayDerefContext.c)
 *     KCBNeedsVirtualImage @ 0x140319D18 (KCBNeedsVirtualImage.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     memset @ 0x140411300 (memset.c)
 *     CmObReferenceObjectByName @ 0x1405CBB0C (CmObReferenceObjectByName.c)
 *     SeDeleteAccessState @ 0x140601D90 (SeDeleteAccessState.c)
 *     CmpCleanupParseContext @ 0x14060C8A0 (CmpCleanupParseContext.c)
 *     CmpUnlockKcb @ 0x140613840 (CmpUnlockKcb.c)
 *     CmpUnlockRegistry @ 0x140616950 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140616990 (CmpLockRegistry.c)
 *     RtlFreeAnsiString @ 0x140632500 (RtlFreeAnsiString.c)
 *     CmpLockKcbExclusive @ 0x140670B6C (CmpLockKcbExclusive.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1406773C0 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpDetachFromRegistryProcess @ 0x140678E90 (CmpDetachFromRegistryProcess.c)
 *     CmpAttachToRegistryProcess @ 0x1406790E0 (CmpAttachToRegistryProcess.c)
 *     CmpCheckAdminAccess @ 0x1406C33FC (CmpCheckAdminAccess.c)
 *     CmpReparseToVirtualPath @ 0x1406C4BF8 (CmpReparseToVirtualPath.c)
 *     CmpLockRegistryExclusive @ 0x1407013AC (CmpLockRegistryExclusive.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x1408719A4 (CmpSearchKeyControlBlockTreeEx.c)
 *     CmpReplicateKeyToVirtual @ 0x140873194 (CmpReplicateKeyToVirtual.c)
 *     CmpExamineSaclForAuditEvent @ 0x140874434 (CmpExamineSaclForAuditEvent.c)
 *     CmpReportAuditVirtualizationEvent @ 0x14087454C (CmpReportAuditVirtualizationEvent.c)
 *     SeCreateAccessStateFromSubjectContext @ 0x14091FA0C (SeCreateAccessStateFromSubjectContext.c)
 */

__int64 __fastcall CmKeyBodyReplicateToVirtual(__int64 *a1, char a2, ACCESS_MASK a3, __int64 a4)
{
  char v7; // r15
  __int64 v8; // r14
  __int64 v9; // rdx
  __int64 v10; // rcx
  ULONG_PTR v11; // rdi
  __int64 v12; // rdx
  int AccessStateFromSubjectContext; // ebx
  __int64 v15; // r8
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // r9
  int v19; // eax
  BOOLEAN v20; // [rsp+40h] [rbp-C0h] BYREF
  char v21; // [rsp+41h] [rbp-BFh] BYREF
  char v22; // [rsp+42h] [rbp-BEh]
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v24; // [rsp+58h] [rbp-A8h] BYREF
  struct _DMA_ADAPTER *v25; // [rsp+60h] [rbp-A0h] BYREF
  __int64 *v26; // [rsp+68h] [rbp-98h]
  __int128 v27; // [rsp+70h] [rbp-90h] BYREF
  __int128 v28; // [rsp+80h] [rbp-80h] BYREF
  __int128 v29; // [rsp+90h] [rbp-70h]
  __int128 v30; // [rsp+A0h] [rbp-60h]
  _OWORD v31[19]; // [rsp+B0h] [rbp-50h] BYREF
  _OWORD v32[3]; // [rsp+1E0h] [rbp+E0h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT v33[5]; // [rsp+210h] [rbp+110h] BYREF
  _BYTE v34[224]; // [rsp+2B0h] [rbp+1B0h] BYREF

  v24 = 0LL;
  v22 = a2;
  v26 = a1;
  v20 = 0;
  v21 = 0;
  DestinationString = 0LL;
  memset(v32, 0, sizeof(v32));
  v27 = 0LL;
  memset(v33, 0, sizeof(v33));
  memset(v34, 0, sizeof(v34));
  v7 = 0;
  v28 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  v8 = *a1;
  memset(v31, 0, 0x128uLL);
  LODWORD(v31[6]) = -1;
  *((_QWORD *)&v31[9] + 1) = &v31[9];
  *(_QWORD *)&v31[9] = &v31[9];
  memset((char *)&v31[13] + 8, 0, 0x50uLL);
  v25 = 0LL;
  CmpInitializeDelayDerefContext(&v27);
  CmpAttachToRegistryProcess((__int64)v32);
  while ( 1 )
  {
    if ( v7 )
      CmpLockRegistryExclusive(v10, v9);
    else
      CmpLockRegistry();
    v11 = *(_QWORD *)(v8 + 8);
    CmpLockKcbExclusive(v11);
    if ( !KCBNeedsVirtualImage(*(_QWORD *)(v8 + 8)) )
    {
LABEL_8:
      AccessStateFromSubjectContext = -1073741790;
LABEL_9:
      CmpUnlockKcb(v11);
      CmpUnlockRegistry();
      goto LABEL_10;
    }
    AccessStateFromSubjectContext = CmpPerformKeyBodyDeletionCheck(v8, 0LL);
    if ( AccessStateFromSubjectContext < 0 )
      goto LABEL_9;
    if ( (unsigned __int8)CmpReparseToVirtualPath(v11, v12, a4, &DestinationString) )
    {
      CmpUnlockKcb(v11);
      goto LABEL_26;
    }
    if ( (*(_DWORD *)(v11 + 184) & 0x20) != 0 )
      goto LABEL_8;
    AccessStateFromSubjectContext = CmpCheckAdminAccess(
                                      a3,
                                      (PSECURITY_DESCRIPTOR)(*(_QWORD *)(v11 + 88) + 32LL),
                                      a4,
                                      &v20);
    if ( AccessStateFromSubjectContext < 0 )
      goto LABEL_9;
    if ( !v20 )
      goto LABEL_8;
    LOBYTE(v15) = v7;
    v16 = CmpReplicateKeyToVirtual(v11, a4, v15, &v24);
    AccessStateFromSubjectContext = v16;
    if ( v16 != -1073741739 )
      break;
    CmpUnlockKcb(v11);
    CmpUnlockRegistry();
    v7 = 1;
  }
  if ( v16 < 0 )
    goto LABEL_9;
  AccessStateFromSubjectContext = CmpExamineSaclForAuditEvent(*(_QWORD *)(v11 + 88) + 32LL, a4, &v21);
  if ( AccessStateFromSubjectContext < 0 )
    goto LABEL_9;
  if ( v21 )
  {
    AccessStateFromSubjectContext = CmpReportAuditVirtualizationEvent(v11, a4);
    if ( AccessStateFromSubjectContext < 0 )
      goto LABEL_9;
  }
  if ( !(unsigned __int8)CmpReparseToVirtualPath(v11, v17, a4, &DestinationString) )
  {
    AccessStateFromSubjectContext = -1073741670;
    goto LABEL_9;
  }
  CmpUnlockKcb(v11);
  CmpSearchKeyControlBlockTreeEx(CmpSyncKcbCacheForHive, v24, &v27, 0LL, 1);
LABEL_26:
  CmpDrainDelayDerefContext((_QWORD **)&v27);
  CmpUnlockRegistry();
  LODWORD(v31[0]) = 8;
  *((_QWORD *)&v31[4] + 1) = *(_QWORD *)(v8 + 56);
  AccessStateFromSubjectContext = SeCreateAccessStateFromSubjectContext(
                                    a4,
                                    (unsigned int)v33,
                                    (unsigned int)v34,
                                    a3,
                                    (__int64)CmKeyObjectType + 76);
  if ( AccessStateFromSubjectContext >= 0 )
  {
    *((_QWORD *)&v28 + 1) = 0LL;
    v19 = 1600;
    LODWORD(v28) = 48;
    if ( v22 != 1 )
      v19 = 576;
    DWORD2(v29) = v19;
    *(_QWORD *)&v29 = &DestinationString;
    v30 = 0LL;
    AccessStateFromSubjectContext = CmObReferenceObjectByName((int)&v28, (int)v33, a3, v18, 0, (__int64)v31, &v25);
    if ( AccessStateFromSubjectContext >= 0 )
    {
      *v26 = (__int64)v25;
      HalPutDmaAdapter((PADAPTER_OBJECT)v8);
      AccessStateFromSubjectContext = 0;
    }
    SeDeleteAccessState(v33);
  }
LABEL_10:
  CmpCleanupParseContext((__int64)v31, 0);
  if ( DestinationString.Buffer )
    RtlFreeAnsiString(&DestinationString);
  CmpDetachFromRegistryProcess((__int64)v32);
  return (unsigned int)AccessStateFromSubjectContext;
}
