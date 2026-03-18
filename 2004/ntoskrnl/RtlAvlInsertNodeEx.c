/*
 * XREFs of RtlAvlInsertNodeEx @ 0x140249BF0
 * Callers:
 *     MiZeroLargePages @ 0x14023B690 (MiZeroLargePages.c)
 *     MiInsertVad @ 0x1402499D0 (MiInsertVad.c)
 *     MiBeginPageAccessor @ 0x14024A6C4 (MiBeginPageAccessor.c)
 *     MiUpdateSystemProtoPtesTree @ 0x1402639D0 (MiUpdateSystemProtoPtesTree.c)
 *     MiInsertInSystemSpace @ 0x140264130 (MiInsertInSystemSpace.c)
 *     MiInsertSubsectionNode @ 0x140267358 (MiInsertSubsectionNode.c)
 *     MiReferenceIoPages @ 0x140336B14 (MiReferenceIoPages.c)
 *     MiDereferenceIoPages @ 0x140337818 (MiDereferenceIoPages.c)
 *     MiInsertMappingNode @ 0x140350868 (MiInsertMappingNode.c)
 *     MiUpdatePerSessionProto @ 0x14035CC20 (MiUpdatePerSessionProto.c)
 *     MiFlowThroughInsertNode @ 0x14035D7CC (MiFlowThroughInsertNode.c)
 *     MiCombiningInProgress @ 0x140364A28 (MiCombiningInProgress.c)
 *     MiSharePages @ 0x1403660D0 (MiSharePages.c)
 *     MiProcessLoaderEntry @ 0x14036FC04 (MiProcessLoaderEntry.c)
 *     MmManageFaultRange @ 0x14039AD78 (MmManageFaultRange.c)
 *     MiSessionInsertImage @ 0x14039FBE4 (MiSessionInsertImage.c)
 *     MiInsertSessionWorkingSet @ 0x1403A3EE4 (MiInsertSessionWorkingSet.c)
 *     MiUpdatePageFileList @ 0x1403BCDD8 (MiUpdatePageFileList.c)
 *     MiMarkHugePfnBad @ 0x1403EDD44 (MiMarkHugePfnBad.c)
 *     MiAddMdlTracker @ 0x14052B384 (MiAddMdlTracker.c)
 *     MmUpdateMdlTrackerForMdlSwitch @ 0x14052BEC8 (MmUpdateMdlTrackerForMdlSwitch.c)
 *     MiHotRemoveHugeRange @ 0x14052D828 (MiHotRemoveHugeRange.c)
 *     MiReleasePartitionHugeIoSpace @ 0x14052E3B8 (MiReleasePartitionHugeIoSpace.c)
 *     MiCreateKernelStackNode @ 0x140530878 (MiCreateKernelStackNode.c)
 *     MiMakeIoRangePermanent @ 0x1405316E8 (MiMakeIoRangePermanent.c)
 *     MiReplaceSystemProtoPtesNode @ 0x140552A10 (MiReplaceSystemProtoPtesNode.c)
 *     MiInsertClone @ 0x140555DD4 (MiInsertClone.c)
 *     MiActOnPartitionNodePages @ 0x14055B400 (MiActOnPartitionNodePages.c)
 *     MiAddRangeToPartitionTree @ 0x14055BCCC (MiAddRangeToPartitionTree.c)
 *     MiDeletePartitionResources @ 0x14055C478 (MiDeletePartitionResources.c)
 *     MiFreePartitionTree @ 0x14055CE9C (MiFreePartitionTree.c)
 *     MiInsertPartitionPages @ 0x14055D0A0 (MiInsertPartitionPages.c)
 *     MiMergePageNodes @ 0x14055D644 (MiMergePageNodes.c)
 *     PsAdjustBasicEnclaveThreadList @ 0x14057EF94 (PsAdjustBasicEnclaveThreadList.c)
 *     PsLoadVsmEnclaveData @ 0x14057F6FC (PsLoadVsmEnclaveData.c)
 *     RtlAddDynamicEnforcedAddressRange @ 0x1405C86C4 (RtlAddDynamicEnforcedAddressRange.c)
 *     MiFinishCreateSection @ 0x1405FB480 (MiFinishCreateSection.c)
 *     MiInsertSharedCommitNode @ 0x1405FE6A0 (MiInsertSharedCommitNode.c)
 *     ExpWnfCreateNameInstance @ 0x140621678 (ExpWnfCreateNameInstance.c)
 *     MiProcessCrcList @ 0x1407150D0 (MiProcessCrcList.c)
 *     MiInsertHotPatchRecord @ 0x1408C73A0 (MiInsertHotPatchRecord.c)
 *     MiInsertSecureImageActivePatch @ 0x1408C74F4 (MiInsertSecureImageActivePatch.c)
 *     MiLoadHotPatchForUserSid @ 0x1408C7930 (MiLoadHotPatchForUserSid.c)
 *     MiAllocateEntireImageFileExtents @ 0x1408CBCA4 (MiAllocateEntireImageFileExtents.c)
 *     MiAweViewInserter @ 0x1408D20DC (MiAweViewInserter.c)
 *     MiFindLargePageMemory @ 0x1408D6AE4 (MiFindLargePageMemory.c)
 *     PsCallEnclave @ 0x140909E00 (PsCallEnclave.c)
 *     RtlAddDynamicEHContinuationTarget @ 0x1409174D8 (RtlAddDynamicEHContinuationTarget.c)
 *     MiCreateEnclaveRegions @ 0x140A53250 (MiCreateEnclaveRegions.c)
 *     MiInitializeDriverPtes @ 0x140A625D8 (MiInitializeDriverPtes.c)
 * Callees:
 *     RtlpTreeDoubleRotateNodes @ 0x14024AC40 (RtlpTreeDoubleRotateNodes.c)
 */

