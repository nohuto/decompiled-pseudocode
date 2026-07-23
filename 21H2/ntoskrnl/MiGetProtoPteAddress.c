/*
 * XREFs of MiGetProtoPteAddress @ 0x14033B890
 * Callers:
 *     MiResolvePageFileFault @ 0x140208108 (MiResolvePageFileFault.c)
 *     MiCountSharedPages @ 0x140209600 (MiCountSharedPages.c)
 *     MiPteNeedsCommitCharge @ 0x140209B38 (MiPteNeedsCommitCharge.c)
 *     MiGetWorkingSetInfoList @ 0x14025C83C (MiGetWorkingSetInfoList.c)
 *     MiExpandSharedZeroCluster @ 0x14025EF28 (MiExpandSharedZeroCluster.c)
 *     MmAccessFault @ 0x1402B1990 (MmAccessFault.c)
 *     MiDeleteVad @ 0x1402C08F0 (MiDeleteVad.c)
 *     MiWalkVaRange @ 0x1402E0940 (MiWalkVaRange.c)
 *     MiSetReadOnlyOnSectionView @ 0x1402E53E0 (MiSetReadOnlyOnSectionView.c)
 *     MiTrimSharedPageFromViews @ 0x1402FA994 (MiTrimSharedPageFromViews.c)
 *     MiDeletePartialVad @ 0x14030862C (MiDeletePartialVad.c)
 *     MiSplitPrivatePage @ 0x140317D00 (MiSplitPrivatePage.c)
 *     MiIsCfgBitMapPageShared @ 0x1403183BC (MiIsCfgBitMapPageShared.c)
 *     MiCheckUserVirtualAddress @ 0x140339750 (MiCheckUserVirtualAddress.c)
 *     MiResolveSharedZeroFault @ 0x1403398C0 (MiResolveSharedZeroFault.c)
 *     MiQueryAddressState @ 0x14033A480 (MiQueryAddressState.c)
 *     MiGetPageProtection @ 0x14033BAF0 (MiGetPageProtection.c)
 *     MiSetProtectionOnSection @ 0x14033D9C0 (MiSetProtectionOnSection.c)
 *     MiZeroFault @ 0x140359BB0 (MiZeroFault.c)
 *     MiUpControlAreaRefs @ 0x14052ADB0 (MiUpControlAreaRefs.c)
 *     MiComputeImageVadCommitCharge @ 0x14052B818 (MiComputeImageVadCommitCharge.c)
 *     MiUpdatePrivateDemandZeroView @ 0x14052D5D8 (MiUpdatePrivateDemandZeroView.c)
 *     MiPrepareImagePagesForHotPatch @ 0x14053EE0C (MiPrepareImagePagesForHotPatch.c)
 *     MiGetLargeVadMappingIndex @ 0x1405488E8 (MiGetLargeVadMappingIndex.c)
 *     MiGetClusterPage @ 0x140555BB0 (MiGetClusterPage.c)
 *     MiIdealClusterPage @ 0x140556054 (MiIdealClusterPage.c)
 *     MiMakePerSessionProtoPte @ 0x14055B6E0 (MiMakePerSessionProtoPte.c)
 *     MmFlushVirtualMemory @ 0x1405E85C4 (MmFlushVirtualMemory.c)
 *     MiCommitPagefileBackedSection @ 0x1405FAC44 (MiCommitPagefileBackedSection.c)
 *     MiCfgMarkValidEntries @ 0x1406BE004 (MiCfgMarkValidEntries.c)
 *     MiIsRangeFullyCommitted @ 0x1407076A0 (MiIsRangeFullyCommitted.c)
 *     MiFillMapFileInfo @ 0x1408C46CC (MiFillMapFileInfo.c)
 *     MiCloneLargeFileOnlyVad @ 0x1408CFE10 (MiCloneLargeFileOnlyVad.c)
 *     MiDeletePartialCloneVads @ 0x1408D9688 (MiDeletePartialCloneVads.c)
 * Callees:
 *     MiLocateSubsectionNode @ 0x140321830 (MiLocateSubsectionNode.c)
 *     MmGetSessionIdEx @ 0x140355BB0 (MmGetSessionIdEx.c)
 *     MiGetSharedProtos @ 0x1403A6358 (MiGetSharedProtos.c)
 */

