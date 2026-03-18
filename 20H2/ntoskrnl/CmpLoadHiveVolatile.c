/*
 * XREFs of CmpLoadHiveVolatile @ 0x14087F5C8
 * Callers:
 *     CmRestoreKey @ 0x14087E5A8 (CmRestoreKey.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x14020D870 (RtlCopyUnicodeString.c)
 *     RtlAppendUnicodeToString @ 0x140267DE0 (RtlAppendUnicodeToString.c)
 *     CmpFreeTransientPoolWithTag @ 0x140268308 (CmpFreeTransientPoolWithTag.c)
 *     RtlAppendUnicodeStringToString @ 0x140340C70 (RtlAppendUnicodeStringToString.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     memset @ 0x140411300 (memset.c)
 *     CmpLinkHiveToMaster @ 0x1405DA88C (CmpLinkHiveToMaster.c)
 *     CmpLockHiveListExclusive @ 0x1405DAD8C (CmpLockHiveListExclusive.c)
 *     CmpUnlockHiveList @ 0x1405DADAC (CmpUnlockHiveList.c)
 *     CmpCreateHive @ 0x1405DDED8 (CmpCreateHive.c)
 *     CmpReleaseShutdownRundown @ 0x14060C670 (CmpReleaseShutdownRundown.c)
 *     CmpAcquireShutdownRundown @ 0x14060D8D0 (CmpAcquireShutdownRundown.c)
 *     CmpUnlockRegistry @ 0x140616950 (CmpUnlockRegistry.c)
 *     CmpConstructName @ 0x140675CDC (CmpConstructName.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140678E00 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpAddToHiveFileList @ 0x1406DF078 (CmpAddToHiveFileList.c)
 *     CmpLockRegistryExclusive @ 0x1407013AC (CmpLockRegistryExclusive.c)
 *     CmpCopyCompressedName @ 0x140703E94 (CmpCopyCompressedName.c)
 *     CmpUuidCreate @ 0x140710AB8 (CmpUuidCreate.c)
 *     CmpDestroyHive @ 0x1407254A8 (CmpDestroyHive.c)
 *     CmpCopyKeyPartial @ 0x1407610A0 (CmpCopyKeyPartial.c)
 *     CmpCopySyncTree @ 0x14087AB64 (CmpCopySyncTree.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpLoadHiveVolatile(__int64 a1, void *a2)
{
  __int64 v2; // r15
  UNICODE_STRING *v5; // rdi
  int v7; // ebx
  _BYTE *v8; // rsi
  int v9; // eax
  int v10; // eax
  unsigned int v11; // ebx
  __int64 v12; // rbx
  UNICODE_STRING *v13; // rax
  __int16 v14; // si
  unsigned __int16 v15; // si
  unsigned __int16 v16; // cx
  __int16 v17; // cx
  __int64 v18; // rdx
  __int64 v19; // r8
  struct _LOOKASIDE_LIST_EX *v20; // r9
  _QWORD *v21; // rdx
  _QWORD *v22; // rcx
  __int64 v23; // [rsp+28h] [rbp-D8h]
  PVOID P; // [rsp+60h] [rbp-A0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-98h] BYREF
  PVOID v26; // [rsp+78h] [rbp-88h] BYREF
  _DWORD v27[2]; // [rsp+80h] [rbp-80h] BYREF
  UNICODE_STRING Source; // [rsp+88h] [rbp-78h] BYREF
  void *v29; // [rsp+98h] [rbp-68h] BYREF
  __int128 v30; // [rsp+A0h] [rbp-60h]
  __int64 v31; // [rsp+B0h] [rbp-50h]
  UUID v32; // [rsp+B8h] [rbp-48h] BYREF
  UUID Uuid; // [rsp+C8h] [rbp-38h] BYREF
  _OWORD v34[27]; // [rsp+E0h] [rbp-20h] BYREF

  v2 = *(_QWORD *)(a1 + 8);
  v27[0] = -1;
  P = 0LL;
  v26 = 0LL;
  v31 = 0LL;
  v27[1] = 0;
  v5 = 0LL;
  Source = 0LL;
  DestinationString = 0LL;
  Uuid = 0LL;
  v32 = 0LL;
  v30 = 0LL;
  memset(v34, 0, sizeof(v34));
  if ( !CmpAcquireShutdownRundown() )
    return 3221225865LL;
  v7 = CmpUuidCreate(&Uuid);
  if ( v7 >= 0 )
  {
    v7 = CmpUuidCreate(&v32);
    if ( v7 >= 0 )
    {
      v8 = *(_BYTE **)(v2 + 32);
      if ( v8 == CmpMasterHive )
      {
        v31 = 0LL;
        v30 = 0LL;
        v29 = a2;
        v9 = CmpCreateHive((ULONG_PTR *)&v26, 2u, 0x8000u, 0, 0LL, &v29, 0LL, 17825793, 0LL, 0LL, 0LL, (__int64)v34);
        if ( v9 >= 0 )
        {
          v7 = CmpCreateHive((ULONG_PTR *)&P, 0, 1u, 0, 0LL, 0LL, 0LL, 17825792, &Uuid, &v32, 0LL, (__int64)v34);
          if ( v7 >= 0 )
          {
            CmpLockRegistryExclusive();
            if ( CmpIsKeyDeletedForKeyBody(a1, 0LL) )
            {
              v7 = -1073741444;
            }
            else if ( v8[2936] == 1 )
            {
              v7 = -1073741431;
            }
            else
            {
              v10 = CmpCopyKeyPartial(
                      (__int64)v26,
                      *(unsigned int *)(*((_QWORD *)v26 + 8) + 36LL),
                      (ULONG_PTR)P,
                      0xFFFFFFFF,
                      2,
                      v23,
                      1u);
              v11 = v10;
              if ( v10 != -1 )
              {
                *(_DWORD *)(*((_QWORD *)P + 8) + 36LL) = v10;
                if ( CmpCopySyncTree((int)v26, *(_DWORD *)(*((_QWORD *)v26 + 8) + 36LL), (ULONG_PTR)P, v10, 2, 0) )
                {
                  v12 = (*((__int64 (__fastcall **)(PVOID, _QWORD, _DWORD *))P + 1))(P, v11, v27);
                  if ( v12 )
                  {
                    v13 = (UNICODE_STRING *)CmpConstructName(v2);
                    v14 = 2 * *(_WORD *)(v12 + 72);
                    v5 = v13;
                    if ( (*(_BYTE *)(v12 + 2) & 0x20) == 0 )
                      v14 = *(_WORD *)(v12 + 72);
                    v15 = v13->Length + v14 + 2;
                    DestinationString.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v15, 0x20204D43u);
                    if ( DestinationString.Buffer )
                    {
                      DestinationString.MaximumLength = v15;
                      DestinationString.Length = v15;
                      RtlCopyUnicodeString(&DestinationString, v5);
                      RtlAppendUnicodeToString(&DestinationString, L"\\");
                      v16 = *(_WORD *)(v12 + 72);
                      if ( (*(_BYTE *)(v12 + 2) & 0x20) != 0 )
                      {
                        CmpCopyCompressedName(
                          &DestinationString.Buffer[(unsigned __int64)DestinationString.Length >> 1],
                          DestinationString.MaximumLength - DestinationString.Length,
                          (unsigned __int8 *)(v12 + 76),
                          (unsigned __int16)(2 * v16));
                        v17 = 2 * *(_WORD *)(v12 + 72);
                        if ( (*(_BYTE *)(v12 + 2) & 0x20) == 0 )
                          v17 = *(_WORD *)(v12 + 72);
                        DestinationString.Length += v17;
                      }
                      else
                      {
                        Source.MaximumLength = *(_WORD *)(v12 + 72);
                        Source.Length = v16;
                        Source.Buffer = (wchar_t *)(v12 + 76);
                        RtlAppendUnicodeStringToString(&DestinationString, &Source);
                      }
                      (*((void (__fastcall **)(PVOID, _DWORD *))P + 2))(P, v27);
                      v7 = CmpLinkHiveToMaster(
                             (__int64)&DestinationString,
                             0LL,
                             (__int64)P,
                             0,
                             0x200u,
                             0,
                             0LL,
                             0LL,
                             0LL,
                             0LL,
                             1,
                             v34);
                      if ( v7 >= 0 )
                      {
                        CmpAddToHiveFileList((__int64)P, v18, v19, v20);
                        CmpLockHiveListExclusive();
                        v21 = (_QWORD *)qword_140D2E918;
                        v22 = (char *)P + 1600;
                        if ( *(__int64 **)qword_140D2E918 != &CmpHiveListHead )
                          __fastfail(3u);
                        *v22 = &CmpHiveListHead;
                        v22[1] = v21;
                        *v21 = v22;
                        qword_140D2E918 = (__int64)v22;
                        CmpUnlockHiveList();
                        if ( !CmpProfileLoaded )
                        {
                          CmpGlobalQuotaAllowed = CmpGlobalQuota;
                          CmpProfileLoaded = 1;
                        }
                      }
                      CmpUnlockRegistry();
                      if ( v7 < 0 )
                        CmpDestroyHive((volatile signed __int32 *)P);
                      CmpDestroyHive((volatile signed __int32 *)v26);
                      ExFreePoolWithTag(DestinationString.Buffer, 0);
                      ExFreePoolWithTag(v5, 0x624E4D43u);
                      goto LABEL_25;
                    }
                    (*((void (__fastcall **)(PVOID, _DWORD *))P + 2))(P, v27);
                  }
                }
              }
              v7 = -1073741670;
            }
            CmpUnlockRegistry();
            CmpDestroyHive((volatile signed __int32 *)P);
          }
          CmpDestroyHive((volatile signed __int32 *)v26);
          if ( v5 )
            CmpFreeTransientPoolWithTag(v5, 0x624E4D43u);
        }
        else
        {
          v7 = v9;
        }
      }
      else
      {
        v7 = -1073741811;
      }
    }
  }
LABEL_25:
  CmpReleaseShutdownRundown();
  return (unsigned int)v7;
}
