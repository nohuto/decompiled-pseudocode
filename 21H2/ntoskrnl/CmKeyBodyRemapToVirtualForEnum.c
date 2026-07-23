/*
 * XREFs of CmKeyBodyRemapToVirtualForEnum @ 0x14064A4D0
 * Callers:
 *     NtQueryMultipleValueKey @ 0x140601D50 (NtQueryMultipleValueKey.c)
 *     NtEnumerateKey @ 0x1406E35B0 (NtEnumerateKey.c)
 *     NtEnumerateValueKey @ 0x1406E4050 (NtEnumerateValueKey.c)
 *     NtQueryValueKey @ 0x14070EEC0 (NtQueryValueKey.c)
 *     NtQueryKey @ 0x14070F950 (NtQueryKey.c)
 * Callees:
 *     CmpHasKcbBeenMirrored @ 0x14023A1D8 (CmpHasKcbBeenMirrored.c)
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     KCBIsVirtualizable @ 0x14026A510 (KCBIsVirtualizable.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     CmObReferenceObjectByName @ 0x1405CD0F0 (CmObReferenceObjectByName.c)
 *     CmpReparseToVirtualPath @ 0x1405FFF2C (CmpReparseToVirtualPath.c)
 *     CmpCleanupParseContext @ 0x14064A8A0 (CmpCleanupParseContext.c)
 *     SeCaptureSubjectContext @ 0x14064A950 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x14064B710 (SeReleaseSubjectContext.c)
 *     CmpIsSystemEntity @ 0x14064B910 (CmpIsSystemEntity.c)
 *     SeDeleteAccessState @ 0x1406CC080 (SeDeleteAccessState.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1406E3E60 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpDetachFromRegistryProcess @ 0x1406E589C (CmpDetachFromRegistryProcess.c)
 *     CmpAttachToRegistryProcess @ 0x1406E5AF0 (CmpAttachToRegistryProcess.c)
 *     CmpLockKcbShared @ 0x140709EF0 (CmpLockKcbShared.c)
 *     CmpUnlockKcb @ 0x140709F20 (CmpUnlockKcb.c)
 *     CmpUnlockRegistry @ 0x14070D2B0 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x14070D2F0 (CmpLockRegistry.c)
 *     CmVirtualKCBToRealPath @ 0x14086FC38 (CmVirtualKCBToRealPath.c)
 *     SeCreateAccessStateFromSubjectContext @ 0x14091D32C (SeCreateAccessStateFromSubjectContext.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmKeyBodyRemapToVirtualForEnum(
        struct _DMA_ADAPTER **a1,
        unsigned __int8 a2,
        int a3,
        struct _DMA_ADAPTER **a4)
{
  int v4; // ebx
  struct _DMA_ADAPTER *v7; // r13
  struct _DMA_ADAPTER *v8; // rdi
  char v9; // r14
  char v10; // r15
  ULONG_PTR DmaOperations; // rsi
  int AccessStateFromSubjectContext; // ebx
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rcx
  struct _DMA_ADAPTER **v16; // rsi
  int v17; // edx
  __int64 v18; // r9
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  char v24; // [rsp+41h] [rbp-BFh]
  PADAPTER_OBJECT DmaAdapter; // [rsp+48h] [rbp-B8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  struct _DMA_ADAPTER **v28; // [rsp+60h] [rbp-A0h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+68h] [rbp-98h] BYREF
  _DWORD v30[2]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v31; // [rsp+90h] [rbp-70h]
  UNICODE_STRING *p_DestinationString; // [rsp+98h] [rbp-68h]
  int v33; // [rsp+A0h] [rbp-60h]
  int v34; // [rsp+A4h] [rbp-5Ch]
  __int128 v35; // [rsp+A8h] [rbp-58h]
  _OWORD v36[19]; // [rsp+C0h] [rbp-40h] BYREF
  _OWORD v37[3]; // [rsp+1F0h] [rbp+F0h] BYREF
  _BYTE v38[160]; // [rsp+220h] [rbp+120h] BYREF
  _BYTE v39[224]; // [rsp+2C0h] [rbp+1C0h] BYREF

  v4 = a3;
  v28 = a1;
  DestinationString = 0LL;
  memset(v38, 0, sizeof(v38));
  memset(v39, 0, sizeof(v39));
  v30[1] = 0;
  v34 = 0;
  RtlInitUnicodeString(&DestinationString, 0LL);
  v7 = *a1;
  DmaAdapter = 0LL;
  memset(v37, 0, sizeof(v37));
  v8 = 0LL;
  memset(v36, 0, 0x128uLL);
  LODWORD(v36[6]) = -1;
  *a4 = 0LL;
  *((_QWORD *)&v36[9] + 1) = &v36[9];
  v9 = 0;
  *(_OWORD *)((char *)&v36[13] + 8) = 0LL;
  v24 = 0;
  *(_QWORD *)&v36[9] = &v36[9];
  v10 = 0;
  *(_OWORD *)((char *)&v36[14] + 8) = 0LL;
  *(_OWORD *)((char *)&v36[15] + 8) = 0LL;
  *(_OWORD *)((char *)&v36[16] + 8) = 0LL;
  *(_OWORD *)((char *)&v36[17] + 8) = 0LL;
  DmaOperations = (ULONG_PTR)v7->DmaOperations;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  if ( !*(_WORD *)(DmaOperations + 66) && (*(_DWORD *)&v7[3].Version & 0x10) == 0 )
  {
    if ( KCBIsVirtualizable(DmaOperations) )
    {
      v9 = 1;
LABEL_8:
      SeCaptureSubjectContext(&SubjectContext);
      if ( (unsigned __int8)CmpIsSystemEntity(a2) || v9 && !CmpHasKcbBeenMirrored(DmaOperations) )
      {
        AccessStateFromSubjectContext = 0;
        SeReleaseSubjectContext(&SubjectContext);
        goto LABEL_42;
      }
      CmpAttachToRegistryProcess(v37);
      CmpLockRegistry();
      CmpLockKcbShared(DmaOperations);
      if ( v9 )
      {
        AccessStateFromSubjectContext = CmpPerformKeyBodyDeletionCheck(v7, 0LL);
        if ( AccessStateFromSubjectContext < 0 )
        {
LABEL_26:
          CmpUnlockKcb(DmaOperations);
          goto LABEL_30;
        }
        if ( CmpReparseToVirtualPath(DmaOperations, v13, (__int64)&SubjectContext, &DestinationString) )
        {
          v4 = a3;
LABEL_16:
          CmpUnlockKcb(DmaOperations);
          CmpUnlockRegistry(v15, v14);
          v16 = v28;
          v17 = 8;
          LODWORD(v36[0]) = 8;
          if ( !v4 )
            v17 = 4104;
          *((_QWORD *)&v36[4] + 1) = (*v28)[3].DmaOperations;
          LODWORD(v36[0]) = v17;
          AccessStateFromSubjectContext = SeCreateAccessStateFromSubjectContext(
                                            (unsigned int)&SubjectContext,
                                            (unsigned int)v38,
                                            (unsigned int)v39,
                                            v4,
                                            (__int64)CmKeyObjectType + 76);
          if ( AccessStateFromSubjectContext < 0 )
            goto LABEL_40;
          v19 = 1600;
          v24 = 1;
          if ( a2 != 1 )
            v19 = 576;
          v30[0] = 48;
          v33 = v19;
          v31 = 0LL;
          p_DestinationString = &DestinationString;
          v35 = 0LL;
          AccessStateFromSubjectContext = CmObReferenceObjectByName(
                                            (int)v30,
                                            (int)v38,
                                            a3,
                                            v18,
                                            0,
                                            (__int64)v36,
                                            &DmaAdapter);
          if ( AccessStateFromSubjectContext < 0 )
          {
            v8 = DmaAdapter;
            if ( v10 )
              AccessStateFromSubjectContext = 0;
LABEL_31:
            if ( v8 )
              HalPutDmaAdapter(v8);
            if ( !v24 )
              goto LABEL_40;
            goto LABEL_39;
          }
          CmpLockRegistry();
          v8 = DmaAdapter;
          if ( !WORD1(DmaAdapter->DmaOperations->MapTransfer) )
          {
            CmpUnlockRegistry(v21, v20);
            if ( v9 )
            {
              *a4 = v8;
            }
            else
            {
              *v16 = v8;
              *a4 = v7;
            }
            AccessStateFromSubjectContext = 0;
LABEL_39:
            SeDeleteAccessState(v38);
LABEL_40:
            CmpDetachFromRegistryProcess(v37);
            SeReleaseSubjectContext(&SubjectContext);
            goto LABEL_42;
          }
          if ( v10 )
            AccessStateFromSubjectContext = 0;
LABEL_30:
          CmpUnlockRegistry(v21, v20);
          goto LABEL_31;
        }
      }
      else if ( (int)CmVirtualKCBToRealPath(DmaOperations, &DestinationString) >= 0 )
      {
        goto LABEL_16;
      }
      AccessStateFromSubjectContext = 0;
      goto LABEL_26;
    }
    if ( CmpVEEnabled && (*(_DWORD *)(DmaOperations + 184) & 0x1000000) != 0 )
    {
      v10 = 1;
      goto LABEL_8;
    }
  }
  AccessStateFromSubjectContext = 0;
LABEL_42:
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0);
  CmpCleanupParseContext(v36, 0LL);
  return (unsigned int)AccessStateFromSubjectContext;
}
