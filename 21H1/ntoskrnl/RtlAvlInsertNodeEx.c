/*
 * XREFs of RtlAvlInsertNodeEx @ 0x1402A2C20
 * Callers:
 *     MiZeroLargePages @ 0x1402946C0 (MiZeroLargePages.c)
 *     MiInsertVad @ 0x1402A2A00 (MiInsertVad.c)
 *     MiBeginPageAccessor @ 0x1402A36F4 (MiBeginPageAccessor.c)
 *     MiUpdateSystemProtoPtesTree @ 0x1402BCA00 (MiUpdateSystemProtoPtesTree.c)
 *     MiInsertInSystemSpace @ 0x1402BD160 (MiInsertInSystemSpace.c)
 *     MiInsertSubsectionNode @ 0x1402C0388 (MiInsertSubsectionNode.c)
 *     MiReferenceIoPages @ 0x1402F9AE4 (MiReferenceIoPages.c)
 *     MiDereferenceIoPages @ 0x1402FA7E8 (MiDereferenceIoPages.c)
 *     MiInsertMappingNode @ 0x140312A20 (MiInsertMappingNode.c)
 *     MiUpdatePerSessionProto @ 0x14031F110 (MiUpdatePerSessionProto.c)
 *     MiFlowThroughInsertNode @ 0x14031FD1C (MiFlowThroughInsertNode.c)
 *     MiCombiningInProgress @ 0x140364068 (MiCombiningInProgress.c)
 *     MiSharePages @ 0x140365710 (MiSharePages.c)
 *     MiProcessLoaderEntry @ 0x14036EFD4 (MiProcessLoaderEntry.c)
 *     MmManageFaultRange @ 0x14039A5E8 (MmManageFaultRange.c)
 *     MiSessionInsertImage @ 0x14039F454 (MiSessionInsertImage.c)
 *     MiInsertSessionWorkingSet @ 0x1403A3784 (MiInsertSessionWorkingSet.c)
 *     MiUpdatePageFileList @ 0x1403BBAB8 (MiUpdatePageFileList.c)
 *     MiMarkHugePfnBad @ 0x1403ECC84 (MiMarkHugePfnBad.c)
 *     MiAddMdlTracker @ 0x14052AD34 (MiAddMdlTracker.c)
 *     MmUpdateMdlTrackerForMdlSwitch @ 0x14052B878 (MmUpdateMdlTrackerForMdlSwitch.c)
 *     MiHotRemoveHugeRange @ 0x14052D1D8 (MiHotRemoveHugeRange.c)
 *     MiReleasePartitionHugeIoSpace @ 0x14052DD68 (MiReleasePartitionHugeIoSpace.c)
 *     MiCreateKernelStackNode @ 0x140530228 (MiCreateKernelStackNode.c)
 *     MiMakeIoRangePermanent @ 0x140531098 (MiMakeIoRangePermanent.c)
 *     MiReplaceSystemProtoPtesNode @ 0x1405523C0 (MiReplaceSystemProtoPtesNode.c)
 *     MiInsertClone @ 0x140555784 (MiInsertClone.c)
 *     MiActOnPartitionNodePages @ 0x14055ADB0 (MiActOnPartitionNodePages.c)
 *     MiAddRangeToPartitionTree @ 0x14055B67C (MiAddRangeToPartitionTree.c)
 *     MiDeletePartitionResources @ 0x14055BE28 (MiDeletePartitionResources.c)
 *     MiFreePartitionTree @ 0x14055C84C (MiFreePartitionTree.c)
 *     MiInsertPartitionPages @ 0x14055CA50 (MiInsertPartitionPages.c)
 *     MiMergePageNodes @ 0x14055CFF4 (MiMergePageNodes.c)
 *     PsAdjustBasicEnclaveThreadList @ 0x14057E954 (PsAdjustBasicEnclaveThreadList.c)
 *     PsLoadVsmEnclaveData @ 0x14057F0BC (PsLoadVsmEnclaveData.c)
 *     RtlAddDynamicEnforcedAddressRange @ 0x1405C76A4 (RtlAddDynamicEnforcedAddressRange.c)
 *     MiFinishCreateSection @ 0x1406304C0 (MiFinishCreateSection.c)
 *     MiInsertSharedCommitNode @ 0x1406336E0 (MiInsertSharedCommitNode.c)
 *     ExpWnfCreateNameInstance @ 0x140666D98 (ExpWnfCreateNameInstance.c)
 *     MiProcessCrcList @ 0x140712D40 (MiProcessCrcList.c)
 *     MiInsertHotPatchRecord @ 0x1408C6050 (MiInsertHotPatchRecord.c)
 *     MiInsertSecureImageActivePatch @ 0x1408C61A4 (MiInsertSecureImageActivePatch.c)
 *     MiLoadHotPatchForUserSid @ 0x1408C65E0 (MiLoadHotPatchForUserSid.c)
 *     MiAllocateEntireImageFileExtents @ 0x1408CA954 (MiAllocateEntireImageFileExtents.c)
 *     MiAweViewInserter @ 0x1408D0D8C (MiAweViewInserter.c)
 *     MiFindLargePageMemory @ 0x1408D5794 (MiFindLargePageMemory.c)
 *     PsCallEnclave @ 0x140908B50 (PsCallEnclave.c)
 *     RtlAddDynamicEHContinuationTarget @ 0x140916268 (RtlAddDynamicEHContinuationTarget.c)
 *     MiCreateEnclaveRegions @ 0x140A4D550 (MiCreateEnclaveRegions.c)
 *     MiInitializeDriverPtes @ 0x140A5F4D8 (MiInitializeDriverPtes.c)
 * Callees:
 *     RtlpTreeDoubleRotateNodes @ 0x1402A3C70 (RtlpTreeDoubleRotateNodes.c)
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
