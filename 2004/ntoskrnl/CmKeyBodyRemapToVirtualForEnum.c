/*
 * XREFs of CmKeyBodyRemapToVirtualForEnum @ 0x140694210
 * Callers:
 *     NtEnumerateValueKey @ 0x1405E8E00 (NtEnumerateValueKey.c)
 *     NtQueryMultipleValueKey @ 0x140654D60 (NtQueryMultipleValueKey.c)
 *     NtEnumerateKey @ 0x140672B00 (NtEnumerateKey.c)
 *     NtQueryKey @ 0x140695470 (NtQueryKey.c)
 *     NtQueryValueKey @ 0x140695B10 (NtQueryValueKey.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140298F60 (RtlInitUnicodeString.c)
 *     KCBIsVirtualizable @ 0x140298FB0 (KCBIsVirtualizable.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memset @ 0x14040A280 (memset.c)
 *     CmpAttachToRegistryProcess @ 0x1405EA8E0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x1405EC100 (CmpDetachFromRegistryProcess.c)
 *     CmpLockKcbShared @ 0x1405F0BE0 (CmpLockKcbShared.c)
 *     CmpUnlockKcb @ 0x1405F0C10 (CmpUnlockKcb.c)
 *     CmpUnlockRegistry @ 0x1405F3D20 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1405F3D60 (CmpLockRegistry.c)
 *     CmpReparseToVirtualPath @ 0x14064FC48 (CmpReparseToVirtualPath.c)
 *     ObReferenceObjectByName @ 0x140668760 (ObReferenceObjectByName.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1406725F0 (CmpPerformKeyBodyDeletionCheck.c)
 *     SeDeleteAccessState @ 0x14067A200 (SeDeleteAccessState.c)
 *     CmpIsSystemEntity @ 0x140693D90 (CmpIsSystemEntity.c)
 *     CmpCleanupParseContext @ 0x140694400 (CmpCleanupParseContext.c)
 *     SeCaptureSubjectContext @ 0x1406944B0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x140695270 (SeReleaseSubjectContext.c)
 *     CmVirtualKCBToRealPath @ 0x14086C7FC (CmVirtualKCBToRealPath.c)
 *     SeCreateAccessStateFromSubjectContext @ 0x140919D8C (SeCreateAccessStateFromSubjectContext.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmKeyBodyRemapToVirtualForEnum(__int64 *a1, char a2, unsigned int a3, __int64 *a4)
{
  unsigned int v4; // ebx
  __int64 v8; // rsi
  char v9; // r14
  ULONG_PTR v10; // rdi
  int AccessStateFromSubjectContext; // ebx
  __int64 v13; // rdx
  __int64 v14; // rax
  int v15; // edx
  int v16; // edx
  char v17; // [rsp+40h] [rbp-C0h]
  __int64 v19; // [rsp+48h] [rbp-B8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+60h] [rbp-A0h] BYREF
  _OWORD v22[19]; // [rsp+80h] [rbp-80h] BYREF
  _OWORD v23[3]; // [rsp+1B0h] [rbp+B0h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT v24[5]; // [rsp+1E0h] [rbp+E0h] BYREF
  _BYTE v25[224]; // [rsp+280h] [rbp+180h] BYREF

  v4 = a3;
  DestinationString = 0LL;
  memset(v24, 0, sizeof(v24));
  memset(v25, 0, sizeof(v25));
  RtlInitUnicodeString(&DestinationString, 0LL);
  v8 = *a1;
  v19 = 0LL;
  memset(v23, 0, sizeof(v23));
  memset(v22, 0, 0x128uLL);
  LODWORD(v22[6]) = -1;
  *a4 = 0LL;
  *((_QWORD *)&v22[9] + 1) = &v22[9];
  v9 = 0;
  *(_OWORD *)((char *)&v22[13] + 8) = 0LL;
  v17 = 0;
  *(_QWORD *)&v22[9] = &v22[9];
  *(_OWORD *)((char *)&v22[14] + 8) = 0LL;
  *(_OWORD *)((char *)&v22[15] + 8) = 0LL;
  *(_OWORD *)((char *)&v22[16] + 8) = 0LL;
  *(_OWORD *)((char *)&v22[17] + 8) = 0LL;
  v10 = *(_QWORD *)(v8 + 8);
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  if ( !*(_WORD *)(v10 + 66) && (*(_DWORD *)(v8 + 48) & 0x10) == 0 )
  {
    if ( KCBIsVirtualizable(v10) )
    {
      v9 = 1;
      goto LABEL_5;
    }
    if ( CmpVEEnabled && (*(_DWORD *)(v10 + 184) & 0x1000000) != 0 )
    {
      v17 = 1;
LABEL_5:
      SeCaptureSubjectContext(&SubjectContext);
      if ( CmpIsSystemEntity(a2, &SubjectContext, (int *)&v22[1]) )
      {
        AccessStateFromSubjectContext = 0;
LABEL_7:
        SeReleaseSubjectContext(&SubjectContext);
        goto LABEL_8;
      }
      if ( v9 && (*(_DWORD *)(v10 + 184) & 0x800000) == 0 )
      {
        AccessStateFromSubjectContext = 0;
        goto LABEL_7;
      }
      CmpAttachToRegistryProcess((__int64)v23);
      CmpLockRegistry();
      CmpLockKcbShared(v10);
      if ( v9 )
      {
        AccessStateFromSubjectContext = CmpPerformKeyBodyDeletionCheck(v8, 0LL);
        if ( AccessStateFromSubjectContext < 0 )
        {
LABEL_32:
          CmpUnlockKcb(v10);
          CmpUnlockRegistry();
LABEL_38:
          CmpDetachFromRegistryProcess((__int64)v23);
          goto LABEL_7;
        }
        if ( CmpReparseToVirtualPath(v10, v13, (__int64)&SubjectContext, &DestinationString) )
        {
          v4 = a3;
          goto LABEL_22;
        }
      }
      else if ( (int)CmVirtualKCBToRealPath(v10, &DestinationString) >= 0 )
      {
LABEL_22:
        CmpUnlockKcb(v10);
        CmpUnlockRegistry();
        v14 = *a1;
        v15 = 8;
        LODWORD(v22[0]) = 8;
        if ( !v4 )
          v15 = 4104;
        *((_QWORD *)&v22[4] + 1) = *(_QWORD *)(v14 + 56);
        LODWORD(v22[0]) = v15;
        AccessStateFromSubjectContext = SeCreateAccessStateFromSubjectContext(
                                          (unsigned int)&SubjectContext,
                                          (unsigned int)v24,
                                          (unsigned int)v25,
                                          v4,
                                          (__int64)CmKeyObjectType + 76);
        if ( AccessStateFromSubjectContext < 0 )
          goto LABEL_38;
        v16 = 1600;
        if ( a2 != 1 )
          v16 = 576;
        AccessStateFromSubjectContext = ObReferenceObjectByName(
                                          (__int64)&DestinationString,
                                          v16,
                                          (__int64 *)v24,
                                          a3,
                                          (__int64)CmKeyObjectType,
                                          0,
                                          (__int64)v22,
                                          (PADAPTER_OBJECT *)&v19);
        if ( AccessStateFromSubjectContext >= 0 )
        {
          if ( v9 )
          {
            *a4 = v19;
          }
          else
          {
            *a1 = v19;
            *a4 = v8;
          }
        }
        else if ( !v17 )
        {
          goto LABEL_37;
        }
        AccessStateFromSubjectContext = 0;
LABEL_37:
        SeDeleteAccessState(v24);
        goto LABEL_38;
      }
      AccessStateFromSubjectContext = 0;
      goto LABEL_32;
    }
  }
  AccessStateFromSubjectContext = 0;
LABEL_8:
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0);
  CmpCleanupParseContext(v22, 0LL);
  return (unsigned int)AccessStateFromSubjectContext;
}
