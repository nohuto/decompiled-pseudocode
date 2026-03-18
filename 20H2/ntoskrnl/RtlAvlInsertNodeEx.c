/*
 * XREFs of RtlAvlInsertNodeEx @ 0x14022E170
 * Callers:
 *     MiInsertVad @ 0x14022DF50 (MiInsertVad.c)
 *     MiBeginPageAccessor @ 0x14022E964 (MiBeginPageAccessor.c)
 *     MiInsertInSystemSpace @ 0x14024C1E0 (MiInsertInSystemSpace.c)
 *     MiReferenceIoPages @ 0x140260AB4 (MiReferenceIoPages.c)
 *     MiDereferenceIoPages @ 0x140261608 (MiDereferenceIoPages.c)
 *     MiZeroLargePages @ 0x1402C0D40 (MiZeroLargePages.c)
 *     MiUpdateSystemProtoPtesTree @ 0x1402D5630 (MiUpdateSystemProtoPtesTree.c)
 *     MiInsertMappingNode @ 0x140321208 (MiInsertMappingNode.c)
 *     MiUpdatePerSessionProto @ 0x14032D5A8 (MiUpdatePerSessionProto.c)
 *     MiFlowThroughInsertNode @ 0x14032E38C (MiFlowThroughInsertNode.c)
 *     MiInsertSubsectionNode @ 0x1403566A8 (MiInsertSubsectionNode.c)
 *     MiCombiningInProgress @ 0x140366A08 (MiCombiningInProgress.c)
 *     MiSharePages @ 0x1403680B0 (MiSharePages.c)
 *     MiProcessLoaderEntry @ 0x140371B54 (MiProcessLoaderEntry.c)
 *     MmManageFaultRange @ 0x14039DEC8 (MmManageFaultRange.c)
 *     MiSessionInsertImage @ 0x1403A20B4 (MiSessionInsertImage.c)
 *     MiInsertSessionWorkingSet @ 0x1403A6310 (MiInsertSessionWorkingSet.c)
 *     MiUpdatePageFileList @ 0x1403BF258 (MiUpdatePageFileList.c)
 *     MiMarkHugePfnBad @ 0x1403F21AC (MiMarkHugePfnBad.c)
 *     MiAddMdlTracker @ 0x14052ED54 (MiAddMdlTracker.c)
 *     MmUpdateMdlTrackerForMdlSwitch @ 0x14052F898 (MmUpdateMdlTrackerForMdlSwitch.c)
 *     MiHotRemoveHugeRange @ 0x1405311F8 (MiHotRemoveHugeRange.c)
 *     MiReleasePartitionHugeIoSpace @ 0x140531D88 (MiReleasePartitionHugeIoSpace.c)
 *     MiCreateKernelStackNode @ 0x140534248 (MiCreateKernelStackNode.c)
 *     MiMakeIoRangePermanent @ 0x1405350B8 (MiMakeIoRangePermanent.c)
 *     MiReplaceSystemProtoPtesNode @ 0x1405563E0 (MiReplaceSystemProtoPtesNode.c)
 *     MiInsertClone @ 0x1405597A4 (MiInsertClone.c)
 *     MiActOnPartitionNodePages @ 0x14055EDD0 (MiActOnPartitionNodePages.c)
 *     MiAddRangeToPartitionTree @ 0x14055F69C (MiAddRangeToPartitionTree.c)
 *     MiDeletePartitionResources @ 0x14055FE48 (MiDeletePartitionResources.c)
 *     MiFreePartitionTree @ 0x14056086C (MiFreePartitionTree.c)
 *     MiInsertPartitionPages @ 0x140560A70 (MiInsertPartitionPages.c)
 *     MiMergePageNodes @ 0x140561014 (MiMergePageNodes.c)
 *     PsAdjustBasicEnclaveThreadList @ 0x1405829C4 (PsAdjustBasicEnclaveThreadList.c)
 *     PsLoadVsmEnclaveData @ 0x14058312C (PsLoadVsmEnclaveData.c)
 *     RtlAddDynamicEnforcedAddressRange @ 0x1405CDAC0 (RtlAddDynamicEnforcedAddressRange.c)
 *     MiInsertSharedCommitNode @ 0x140624010 (MiInsertSharedCommitNode.c)
 *     ExpWnfCreateNameInstance @ 0x14065282C (ExpWnfCreateNameInstance.c)
 *     MiFinishCreateSection @ 0x14067F9E0 (MiFinishCreateSection.c)
 *     MiProcessCrcList @ 0x140723090 (MiProcessCrcList.c)
 *     MiInsertHotPatchRecord @ 0x1408CD1E0 (MiInsertHotPatchRecord.c)
 *     MiInsertSecureImageActivePatch @ 0x1408CD334 (MiInsertSecureImageActivePatch.c)
 *     MiLoadHotPatchForUserSid @ 0x1408CD770 (MiLoadHotPatchForUserSid.c)
 *     MiAllocateEntireImageFileExtents @ 0x1408D1AE4 (MiAllocateEntireImageFileExtents.c)
 *     MiAweViewInserter @ 0x1408D7F1C (MiAweViewInserter.c)
 *     MiFindLargePageMemory @ 0x1408DC924 (MiFindLargePageMemory.c)
 *     PsCallEnclave @ 0x14090FA20 (PsCallEnclave.c)
 *     RtlAddDynamicEHContinuationTarget @ 0x14091D108 (RtlAddDynamicEHContinuationTarget.c)
 *     MiCreateEnclaveRegions @ 0x140A538D0 (MiCreateEnclaveRegions.c)
 *     MiInitializeDriverPtes @ 0x140A69998 (MiInitializeDriverPtes.c)
 * Callees:
 *     RtlpTreeDoubleRotateNodes @ 0x140303DB0 (RtlpTreeDoubleRotateNodes.c)
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
