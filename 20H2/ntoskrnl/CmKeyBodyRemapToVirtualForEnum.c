/*
 * XREFs of CmKeyBodyRemapToVirtualForEnum @ 0x14060C6A0
 * Callers:
 *     NtQueryValueKey @ 0x140618560 (NtQueryValueKey.c)
 *     NtQueryKey @ 0x140618FF0 (NtQueryKey.c)
 *     NtEnumerateKey @ 0x140676B10 (NtEnumerateKey.c)
 *     NtEnumerateValueKey @ 0x1406775B0 (NtEnumerateValueKey.c)
 *     NtQueryMultipleValueKey @ 0x1406A4AE0 (NtQueryMultipleValueKey.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140210D50 (RtlInitUnicodeString.c)
 *     KCBIsVirtualizable @ 0x140210DA0 (KCBIsVirtualizable.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     memset @ 0x140411300 (memset.c)
 *     CmObReferenceObjectByName @ 0x1405CBB0C (CmObReferenceObjectByName.c)
 *     SeDeleteAccessState @ 0x140601D90 (SeDeleteAccessState.c)
 *     CmpCleanupParseContext @ 0x14060C8A0 (CmpCleanupParseContext.c)
 *     SeCaptureSubjectContext @ 0x14060C950 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x14060D710 (SeReleaseSubjectContext.c)
 *     CmpIsSystemEntity @ 0x14060D910 (CmpIsSystemEntity.c)
 *     CmpLockKcbShared @ 0x140613810 (CmpLockKcbShared.c)
 *     CmpUnlockKcb @ 0x140613840 (CmpUnlockKcb.c)
 *     CmpUnlockRegistry @ 0x140616950 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140616990 (CmpLockRegistry.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1406773C0 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpDetachFromRegistryProcess @ 0x140678E90 (CmpDetachFromRegistryProcess.c)
 *     CmpAttachToRegistryProcess @ 0x1406790E0 (CmpAttachToRegistryProcess.c)
 *     CmpReparseToVirtualPath @ 0x1406C4BF8 (CmpReparseToVirtualPath.c)
 *     CmVirtualKCBToRealPath @ 0x1408722A8 (CmVirtualKCBToRealPath.c)
 *     SeCreateAccessStateFromSubjectContext @ 0x14091FA0C (SeCreateAccessStateFromSubjectContext.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmKeyBodyRemapToVirtualForEnum(__int64 *a1, unsigned __int8 a2, int a3, _QWORD *a4)
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
  __int64 v18; // r9
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  char v22; // [rsp+40h] [rbp-C0h]
  struct _DMA_ADAPTER *v24; // [rsp+48h] [rbp-B8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD v27[2]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v28; // [rsp+88h] [rbp-78h]
  UNICODE_STRING *p_DestinationString; // [rsp+90h] [rbp-70h]
  int v30; // [rsp+98h] [rbp-68h]
  int v31; // [rsp+9Ch] [rbp-64h]
  __int128 v32; // [rsp+A0h] [rbp-60h]
  _OWORD v33[19]; // [rsp+B0h] [rbp-50h] BYREF
  _OWORD v34[3]; // [rsp+1E0h] [rbp+E0h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT v35[5]; // [rsp+210h] [rbp+110h] BYREF
  _BYTE v36[224]; // [rsp+2B0h] [rbp+1B0h] BYREF

  v4 = a3;
  DestinationString = 0LL;
  memset(v35, 0, sizeof(v35));
  memset(v36, 0, sizeof(v36));
  v27[1] = 0;
  v31 = 0;
  RtlInitUnicodeString(&DestinationString, 0LL);
  v8 = *a1;
  v24 = 0LL;
  memset(v34, 0, sizeof(v34));
  memset(v33, 0, 0x128uLL);
  LODWORD(v33[6]) = -1;
  *a4 = 0LL;
  *((_QWORD *)&v33[9] + 1) = &v33[9];
  v9 = 0;
  *(_OWORD *)((char *)&v33[13] + 8) = 0LL;
  v22 = 0;
  *(_QWORD *)&v33[9] = &v33[9];
  *(_OWORD *)((char *)&v33[14] + 8) = 0LL;
  *(_OWORD *)((char *)&v33[15] + 8) = 0LL;
  *(_OWORD *)((char *)&v33[16] + 8) = 0LL;
  *(_OWORD *)((char *)&v33[17] + 8) = 0LL;
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
      v22 = 1;
LABEL_5:
      SeCaptureSubjectContext(&SubjectContext);
      if ( (unsigned __int8)CmpIsSystemEntity(a2) )
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
      CmpAttachToRegistryProcess(v34);
      CmpLockRegistry();
      CmpLockKcbShared(v10);
      if ( v9 )
      {
        AccessStateFromSubjectContext = CmpPerformKeyBodyDeletionCheck(v8, 0LL);
        if ( AccessStateFromSubjectContext < 0 )
        {
LABEL_32:
          CmpUnlockKcb(v10);
          CmpUnlockRegistry(v21, v20);
LABEL_38:
          CmpDetachFromRegistryProcess(v34);
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
        LODWORD(v33[0]) = 8;
        if ( !v4 )
          v17 = 4104;
        *((_QWORD *)&v33[4] + 1) = *(_QWORD *)(v16 + 56);
        LODWORD(v33[0]) = v17;
        AccessStateFromSubjectContext = SeCreateAccessStateFromSubjectContext(
                                          (unsigned int)&SubjectContext,
                                          (unsigned int)v35,
                                          (unsigned int)v36,
                                          v4,
                                          (__int64)CmKeyObjectType + 76);
        if ( AccessStateFromSubjectContext < 0 )
          goto LABEL_38;
        v19 = 1600;
        v27[0] = 48;
        v28 = 0LL;
        v32 = 0LL;
        if ( a2 != 1 )
          v19 = 576;
        v30 = v19;
        p_DestinationString = &DestinationString;
        AccessStateFromSubjectContext = CmObReferenceObjectByName((int)v27, (int)v35, a3, v18, 0, (__int64)v33, &v24);
        if ( AccessStateFromSubjectContext >= 0 )
        {
          if ( v9 )
          {
            *a4 = v24;
          }
          else
          {
            *a1 = (__int64)v24;
            *a4 = v8;
          }
        }
        else if ( !v22 )
        {
          goto LABEL_37;
        }
        AccessStateFromSubjectContext = 0;
LABEL_37:
        SeDeleteAccessState(v35);
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
  CmpCleanupParseContext(v33, 0LL);
  return (unsigned int)AccessStateFromSubjectContext;
}
