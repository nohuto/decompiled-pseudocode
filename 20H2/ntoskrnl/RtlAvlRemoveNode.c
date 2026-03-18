/*
 * XREFs of RtlAvlRemoveNode @ 0x1402C3340
 * Callers:
 *     MiDeleteStaleCacheMaps @ 0x14023DBCC (MiDeleteStaleCacheMaps.c)
 *     MiRemoveFromSystemSpace @ 0x14024EF4C (MiRemoveFromSystemSpace.c)
 *     MiRemoveUnmappedIoNode @ 0x14025FA08 (MiRemoveUnmappedIoNode.c)
 *     MiDereferenceIoPages @ 0x140261608 (MiDereferenceIoPages.c)
 *     MiDeleteVad @ 0x14027E4D0 (MiDeleteVad.c)
 *     MiZeroPage @ 0x1402C1B30 (MiZeroPage.c)
 *     MiWaitForInPageComplete @ 0x1402D0710 (MiWaitForInPageComplete.c)
 *     MiUpdateSystemProtoPtesTree @ 0x1402D5630 (MiUpdateSystemProtoPtesTree.c)
 *     MiRemoveFaultNode @ 0x14032677C (MiRemoveFaultNode.c)
 *     MiUpdatePerSessionProto @ 0x14032D5A8 (MiUpdatePerSessionProto.c)
 *     MiCombiningInProgress @ 0x140366A08 (MiCombiningInProgress.c)
 *     MiFreeCombineBlock @ 0x14036B480 (MiFreeCombineBlock.c)
 *     MiProcessLoaderEntry @ 0x140371B54 (MiProcessLoaderEntry.c)
 *     MiRemoveMappingNode @ 0x14037A3F0 (MiRemoveMappingNode.c)
 *     MiSessionRemoveImage @ 0x14038A8A8 (MiSessionRemoveImage.c)
 *     MmManageFaultRange @ 0x14039DEC8 (MmManageFaultRange.c)
 *     MiUpdatePageFileList @ 0x1403BF258 (MiUpdatePageFileList.c)
 *     MiMakeEntireHugePfnGood @ 0x1403F2104 (MiMakeEntireHugePfnGood.c)
 *     MiMarkHugePfnGood @ 0x1403F2560 (MiMarkHugePfnGood.c)
 *     MiFreeMdlTracker @ 0x14052F030 (MiFreeMdlTracker.c)
 *     MmUpdateMdlTrackerForMdlSwitch @ 0x14052F898 (MmUpdateMdlTrackerForMdlSwitch.c)
 *     MiHotRemoveHugeRange @ 0x1405311F8 (MiHotRemoveHugeRange.c)
 *     MiReleasePartitionHugeIoSpace @ 0x140531D88 (MiReleasePartitionHugeIoSpace.c)
 *     MiDeleteKernelStackNode @ 0x14053436C (MiDeleteKernelStackNode.c)
 *     MiMakeIoRangePermanent @ 0x1405350B8 (MiMakeIoRangePermanent.c)
 *     MiUnlinkSessionList @ 0x14053C620 (MiUnlinkSessionList.c)
 *     MiRemoveVad @ 0x140553AF0 (MiRemoveVad.c)
 *     MiReplaceSystemProtoPtesNode @ 0x1405563E0 (MiReplaceSystemProtoPtesNode.c)
 *     MiCloneVads @ 0x140557858 (MiCloneVads.c)
 *     MiDeleteDeferredCloneDescriptors @ 0x1405585F0 (MiDeleteDeferredCloneDescriptors.c)
 *     MiAllocateLargeZeroPages @ 0x14055BF8C (MiAllocateLargeZeroPages.c)
 *     MiActOnPartitionNodePages @ 0x14055EDD0 (MiActOnPartitionNodePages.c)
 *     MiClearRangeInPartitionTree @ 0x14055FCA0 (MiClearRangeInPartitionTree.c)
 *     MiDeletePartitionResources @ 0x14055FE48 (MiDeletePartitionResources.c)
 *     MiFreePartitionTree @ 0x14056086C (MiFreePartitionTree.c)
 *     MiInsertPartitionPages @ 0x140560A70 (MiInsertPartitionPages.c)
 *     PsAdjustBasicEnclaveThreadList @ 0x1405829C4 (PsAdjustBasicEnclaveThreadList.c)
 *     RtlRemoveDynamicEnforcedAddressRange @ 0x1405CDC34 (RtlRemoveDynamicEnforcedAddressRange.c)
 *     MiRemoveSharedCommitNode @ 0x140623DA0 (MiRemoveSharedCommitNode.c)
 *     ExpWnfDeleteNameInstance @ 0x1406519EC (ExpWnfDeleteNameInstance.c)
 *     MiSectionDelete @ 0x14067DC40 (MiSectionDelete.c)
 *     MiProcessCrcList @ 0x140723090 (MiProcessCrcList.c)
 *     MiDeleteHotPatchRecord @ 0x1408CC23C (MiDeleteHotPatchRecord.c)
 *     MiInsertHotPatchRecord @ 0x1408CD1E0 (MiInsertHotPatchRecord.c)
 *     MiInsertSecureImageActivePatch @ 0x1408CD334 (MiInsertSecureImageActivePatch.c)
 *     MiUnloadHotPatch @ 0x1408D1008 (MiUnloadHotPatch.c)
 *     MiUnloadHotPatchForUserSid @ 0x1408D1154 (MiUnloadHotPatchForUserSid.c)
 *     MiAllocateEntireImageFileExtents @ 0x1408D1AE4 (MiAllocateEntireImageFileExtents.c)
 *     MiDeleteImageExtentList @ 0x1408D2850 (MiDeleteImageExtentList.c)
 *     MiRemoveUserPhysicalPagesView @ 0x1408D8C8C (MiRemoveUserPhysicalPagesView.c)
 *     MiHotAddPartitionMemory @ 0x1408DDABC (MiHotAddPartitionMemory.c)
 *     PspProcessDynamicEHContinuationTargets @ 0x14090A554 (PspProcessDynamicEHContinuationTargets.c)
 *     PsCallEnclave @ 0x14090FA20 (PsCallEnclave.c)
 *     MiInitializeDriverPtes @ 0x140A69998 (MiInitializeDriverPtes.c)
 * Callees:
 *     RtlpTreeDoubleRotateNodes @ 0x140303DB0 (RtlpTreeDoubleRotateNodes.c)
 */

