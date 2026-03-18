/*
 * XREFs of MiGetProtoPteAddress @ 0x1402B3F50
 * Callers:
 *     MiZeroFault @ 0x140224FB0 (MiZeroFault.c)
 *     MiSplitPrivatePage @ 0x1402354F8 (MiSplitPrivatePage.c)
 *     MiIsCfgBitMapPageShared @ 0x140235BB4 (MiIsCfgBitMapPageShared.c)
 *     MiExpandSharedZeroCluster @ 0x1402394E4 (MiExpandSharedZeroCluster.c)
 *     MiResolvePageFileFault @ 0x140239F98 (MiResolvePageFileFault.c)
 *     MiDeletePartialVad @ 0x14024FC00 (MiDeletePartialVad.c)
 *     MmAccessFault @ 0x14026E3B0 (MmAccessFault.c)
 *     MiDeleteVad @ 0x14027E4D0 (MiDeleteVad.c)
 *     MiSetReadOnlyOnSectionView @ 0x14028EFF0 (MiSetReadOnlyOnSectionView.c)
 *     MiCheckUserVirtualAddress @ 0x1402B1E10 (MiCheckUserVirtualAddress.c)
 *     MiResolveSharedZeroFault @ 0x1402B1F80 (MiResolveSharedZeroFault.c)
 *     MiQueryAddressState @ 0x1402B2B40 (MiQueryAddressState.c)
 *     MiGetPageProtection @ 0x1402B41B0 (MiGetPageProtection.c)
 *     MiSetProtectionOnSection @ 0x1402B5EC0 (MiSetProtectionOnSection.c)
 *     MiCountSharedPages @ 0x1402FF4F0 (MiCountSharedPages.c)
 *     MiPteNeedsCommitCharge @ 0x1402FFA28 (MiPteNeedsCommitCharge.c)
 *     MiWalkVaRange @ 0x1403471D0 (MiWalkVaRange.c)
 *     MiGetWorkingSetInfoList @ 0x14034F6A8 (MiGetWorkingSetInfoList.c)
 *     MiTrimSharedPageFromViews @ 0x140354B14 (MiTrimSharedPageFromViews.c)
 *     MiUpControlAreaRefs @ 0x140529070 (MiUpControlAreaRefs.c)
 *     MiComputeImageVadCommitCharge @ 0x140529AD8 (MiComputeImageVadCommitCharge.c)
 *     MiUpdatePrivateDemandZeroView @ 0x14052B898 (MiUpdatePrivateDemandZeroView.c)
 *     MiPrepareImagePagesForHotPatch @ 0x14053D0CC (MiPrepareImagePagesForHotPatch.c)
 *     MiGetLargeVadMappingIndex @ 0x140546BA8 (MiGetLargeVadMappingIndex.c)
 *     MiGetClusterPage @ 0x140553EA0 (MiGetClusterPage.c)
 *     MiIdealClusterPage @ 0x140554344 (MiIdealClusterPage.c)
 *     MiMakePerSessionProtoPte @ 0x1405599D0 (MiMakePerSessionProtoPte.c)
 *     MiCfgMarkValidEntries @ 0x140629948 (MiCfgMarkValidEntries.c)
 *     MiIsRangeFullyCommitted @ 0x140681740 (MiIsRangeFullyCommitted.c)
 *     MiCommitPagefileBackedSection @ 0x1406B29C0 (MiCommitPagefileBackedSection.c)
 *     MmFlushVirtualMemory @ 0x1406D2554 (MmFlushVirtualMemory.c)
 *     MiFillMapFileInfo @ 0x1408C6DAC (MiFillMapFileInfo.c)
 *     MiCloneLargeFileOnlyVad @ 0x1408D24F0 (MiCloneLargeFileOnlyVad.c)
 *     MiDeletePartialCloneVads @ 0x1408DBD68 (MiDeletePartialCloneVads.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x140220F10 (MmGetSessionIdEx.c)
 *     MiLocateSubsectionNode @ 0x14022E700 (MiLocateSubsectionNode.c)
 *     MiGetSharedProtos @ 0x1403A5948 (MiGetSharedProtos.c)
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
