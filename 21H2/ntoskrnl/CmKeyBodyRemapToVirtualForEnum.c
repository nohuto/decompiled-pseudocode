/*
 * XREFs of CmKeyBodyRemapToVirtualForEnum @ 0x1406556B0
 * Callers:
 *     NtEnumerateKey @ 0x1405F3E50 (NtEnumerateKey.c)
 *     NtEnumerateValueKey @ 0x1405F48F0 (NtEnumerateValueKey.c)
 *     NtQueryMultipleValueKey @ 0x1406A1E20 (NtQueryMultipleValueKey.c)
 *     NtQueryValueKey @ 0x1406F7AE0 (NtQueryValueKey.c)
 *     NtQueryKey @ 0x1406F8570 (NtQueryKey.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14027C520 (RtlInitUnicodeString.c)
 *     KCBIsVirtualizable @ 0x14027C570 (KCBIsVirtualizable.c)
 *     CmpHasKcbBeenMirrored @ 0x1402BBFC8 (CmpHasKcbBeenMirrored.c)
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     memset @ 0x140414200 (memset.c)
 *     CmObReferenceObjectByName @ 0x1405CD0F0 (CmObReferenceObjectByName.c)
 *     SeDeleteAccessState @ 0x1405DC900 (SeDeleteAccessState.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1405F4700 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpDetachFromRegistryProcess @ 0x1405F613C (CmpDetachFromRegistryProcess.c)
 *     CmpAttachToRegistryProcess @ 0x1405F6390 (CmpAttachToRegistryProcess.c)
 *     CmpCleanupParseContext @ 0x140655A80 (CmpCleanupParseContext.c)
 *     SeCaptureSubjectContext @ 0x140655B30 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1406568F0 (SeReleaseSubjectContext.c)
 *     CmpIsSystemEntity @ 0x140656AF0 (CmpIsSystemEntity.c)
 *     CmpReparseToVirtualPath @ 0x1406A0BEC (CmpReparseToVirtualPath.c)
 *     CmpLockKcbShared @ 0x1406F2B10 (CmpLockKcbShared.c)
 *     CmpUnlockKcb @ 0x1406F2B40 (CmpUnlockKcb.c)
 *     CmpUnlockRegistry @ 0x1406F5ED0 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1406F5F10 (CmpLockRegistry.c)
 *     CmVirtualKCBToRealPath @ 0x14086FAD8 (CmVirtualKCBToRealPath.c)
 *     SeCreateAccessStateFromSubjectContext @ 0x14091D1CC (SeCreateAccessStateFromSubjectContext.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmKeyBodyRemapToVirtualForEnum(__int64 *a1, unsigned __int8 a2, int a3, _QWORD *a4)
{
  int v4; // ebx
  __int64 v7; // r13
  struct _DMA_ADAPTER *v8; // rdi
  char v9; // r14
  char v10; // r15
  ULONG_PTR v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // r8
  _DWORD *v14; // r9
  int AccessStateFromSubjectContext; // ebx
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rcx
  struct _DMA_ADAPTER **v19; // rsi
  int v20; // edx
  __int64 v21; // r9
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  char v27; // [rsp+41h] [rbp-BFh]
  PADAPTER_OBJECT DmaAdapter; // [rsp+48h] [rbp-B8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  __int64 *v31; // [rsp+60h] [rbp-A0h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+68h] [rbp-98h] BYREF
  _DWORD v33[2]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v34; // [rsp+90h] [rbp-70h]
  UNICODE_STRING *p_DestinationString; // [rsp+98h] [rbp-68h]
  int v36; // [rsp+A0h] [rbp-60h]
  int v37; // [rsp+A4h] [rbp-5Ch]
  __int128 v38; // [rsp+A8h] [rbp-58h]
  _OWORD v39[19]; // [rsp+C0h] [rbp-40h] BYREF
  _OWORD v40[3]; // [rsp+1F0h] [rbp+F0h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT v41[5]; // [rsp+220h] [rbp+120h] BYREF
  _BYTE v42[224]; // [rsp+2C0h] [rbp+1C0h] BYREF

  v4 = a3;
  v31 = a1;
  DestinationString = 0LL;
  memset(v41, 0, sizeof(v41));
  memset(v42, 0, sizeof(v42));
  v33[1] = 0;
  v37 = 0;
  RtlInitUnicodeString(&DestinationString, 0LL);
  v7 = *a1;
  DmaAdapter = 0LL;
  memset(v40, 0, sizeof(v40));
  v8 = 0LL;
  memset(v39, 0, 0x128uLL);
  LODWORD(v39[6]) = -1;
  *a4 = 0LL;
  *((_QWORD *)&v39[9] + 1) = &v39[9];
  v9 = 0;
  *(_OWORD *)((char *)&v39[13] + 8) = 0LL;
  v27 = 0;
  *(_QWORD *)&v39[9] = &v39[9];
  v10 = 0;
  *(_OWORD *)((char *)&v39[14] + 8) = 0LL;
  *(_OWORD *)((char *)&v39[15] + 8) = 0LL;
  *(_OWORD *)((char *)&v39[16] + 8) = 0LL;
  *(_OWORD *)((char *)&v39[17] + 8) = 0LL;
  v11 = *(_QWORD *)(v7 + 8);
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  if ( !*(_WORD *)(v11 + 66) && (*(_DWORD *)(v7 + 48) & 0x10) == 0 )
  {
    if ( KCBIsVirtualizable(v11) )
    {
      v9 = 1;
LABEL_8:
      SeCaptureSubjectContext(&SubjectContext);
      if ( (unsigned __int8)CmpIsSystemEntity(a2, &SubjectContext, &v39[1]) || v9 && !CmpHasKcbBeenMirrored(v11) )
      {
        AccessStateFromSubjectContext = 0;
        SeReleaseSubjectContext(&SubjectContext);
        goto LABEL_42;
      }
      CmpAttachToRegistryProcess((__int64)v40, v12, v13, v14);
      CmpLockRegistry();
      CmpLockKcbShared(v11);
      if ( v9 )
      {
        AccessStateFromSubjectContext = CmpPerformKeyBodyDeletionCheck(v7, 0LL);
        if ( AccessStateFromSubjectContext < 0 )
        {
LABEL_26:
          CmpUnlockKcb(v11);
          goto LABEL_30;
        }
        if ( (unsigned __int8)CmpReparseToVirtualPath(v11, v16, &SubjectContext, &DestinationString) )
        {
          v4 = a3;
LABEL_16:
          CmpUnlockKcb(v11);
          CmpUnlockRegistry(v18, v17);
          v19 = (struct _DMA_ADAPTER **)v31;
          v20 = 8;
          LODWORD(v39[0]) = 8;
          if ( !v4 )
            v20 = 4104;
          *((_QWORD *)&v39[4] + 1) = *(_QWORD *)(*v31 + 56);
          LODWORD(v39[0]) = v20;
          AccessStateFromSubjectContext = SeCreateAccessStateFromSubjectContext(
                                            (unsigned int)&SubjectContext,
                                            (unsigned int)v41,
                                            (unsigned int)v42,
                                            v4,
                                            (__int64)CmKeyObjectType + 76);
          if ( AccessStateFromSubjectContext < 0 )
            goto LABEL_40;
          v22 = 1600;
          v27 = 1;
          if ( a2 != 1 )
            v22 = 576;
          v33[0] = 48;
          v36 = v22;
          v34 = 0LL;
          p_DestinationString = &DestinationString;
          v38 = 0LL;
          AccessStateFromSubjectContext = CmObReferenceObjectByName(
                                            (int)v33,
                                            (int)v41,
                                            a3,
                                            v21,
                                            0,
                                            (__int64)v39,
                                            &DmaAdapter);
          if ( AccessStateFromSubjectContext < 0 )
          {
            v8 = DmaAdapter;
            if ( v10 )
              AccessStateFromSubjectContext = 0;
LABEL_31:
            if ( v8 )
              HalPutDmaAdapter(v8);
            if ( !v27 )
              goto LABEL_40;
            goto LABEL_39;
          }
          CmpLockRegistry();
          v8 = DmaAdapter;
          if ( !WORD1(DmaAdapter->DmaOperations->MapTransfer) )
          {
            CmpUnlockRegistry(v24, v23);
            if ( v9 )
            {
              *a4 = v8;
            }
            else
            {
              *v19 = v8;
              *a4 = v7;
            }
            AccessStateFromSubjectContext = 0;
LABEL_39:
            SeDeleteAccessState(v41);
LABEL_40:
            CmpDetachFromRegistryProcess((__int64)v40);
            SeReleaseSubjectContext(&SubjectContext);
            goto LABEL_42;
          }
          if ( v10 )
            AccessStateFromSubjectContext = 0;
LABEL_30:
          CmpUnlockRegistry(v24, v23);
          goto LABEL_31;
        }
      }
      else if ( (int)CmVirtualKCBToRealPath(v11, &DestinationString) >= 0 )
      {
        goto LABEL_16;
      }
      AccessStateFromSubjectContext = 0;
      goto LABEL_26;
    }
    if ( CmpVEEnabled && (*(_DWORD *)(v11 + 184) & 0x1000000) != 0 )
    {
      v10 = 1;
      goto LABEL_8;
    }
  }
  AccessStateFromSubjectContext = 0;
LABEL_42:
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0);
  CmpCleanupParseContext(v39, 0LL);
  return (unsigned int)AccessStateFromSubjectContext;
}
