/*
 * XREFs of CmpLoadHiveVolatile @ 0x14087D0BC
 * Callers:
 *     CmRestoreKey @ 0x14087C090 (CmRestoreKey.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x1402483A4 (CmpFreeTransientPoolWithTag.c)
 *     RtlAppendUnicodeToString @ 0x1402539E0 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x14026D4E0 (RtlAppendUnicodeStringToString.c)
 *     RtlCopyUnicodeString @ 0x14035E210 (RtlCopyUnicodeString.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memset @ 0x140414300 (memset.c)
 *     CmpUnlockHiveList @ 0x1405E2A98 (CmpUnlockHiveList.c)
 *     CmpLockHiveListExclusive @ 0x1405E2AB8 (CmpLockHiveListExclusive.c)
 *     CmpAddToHiveFileList @ 0x14061E11C (CmpAddToHiveFileList.c)
 *     CmpReleaseShutdownRundown @ 0x14064A4A0 (CmpReleaseShutdownRundown.c)
 *     CmpAcquireShutdownRundown @ 0x14064B8D0 (CmpAcquireShutdownRundown.c)
 *     CmpCopyCompressedName @ 0x14065ED94 (CmpCopyCompressedName.c)
 *     CmpLockRegistryExclusive @ 0x1406679BC (CmpLockRegistryExclusive.c)
 *     CmpUuidCreate @ 0x1406C4E04 (CmpUuidCreate.c)
 *     CmpConstructName @ 0x1406E271C (CmpConstructName.c)
 *     CmpCreateHive @ 0x1406F756C (CmpCreateHive.c)
 *     CmpLinkHiveToMaster @ 0x1406F8338 (CmpLinkHiveToMaster.c)
 *     CmpUnlockRegistry @ 0x14070D2B0 (CmpUnlockRegistry.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1407139E0 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpDestroyHive @ 0x1407293E8 (CmpDestroyHive.c)
 *     CmpCopyKeyPartial @ 0x14076FA4C (CmpCopyKeyPartial.c)
 *     CmpCopySyncTree @ 0x140878644 (CmpCopySyncTree.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall CmpLoadHiveVolatile(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  UNICODE_STRING *v5; // rdi
  int Hive; // ebx
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
  __int64 v29; // [rsp+98h] [rbp-68h] BYREF
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
  Hive = CmpUuidCreate(&Uuid);
  if ( Hive >= 0 )
  {
    Hive = CmpUuidCreate(&v32);
    if ( Hive >= 0 )
    {
      v8 = *(_BYTE **)(v2 + 32);
      if ( v8 == CmpMasterHive )
      {
        v31 = 0LL;
        v30 = 0LL;
        v29 = a2;
        v9 = CmpCreateHive((ULONG_PTR *)&v26, 2u, 0x8000, 0, 0LL, &v29, 0LL, 18415617, 0LL, 0LL, 0LL, (__int64)v34);
        if ( v9 >= 0 )
        {
          Hive = CmpCreateHive(
                   (ULONG_PTR *)&P,
                   0,
                   1,
                   0,
                   0LL,
                   0LL,
                   0LL,
                   17956864,
                   (__int64)&Uuid,
                   (__int64)&v32,
                   0LL,
                   (__int64)v34);
          if ( Hive >= 0 )
          {
            CmpLockRegistryExclusive();
            if ( CmpIsKeyDeletedForKeyBody(a1, 0LL) )
            {
              Hive = -1073741444;
            }
            else if ( v8[2936] == 1 )
            {
              Hive = -1073741431;
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
                      Hive = CmpLinkHiveToMaster(
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
                      if ( Hive >= 0 )
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
                      if ( Hive < 0 )
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
              Hive = -1073741670;
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
          Hive = v9;
        }
      }
      else
      {
        Hive = -1073741811;
      }
    }
  }
LABEL_25:
  CmpReleaseShutdownRundown();
  return (unsigned int)Hive;
}