char __fastcall RtlAvlInsertNodeEx(unsigned __int64 *a1, unsigned __int64 a2, bool a3, _QWORD *a4)
{
  __int64 v4; // rax
  bool v5; // r10
  unsigned __int64 v6; // rbx
  _BYTE *v8; // r9
  char v9; // r8
  char v10; // cl
  char v11; // di
  _BOOL8 v12; // r8
  _QWORD *v13; // r9
  unsigned __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // r9
  __int64 v18; // r10

  LOBYTE(v4) = 0;
  v5 = a3;
  *a4 = 0LL;
  v6 = (unsigned __int64)a4;
  a4[1] = 0LL;
  a4[2] = a2;
  if ( !a2 )
  {
    *a1 = (unsigned __int64)a4;
    return v4;
  }
  v8 = (_BYTE *)(a2 + 16);
  *(_QWORD *)(a2 + 8LL * a3) = v6;
  v9 = *(_BYTE *)(a2 + 16);
  LOBYTE(v4) = 2 * v5;
  v10 = (-1 - 2 * v5) & 3;
  v11 = v9 & 3;
  if ( (v9 & 3) != 0 )
  {
LABEL_5:
    if ( v11 != v10 )
    {
      *(_BYTE *)(a2 + 16) &= 0xFCu;
      return v4;
    }
    if ( (*(_BYTE *)(v6 + 16) & 3) != v11 )
    {
      v4 = RtlpTreeDoubleRotateNodes(a1, a2, v6, v5);
      *(_BYTE *)(v16 + 16) &= 0xFCu;
      v17 = v4;
      LOBYTE(v4) = *(_BYTE *)(v6 + 16) & 0xFC;
      *(_BYTE *)(v6 + 16) = v4;
      if ( v11 == (*(_BYTE *)(v17 + 16) & 3) )
      {
        LOBYTE(v4) = (v11 ^ *(_BYTE *)(v16 + 16) ^ 0xFE) & 3;
        *(_BYTE *)(v16 + 16) ^= v4;
        *(_BYTE *)(v17 + 16) &= 0xFCu;
      }
      else
      {
        if ( v11 == ((*(_BYTE *)(v17 + 16) ^ 0xFE) & 3) )
        {
          LOBYTE(v4) = v11 | v4;
          *(_BYTE *)(v6 + 16) = v4;
        }
        *(_BYTE *)(v17 + 16) &= 0xFCu;
      }
      return v4;
    }
    if ( (*(_QWORD *)(v6 + 16) & 0xFFFFFFFFFFFFFFFCuLL) == a2 )
    {
      v12 = !v5;
      v13 = (_QWORD *)(a2 + 8LL * v5);
      if ( *v13 == v6 )
      {
        v14 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( v14 )
        {
          if ( *(_QWORD *)(v14 + 8) == a2 )
          {
            *(_QWORD *)(v14 + 8) = v6;
          }
          else
          {
            if ( *(_QWORD *)v14 != a2 )
              goto LABEL_28;
            *(_QWORD *)v14 = v6;
          }
        }
        else
        {
          if ( *a1 != a2 )
            goto LABEL_28;
          *a1 = v6;
        }
        *(_QWORD *)(v6 + 16) = v14 | *(_DWORD *)(v6 + 16) & 3;
        v15 = *(_QWORD *)(v6 + 8 * v12);
        if ( !v15 )
        {
LABEL_13:
          *v13 = v15;
          *(_QWORD *)(v6 + 8 * v12) = a2;
          v4 = v6 | *(_DWORD *)(a2 + 16) & 3;
          *(_QWORD *)(a2 + 16) = v4;
          *(_BYTE *)(v6 + 16) &= 0xFCu;
          *(_BYTE *)(a2 + 16) &= 0xFCu;
          return v4;
        }
        v18 = *(_QWORD *)(v15 + 16);
        if ( (v18 & 0xFFFFFFFFFFFFFFFCuLL) == v6 )
        {
          *(_QWORD *)(v15 + 16) = a2 | v18 & 3;
          goto LABEL_13;
        }
      }
    }
LABEL_28:
    __fastfail(0x1Du);
  }
  while ( 1 )
  {
    v6 = a2;
    *v8 = v10 | v9 & 0xFC;
    a2 = *(_QWORD *)v8 & 0xFFFFFFFFFFFFFFFCuLL;
    if ( !a2 )
      return v4;
    v8 = (_BYTE *)(a2 + 16);
    v9 = *(_BYTE *)(a2 + 16);
    v5 = *(_QWORD *)a2 != v6;
    LOBYTE(v4) = 2 * v5;
    v10 = (-1 - 2 * v5) & 3;
    v11 = v9 & 3;
    if ( (v9 & 3) != 0 )
      goto LABEL_5;
  }
}
