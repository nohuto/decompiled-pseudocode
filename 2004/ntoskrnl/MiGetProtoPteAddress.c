/*
 * XREFs of MiGetProtoPteAddress @ 0x14029A830
 * Callers:
 *     MiDeleteVad @ 0x140212740 (MiDeleteVad.c)
 *     MiSetReadOnlyOnSectionView @ 0x140246200 (MiSetReadOnlyOnSectionView.c)
 *     MiDeletePartialVad @ 0x140251734 (MiDeletePartialVad.c)
 *     MiSplitPrivatePage @ 0x140255888 (MiSplitPrivatePage.c)
 *     MiIsCfgBitMapPageShared @ 0x140255F44 (MiIsCfgBitMapPageShared.c)
 *     MiCheckUserVirtualAddress @ 0x140259610 (MiCheckUserVirtualAddress.c)
 *     MiZeroFault @ 0x14029CF50 (MiZeroFault.c)
 *     MmAccessFault @ 0x14029F070 (MmAccessFault.c)
 *     MiSetProtectionOnSection @ 0x1402ADDF0 (MiSetProtectionOnSection.c)
 *     MiQueryAddressState @ 0x1402B1190 (MiQueryAddressState.c)
 *     MiGetPageProtection @ 0x1402B25A0 (MiGetPageProtection.c)
 *     MiResolveSharedZeroFault @ 0x1402B5230 (MiResolveSharedZeroFault.c)
 *     MiWalkVaRange @ 0x1402BB1D0 (MiWalkVaRange.c)
 *     MiCountSharedPages @ 0x140312D60 (MiCountSharedPages.c)
 *     MiPteNeedsCommitCharge @ 0x140313298 (MiPteNeedsCommitCharge.c)
 *     MiResolvePageFileFault @ 0x140313F9C (MiResolvePageFileFault.c)
 *     MiExpandSharedZeroCluster @ 0x14031580C (MiExpandSharedZeroCluster.c)
 *     MiGetWorkingSetInfoList @ 0x1403186FC (MiGetWorkingSetInfoList.c)
 *     MiTrimSharedPageFromViews @ 0x14031EC94 (MiTrimSharedPageFromViews.c)
 *     MiUpControlAreaRefs @ 0x1405256A0 (MiUpControlAreaRefs.c)
 *     MiComputeImageVadCommitCharge @ 0x140526108 (MiComputeImageVadCommitCharge.c)
 *     MiUpdatePrivateDemandZeroView @ 0x140527EC8 (MiUpdatePrivateDemandZeroView.c)
 *     MiPrepareImagePagesForHotPatch @ 0x1405396FC (MiPrepareImagePagesForHotPatch.c)
 *     MiGetLargeVadMappingIndex @ 0x1405431D8 (MiGetLargeVadMappingIndex.c)
 *     MiGetClusterPage @ 0x1405504D0 (MiGetClusterPage.c)
 *     MiIdealClusterPage @ 0x140550974 (MiIdealClusterPage.c)
 *     MiMakePerSessionProtoPte @ 0x140556000 (MiMakePerSessionProtoPte.c)
 *     MiCfgMarkValidEntries @ 0x140607044 (MiCfgMarkValidEntries.c)
 *     MiCommitPagefileBackedSection @ 0x14060BD6C (MiCommitPagefileBackedSection.c)
 *     MiIsRangeFullyCommitted @ 0x14062EEB0 (MiIsRangeFullyCommitted.c)
 *     MmFlushVirtualMemory @ 0x1406FF904 (MmFlushVirtualMemory.c)
 *     MiFillMapFileInfo @ 0x1408C0F6C (MiFillMapFileInfo.c)
 *     MiCloneLargeFileOnlyVad @ 0x1408CC6B0 (MiCloneLargeFileOnlyVad.c)
 *     MiDeletePartialCloneVads @ 0x1408D5F28 (MiDeletePartialCloneVads.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x140207F90 (MmGetSessionIdEx.c)
 *     MiLocateSubsectionNode @ 0x14024A460 (MiLocateSubsectionNode.c)
 *     MiGetSharedProtos @ 0x1403A3578 (MiGetSharedProtos.c)
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
    SessionId = MmGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
    v15 = *(_QWORD *)(MiGetSharedProtos(v9, SessionId, v8) + 72);
  }
  return v15 + 8 * v10;
}
