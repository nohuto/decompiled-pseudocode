/*
 * XREFs of CmDumpKey @ 0x14087BE78
 * Callers:
 *     NtSaveKeyEx @ 0x140728E00 (NtSaveKeyEx.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140355BE0 (ExReleasePushLockEx.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1406E3E60 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpUnlockKcb @ 0x140709F20 (CmpUnlockKcb.c)
 *     CmpUnlockRegistry @ 0x14070D2B0 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x14070D2F0 (CmpLockRegistry.c)
 *     CmSaveKey @ 0x14072907C (CmSaveKey.c)
 *     CmpFreeOffsetArray @ 0x140871438 (CmpFreeOffsetArray.c)
 *     CmpWriteOffsetArrayToFile @ 0x14087178C (CmpWriteOffsetArrayToFile.c)
 *     CmpDoAccessCheckOnSubtree @ 0x140871C24 (CmpDoAccessCheckOnSubtree.c)
 *     HvSnapshotHiveToOffsetArray @ 0x1408809B4 (HvSnapshotHiveToOffsetArray.c)
 */

__int64 __fastcall CmDumpKey(__int64 a1, __int64 a2, char a3)
{
  ULONG_PTR v6; // rdi
  char v7; // r14
  int v8; // esi
  __int64 v9; // r8
  __int64 v10; // rsi
  PVOID *v11; // rbp
  unsigned int v12; // r15d
  __int64 v13; // rcx
  __int64 v14; // rbp
  HANDLE FileHandle; // [rsp+20h] [rbp-48h]
  int v17[2]; // [rsp+30h] [rbp-38h] BYREF
  int v18; // [rsp+70h] [rbp+8h] BYREF
  int v19; // [rsp+88h] [rbp+20h] BYREF

  v19 = 0;
  v18 = 0;
  *(_QWORD *)v17 = 0LL;
  CmpLockRegistry();
  v6 = *(_QWORD *)(a1 + 8);
  v7 = 1;
  if ( *(PVOID *)(v6 + 32) == CmpMasterHive )
  {
    v8 = -1073741790;
LABEL_23:
    CmpUnlockRegistry();
    return (unsigned int)v8;
  }
  ExAcquirePushLockSharedEx(v6 + 48, 0LL);
  _InterlockedAdd((volatile signed __int32 *)(v6 + 56), 1u);
  v8 = CmpPerformKeyBodyDeletionCheck(a1, 0LL);
  if ( v8 < 0 )
  {
LABEL_22:
    CmpUnlockKcb(v6);
    goto LABEL_23;
  }
  if ( (*(_DWORD *)(v6 + 184) & 0x40000) == 0 )
  {
    v8 = -1073741811;
    goto LABEL_22;
  }
  if ( *(_WORD *)(v6 + 66) )
  {
    CmpUnlockKcb(v6);
    CmpUnlockRegistry();
    return (unsigned int)CmSaveKey(a1, a2, 5, a3);
  }
  else
  {
    ExAcquirePushLockExclusiveEx(*(_QWORD *)(v6 + 32) + 72LL, 0LL);
    ExAcquirePushLockSharedEx(*(_QWORD *)(v6 + 32) + 1776LL, 0LL);
    LOBYTE(v9) = a3;
    v8 = CmpDoAccessCheckOnSubtree(
           *(_QWORD *)(v6 + 32),
           *(_DWORD *)(v6 + 40),
           v9,
           (struct _LOOKASIDE_LIST_EX *)0x20019,
           3);
    ExReleasePushLockEx(*(_QWORD *)(v6 + 32) + 1776LL, 0LL);
    if ( v8 < 0 )
      goto LABEL_19;
    v8 = HvSnapshotHiveToOffsetArray(*(_QWORD *)(v6 + 32), &v18, v17, &v19);
    if ( v8 < 0 )
    {
      v12 = v18;
      v11 = *(PVOID **)v17;
    }
    else
    {
      v10 = *(_QWORD *)(v6 + 32);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v10 + 72), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v10 + 72);
      KeAbPostRelease(v10 + 72);
      CmpUnlockKcb(v6);
      CmpUnlockRegistry();
      v11 = *(PVOID **)v17;
      v7 = 0;
      FileHandle = (HANDLE)a2;
      v12 = v18;
      v8 = CmpWriteOffsetArrayToFile(v13, v18, *(__int64 *)v17, v19, FileHandle);
      if ( v8 >= 0 )
        v8 = 0;
    }
    if ( v11 )
      CmpFreeOffsetArray(v12, v11);
    if ( v7 )
    {
LABEL_19:
      v14 = *(_QWORD *)(v6 + 32);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v14 + 72), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v14 + 72);
      KeAbPostRelease(v14 + 72);
      goto LABEL_22;
    }
  }
  return (unsigned int)v8;
}
