/*
 * XREFs of CmSaveKey @ 0x14071717C
 * Callers:
 *     NtSaveKeyEx @ 0x140716F00 (NtSaveKeyEx.c)
 *     CmDumpKey @ 0x140878820 (CmDumpKey.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140298F30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402993F0 (ExAcquireRundownProtection_0.c)
 *     CmpUnlockKcbStackFlusherLocksExclusive @ 0x140369A84 (CmpUnlockKcbStackFlusherLocksExclusive.c)
 *     CmpLockKcbStackFlusherLocksExclusive @ 0x140369B9C (CmpLockKcbStackFlusherLocksExclusive.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memset @ 0x14040A280 (memset.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1405E55D0 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpCleanupKcbStack @ 0x1405F0A50 (CmpCleanupKcbStack.c)
 *     CmpLockKcbStackShared @ 0x1405F0AD0 (CmpLockKcbStackShared.c)
 *     CmpUnlockKcbStack @ 0x1405F0B30 (CmpUnlockKcbStack.c)
 *     CmpUnlockRegistry @ 0x1405F3D20 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1405F3D60 (CmpLockRegistry.c)
 *     CmpUuidCreate @ 0x1406564B4 (CmpUuidCreate.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1406725F0 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpCleanupKeyNodeStack @ 0x1406E93D8 (CmpCleanupKeyNodeStack.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x1406E9448 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 *     CmpInitializeKeyNodeStack @ 0x1406E9520 (CmpInitializeKeyNodeStack.c)
 *     CmpTraceHiveSaveStop @ 0x14071748C (CmpTraceHiveSaveStop.c)
 *     CmpDestroyHive @ 0x1407174E8 (CmpDestroyHive.c)
 *     HvWriteExternal @ 0x140717550 (HvWriteExternal.c)
 *     CmpTraceHiveSaveTreeCopied @ 0x140717740 (CmpTraceHiveSaveTreeCopied.c)
 *     CmpPromoteSubtree @ 0x140717798 (CmpPromoteSubtree.c)
 *     CmpCopyMergeOfLayeredKeyNode @ 0x140717A50 (CmpCopyMergeOfLayeredKeyNode.c)
 *     CmpDoAccessCheckOnLayeredSubtree @ 0x140717CE0 (CmpDoAccessCheckOnLayeredSubtree.c)
 *     CmpStartKeyNodeStack @ 0x140718708 (CmpStartKeyNodeStack.c)
 *     CmpPopulateKeyNodeStackFromKcbStack @ 0x1407187E0 (CmpPopulateKeyNodeStackFromKcbStack.c)
 *     CmpTraceHiveSaveStart @ 0x14071887C (CmpTraceHiveSaveStart.c)
 *     CmpCreateTemporaryHive @ 0x1407188F0 (CmpCreateTemporaryHive.c)
 *     CmpTraceHiveSaveFileCopied @ 0x140867864 (CmpTraceHiveSaveFileCopied.c)
 *     CmpKeyNodeStackEntryPopulate @ 0x140872E4C (CmpKeyNodeStackEntryPopulate.c)
 *     CmpLogUnsupportedOperation @ 0x140872E88 (CmpLogUnsupportedOperation.c)
 *     CmpSaveKeyByFileCopy @ 0x14087A390 (CmpSaveKeyByFileCopy.c)
 *     CmpFullPromoteHiveRootFromKeyNodeStack @ 0x14087CDE4 (CmpFullPromoteHiveRootFromKeyNodeStack.c)
 */

