/*
 * XREFs of CmReplaceKey @ 0x14086A778
 * Callers:
 *     NtReplaceKey @ 0x140865AF0 (NtReplaceKey.c)
 * Callees:
 *     CmSiFreeMemory @ 0x1402029C0 (CmSiFreeMemory.c)
 *     CmpAllocateTransientPoolWithTag @ 0x1402036A0 (CmpAllocateTransientPoolWithTag.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     ZwFlushBuffersFile @ 0x1403F3F20 (ZwFlushBuffersFile.c)
 *     CmpAttachToRegistryProcess @ 0x1405EA8E0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x1405EC100 (CmpDetachFromRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x1405F3D20 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1405F3D60 (CmpLockRegistry.c)
 *     CmpFlushHive @ 0x14061F888 (CmpFlushHive.c)
 *     HvUnlockHiveFlusherExclusive @ 0x14063A8FC (HvUnlockHiveFlusherExclusive.c)
 *     HvLockHiveFlusherExclusive @ 0x14063A934 (HvLockHiveFlusherExclusive.c)
 *     CmpCmdHiveOpen @ 0x14065E3B8 (CmpCmdHiveOpen.c)
 *     CmpDestroyHive @ 0x1407174E8 (CmpDestroyHive.c)
 *     CmpBecomeActiveFlusherAndReconciler @ 0x1407869A4 (CmpBecomeActiveFlusherAndReconciler.c)
 *     CmpFinishBeingActiveFlusherAndReconciler @ 0x140787384 (CmpFinishBeingActiveFlusherAndReconciler.c)
 *     CmpCmdRenameHive @ 0x14087360C (CmpCmdRenameHive.c)
 *     CmpPreserveSystemHiveData @ 0x14087617C (CmpPreserveSystemHiveData.c)
 */

__int64 __fastcall CmReplaceKey(__int64 a1, __int64 a2, const UNICODE_STRING *a3, struct _LOOKASIDE_LIST_EX *a4)
{
  char v6; // r14
  char v7; // r12
  struct _PRIVILEGE_SET *TransientPoolWithTag; // rax
  struct _PRIVILEGE_SET *v9; // r15
  int v10; // ebx
  int v11; // eax
  HANDLE *v12; // rsi
  char v14[8]; // [rsp+50h] [rbp-B0h] BYREF
  PVOID P; // [rsp+58h] [rbp-A8h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+60h] [rbp-A0h] BYREF
  _OWORD v17[3]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE ObjectInformation[512]; // [rsp+A0h] [rbp-60h] BYREF

  v14[0] = 0;
  P = 0LL;
  IoStatusBlock = 0LL;
  v6 = 0;
  v7 = 0;
  memset(v17, 0, sizeof(v17));
  TransientPoolWithTag = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithTag(PagedPool, 0x1B0uLL, 0x33394D43u, a4);
  v9 = TransientPoolWithTag;
  if ( !TransientPoolWithTag )
    return (unsigned int)-1073741670;
  v11 = CmpCmdHiveOpen(a3, 0, v14, &P, 0x1100001u, 0, 0LL, 0LL, TransientPoolWithTag);
  v12 = (HANDLE *)P;
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
    v10 = CmpFlushHive((ULONG_PTR)v12, 0xCu);
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
          v10 = CmpCmdRenameHive(v12[192], 0LL, 0);
          if ( v10 < 0 || (v10 = ZwFlushBuffersFile(v12[192], &IoStatusBlock), v10 < 0) )
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
      *((_OWORD *)v12 + 96) = 0LL;
      *((_OWORD *)v12 + 97) = 0LL;
      *((_OWORD *)v12 + 98) = 0LL;
    }
    CmpDestroyHive((volatile signed __int32 *)v12);
  }
  if ( v6 )
    CmpDetachFromRegistryProcess((__int64)v17);
  CmSiFreeMemory(v9);
  return (unsigned int)v10;
}
