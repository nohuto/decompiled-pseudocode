/*
 * XREFs of CmpFreeKeyByCell @ 0x1406600A0
 * Callers:
 *     CmpRemoveHiveFromNamespace @ 0x140213A9C (CmpRemoveHiveFromNamespace.c)
 *     CmDeleteLayeredKey @ 0x1404ED2B8 (CmDeleteLayeredKey.c)
 *     CmpCreateTombstone @ 0x1404ED79C (CmpCreateTombstone.c)
 *     CmpCleanupLightWeightUoWData @ 0x1405E17F4 (CmpCleanupLightWeightUoWData.c)
 *     CmpCreateChild @ 0x14065C8F4 (CmpCreateChild.c)
 *     CmDeleteKey @ 0x140660814 (CmDeleteKey.c)
 *     CmpTransMgrFreeVolatileData @ 0x140663F6C (CmpTransMgrFreeVolatileData.c)
 *     CmpCopyMergeOfLayeredKeyNode @ 0x140729950 (CmpCopyMergeOfLayeredKeyNode.c)
 *     CmRenameKey @ 0x14086CB64 (CmRenameKey.c)
 *     CmpSyncSubKeysAfterDelete @ 0x14087A3C8 (CmpSyncSubKeysAfterDelete.c)
 *     CmRestoreKey @ 0x14087C090 (CmRestoreKey.c)
 *     CmpDeleteTree @ 0x14087EAFC (CmpDeleteTree.c)
 *     CmpLightWeightCommitDeleteKeyUoW @ 0x14087EE34 (CmpLightWeightCommitDeleteKeyUoW.c)
 *     CmpLightWeightPrepareAddKeyUoW @ 0x14087F514 (CmpLightWeightPrepareAddKeyUoW.c)
 *     CmpLightWeightPrepareRenameKeyUoW @ 0x14087F924 (CmpLightWeightPrepareRenameKeyUoW.c)
 *     CmpPartialPromoteSingleKeyFromKeyNodeStacks @ 0x140880094 (CmpPartialPromoteSingleKeyFromKeyNodeStacks.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140355BE0 (ExReleasePushLockEx.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     CmpMarkKeyDirty @ 0x14065F0B8 (CmpMarkKeyDirty.c)
 *     CmpFreeValue @ 0x140660258 (CmpFreeValue.c)
 *     CmpFreeKeyBody @ 0x1406603FC (CmpFreeKeyBody.c)
 *     CmpRemoveSubKey @ 0x14066077C (CmpRemoveSubKey.c)
 *     CmpFreeSecurityDescriptor @ 0x140661338 (CmpFreeSecurityDescriptor.c)
 *     HvFreeCell @ 0x140720914 (HvFreeCell.c)
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
    if ( !(unsigned __int8)CmpRemoveSubKey(BugCheckParameter2, *(unsigned int *)(v7 + 16), a2) )
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
    if ( (unsigned __int8)CmpFreeKeyBody(BugCheckParameter2, a2) )
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
