/*
 * XREFs of RtlAvlRemoveNode @ 0x140296CC0
 * Callers:
 *     MiDeleteStaleCacheMaps @ 0x1402032E0 (MiDeleteStaleCacheMaps.c)
 *     MiDeleteVad @ 0x14026B790 (MiDeleteVad.c)
 *     MiZeroPage @ 0x1402954B0 (MiZeroPage.c)
 *     MiRemoveFromSystemSpace @ 0x1402AA180 (MiRemoveFromSystemSpace.c)
 *     MiWaitForInPageComplete @ 0x1402B6650 (MiWaitForInPageComplete.c)
 *     MiUpdateSystemProtoPtesTree @ 0x1402BCA00 (MiUpdateSystemProtoPtesTree.c)
 *     MiDereferenceIoPages @ 0x1402FA7E8 (MiDereferenceIoPages.c)
 *     MiRemoveUnmappedIoNode @ 0x1402FADD0 (MiRemoveUnmappedIoNode.c)
 *     MiRemoveFaultNode @ 0x140317F9C (MiRemoveFaultNode.c)
 *     MiUpdatePerSessionProto @ 0x14031F110 (MiUpdatePerSessionProto.c)
 *     MiCombiningInProgress @ 0x140364068 (MiCombiningInProgress.c)
 *     MiFreeCombineBlock @ 0x140368AE0 (MiFreeCombineBlock.c)
 *     MiProcessLoaderEntry @ 0x14036EFD4 (MiProcessLoaderEntry.c)
 *     MiRemoveMappingNode @ 0x140377740 (MiRemoveMappingNode.c)
 *     MiSessionRemoveImage @ 0x140387778 (MiSessionRemoveImage.c)
 *     MmManageFaultRange @ 0x14039A5E8 (MmManageFaultRange.c)
 *     MiUpdatePageFileList @ 0x1403BBAB8 (MiUpdatePageFileList.c)
 *     MiMakeEntireHugePfnGood @ 0x1403ECBDC (MiMakeEntireHugePfnGood.c)
 *     MiMarkHugePfnGood @ 0x1403ED038 (MiMarkHugePfnGood.c)
 *     MiFreeMdlTracker @ 0x14052B010 (MiFreeMdlTracker.c)
 *     MmUpdateMdlTrackerForMdlSwitch @ 0x14052B878 (MmUpdateMdlTrackerForMdlSwitch.c)
 *     MiHotRemoveHugeRange @ 0x14052D1D8 (MiHotRemoveHugeRange.c)
 *     MiReleasePartitionHugeIoSpace @ 0x14052DD68 (MiReleasePartitionHugeIoSpace.c)
 *     MiDeleteKernelStackNode @ 0x14053034C (MiDeleteKernelStackNode.c)
 *     MiMakeIoRangePermanent @ 0x140531098 (MiMakeIoRangePermanent.c)
 *     MiUnlinkSessionList @ 0x140538600 (MiUnlinkSessionList.c)
 *     MiRemoveVad @ 0x14054FAD0 (MiRemoveVad.c)
 *     MiReplaceSystemProtoPtesNode @ 0x1405523C0 (MiReplaceSystemProtoPtesNode.c)
 *     MiCloneVads @ 0x140553838 (MiCloneVads.c)
 *     MiDeleteDeferredCloneDescriptors @ 0x1405545D0 (MiDeleteDeferredCloneDescriptors.c)
 *     MiAllocateLargeZeroPages @ 0x140557F6C (MiAllocateLargeZeroPages.c)
 *     MiActOnPartitionNodePages @ 0x14055ADB0 (MiActOnPartitionNodePages.c)
 *     MiClearRangeInPartitionTree @ 0x14055BC80 (MiClearRangeInPartitionTree.c)
 *     MiDeletePartitionResources @ 0x14055BE28 (MiDeletePartitionResources.c)
 *     MiFreePartitionTree @ 0x14055C84C (MiFreePartitionTree.c)
 *     MiInsertPartitionPages @ 0x14055CA50 (MiInsertPartitionPages.c)
 *     PsAdjustBasicEnclaveThreadList @ 0x14057E954 (PsAdjustBasicEnclaveThreadList.c)
 *     RtlRemoveDynamicEnforcedAddressRange @ 0x1405C7818 (RtlRemoveDynamicEnforcedAddressRange.c)
 *     MiRemoveSharedCommitNode @ 0x140633470 (MiRemoveSharedCommitNode.c)
 *     MiSectionDelete @ 0x1406341A0 (MiSectionDelete.c)
 *     ExpWnfDeleteNameInstance @ 0x1406664CC (ExpWnfDeleteNameInstance.c)
 *     MiProcessCrcList @ 0x140712D40 (MiProcessCrcList.c)
 *     MiDeleteHotPatchRecord @ 0x1408C50AC (MiDeleteHotPatchRecord.c)
 *     MiInsertHotPatchRecord @ 0x1408C6050 (MiInsertHotPatchRecord.c)
 *     MiInsertSecureImageActivePatch @ 0x1408C61A4 (MiInsertSecureImageActivePatch.c)
 *     MiUnloadHotPatch @ 0x1408C9E78 (MiUnloadHotPatch.c)
 *     MiUnloadHotPatchForUserSid @ 0x1408C9FC4 (MiUnloadHotPatchForUserSid.c)
 *     MiAllocateEntireImageFileExtents @ 0x1408CA954 (MiAllocateEntireImageFileExtents.c)
 *     MiDeleteImageExtentList @ 0x1408CB6C0 (MiDeleteImageExtentList.c)
 *     MiRemoveUserPhysicalPagesView @ 0x1408D1AFC (MiRemoveUserPhysicalPagesView.c)
 *     MiHotAddPartitionMemory @ 0x1408D692C (MiHotAddPartitionMemory.c)
 *     PspProcessDynamicEHContinuationTargets @ 0x140903654 (PspProcessDynamicEHContinuationTargets.c)
 *     PsCallEnclave @ 0x140908B50 (PsCallEnclave.c)
 *     MiInitializeDriverPtes @ 0x140A5F4D8 (MiInitializeDriverPtes.c)
 * Callees:
 *     RtlpTreeDoubleRotateNodes @ 0x1402A3C70 (RtlpTreeDoubleRotateNodes.c)
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
