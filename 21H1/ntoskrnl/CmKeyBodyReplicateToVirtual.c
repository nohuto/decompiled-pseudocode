/*
 * XREFs of CmKeyBodyReplicateToVirtual @ 0x1406D0150
 * Callers:
 *     NtSetInformationKey @ 0x1405FA5C0 (NtSetInformationKey.c)
 *     NtSetValueKey @ 0x140618C70 (NtSetValueKey.c)
 *     NtRenameKey @ 0x1408642D0 (NtRenameKey.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140206450 (RtlInitUnicodeString.c)
 *     CmpDrainDelayDerefContext @ 0x14025ED80 (CmpDrainDelayDerefContext.c)
 *     CmpInitializeDelayDerefContext @ 0x14025EE84 (CmpInitializeDelayDerefContext.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     KCBNeedsVirtualImage @ 0x14030B554 (KCBNeedsVirtualImage.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
 *     RtlFreeAnsiString @ 0x1405D8770 (RtlFreeAnsiString.c)
 *     CmpCleanupParseContext @ 0x1405EAEC0 (CmpCleanupParseContext.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1405FA510 (CmpPerformKeyBodyDeletionCheck.c)
 *     SeDeleteAccessState @ 0x140602120 (SeDeleteAccessState.c)
 *     ObReferenceObjectByName @ 0x140613480 (ObReferenceObjectByName.c)
 *     CmpAttachToRegistryProcess @ 0x14061FF00 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140621720 (CmpDetachFromRegistryProcess.c)
 *     CmpUnlockKcb @ 0x140626230 (CmpUnlockKcb.c)
 *     CmpUnlockRegistry @ 0x140629290 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1406292D0 (CmpLockRegistry.c)
 *     CmpLockRegistryExclusive @ 0x14069120C (CmpLockRegistryExclusive.c)
 *     CmpLockKcbExclusive @ 0x140695D18 (CmpLockKcbExclusive.c)
 *     CmpCheckAdminAccess @ 0x1406BBE58 (CmpCheckAdminAccess.c)
 *     CmpReparseToVirtualPath @ 0x1406D0328 (CmpReparseToVirtualPath.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x14086ABD4 (CmpSearchKeyControlBlockTreeEx.c)
 *     CmpReplicateKeyToVirtual @ 0x14086C20C (CmpReplicateKeyToVirtual.c)
 *     CmpExamineSaclForAuditEvent @ 0x14086CE1C (CmpExamineSaclForAuditEvent.c)
 *     CmpReportAuditVirtualizationEvent @ 0x14086CF34 (CmpReportAuditVirtualizationEvent.c)
 *     SeCreateAccessStateFromSubjectContext @ 0x140918ADC (SeCreateAccessStateFromSubjectContext.c)
 */

