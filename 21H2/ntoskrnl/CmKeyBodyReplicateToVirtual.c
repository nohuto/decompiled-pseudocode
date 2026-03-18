/*
 * XREFs of CmKeyBodyReplicateToVirtual @ 0x14091607C
 * Callers:
 *     NtSetValueKey @ 0x14071FAA0 (NtSetValueKey.c)
 *     NtSetInformationKey @ 0x1407C0160 (NtSetInformationKey.c)
 *     NtRenameKey @ 0x14090EF60 (NtRenameKey.c)
 * Callees:
 *     KCBNeedsVirtualImage @ 0x14023BD7C (KCBNeedsVirtualImage.c)
 *     CmpInitializeDelayDerefContext @ 0x1402AD320 (CmpInitializeDelayDerefContext.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     CmpDrainDelayDerefContext @ 0x140346C60 (CmpDrainDelayDerefContext.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     SepDeleteAccessState @ 0x1403478A0 (SepDeleteAccessState.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     CmpCleanupParseContext @ 0x14067FE98 (CmpCleanupParseContext.c)
 *     CmpCheckAdminAccess @ 0x1406B6880 (CmpCheckAdminAccess.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     CmpLockRegistryExclusive @ 0x14071B6EC (CmpLockRegistryExclusive.c)
 *     CmpLockKcbExclusive @ 0x1407C0854 (CmpLockKcbExclusive.c)
 *     SeReleaseSubjectContext @ 0x1407CA9B0 (SeReleaseSubjectContext.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x140915544 (CmpSearchKeyControlBlockTreeEx.c)
 *     CmpReparseToVirtualPath @ 0x140917400 (CmpReparseToVirtualPath.c)
 *     CmpReplicateKeyToVirtual @ 0x1409174A4 (CmpReplicateKeyToVirtual.c)
 *     CmpExamineSaclForAuditEvent @ 0x140918574 (CmpExamineSaclForAuditEvent.c)
 *     CmpReportAuditVirtualizationEvent @ 0x1409188E8 (CmpReportAuditVirtualizationEvent.c)
 *     SeCreateAccessStateFromSubjectContext @ 0x1409C6B8C (SeCreateAccessStateFromSubjectContext.c)
 *     CmObReferenceObjectByName @ 0x140AB4008 (CmObReferenceObjectByName.c)
 *     CmpUnlockRegistry @ 0x140AB4260 (CmpUnlockRegistry.c)
 *     CmpUnlockKcb @ 0x140AB4300 (CmpUnlockKcb.c)
 *     CmpLockRegistry @ 0x140AB4370 (CmpLockRegistry.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140AB43C0 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpAttachToRegistryProcess @ 0x140AB4550 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140AB4580 (CmpDetachFromRegistryProcess.c)
 */

