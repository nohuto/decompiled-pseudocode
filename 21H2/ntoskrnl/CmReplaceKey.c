/*
 * XREFs of CmReplaceKey @ 0x14086DB28
 * Callers:
 *     NtReplaceKey @ 0x1408692A0 (NtReplaceKey.c)
 * Callees:
 *     CmSiFreeMemory @ 0x1402253C0 (CmSiFreeMemory.c)
 *     CmpAllocateTransientPoolWithTag @ 0x14023EDD0 (CmpAllocateTransientPoolWithTag.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ZwFlushBuffersFile @ 0x1403FAEE0 (ZwFlushBuffersFile.c)
 *     CmpFlushHive @ 0x1406A48D8 (CmpFlushHive.c)
 *     CmpDetachFromRegistryProcess @ 0x1406E589C (CmpDetachFromRegistryProcess.c)
 *     CmpAttachToRegistryProcess @ 0x1406E5AF0 (CmpAttachToRegistryProcess.c)
 *     CmpCmdHiveOpen @ 0x1406F2CB8 (CmpCmdHiveOpen.c)
 *     HvUnlockHiveFlusherExclusive @ 0x1406F97EC (HvUnlockHiveFlusherExclusive.c)
 *     HvLockHiveFlusherExclusive @ 0x1406F9824 (HvLockHiveFlusherExclusive.c)
 *     CmpUnlockRegistry @ 0x14070D2B0 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x14070D2F0 (CmpLockRegistry.c)
 *     CmpDestroyHive @ 0x1407293E8 (CmpDestroyHive.c)
 *     CmpBecomeActiveFlusherAndReconciler @ 0x14079EDD8 (CmpBecomeActiveFlusherAndReconciler.c)
 *     CmpFinishBeingActiveFlusherAndReconciler @ 0x14079F7B4 (CmpFinishBeingActiveFlusherAndReconciler.c)
 *     CmpCmdRenameHive @ 0x140876C3C (CmpCmdRenameHive.c)
 *     CmpPreserveSystemHiveData @ 0x1408797CC (CmpPreserveSystemHiveData.c)
 */

__int64 __fastcall CmReplaceKey(__int64 a1, __int64 a2, const UNICODE_STRING *a3, struct _LOOKASIDE_LIST_EX *a4)
{
  char v6; // r14
  char v7; // r12
  struct _PRIVILEGE_SET *TransientPoolWithTag; // rax
  struct _PRIVILEGE_SET *v9; // r15
  int v10; // ebx
  int v11; // eax
  ULONG_PTR v12; // rsi
  char v14[8]; // [rsp+50h] [rbp-B0h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+58h] [rbp-A8h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+60h] [rbp-A0h] BYREF
  _OWORD v17[3]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE ObjectInformation[512]; // [rsp+A0h] [rbp-60h] BYREF

  v14[0] = 0;
  BugCheckParameter2 = 0LL;
  IoStatusBlock = 0LL;
  v6 = 0;
  v7 = 0;
  memset(v17, 0, sizeof(v17));
  TransientPoolWithTag = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithTag(PagedPool, 0x1B0uLL, 0x33394D43u, a4);
  v9 = TransientPoolWithTag;
  if ( !TransientPoolWithTag )
    return (unsigned int)-1073741670;
  v11 = CmpCmdHiveOpen(a3, 0, v14, &BugCheckParameter2, 0x1190001u, 0, 0LL, 0LL, TransientPoolWithTag);
  v12 = BugCheckParameter2;
  v10 = v11;
  if ( v11 >= 0 )
  {
    CmpAttachToRegistryProcess((__int64)v17);
    v6 = 1;
    CmpLockRegistry();
    HvLockHiveFlusherExclusive(a1);
    if ( (*(_DWORD *)(a1 + 160) & 4) != 0 )
    {
LABEL_5:
      v10 = -1073741611;
      goto LABEL_18;
    }
    if ( (*(_DWORD *)(a1 + 4152) & 0x20) != 0 )
      goto LABEL_7;
    if ( a1 == qword_140C01170 )
    {
      v10 = CmpPreserveSystemHiveData(a1, v12);
      if ( v10 < 0 )
      {
LABEL_18:
        HvUnlockHiveFlusherExclusive(a1);
        CmpUnlockRegistry();
        if ( v7 )
          CmpFinishBeingActiveFlusherAndReconciler(a1);
        goto LABEL_20;
      }
    }
    HvUnlockHiveFlusherExclusive(a1);
    CmpUnlockRegistry();
    v10 = CmpFlushHive(v12, 0xCu);
    if ( v10 >= 0 )
    {
      CmpDetachFromRegistryProcess((__int64)v17);
      v6 = 0;
      CmpBecomeActiveFlusherAndReconciler(a1);
      v7 = 1;
      CmpLockRegistry();
      HvLockHiveFlusherExclusive(a1);
      if ( (*(_DWORD *)(a1 + 160) & 4) != 0 )
        goto LABEL_5;
      if ( (*(_DWORD *)(a1 + 4152) & 0x20) == 0 )
      {
        v10 = CmpCmdRenameHive(*(HANDLE *)(a1 + 1536), ObjectInformation, 0);
        if ( v10 >= 0 )
        {
          *(_DWORD *)(a1 + 160) |= 4u;
          v10 = CmpCmdRenameHive(*(HANDLE *)(v12 + 1536), 0LL, 0);
          if ( v10 < 0 || (v10 = ZwFlushBuffersFile(*(HANDLE *)(v12 + 1536), &IoStatusBlock), v10 < 0) )
          {
            if ( (int)CmpCmdRenameHive(*(HANDLE *)(a1 + 1536), 0LL, 0) < 0 )
              v10 = -1073741492;
          }
        }
        goto LABEL_18;
      }
LABEL_7:
      v10 = -1073741811;
      goto LABEL_18;
    }
  }
LABEL_20:
  if ( v12 )
  {
    if ( !v6 )
    {
      CmpAttachToRegistryProcess((__int64)v17);
      v6 = 1;
    }
    if ( v10 >= 0 )
    {
      *(_OWORD *)(v12 + 1536) = 0LL;
      *(_OWORD *)(v12 + 1552) = 0LL;
      *(_OWORD *)(v12 + 1568) = 0LL;
    }
    CmpDestroyHive((volatile signed __int32 *)v12);
  }
  if ( v6 )
    CmpDetachFromRegistryProcess((__int64)v17);
  CmSiFreeMemory(v9);
  return (unsigned int)v10;
}