__int64 __fastcall CmKeyBodyReplicateToVirtual(__int64 *a1, char a2, ACCESS_MASK a3, __int64 a4)
{
  char v7; // r15
  __int64 v8; // r14
  __int64 v9; // rdx
  __int64 v10; // r8
  _DWORD *v11; // r9
  ULONG_PTR v12; // rdi
  __int64 v13; // rdx
  int AccessStateFromSubjectContext; // ebx
  __int64 v15; // rdx
  __int64 v16; // r8
  _DWORD *v17; // r9
  __int64 v19; // r8
  int v20; // eax
  __int64 v21; // rdx
  int v22; // edx
  BOOLEAN v23; // [rsp+40h] [rbp-C0h] BYREF
  char v24; // [rsp+41h] [rbp-BFh] BYREF
  char v25; // [rsp+42h] [rbp-BEh]
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v27; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v28; // [rsp+60h] [rbp-A0h] BYREF
  __int64 *v29; // [rsp+68h] [rbp-98h]
  __int128 v30; // [rsp+70h] [rbp-90h] BYREF
  _OWORD v31[19]; // [rsp+80h] [rbp-80h] BYREF
  _OWORD v32[3]; // [rsp+1B0h] [rbp+B0h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT v33[5]; // [rsp+1E0h] [rbp+E0h] BYREF
  _BYTE v34[224]; // [rsp+280h] [rbp+180h] BYREF

  v27 = 0LL;
  v25 = a2;
  v29 = a1;
  v23 = 0;
  v24 = 0;
  DestinationString = 0LL;
  memset(v32, 0, sizeof(v32));
  v30 = 0LL;
  memset(v33, 0, sizeof(v33));
  memset(v34, 0, sizeof(v34));
  v7 = 0;
  RtlInitUnicodeString(&DestinationString, 0LL);
  v8 = *a1;
  memset(v31, 0, 0x128uLL);
  LODWORD(v31[6]) = -1;
  *((_QWORD *)&v31[9] + 1) = &v31[9];
  *(_QWORD *)&v31[9] = &v31[9];
  memset((char *)&v31[13] + 8, 0, 0x50uLL);
  v28 = 0LL;
  CmpInitializeDelayDerefContext(&v30);
  CmpAttachToRegistryProcess((__int64)v32, v9, v10, v11);
  while ( 1 )
  {
    if ( v7 )
      CmpLockRegistryExclusive();
    else
      CmpLockRegistry();
    v12 = *(_QWORD *)(v8 + 8);
    CmpLockKcbExclusive(v12);
    if ( !KCBNeedsVirtualImage(*(_QWORD *)(v8 + 8)) )
    {
LABEL_8:
      AccessStateFromSubjectContext = -1073741790;
LABEL_9:
      CmpUnlockKcb(v12);
      CmpUnlockRegistry();
      goto LABEL_10;
    }
    AccessStateFromSubjectContext = CmpPerformKeyBodyDeletionCheck(v8, 0LL);
    if ( AccessStateFromSubjectContext < 0 )
      goto LABEL_9;
    if ( (unsigned __int8)CmpReparseToVirtualPath(v12, v13, a4, &DestinationString) )
    {
      CmpUnlockKcb(v12);
      goto LABEL_26;
    }
    if ( (*(_DWORD *)(v12 + 184) & 0x20) != 0 )
      goto LABEL_8;
    AccessStateFromSubjectContext = CmpCheckAdminAccess(
                                      a3,
                                      (PSECURITY_DESCRIPTOR)(*(_QWORD *)(v12 + 88) + 32LL),
                                      a4,
                                      &v23);
    if ( AccessStateFromSubjectContext < 0 )
      goto LABEL_9;
    if ( !v23 )
      goto LABEL_8;
    LOBYTE(v19) = v7;
    v20 = CmpReplicateKeyToVirtual(v12, a4, v19, &v27);
    AccessStateFromSubjectContext = v20;
    if ( v20 != -1073741739 )
      break;
    CmpUnlockKcb(v12);
    CmpUnlockRegistry();
    v7 = 1;
  }
  if ( v20 < 0 )
    goto LABEL_9;
  AccessStateFromSubjectContext = CmpExamineSaclForAuditEvent(*(_QWORD *)(v12 + 88) + 32LL, a4, &v24);
  if ( AccessStateFromSubjectContext < 0 )
    goto LABEL_9;
  if ( v24 )
  {
    AccessStateFromSubjectContext = CmpReportAuditVirtualizationEvent(v12, a4);
    if ( AccessStateFromSubjectContext < 0 )
      goto LABEL_9;
  }
  if ( !(unsigned __int8)CmpReparseToVirtualPath(v12, v21, a4, &DestinationString) )
  {
    AccessStateFromSubjectContext = -1073741670;
    goto LABEL_9;
  }
  CmpUnlockKcb(v12);
  CmpSearchKeyControlBlockTreeEx(CmpSyncKcbCacheForHive, v27, &v30, 0LL, 1);
LABEL_26:
  CmpDrainDelayDerefContext((_QWORD **)&v30);
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
    v22 = 1600;
    if ( v25 != 1 )
      v22 = 576;
    AccessStateFromSubjectContext = ObReferenceObjectByName(
                                      (unsigned __int64)&DestinationString,
                                      v22,
                                      (__int64 *)v33,
                                      a3,
                                      (__int64)CmKeyObjectType,
                                      0,
                                      (__int64)v31,
                                      (PADAPTER_OBJECT *)&v28);
    if ( AccessStateFromSubjectContext >= 0 )
    {
      *v29 = v28;
      HalPutDmaAdapter((PADAPTER_OBJECT)v8);
      AccessStateFromSubjectContext = 0;
    }
    SeDeleteAccessState(v33);
  }
LABEL_10:
  CmpCleanupParseContext((__int64)v31, 0);
  if ( DestinationString.Buffer )
    RtlFreeAnsiString(&DestinationString);
  CmpDetachFromRegistryProcess((__int64)v32, v15, v16, v17);
  return (unsigned int)AccessStateFromSubjectContext;
}
