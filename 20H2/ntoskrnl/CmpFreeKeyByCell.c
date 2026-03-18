/*
 * XREFs of CmpFreeKeyByCell @ 0x140704760
 * Callers:
 *     CmpRemoveHiveFromNamespace @ 0x1402F2DB4 (CmpRemoveHiveFromNamespace.c)
 *     CmDeleteLayeredKey @ 0x1404EB788 (CmDeleteLayeredKey.c)
 *     CmpCreateTombstone @ 0x1404EBC7C (CmpCreateTombstone.c)
 *     CmpTransMgrFreeVolatileData @ 0x1406A192C (CmpTransMgrFreeVolatileData.c)
 *     CmpCleanupLightWeightUoWData @ 0x1406A42E0 (CmpCleanupLightWeightUoWData.c)
 *     CmDeleteKey @ 0x1407022EC (CmDeleteKey.c)
 *     CmpCreateChild @ 0x140704B98 (CmpCreateChild.c)
 *     CmpCopyMergeOfLayeredKeyNode @ 0x140725A10 (CmpCopyMergeOfLayeredKeyNode.c)
 *     CmpCommitDeleteKeyUoW @ 0x14072F5F8 (CmpCommitDeleteKeyUoW.c)
 *     CmpCommitAddKeyUoW @ 0x140760EB8 (CmpCommitAddKeyUoW.c)
 *     CmpSyncSubKeysAfterDelete @ 0x14087C8F0 (CmpSyncSubKeysAfterDelete.c)
 *     CmRestoreKey @ 0x14087E5A8 (CmRestoreKey.c)
 *     CmpDeleteTree @ 0x140880FFC (CmpDeleteTree.c)
 *     CmpCommitRenameKeyUoW @ 0x140881108 (CmpCommitRenameKeyUoW.c)
 *     CmpLightWeightCommitDeleteKeyUoW @ 0x1408817B0 (CmpLightWeightCommitDeleteKeyUoW.c)
 *     CmpLightWeightPrepareAddKeyUoW @ 0x140881E9C (CmpLightWeightPrepareAddKeyUoW.c)
 *     CmpLightWeightPrepareRenameKeyUoW @ 0x1408822AC (CmpLightWeightPrepareRenameKeyUoW.c)
 *     CmpPartialPromoteSingleKeyFromKeyNodeStacks @ 0x1408829B0 (CmpPartialPromoteSingleKeyFromKeyNodeStacks.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140220F40 (ExReleasePushLockEx.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     CmpFreeSecurityDescriptor @ 0x140701EC0 (CmpFreeSecurityDescriptor.c)
 *     CmpRemoveSubKey @ 0x140702B30 (CmpRemoveSubKey.c)
 *     CmpMarkKeyDirty @ 0x140704078 (CmpMarkKeyDirty.c)
 *     CmpFreeKeyBody @ 0x1407042D8 (CmpFreeKeyBody.c)
 *     CmpFreeValue @ 0x140706124 (CmpFreeValue.c)
 *     HvFreeCell @ 0x140706E0C (HvFreeCell.c)
 */

__int64 __fastcall CmpFreeKeyByCell(ULONG_PTR BugCheckParameter2, unsigned int a2, char a3)
{
  ULONG_PTR v5; // r12
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // rax
  unsigned int v10; // ebx
  __int64 v12; // r15
  unsigned int i; // ebx
  _DWORD v14[4]; // [rsp+20h] [rbp-10h] BYREF
  int v15; // [rsp+70h] [rbp+40h] BYREF
  int v16; // [rsp+74h] [rbp+44h]
  int v17; // [rsp+88h] [rbp+58h] BYREF
  int v18; // [rsp+8Ch] [rbp+5Ch]

  v16 = 0;
  v15 = -1;
  v17 = -1;
  v14[0] = -1;
  v5 = BugCheckParameter2 + 1776;
  v18 = 0;
  v14[1] = 0;
  ExAcquirePushLockExclusiveEx(BugCheckParameter2 + 1776, 0LL);
  if ( !CmpMarkKeyDirty(BugCheckParameter2, a2, a3) )
  {
    v10 = -1073741443;
    goto LABEL_17;
  }
  v7 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(BugCheckParameter2, a2, &v15);
  v8 = v7;
  if ( !v7 )
    goto LABEL_23;
  if ( a3 == 1 )
  {
    if ( !CmpRemoveSubKey(BugCheckParameter2, *(unsigned int *)(v7 + 16), a2) )
      goto LABEL_24;
    v9 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(
           BugCheckParameter2,
           *(unsigned int *)(v8 + 16),
           &v17);
    if ( !v9 )
      goto LABEL_24;
    if ( !(*(_DWORD *)(v9 + 20) + *(_DWORD *)(v9 + 24)) )
    {
      *(_WORD *)(v9 + 52) = 0;
      *(_DWORD *)(v9 + 56) = 0;
    }
    (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v17);
  }
  if ( (*(_BYTE *)(v8 + 2) & 0x42) != 0 )
    goto LABEL_13;
  if ( !*(_DWORD *)(v8 + 36) )
  {
LABEL_11:
    if ( *(_DWORD *)(v8 + 44) != -1 )
      CmpFreeSecurityDescriptor(BugCheckParameter2, a2);
LABEL_13:
    (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v15);
    v8 = 0LL;
    if ( CmpFreeKeyBody(BugCheckParameter2, a2) )
    {
      v10 = 0;
      goto LABEL_15;
    }
LABEL_23:
    v10 = -1073741670;
    goto LABEL_17;
  }
  v12 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(
          BugCheckParameter2,
          *(unsigned int *)(v8 + 40),
          v14);
  if ( v12 )
  {
    for ( i = 0; i < *(_DWORD *)(v8 + 36); ++i )
      CmpFreeValue(BugCheckParameter2, *(unsigned int *)(v12 + 4LL * i));
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v14);
    HvFreeCell(BugCheckParameter2, *(unsigned int *)(v8 + 40));
    goto LABEL_11;
  }
LABEL_24:
  v10 = -1073741670;
LABEL_15:
  if ( v8 )
    (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v15);
LABEL_17:
  ExReleasePushLockEx(v5, 0LL);
  return v10;
}
