/*
 * XREFs of CmpLoadHiveVolatile @ 0x140879A58
 * Callers:
 *     CmRestoreKey @ 0x140878A38 (CmRestoreKey.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x140202B70 (RtlAppendUnicodeToString.c)
 *     CmpFreeTransientPoolWithTag @ 0x1402036B8 (CmpFreeTransientPoolWithTag.c)
 *     RtlAppendUnicodeStringToString @ 0x1402721F0 (RtlAppendUnicodeStringToString.c)
 *     RtlCopyUnicodeString @ 0x1402909B0 (RtlCopyUnicodeString.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     memset @ 0x14040A280 (memset.c)
 *     CmpConstructName @ 0x1405E8818 (CmpConstructName.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1405EDBB0 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpUnlockRegistry @ 0x1405F3D20 (CmpUnlockRegistry.c)
 *     CmpCreateHive @ 0x14063ACD0 (CmpCreateHive.c)
 *     CmpLockRegistryExclusive @ 0x1406400FC (CmpLockRegistryExclusive.c)
 *     CmpCopyCompressedName @ 0x140641318 (CmpCopyCompressedName.c)
 *     CmpLinkHiveToMaster @ 0x140650940 (CmpLinkHiveToMaster.c)
 *     CmpUuidCreate @ 0x1406564B4 (CmpUuidCreate.c)
 *     CmpReleaseShutdownRundown @ 0x1406941E0 (CmpReleaseShutdownRundown.c)
 *     CmpAcquireShutdownRundown @ 0x140695430 (CmpAcquireShutdownRundown.c)
 *     CmpUnlockHiveList @ 0x14070BD9C (CmpUnlockHiveList.c)
 *     CmpLockHiveListExclusive @ 0x14070BDBC (CmpLockHiveListExclusive.c)
 *     CmpAddToHiveFileList @ 0x14070CBDC (CmpAddToHiveFileList.c)
 *     CmpDestroyHive @ 0x1407174E8 (CmpDestroyHive.c)
 *     CmpCopyKeyPartial @ 0x1407524C0 (CmpCopyKeyPartial.c)
 *     CmpCopySyncTree @ 0x140875014 (CmpCopySyncTree.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall CmpLoadHiveVolatile(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  UNICODE_STRING *v5; // rdi
  int v7; // ebx
  __int64 v8; // rsi
  int Hive; // eax
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
  v7 = CmpUuidCreate(&Uuid);
  if ( v7 >= 0 )
  {
    v7 = CmpUuidCreate(&v32);
    if ( v7 >= 0 )
    {
      v8 = *(_QWORD *)(v2 + 32);
      if ( v8 == CmpMasterHive )
      {
        v31 = 0LL;
        v30 = 0LL;
        v29 = a2;
        Hive = CmpCreateHive(
                 (ULONG_PTR *)&v26,
                 2u,
                 0x8000u,
                 0,
                 0LL,
                 (__int64)&v29,
                 0LL,
                 17825793,
                 0LL,
                 0LL,
                 0LL,
                 (__int64)v34);
        if ( Hive >= 0 )
        {
          v7 = CmpCreateHive((ULONG_PTR *)&P, 0, 1u, 0, 0LL, 0LL, 0LL, 17825792, &Uuid, &v32, 0LL, (__int64)v34);
          if ( v7 >= 0 )
          {
            CmpLockRegistryExclusive();
            if ( CmpIsKeyDeletedForKeyBody(a1, 0LL) )
            {
              v7 = -1073741444;
            }
            else if ( *(_BYTE *)(v8 + 2936) == 1 )
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
          v7 = Hive;
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
