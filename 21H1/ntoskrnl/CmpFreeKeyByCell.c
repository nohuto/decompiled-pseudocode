/*
 * XREFs of CmpFreeKeyByCell @ 0x1406963D0
 * Callers:
 *     CmpRemoveHiveFromNamespace @ 0x1402D2EA0 (CmpRemoveHiveFromNamespace.c)
 *     CmDeleteLayeredKey @ 0x1404E78C8 (CmDeleteLayeredKey.c)
 *     CmpCreateTombstone @ 0x1404E7DBC (CmpCreateTombstone.c)
 *     CmpCleanupLightWeightPrepare @ 0x1406585D4 (CmpCleanupLightWeightPrepare.c)
 *     CmpTransMgrFreeVolatileData @ 0x14068E3E8 (CmpTransMgrFreeVolatileData.c)
 *     CmDeleteKey @ 0x140692448 (CmDeleteKey.c)
 *     CmpCreateChild @ 0x140696A68 (CmpCreateChild.c)
 *     CmpCopyMergeOfLayeredKeyNode @ 0x1407156C0 (CmpCopyMergeOfLayeredKeyNode.c)
 *     CmpCommitDeleteKeyUoW @ 0x14071F748 (CmpCommitDeleteKeyUoW.c)
 *     CmpCommitAddKeyUoW @ 0x14074DC48 (CmpCommitAddKeyUoW.c)
 *     CmpSyncSubKeysAfterDelete @ 0x140875A90 (CmpSyncSubKeysAfterDelete.c)
 *     CmRestoreKey @ 0x140877748 (CmRestoreKey.c)
 *     CmpDeleteTree @ 0x14087A19C (CmpDeleteTree.c)
 *     CmpCommitRenameKeyUoW @ 0x14087A2A8 (CmpCommitRenameKeyUoW.c)
 *     CmpLightWeightCommitDeleteKeyUoW @ 0x14087A91C (CmpLightWeightCommitDeleteKeyUoW.c)
 *     CmpLightWeightPrepareAddKeyUoW @ 0x14087AFF4 (CmpLightWeightPrepareAddKeyUoW.c)
 *     CmpLightWeightPrepareRenameKeyUoW @ 0x14087B404 (CmpLightWeightPrepareRenameKeyUoW.c)
 *     CmpPartialPromoteSingleKeyFromKeyNodeStacks @ 0x14087BB10 (CmpPartialPromoteSingleKeyFromKeyNodeStacks.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140260EE0 (ExReleasePushLockEx.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     CmpRemoveSubKey @ 0x140692CAC (CmpRemoveSubKey.c)
 *     CmpFreeKeyBody @ 0x140693868 (CmpFreeKeyBody.c)
 *     CmpMarkKeyDirty @ 0x140696588 (CmpMarkKeyDirty.c)
 *     CmpFreeValue @ 0x14069787C (CmpFreeValue.c)
 *     HvFreeCell @ 0x1406989DC (HvFreeCell.c)
 *     CmpFreeSecurityDescriptor @ 0x1406D5AA4 (CmpFreeSecurityDescriptor.c)
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
  if ( !(unsigned __int8)CmpMarkKeyDirty(BugCheckParameter2, a2) )
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
      CmpFreeSecurityDescriptor(BugCheckParameter2);
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
