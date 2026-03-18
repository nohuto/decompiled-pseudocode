/*
 * XREFs of CmpLoadHiveVolatile @ 0x14090D4E8
 * Callers:
 *     CmRestoreKey @ 0x14090C34C (CmRestoreKey.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140208AC0 (CmSiFreeMemory.c)
 *     CmpAllocateTransientPoolWithTag @ 0x14024AC60 (CmpAllocateTransientPoolWithTag.c)
 *     RtlCopyUnicodeString @ 0x1402A76A0 (RtlCopyUnicodeString.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     RtlAppendUnicodeStringToString @ 0x1402DFA30 (RtlAppendUnicodeStringToString.c)
 *     RtlAppendUnicodeToString @ 0x1402DFAC0 (RtlAppendUnicodeToString.c)
 *     CmpFreeTransientPoolWithTag @ 0x140346D64 (CmpFreeTransientPoolWithTag.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     CmpDestroyHive @ 0x14065A7E0 (CmpDestroyHive.c)
 *     CmpLinkHiveToMaster @ 0x14067C9E8 (CmpLinkHiveToMaster.c)
 *     CmpCreateHive @ 0x14068A7FC (CmpCreateHive.c)
 *     HvpGetCellFlat @ 0x1406BF400 (HvpGetCellFlat.c)
 *     HvpReleaseCellFlat @ 0x1406BF450 (HvpReleaseCellFlat.c)
 *     CmpCopyKeyPartial @ 0x1406D3BF0 (CmpCopyKeyPartial.c)
 *     CmpAddToHiveFileList @ 0x1406E36C4 (CmpAddToHiveFileList.c)
 *     CmpCopyCompressedName @ 0x140718AE8 (CmpCopyCompressedName.c)
 *     CmpLockRegistryExclusive @ 0x14071B6EC (CmpLockRegistryExclusive.c)
 *     CmpUuidCreate @ 0x1407435A8 (CmpUuidCreate.c)
 *     CmpConstructNameWithStatus @ 0x1407C0690 (CmpConstructNameWithStatus.c)
 *     HvpReleaseCellPaged @ 0x1407C97C0 (HvpReleaseCellPaged.c)
 *     HvpGetCellContextReinitialize @ 0x1407C97FC (HvpGetCellContextReinitialize.c)
 *     HvpGetCellPaged @ 0x1407C9820 (HvpGetCellPaged.c)
 *     CmpCopySyncTree @ 0x14091EE14 (CmpCopySyncTree.c)
 *     CmpAcquireHiveLoadUnloadRundown @ 0x140AB4138 (CmpAcquireHiveLoadUnloadRundown.c)
 *     CmpReleaseHiveLoadUnloadRundown @ 0x140AB4178 (CmpReleaseHiveLoadUnloadRundown.c)
 *     CmpUnlockRegistry @ 0x140AB4260 (CmpUnlockRegistry.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140AB43C0 (CmpPerformKeyBodyDeletionCheck.c)
 */