__int64 __fastcall MiGetProtoPteAddress(__int64 a1, __int64 a2, char a3, _QWORD *a4)
{
  unsigned __int64 v6; // r10
  int v7; // r9d
  _QWORD *v8; // rbx
  __int64 v9; // rbp
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rax
  __int64 v12; // r8
  unsigned __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rcx
  unsigned __int64 v17; // rdi
  _QWORD *SubsectionNode; // rax
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rdx
  unsigned int SessionId; // eax

  v6 = *(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32);
  if ( ((*(_DWORD *)(a1 + 48) & 0x70) != 0x20 || (*(_DWORD *)(**(_QWORD **)(a1 + 72) + 56LL) & 0x4000000) == 0)
    && (__int64)(*(_QWORD *)(a1 + 88) - *(_QWORD *)(a1 + 80)) >> 3 >= a2 - v6
    && (a3 & 4) == 0 )
  {
    *a4 = *(_QWORD *)(a1 + 72);
    return *(_QWORD *)(a1 + 80) + 8 * (a2 - v6);
  }
  v7 = 0;
  *a4 = 0LL;
  v8 = *(_QWORD **)(a1 + 72);
  v9 = *v8;
  v10 = a2 + ((__int64)(*(_QWORD *)(a1 + 80) - v8[1]) >> 3) - v6;
  if ( !*(_QWORD *)(*v8 + 64LL) )
  {
    if ( (*(_DWORD *)(v9 + 56) & 0x1000) != 0 || *((_DWORD *)v8 + 12) >= 0x40000000u )
    {
      v19 = 0x100000LL;
      if ( *((_DWORD *)v8 + 12) >= 0x40000000u )
        v19 = 0x200000LL;
      v20 = v19 >> 3;
      if ( v20 == 0x20000 )
      {
        v21 = v10 >> 17;
        v10 &= 0x1FFFFu;
      }
      else
      {
        v21 = v10 / v20;
        v10 %= v20;
      }
      v22 = (unsigned int)v21 + 1LL;
      if ( !v10 )
        v22 = (unsigned int)v21;
      if ( v22 > *(unsigned int *)(v9 + 96) )
        return 0LL;
      v8 += 11 * v21;
      if ( v10 >= *((unsigned int *)v8 + 11) )
        return 0LL;
    }
    else if ( v10 >= *((unsigned int *)v8 + 11) )
    {
      return 0LL;
    }
    if ( v8 )
    {
      *a4 = v8;
      v15 = v8[1];
      if ( !v15 )
        return 0LL;
      goto LABEL_13;
    }
    return 0LL;
  }
  v11 = *((unsigned int *)v8 + 11);
  v12 = 0LL;
  v13 = a2 + ((__int64)(*(_QWORD *)(a1 + 80) - v8[1]) >> 3) - v6;
  v14 = *(_QWORD *)(a1 + 72);
  if ( v10 < v11 )
  {
LABEL_10:
    v10 = v13;
    v8 = (_QWORD *)v14;
  }
  else
  {
    while ( 1 )
    {
      v14 = *(_QWORD *)(v14 + 16);
      v13 -= v11;
      if ( ++v12 == 3 && (*(_DWORD *)(v9 + 56) & 0x20) == 0 )
        break;
      if ( !v14 )
        break;
      v11 = *(unsigned int *)(v14 + 44);
      if ( v13 < v11 )
        goto LABEL_10;
    }
    if ( (*(_DWORD *)(v9 + 56) & 0x20) != 0 )
      return 0LL;
    v17 = ((*((unsigned int *)v8 + 9) | ((unsigned __int64)((_WORD)v8[4] & 0xFFC0) << 26)) + v10) << 12;
    if ( (a3 & 1) != 0 )
      v7 = 1;
    SubsectionNode = MiLocateSubsectionNode(*v8, v17, v7);
    v8 = SubsectionNode;
    if ( !SubsectionNode )
      return 0LL;
    v10 = (v17 >> 12)
        - (*((unsigned int *)SubsectionNode + 9) | ((unsigned __int64)((_WORD)SubsectionNode[4] & 0xFFC0) << 26));
  }
  if ( v10 >= *((_DWORD *)v8 + 11) - (*((_DWORD *)v8 + 13) & 0x3FFFFFFFu) )
    return 0LL;
  v15 = v8[1];
  *a4 = v8;
LABEL_13:
  if ( (*((_BYTE *)v8 + 34) & 2) != 0 && (*(_DWORD *)(v9 + 56) & 0x4000000) != 0 && (a3 & 2) == 0 )
  {
    SessionId = MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
    v15 = *(_QWORD *)(MiGetSharedProtos(v9, SessionId, v8) + 72);
  }
  return v15 + 8 * v10;
}
