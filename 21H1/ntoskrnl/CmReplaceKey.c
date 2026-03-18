/*
 * XREFs of CmReplaceKey @ 0x140869428
 * Callers:
 *     NtReplaceKey @ 0x1408647D0 (NtReplaceKey.c)
 * Callees:
 *     CmpAllocateTransientPoolWithTag @ 0x14025C5C0 (CmpAllocateTransientPoolWithTag.c)
 *     CmSiFreeMemory @ 0x1402E2170 (CmSiFreeMemory.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     ZwFlushBuffersFile @ 0x1403F2C90 (ZwFlushBuffersFile.c)
 *     CmpCmdHiveOpen @ 0x1405D63B0 (CmpCmdHiveOpen.c)
 *     CmpAttachToRegistryProcess @ 0x14061FF00 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140621720 (CmpDetachFromRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x140629290 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1406292D0 (CmpLockRegistry.c)
 *     CmpFlushHive @ 0x140664FA8 (CmpFlushHive.c)
 *     HvUnlockHiveFlusherExclusive @ 0x14068847C (HvUnlockHiveFlusherExclusive.c)
 *     HvLockHiveFlusherExclusive @ 0x1406884B4 (HvLockHiveFlusherExclusive.c)
 *     CmpDestroyHive @ 0x140715158 (CmpDestroyHive.c)
 *     CmpBecomeActiveFlusherAndReconciler @ 0x140781318 (CmpBecomeActiveFlusherAndReconciler.c)
 *     CmpFinishBeingActiveFlusherAndReconciler @ 0x140781A00 (CmpFinishBeingActiveFlusherAndReconciler.c)
 *     CmpCmdRenameHive @ 0x14087231C (CmpCmdRenameHive.c)
 *     CmpPreserveSystemHiveData @ 0x140874E8C (CmpPreserveSystemHiveData.c)
 */

__int64 __fastcall CmReplaceKey(__int64 a1, __int64 a2, const UNICODE_STRING *a3, struct _LOOKASIDE_LIST_EX *a4)
{
  char v6; // r14
  char v7; // r12
  struct _PRIVILEGE_SET *TransientPoolWithTag; // rax
  struct _PRIVILEGE_SET *v9; // r15
  int v10; // ebx
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // r8
  _DWORD *v14; // r9
  HANDLE *v15; // rsi
  _BYTE v17[8]; // [rsp+50h] [rbp-B0h] BYREF
  PVOID P; // [rsp+58h] [rbp-A8h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+60h] [rbp-A0h] BYREF
  _OWORD v20[3]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE ObjectInformation[512]; // [rsp+A0h] [rbp-60h] BYREF

  v17[0] = 0;
  P = 0LL;
  IoStatusBlock = 0LL;
  v6 = 0;
  v7 = 0;
  memset(v20, 0, sizeof(v20));
  TransientPoolWithTag = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithTag(PagedPool, 0x1B0uLL, 0x33394D43u, a4);
  v9 = TransientPoolWithTag;
  if ( !TransientPoolWithTag )
    return (unsigned int)-1073741670;
  v11 = CmpCmdHiveOpen(a3, 0, (__int64)v17, (__int64)&P, 16777217, 0, 0LL, 0LL, (__int64)TransientPoolWithTag);
  v15 = (HANDLE *)P;
  v10 = v11;
  if ( v11 >= 0 )
  {
    CmpAttachToRegistryProcess((__int64)v20, v12, v13, v14);
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
      v10 = CmpPreserveSystemHiveData(a1, v15);
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
    v10 = CmpFlushHive((ULONG_PTR)v15, 0xCu);
    if ( v10 >= 0 )
    {
      CmpDetachFromRegistryProcess((__int64)v20, v12, v13, v14);
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
          v10 = CmpCmdRenameHive(v15[192], 0LL, 0);
          if ( v10 < 0 || (v10 = ZwFlushBuffersFile(v15[192], &IoStatusBlock), v10 < 0) )
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
  if ( v15 )
  {
    if ( !v6 )
    {
      CmpAttachToRegistryProcess((__int64)v20, v12, v13, v14);
      v6 = 1;
    }
    if ( v10 >= 0 )
    {
      *((_OWORD *)v15 + 96) = 0LL;
      *((_OWORD *)v15 + 97) = 0LL;
      *((_OWORD *)v15 + 98) = 0LL;
    }
    CmpDestroyHive((volatile signed __int32 *)v15);
  }
  if ( v6 )
    CmpDetachFromRegistryProcess((__int64)v20, v12, v13, v14);
  CmSiFreeMemory(v9);
  return (unsigned int)v10;
}