__int64 __fastcall CmSaveKey(__int64 a1, __int64 a2, int a3, char a4)
{
  char v5; // r14
  char v6; // r12
  BOOLEAN v7; // r13
  __int64 v8; // rsi
  ULONG_PTR v9; // rdi
  int started; // ebx
  __int64 v11; // r15
  __int64 v12; // r8
  struct _LOOKASIDE_LIST_EX *v13; // r9
  int v14; // r9d
  int v15; // ecx
  __int64 EntryAtLayerHeight; // rax
  char v18; // [rsp+30h] [rbp-99h]
  int v20; // [rsp+34h] [rbp-95h] BYREF
  int v21; // [rsp+38h] [rbp-91h]
  _OWORD v22[2]; // [rsp+40h] [rbp-89h] BYREF
  __int64 v23; // [rsp+60h] [rbp-69h]
  __int64 v24; // [rsp+68h] [rbp-61h]
  __int16 v25[40]; // [rsp+70h] [rbp-59h] BYREF
  UUID v26; // [rsp+C0h] [rbp-9h] BYREF
  UUID Uuid; // [rsp+D0h] [rbp+7h] BYREF

  v23 = a2;
  v21 = a3;
  v24 = a1;
  Uuid = 0LL;
  v26 = 0LL;
  memset(v25, 0, sizeof(v25));
  memset(v22, 0, sizeof(v22));
  WORD1(v22[0]) = -1;
  CmpInitializeKeyNodeStack((char *)v25);
  v20 = -1;
  v5 = 0;
  v18 = 0;
  v6 = 0;
  v7 = 0;
  v8 = 0LL;
  v9 = 0LL;
  started = CmpUuidCreate(&Uuid);
  if ( started >= 0 )
  {
    started = CmpUuidCreate(&v26);
    if ( started >= 0 )
    {
      v9 = CmpCreateTemporaryHive(&Uuid, &v26);
      if ( !v9 )
      {
        started = -1073741670;
        goto LABEL_15;
      }
      CmpLockRegistry();
      v11 = *(_QWORD *)(a1 + 8);
      v5 = 1;
      started = CmpStartKcbStackForTopLayerKcb((__int64)v22, v11, v12, v13);
      if ( started < 0 )
        goto LABEL_15;
      CmpLockKcbStackShared((__int64)v22);
      v6 = 1;
      if ( *(_QWORD *)(v11 + 32) == CmpMasterHive )
      {
        started = -1073741790;
        goto LABEL_15;
      }
      CmpTraceHiveSaveStart(v11);
      v18 = 1;
      started = CmpPerformKeyBodyDeletionCheck(v24, 0LL);
      if ( started >= 0 )
      {
        started = CmpStartKeyNodeStack(v25, (unsigned __int16)(*(_WORD *)(v11 + 66) + 1));
        if ( started >= 0 )
        {
          CmpLockKcbStackFlusherLocksExclusive((__int64)v22);
          CmpPopulateKeyNodeStackFromKcbStack(v25, v22);
          LOBYTE(v14) = a4;
          started = CmpDoAccessCheckOnLayeredSubtree(0, 0, (unsigned int)v25, v14, 131097, 3);
          if ( started < 0 )
          {
LABEL_32:
            CmpUnlockKcbStackFlusherLocksExclusive((__int64)v22);
            goto LABEL_15;
          }
          v8 = *(_QWORD *)(v11 + 32);
          if ( (*(_DWORD *)(v8 + 160) & 2) != 0 && *(_DWORD *)(v8 + 104) && *(_QWORD *)(v8 + 1536) )
          {
            if ( *(_WORD *)(v11 + 66) )
            {
              CmpLogUnsupportedOperation(25LL);
              started = -1073741822;
              goto LABEL_32;
            }
            v7 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(v8 + 1632));
            if ( !v7 )
            {
              started = -1073741444;
              goto LABEL_32;
            }
            CmpUnlockKcbStackFlusherLocksExclusive((__int64)v22);
            CmpUnlockKcbStack((__int64)v22);
            v6 = 0;
            CmpUnlockRegistry();
            v5 = 0;
            started = CmpSaveKeyByFileCopy(v8);
            if ( started >= 0 )
              CmpTraceHiveSaveFileCopied();
          }
          else
          {
            v15 = v21;
            *(_DWORD *)(*(_QWORD *)(v9 + 64) + 24LL) = v21;
            *(_DWORD *)(v9 + 212) = v15;
            started = CmpCopyMergeOfLayeredKeyNode((unsigned int)v25, v9, -1, 1, 0, (__int64)&v20);
            if ( started < 0 )
              goto LABEL_32;
            CmpTraceHiveSaveTreeCopied();
            *(_DWORD *)(*(_QWORD *)(v9 + 64) + 36LL) = v20;
            EntryAtLayerHeight = CmpKeyNodeStackGetEntryAtLayerHeight((__int64)v25, v25[0]);
            CmpKeyNodeStackEntryPopulate(EntryAtLayerHeight, v9);
            started = CmpFullPromoteHiveRootFromKeyNodeStack(v25);
            if ( started < 0 )
              goto LABEL_32;
            started = CmpPromoteSubtree(0LL, v25);
            if ( started < 0 )
              goto LABEL_32;
            CmpUnlockKcbStackFlusherLocksExclusive((__int64)v22);
            CmpCleanupKeyNodeStack((__int64)v25);
            CmpInitializeKeyNodeStack((char *)v25);
            CmpUnlockKcbStack((__int64)v22);
            v6 = 0;
            CmpUnlockRegistry();
            *(_QWORD *)(v9 + 1552) = v23;
            v5 = 0;
            started = HvWriteExternal(v9);
            if ( started >= 0 )
              started = 0;
          }
        }
      }
    }
  }
LABEL_15:
  CmpCleanupKeyNodeStack((__int64)v25);
  if ( v6 )
    CmpUnlockKcbStack((__int64)v22);
  if ( v5 )
    CmpUnlockRegistry();
  if ( v7 )
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v8 + 1632));
  CmpCleanupKcbStack((__int64)v22);
  if ( v9 )
  {
    *(_QWORD *)(v9 + 1552) = 0LL;
    CmpDestroyHive((PVOID)v9);
  }
  if ( v18 )
    CmpTraceHiveSaveStop((unsigned int)started);
  return (unsigned int)started;
}
