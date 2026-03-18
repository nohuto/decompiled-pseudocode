/*
 * XREFs of CmKeyBodyRemapToVirtualForEnum @ 0x1405EACD0
 * Callers:
 *     NtQueryKey @ 0x1405EBF30 (NtQueryKey.c)
 *     NtQueryValueKey @ 0x1405EC5D0 (NtQueryValueKey.c)
 *     NtEnumerateKey @ 0x1405FAA20 (NtEnumerateKey.c)
 *     NtEnumerateValueKey @ 0x14061E420 (NtEnumerateValueKey.c)
 *     NtQueryMultipleValueKey @ 0x1406572C0 (NtQueryMultipleValueKey.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140206450 (RtlInitUnicodeString.c)
 *     KCBIsVirtualizable @ 0x1402064A0 (KCBIsVirtualizable.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
 *     CmpIsSystemEntity @ 0x1405EA850 (CmpIsSystemEntity.c)
 *     CmpCleanupParseContext @ 0x1405EAEC0 (CmpCleanupParseContext.c)
 *     SeCaptureSubjectContext @ 0x1405EAF70 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1405EBD30 (SeReleaseSubjectContext.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1405FA510 (CmpPerformKeyBodyDeletionCheck.c)
 *     SeDeleteAccessState @ 0x140602120 (SeDeleteAccessState.c)
 *     ObReferenceObjectByName @ 0x140613480 (ObReferenceObjectByName.c)
 *     CmpAttachToRegistryProcess @ 0x14061FF00 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140621720 (CmpDetachFromRegistryProcess.c)
 *     CmpLockKcbShared @ 0x140626200 (CmpLockKcbShared.c)
 *     CmpUnlockKcb @ 0x140626230 (CmpUnlockKcb.c)
 *     CmpUnlockRegistry @ 0x140629290 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1406292D0 (CmpLockRegistry.c)
 *     CmpReparseToVirtualPath @ 0x1406D0328 (CmpReparseToVirtualPath.c)
 *     CmVirtualKCBToRealPath @ 0x14086B4AC (CmVirtualKCBToRealPath.c)
 *     SeCreateAccessStateFromSubjectContext @ 0x140918ADC (SeCreateAccessStateFromSubjectContext.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmKeyBodyRemapToVirtualForEnum(__int64 *a1, char a2, int a3, _QWORD *a4)
{
  int v4; // ebx
  __int64 v8; // rsi
  char v9; // r14
  ULONG_PTR v10; // rdi
  int AccessStateFromSubjectContext; // ebx
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  int v17; // edx
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rcx
  char v21; // [rsp+40h] [rbp-C0h]
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+60h] [rbp-A0h] BYREF
  _OWORD v25[19]; // [rsp+80h] [rbp-80h] BYREF
  _OWORD v26[3]; // [rsp+1B0h] [rbp+B0h] BYREF
  _BYTE v27[160]; // [rsp+1E0h] [rbp+E0h] BYREF
  _BYTE v28[224]; // [rsp+280h] [rbp+180h] BYREF

  v4 = a3;
  DestinationString = 0LL;
  memset(v27, 0, sizeof(v27));
  memset(v28, 0, sizeof(v28));
  RtlInitUnicodeString(&DestinationString, 0LL);
  v8 = *a1;
  memset(v26, 0, sizeof(v26));
  memset(v25, 0, 0x128uLL);
  LODWORD(v25[6]) = -1;
  *a4 = 0LL;
  *((_QWORD *)&v25[9] + 1) = &v25[9];
  v9 = 0;
  *(_OWORD *)((char *)&v25[13] + 8) = 0LL;
  v21 = 0;
  *(_QWORD *)&v25[9] = &v25[9];
  *(_OWORD *)((char *)&v25[14] + 8) = 0LL;
  *(_OWORD *)((char *)&v25[15] + 8) = 0LL;
  *(_OWORD *)((char *)&v25[16] + 8) = 0LL;
  *(_OWORD *)((char *)&v25[17] + 8) = 0LL;
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
      v21 = 1;
LABEL_5:
      SeCaptureSubjectContext(&SubjectContext);
      if ( CmpIsSystemEntity(a2, &SubjectContext, (int *)&v25[1]) )
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
      CmpAttachToRegistryProcess(v26);
      CmpLockRegistry();
      CmpLockKcbShared(v10);
      if ( v9 )
      {
        AccessStateFromSubjectContext = CmpPerformKeyBodyDeletionCheck(v8, 0LL);
        if ( AccessStateFromSubjectContext < 0 )
        {
LABEL_32:
          CmpUnlockKcb(v10);
          CmpUnlockRegistry(v20, v19);
LABEL_38:
          CmpDetachFromRegistryProcess(v26);
          goto LABEL_7;
        }
        if ( (unsigned __int8)CmpReparseToVirtualPath(v10, v13, &SubjectContext, &DestinationString) )
        {
          v4 = a3;
          goto LABEL_22;
        }
      }
      else if ( (int)CmVirtualKCBToRealPath(v10, &DestinationString) >= 0 )
      {
LABEL_22:
        CmpUnlockKcb(v10);
        CmpUnlockRegistry(v15, v14);
        v16 = *a1;
        v17 = 8;
        LODWORD(v25[0]) = 8;
        if ( !v4 )
          v17 = 4104;
        *((_QWORD *)&v25[4] + 1) = *(_QWORD *)(v16 + 56);
        LODWORD(v25[0]) = v17;
        AccessStateFromSubjectContext = SeCreateAccessStateFromSubjectContext(
                                          (unsigned int)&SubjectContext,
                                          (unsigned int)v27,
                                          (unsigned int)v28,
                                          v4,
                                          (__int64)CmKeyObjectType + 76);
        if ( AccessStateFromSubjectContext < 0 )
          goto LABEL_38;
        v18 = 1600LL;
        if ( a2 != 1 )
          v18 = 576LL;
        AccessStateFromSubjectContext = ObReferenceObjectByName(&DestinationString, v18, v27);
        if ( AccessStateFromSubjectContext >= 0 )
        {
          if ( v9 )
          {
            *a4 = 0LL;
          }
          else
          {
            *a1 = 0LL;
            *a4 = v8;
          }
        }
        else if ( !v21 )
        {
          goto LABEL_37;
        }
        AccessStateFromSubjectContext = 0;
LABEL_37:
        SeDeleteAccessState(v27);
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
  CmpCleanupParseContext(v25, 0LL);
  return (unsigned int)AccessStateFromSubjectContext;
}