char __fastcall RtlAvlRemoveNode(unsigned __int64 *a1, unsigned __int64 *a2)
{
  unsigned __int64 v2; // r10
  unsigned __int64 v4; // r11
  unsigned __int64 v5; // r9
  __int64 v7; // rax
  unsigned __int64 v8; // rdx
  char v9; // r10
  char v10; // al
  _BYTE *v11; // rsi
  unsigned __int8 v12; // di
  __int64 v13; // rbp
  unsigned __int64 v14; // rbp
  bool v15; // zf
  _QWORD *v16; // r9
  unsigned __int64 v17; // rcx
  unsigned int v18; // esi
  __int64 v19; // rdi
  __int64 v20; // r9
  __int64 v21; // r9
  unsigned __int64 v22; // r9
  unsigned __int64 v23; // r15
  char v24; // r8
  __int64 v25; // rax
  _QWORD *v26; // r11
  unsigned __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rax
  _QWORD *v30; // rax
  char v31; // r9
  unsigned __int8 v32; // cl
  __int64 v33; // rdi

  v2 = *a2;
  v4 = a2[1];
  v5 = v4;
  if ( *a2 )
    v5 = *a2;
  v7 = 0LL;
  if ( v2 )
    v7 = a2[1];
  if ( !v7 )
  {
    v8 = a2[2] & 0xFFFFFFFFFFFFFFFCuLL;
    if ( v5 )
    {
      if ( *(unsigned __int64 **)(v5 + 16) != a2 )
        goto LABEL_77;
      *(_QWORD *)(v5 + 16) = v8;
    }
    if ( v8 )
    {
      if ( *(unsigned __int64 **)(v8 + 8) == a2 )
      {
        v9 = 3;
        *(_QWORD *)(v8 + 8) = v5;
        goto LABEL_14;
      }
      if ( *(unsigned __int64 **)v8 == a2 )
      {
        v9 = 1;
        *(_QWORD *)v8 = v5;
        goto LABEL_14;
      }
    }
    else if ( (unsigned __int64 *)*a1 == a2 )
    {
      *a1 = v5;
      return v7;
    }
LABEL_77:
    __fastfail(0x1Du);
  }
  if ( (a2[2] & 3) == 3 )
  {
    v30 = *(_QWORD **)(v2 + 8);
    v18 = 0;
    v17 = *a2;
    v8 = *a2;
    if ( v30 )
    {
      v18 = 1;
      do
      {
        v8 = v17;
        v17 = (unsigned __int64)v30;
        v30 = (_QWORD *)v30[1];
      }
      while ( v30 );
    }
    v19 = *(_QWORD *)v17;
  }
  else
  {
    v16 = *(_QWORD **)v4;
    v17 = a2[1];
    v8 = v17;
    v18 = 1;
    if ( *(_QWORD *)v4 )
    {
      v18 = 0;
      do
      {
        v8 = v17;
        v17 = (unsigned __int64)v16;
        v16 = (_QWORD *)*v16;
      }
      while ( v16 );
    }
    v19 = *(_QWORD *)(v17 + 8);
  }
  *(_QWORD *)v17 = v2;
  *(_QWORD *)(v17 + 8) = v4;
  v20 = *(_QWORD *)(v2 + 16);
  if ( (unsigned __int64 *)(v20 & 0xFFFFFFFFFFFFFFFCuLL) != a2 )
    goto LABEL_77;
  *(_QWORD *)(v2 + 16) = v17 | v20 & 3;
  v21 = *(_QWORD *)(v4 + 16);
  if ( (unsigned __int64 *)(v21 & 0xFFFFFFFFFFFFFFFCuLL) != a2 )
    goto LABEL_77;
  *(_QWORD *)(v4 + 16) = v17 | v21 & 3;
  if ( (*(_QWORD *)(v17 + 16) & 0xFFFFFFFFFFFFFFFCuLL) != v8 )
    goto LABEL_77;
  *(_QWORD *)(v8 + 8LL * v18) = v19;
  if ( v19 )
  {
    if ( *(_QWORD *)(v19 + 16) != v17 )
      goto LABEL_77;
    *(_QWORD *)(v19 + 16) = v8;
  }
  *(_QWORD *)(v17 + 16) = a2[2];
  v9 = 3;
  if ( !v18 )
    v9 = 1;
  v22 = a2[2] & 0xFFFFFFFFFFFFFFFCuLL;
  if ( !v22 )
  {
    if ( (unsigned __int64 *)*a1 == a2 )
    {
      *a1 = v17;
      goto LABEL_14;
    }
    goto LABEL_77;
  }
  v29 = 0LL;
  if ( *(unsigned __int64 **)(v22 + 8) == a2 )
    v29 = 8LL;
  if ( *(unsigned __int64 **)(v29 + v22) != a2 )
    goto LABEL_77;
  *(_QWORD *)(v29 + v22) = v17;
  while ( 1 )
  {
LABEL_14:
    v10 = *(_BYTE *)(v8 + 16);
    v11 = (_BYTE *)(v8 + 16);
    v12 = v10 & 3;
    if ( (v10 & 3) == ((unsigned __int8)v9 ^ 2) )
    {
      LOBYTE(v7) = v10 & 0xFC;
      *v11 = v7;
      v13 = *(_QWORD *)v11;
      goto LABEL_20;
    }
    if ( !v12 )
    {
      LOBYTE(v7) = v9 | v10 & 0xFC;
      *(_BYTE *)(v8 + 16) = v7;
      return v7;
    }
    v13 = *(_QWORD *)v11;
    v23 = *(_QWORD *)v8;
    if ( v9 == 1 )
      v23 = *(_QWORD *)(v8 + 8);
    v24 = *(_BYTE *)(v23 + 16) & 3;
    if ( v24 != ((unsigned __int8)v9 ^ 2) )
      break;
    v7 = RtlpTreeDoubleRotateNodes(a1, v8, v23, v9 == 1);
    *v11 &= 0xFCu;
    v8 = v7;
    v31 = *(_BYTE *)(v23 + 16) & 0xFC;
    *(_BYTE *)(v23 + 16) = v31;
    v32 = *(_BYTE *)(v7 + 16);
    LODWORD(v7) = v32 & 3;
    if ( v12 == (_DWORD)v7 )
    {
      LOBYTE(v7) = (v12 ^ *v11 ^ 0xFE) & 3;
      *v11 ^= v7;
      *(_BYTE *)(v8 + 16) &= 0xFCu;
    }
    else
    {
      if ( v12 == ((v32 ^ 0xFE) & 3) )
        *(_BYTE *)(v23 + 16) = v12 | v31;
      *(_BYTE *)(v8 + 16) &= 0xFCu;
    }
LABEL_20:
    v14 = v13 & 0xFFFFFFFFFFFFFFFCuLL;
    if ( !v14 )
      return v7;
    v15 = *(_QWORD *)(v14 + 8) == v8;
    v9 = 3;
    v8 = v14;
    if ( !v15 )
      v9 = 1;
  }
  if ( (*(_QWORD *)(v23 + 16) & 0xFFFFFFFFFFFFFFFCuLL) != v8 )
    goto LABEL_77;
  v25 = 0LL;
  if ( v9 == 1 )
    v25 = 8LL;
  v26 = (_QWORD *)(v25 + v8);
  if ( *(_QWORD *)(v25 + v8) != v23 )
    goto LABEL_77;
  v27 = v13 & 0xFFFFFFFFFFFFFFFCuLL;
  if ( (v13 & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
  {
    if ( *(_QWORD *)(v27 + 8) == v8 )
    {
      *(_QWORD *)(v27 + 8) = v23;
    }
    else
    {
      if ( *(_QWORD *)v27 != v8 )
        goto LABEL_77;
      *(_QWORD *)v27 = v23;
    }
  }
  else
  {
    if ( *a1 != v8 )
      goto LABEL_77;
    *a1 = v23;
  }
  *(_QWORD *)(v23 + 16) = v27 | *(_DWORD *)(v23 + 16) & 3;
  v7 = 0LL;
  if ( v9 != 1 )
    v7 = 8LL;
  v28 = *(_QWORD *)(v7 + v23);
  if ( v28 )
  {
    v33 = *(_QWORD *)(v28 + 16);
    if ( (v33 & 0xFFFFFFFFFFFFFFFCuLL) != v23 )
      goto LABEL_77;
    *(_QWORD *)(v28 + 16) = v8 | v33 & 3;
  }
  *v26 = v28;
  *(_QWORD *)(v7 + v23) = v8;
  *(_QWORD *)v11 = v23 | *(_DWORD *)v11 & 3;
  LOBYTE(v7) = *(_BYTE *)(v23 + 16) & 0xFC;
  if ( v24 )
  {
    *(_BYTE *)(v23 + 16) = v7;
    v8 = v23;
    *v11 &= 0xFCu;
    goto LABEL_20;
  }
  *(_BYTE *)(v23 + 16) = v7 | (v9 ^ 0xFE) & 3;
  return v7;
}