__int64 __fastcall CmKeyBodyReplicateToVirtual(_QWORD **a1, char a2, ACCESS_MASK a3, __int64 a4)
{
  char v7; // r15
  _QWORD *v8; // r14
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdi
  __int64 v13; // rdx
  int AccessStateFromSubjectContext; // ebx
  __int64 v15; // r8
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  int v26; // r9d
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  BOOLEAN v33; // [rsp+40h] [rbp-C0h] BYREF
  char v34; // [rsp+41h] [rbp-BFh] BYREF
  char v35; // [rsp+42h] [rbp-BEh]
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-B8h] BYREF
  ULONG_PTR v37; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v38; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD *v39; // [rsp+68h] [rbp-98h]
  __int128 v40; // [rsp+70h] [rbp-90h] BYREF
  __int128 v41; // [rsp+80h] [rbp-80h] BYREF
  __int128 v42; // [rsp+90h] [rbp-70h]
  __int128 v43; // [rsp+A0h] [rbp-60h]
  _OWORD v44[19]; // [rsp+B0h] [rbp-50h] BYREF
  _OWORD v45[3]; // [rsp+1E0h] [rbp+E0h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT v46[5]; // [rsp+210h] [rbp+110h] BYREF
  _BYTE v47[224]; // [rsp+2B0h] [rbp+1B0h] BYREF

  v37 = 0LL;
  v35 = a2;
  v39 = a1;
  v33 = 0;
  v34 = 0;
  DestinationString = 0LL;
  memset(v45, 0, sizeof(v45));
  v40 = 0LL;
  memset(v46, 0, sizeof(v46));
  memset(v47, 0, sizeof(v47));
  v41 = 0LL;
  *(_QWORD *)&v43 = 0LL;
  v7 = 0;
  v42 = 0LL;
  DWORD2(v43) = 0;
  RtlInitUnicodeString(&DestinationString, 0LL);
  v8 = *a1;
  memset(v44, 0, 0x128uLL);
  LODWORD(v44[6]) = -1;
  *((_QWORD *)&v44[9] + 1) = &v44[9];
  *(_QWORD *)&v44[9] = &v44[9];
  memset((char *)&v44[13] + 8, 0, 0x50uLL);
  v38 = 0LL;
  CmpInitializeDelayDerefContext(&v40);
  CmpAttachToRegistryProcess(v45);
  while ( 1 )
  {
    if ( v7 )
      CmpLockRegistryExclusive();
    else
      CmpLockRegistry(v10, v9, v11);
    v12 = v8[1];
    CmpLockKcbExclusive(v12);
    if ( !KCBNeedsVirtualImage() )
    {
LABEL_27:
      AccessStateFromSubjectContext = -1073741790;
      goto LABEL_28;
    }
    AccessStateFromSubjectContext = CmpPerformKeyBodyDeletionCheck(v8, 0LL);
    if ( AccessStateFromSubjectContext < 0 )
      goto LABEL_28;
    if ( (unsigned __int8)CmpReparseToVirtualPath(v12, v13, a4, &DestinationString) )
    {
      CmpUnlockKcb(v12);
      goto LABEL_21;
    }
    if ( (*(_DWORD *)(v12 + 184) & 0x20) != 0 )
      goto LABEL_27;
    AccessStateFromSubjectContext = CmpCheckAdminAccess(
                                      a3,
                                      (PSECURITY_DESCRIPTOR)(*(_QWORD *)(v12 + 88) + 32LL),
                                      a4,
                                      &v33);
    if ( AccessStateFromSubjectContext < 0 )
      goto LABEL_28;
    if ( !v33 )
      goto LABEL_27;
    LOBYTE(v15) = v7;
    v16 = CmpReplicateKeyToVirtual(v12, a4, v15, &v37);
    AccessStateFromSubjectContext = v16;
    if ( v16 != -1073741739 )
      break;
    CmpUnlockKcb(v12);
    CmpUnlockRegistry(v18, v17, v19, v20);
    v7 = 1;
  }
  if ( v16 < 0 )
    goto LABEL_28;
  AccessStateFromSubjectContext = CmpExamineSaclForAuditEvent(*(_QWORD *)(v12 + 88) + 32LL, a4, &v34);
  if ( AccessStateFromSubjectContext < 0 )
    goto LABEL_28;
  if ( v34 )
  {
    AccessStateFromSubjectContext = CmpReportAuditVirtualizationEvent(v12, a4);
    if ( AccessStateFromSubjectContext < 0 )
      goto LABEL_28;
  }
  if ( !(unsigned __int8)CmpReparseToVirtualPath(v12, v21, a4, &DestinationString) )
  {
    AccessStateFromSubjectContext = -1073741670;
LABEL_28:
    CmpUnlockKcb(v12);
    CmpUnlockRegistry(v29, v28, v30, v31);
    goto LABEL_29;
  }
  CmpUnlockKcb(v12);
  CmpSearchKeyControlBlockTreeEx(
    (__int64 (__fastcall *)(ULONG_PTR, ULONG_PTR, __int64, __int64))CmpSyncKcbCacheForHive,
    v37,
    (__int64)&v40,
    0LL,
    1);
LABEL_21:
  CmpDrainDelayDerefContext((_QWORD **)&v40);
  CmpUnlockRegistry(v23, v22, v24, v25);
  LODWORD(v44[0]) = 8;
  *((_QWORD *)&v44[4] + 1) = v8[7];
  AccessStateFromSubjectContext = SeCreateAccessStateFromSubjectContext(
                                    a4,
                                    (unsigned int)v46,
                                    (unsigned int)v47,
                                    a3,
                                    (__int64)CmKeyObjectType + 76);
  if ( AccessStateFromSubjectContext >= 0 )
  {
    *((_QWORD *)&v41 + 1) = 0LL;
    v27 = 1600;
    LODWORD(v41) = 48;
    if ( v35 != 1 )
      v27 = 576;
    DWORD2(v42) = v27;
    *(_QWORD *)&v42 = &DestinationString;
    v43 = 0LL;
    AccessStateFromSubjectContext = CmObReferenceObjectByName(
                                      (unsigned int)&v41,
                                      (unsigned int)v46,
                                      a3,
                                      v26,
                                      0,
                                      (__int64)v44,
                                      (__int64)&v38);
    if ( AccessStateFromSubjectContext >= 0 )
    {
      *v39 = v38;
      ObfDereferenceObject(v8);
      AccessStateFromSubjectContext = 0;
    }
    SepDeleteAccessState((__int64)v46);
    SeReleaseSubjectContext(&v46[1]);
  }
LABEL_29:
  CmpCleanupParseContext(v44, 0LL);
  if ( DestinationString.Buffer )
    RtlFreeUnicodeString(&DestinationString);
  CmpDetachFromRegistryProcess(v45);
  return (unsigned int)AccessStateFromSubjectContext;
}