__int64 __fastcall CmpLoadHiveVolatile(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  UNICODE_STRING *v5; // rsi
  char UnloadRundown; // r13
  int v7; // ebx
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  struct _LOOKASIDE_LIST_EX *v12; // r9
  unsigned int v13; // edi
  int v14; // r9d
  __int64 CellFlat; // rax
  __int64 v16; // r8
  __int64 v17; // rdi
  int v18; // eax
  __int16 v19; // bx
  unsigned __int16 v20; // bx
  unsigned __int16 v21; // cx
  __int16 v22; // cx
  _QWORD *v23; // rcx
  _QWORD *v24; // rax
  ULONG_PTR v26; // [rsp+28h] [rbp-D8h]
  ULONG_PTR BugCheckParameter3; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v28; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-90h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+80h] [rbp-80h] BYREF
  ULONG_PTR v31; // [rsp+88h] [rbp-78h] BYREF
  PCUNICODE_STRING SourceString; // [rsp+90h] [rbp-70h] BYREF
  UNICODE_STRING Source; // [rsp+98h] [rbp-68h] BYREF
  UUID v34[2]; // [rsp+A8h] [rbp-58h] BYREF
  UUID v35; // [rsp+C8h] [rbp-38h] BYREF
  UUID Uuid; // [rsp+D8h] [rbp-28h] BYREF
  _OWORD v37[27]; // [rsp+F0h] [rbp-10h] BYREF

  v2 = *(_QWORD *)(a1 + 8);
  v28 = 0LL;
  LODWORD(BugCheckParameter4) = 0;
  SourceString = 0LL;
  Source = 0LL;
  v5 = 0LL;
  DestinationString = 0LL;
  Uuid = 0LL;
  v35 = 0LL;
  memset(v34, 0, sizeof(v34));
  memset(v37, 0, sizeof(v37));
  BugCheckParameter3 = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  HvpGetCellContextReinitialize(&v28);
  v31 = 0LL;
  UnloadRundown = CmpAcquireHiveLoadUnloadRundown();
  if ( !UnloadRundown )
  {
    v7 = -1073741431;
    goto LABEL_41;
  }
  v7 = CmpUuidCreate(&Uuid);
  if ( v7 >= 0 )
  {
    v7 = CmpUuidCreate(&v35);
    if ( v7 >= 0 )
    {
      v8 = *(_QWORD *)(v2 + 32);
      if ( v8 != CmpMasterHive )
      {
        v7 = -1073741811;
        goto LABEL_41;
      }
      *(_QWORD *)&v34[0].Data1 = a2;
      memset(v34[0].Data4, 0, 24);
      v7 = CmpCreateHive(&v31, 2u, 0x8000, 0, 0LL, v34, 0LL, 17367041, 0LL, 0LL, 0LL, (__int64)v37);
      if ( v7 >= 0 )
      {
        v7 = CmpCreateHive(
               &BugCheckParameter3,
               0,
               1,
               0,
               0LL,
               0LL,
               0LL,
               16908288,
               (__int64)&Uuid,
               (__int64)&v35,
               0LL,
               (__int64)v37);
        if ( v7 >= 0 )
        {
          CmpLockRegistryExclusive();
          v7 = CmpPerformKeyBodyDeletionCheck(a1, 0LL);
          if ( v7 >= 0 )
          {
            if ( *(_BYTE *)(v8 + 2944) == 1 )
            {
              v7 = -1073741431;
            }
            else
            {
              v7 = CmpCopyKeyPartial(
                     v31,
                     *(unsigned int *)(*(_QWORD *)(v31 + 64) + 36LL),
                     BugCheckParameter3,
                     0xFFFFFFFF,
                     2,
                     v26,
                     1u,
                     (unsigned int *)&BugCheckParameter4);
              if ( v7 >= 0 )
              {
                v13 = BugCheckParameter4;
                v14 = BugCheckParameter4;
                *(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 36LL) = BugCheckParameter4;
                v7 = CmpCopySyncTree(v31, *(_DWORD *)(*(_QWORD *)(v31 + 64) + 36LL), BugCheckParameter3, v14, 2, 0);
                if ( v7 >= 0 )
                {
                  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
                    CellFlat = HvpGetCellFlat(BugCheckParameter3, v13, &v28);
                  else
                    CellFlat = HvpGetCellPaged(BugCheckParameter3, v13, (unsigned int *)&v28);
                  v17 = CellFlat;
                  v18 = CmpConstructNameWithStatus(v2, &SourceString, v16);
                  v5 = (UNICODE_STRING *)SourceString;
                  v7 = v18;
                  if ( v18 >= 0 )
                  {
                    v19 = 2 * *(_WORD *)(v17 + 72);
                    if ( (*(_BYTE *)(v17 + 2) & 0x20) == 0 )
                      v19 = *(_WORD *)(v17 + 72);
                    v20 = SourceString->Length + v19 + 2;
                    DestinationString.Buffer = (wchar_t *)CmpAllocateTransientPoolWithTag(
                                                            PagedPool,
                                                            v20,
                                                            0x20204D43u,
                                                            v12);
                    if ( DestinationString.Buffer )
                    {
                      DestinationString.MaximumLength = v20;
                      DestinationString.Length = v20;
                      RtlCopyUnicodeString(&DestinationString, v5);
                      RtlAppendUnicodeToString(&DestinationString, L"\\");
                      v21 = *(_WORD *)(v17 + 72);
                      if ( (*(_BYTE *)(v17 + 2) & 0x20) != 0 )
                      {
                        CmpCopyCompressedName(
                          &DestinationString.Buffer[(unsigned __int64)DestinationString.Length >> 1],
                          DestinationString.MaximumLength - DestinationString.Length,
                          (unsigned __int8 *)(v17 + 76),
                          (unsigned __int16)(2 * v21));
                        v22 = 2 * *(_WORD *)(v17 + 72);
                        if ( (*(_BYTE *)(v17 + 2) & 0x20) == 0 )
                          v22 = *(_WORD *)(v17 + 72);
                        DestinationString.Length += v22;
                      }
                      else
                      {
                        Source.MaximumLength = *(_WORD *)(v17 + 72);
                        Source.Length = v21;
                        Source.Buffer = (wchar_t *)(v17 + 76);
                        RtlAppendUnicodeStringToString(&DestinationString, &Source);
                      }
                      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
                        HvpReleaseCellFlat(BugCheckParameter3, &v28);
                      else
                        HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v28);
                      v7 = CmpLinkHiveToMaster(
                             (__int64)&DestinationString,
                             0LL,
                             BugCheckParameter3,
                             0,
                             0x200u,
                             0,
                             0LL,
                             0LL,
                             0LL,
                             0LL,
                             1,
                             v37);
                      if ( v7 >= 0 )
                      {
                        CmpAddToHiveFileList(BugCheckParameter3, v9, v11, v12);
                        ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL);
                        v23 = (_QWORD *)qword_140D3CC98;
                        v24 = (_QWORD *)(BugCheckParameter3 + 1608);
                        if ( *(__int64 **)qword_140D3CC98 != &CmpHiveListHead )
                          __fastfail(3u);
                        *v24 = &CmpHiveListHead;
                        v24[1] = v23;
                        *v23 = v24;
                        qword_140D3CC98 = (__int64)v24;
                        ExReleasePushLockEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL);
                        if ( !CmpProfileLoaded )
                        {
                          CmpGlobalQuotaAllowed = CmpGlobalQuota;
                          CmpProfileLoaded = 1;
                        }
                        BugCheckParameter3 = 0LL;
                        v7 = 0;
                      }
                      goto LABEL_40;
                    }
                    v7 = -1073741670;
                  }
                  if ( v17 )
                  {
                    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
                      HvpReleaseCellFlat(BugCheckParameter3, &v28);
                    else
                      HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v28);
                  }
                }
              }
            }
          }
LABEL_40:
          CmpUnlockRegistry(v10, v9, v11, v12);
        }
      }
    }
  }
LABEL_41:
  if ( BugCheckParameter3 )
    CmpDestroyHive(BugCheckParameter3);
  if ( v31 )
    CmpDestroyHive(v31);
  if ( UnloadRundown )
    CmpReleaseHiveLoadUnloadRundown();
  if ( DestinationString.Buffer )
    CmSiFreeMemory((PPRIVILEGE_SET)DestinationString.Buffer);
  if ( v5 )
    CmpFreeTransientPoolWithTag(v5, 0x624E4D43u);
  return (unsigned int)v7;
}
