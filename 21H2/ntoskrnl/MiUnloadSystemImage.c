/*
 * XREFs of MiUnloadSystemImage @ 0x1406F4FB8
 * Callers:
 *     MmChangeImageProtection @ 0x1406F5800 (MmChangeImageProtection.c)
 *     MmLoadSystemImageEx @ 0x14075FC44 (MmLoadSystemImageEx.c)
 *     MiDereferenceSingleImport @ 0x1407623BC (MiDereferenceSingleImport.c)
 *     MmUnloadSystemImage @ 0x140762490 (MmUnloadSystemImage.c)
 *     MiActOnPatchInAllSessions @ 0x140970E00 (MiActOnPatchInAllSessions.c)
 *     MmRegisterHotPatches @ 0x140B2F2BC (MmRegisterHotPatches.c)
 * Callees:
 *     MiReturnResident @ 0x140216E18 (MiReturnResident.c)
 *     MiPartitionIdToPointer @ 0x1402182F8 (MiPartitionIdToPointer.c)
 *     MiDeleteSessionPdes @ 0x140226A00 (MiDeleteSessionPdes.c)
 *     MmGetMinWsPagePriority @ 0x14024DA70 (MmGetMinWsPagePriority.c)
 *     LdrUnloadAlternateResourceModule @ 0x14025C678 (LdrUnloadAlternateResourceModule.c)
 *     MiDereferenceControlArea @ 0x14025E274 (MiDereferenceControlArea.c)
 *     MiGetAnyMultiplexedVm @ 0x14026DFC0 (MiGetAnyMultiplexedVm.c)
 *     MiGetSystemRegionType @ 0x14027B080 (MiGetSystemRegionType.c)
 *     MiGetSessionVm @ 0x14027B520 (MiGetSessionVm.c)
 *     MiDeleteSystemPagableVm @ 0x14027E810 (MiDeleteSystemPagableVm.c)
 *     MiGetPdeAddress @ 0x14027FCC4 (MiGetPdeAddress.c)
 *     MiManageSubsectionView @ 0x140285FE0 (MiManageSubsectionView.c)
 *     MiSectionControlArea @ 0x140287970 (MiSectionControlArea.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     MiReturnCommit @ 0x14028CE10 (MiReturnCommit.c)
 *     MiIsRetpolineEnabled @ 0x14029C6C4 (MiIsRetpolineEnabled.c)
 *     MiProcessLoaderEntry @ 0x1402D8C20 (MiProcessLoaderEntry.c)
 *     MiFreePrivateFixupEntryForSystemImage @ 0x1402DBCA8 (MiFreePrivateFixupEntryForSystemImage.c)
 *     MiSessionRemoveImage @ 0x1402DBD88 (MiSessionRemoveImage.c)
 *     DbgUnLoadImageSymbolsUnicode @ 0x1402DC0E8 (DbgUnLoadImageSymbolsUnicode.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1402FDD20 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiGetPteAddress @ 0x140313C70 (MiGetPteAddress.c)
 *     MiWalkEntireImage @ 0x140336B30 (MiWalkEntireImage.c)
 *     ObDereferenceObjectDeferDelete @ 0x140348920 (ObDereferenceObjectDeferDelete.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 *     KeFlushRsb @ 0x140570F88 (KeFlushRsb.c)
 *     MiLogPerfMemoryRangeEvent @ 0x1405852C0 (MiLogPerfMemoryRangeEvent.c)
 *     MiReturnCrossPartitionControlAreaCharges @ 0x14058C0E4 (MiReturnCrossPartitionControlAreaCharges.c)
 *     MiInitPerfMemoryFlags @ 0x14059A6F4 (MiInitPerfMemoryFlags.c)
 *     MiUnmapRetpolineStubs @ 0x1405A2A48 (MiUnmapRetpolineStubs.c)
 *     MiClearDriverHotPatchPtes @ 0x1405A2F88 (MiClearDriverHotPatchPtes.c)
 *     MiVaToSoftwareWsle @ 0x1405B85C4 (MiVaToSoftwareWsle.c)
 *     MiDereferencePerSessionProtos @ 0x1406DDA18 (MiDereferencePerSessionProtos.c)
 *     KseDriverUnloadImage @ 0x1406EAFE4 (KseDriverUnloadImage.c)
 *     MiDeleteSessionDriverProtos @ 0x1406EB270 (MiDeleteSessionDriverProtos.c)
 *     MiFreeLoadedImportList @ 0x1406EB3D4 (MiFreeLoadedImportList.c)
 *     MiMarkKernelImageCfgBits @ 0x1406EB4B0 (MiMarkKernelImageCfgBits.c)
 *     MiReleaseSessionDriverCharges @ 0x1406EB5A4 (MiReleaseSessionDriverCharges.c)
 *     ExCovReadjustUnloadedModuleEntry @ 0x1406EB634 (ExCovReadjustUnloadedModuleEntry.c)
 *     MmHasImageBeenImportOptimized @ 0x1406EB784 (MmHasImageBeenImportOptimized.c)
 *     KeCleanupImageTracepoints @ 0x1406EB948 (KeCleanupImageTracepoints.c)
 *     MiReleasePrivilegedPtes @ 0x1406EBA70 (MiReleasePrivilegedPtes.c)
 *     MiBytesToMapSystemImage @ 0x1406F57B8 (MiBytesToMapSystemImage.c)
 *     MiReturnSystemImageAddress @ 0x140761FC0 (MiReturnSystemImageAddress.c)
 *     MiReleaseDriverPtes @ 0x14076200C (MiReleaseDriverPtes.c)
 *     MiDereferenceSingleImport @ 0x1407623BC (MiDereferenceSingleImport.c)
 *     PerfLogImageUnload @ 0x14079D948 (PerfLogImageUnload.c)
 *     MiUnlockDriverCode @ 0x14081B420 (MiUnlockDriverCode.c)
 *     MiRememberUnloadedDriver @ 0x14081BBF8 (MiRememberUnloadedDriver.c)
 *     MiFreeRetpolineRelocationInformation @ 0x14081C658 (MiFreeRetpolineRelocationInformation.c)
 *     MiReturnSystemImageCommitment @ 0x14081C984 (MiReturnSystemImageCommitment.c)
 *     MiFreeRetpolineImportInfo @ 0x1408601A8 (MiFreeRetpolineImportInfo.c)
 *     MiIsImageFullyRetpolined @ 0x140970A74 (MiIsImageFullyRetpolined.c)
 *     MiMarkKernelImageRetpolineBits @ 0x140970C20 (MiMarkKernelImageRetpolineBits.c)
 *     MiFreePatchTableProtos @ 0x140973418 (MiFreePatchTableProtos.c)
 *     MiUnmapPatchTable @ 0x140977DCC (MiUnmapPatchTable.c)
 *     MiUnmapLargeDriver @ 0x1409835EC (MiUnmapLargeDriver.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     VfDriverUnloadImage @ 0x140A7C248 (VfDriverUnloadImage.c)
 */

void __fastcall MiUnloadSystemImage(__int64 BugCheckParameter2, char a2)
{
  unsigned __int64 v4; // r12
  ULONG_PTR v5; // r13
  __int64 PteAddress; // rax
  __int64 v7; // rcx
  __int64 *v8; // r15
  unsigned __int64 v9; // rdi
  _QWORD *v11; // r14
  unsigned __int64 v12; // r15
  int v13; // esi
  unsigned __int64 SessionVm; // rax
  unsigned __int64 PdeAddress; // rdx
  unsigned __int64 v16; // r8
  __int64 v17; // rax
  __int64 v18; // rsi
  __int64 v19; // rax
  void *v20; // rcx
  char v21; // r15
  __int64 v22; // r14
  unsigned __int64 v23; // rdi
  unsigned int v24; // esi
  __int64 v25; // rax
  ULONG_PTR v26; // rcx
  char v27; // si
  char v28; // di
  ULONG_PTR v29; // rdi
  unsigned __int64 v30; // rax
  char *AnyMultiplexedVm; // r15
  int v32; // r14d
  int v33; // esi
  PVOID v34; // rax
  void *v35; // rcx
  void *v36; // rcx
  unsigned __int64 v37; // rdx
  unsigned __int64 v38; // rax
  __int64 v39; // rdi
  __int128 *v40; // rsi
  unsigned int v41; // r14d
  __int64 v42; // rax
  ULONG_PTR v43; // rcx
  __int128 *v44; // rsi
  unsigned int v45; // r14d
  __int64 v46; // rax
  ULONG_PTR v47; // rcx
  unsigned int SessionId; // eax
  unsigned int inited; // eax
  void *v50; // rax
  int v51; // edx
  unsigned __int64 v52; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v53; // [rsp+58h] [rbp-A8h]
  __int128 v54; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v55; // [rsp+70h] [rbp-90h] BYREF
  __int128 v56; // [rsp+78h] [rbp-88h] BYREF
  __int128 v57; // [rsp+88h] [rbp-78h] BYREF
  __int128 v58; // [rsp+98h] [rbp-68h] BYREF
  __int64 v59; // [rsp+A8h] [rbp-58h]
  _OWORD v60[2]; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v61; // [rsp+D0h] [rbp-30h]
  __int64 v62; // [rsp+E0h] [rbp-20h]
  __int64 v63[28]; // [rsp+F0h] [rbp-10h] BYREF
  int v64; // [rsp+1E0h] [rbp+E0h]
  PVOID Object; // [rsp+1F0h] [rbp+F0h]
  unsigned __int64 v67; // [rsp+1F8h] [rbp+F8h]

  v55 = 0LL;
  v59 = 0LL;
  v58 = 0LL;
  memset(v63, 0, 0x98uLL);
  memset(v60, 0, sizeof(v60));
  v62 = 0LL;
  v61 = 0LL;
  if ( *(_QWORD *)(BugCheckParameter2 + 136) == 1LL )
    return;
  v4 = *(_QWORD *)(BugCheckParameter2 + 48);
  v5 = (BugCheckParameter2 + 160) & -(__int64)((a2 & 4) != 0);
  PteAddress = MiGetPteAddress(v4);
  v7 = *(unsigned int *)(BugCheckParameter2 + 64);
  v8 = 0LL;
  v67 = PteAddress;
  Object = *(PVOID *)(BugCheckParameter2 + 112);
  v52 = (unsigned __int64)(unsigned int)v7 >> 12;
  v53 = (unsigned __int64)MiBytesToMapSystemImage(v7) >> 12;
  v9 = 0LL;
  if ( (unsigned int)MiGetSystemRegionType(v4) == 1 )
  {
    v64 = 0;
    v11 = (_QWORD *)MiSessionRemoveImage(BugCheckParameter2, (__int64)&v58);
    if ( !v11 )
      return;
    *(_QWORD *)&v54 = MiSectionControlArea((__int64)Object);
    if ( *(_QWORD *)BugCheckParameter2 )
      ExCovReadjustUnloadedModuleEntry(BugCheckParameter2, 0);
    v12 = KeGetCurrentThread()->ApcState.Process[1].Affinity.StaticBitmap[25];
    v13 = a2 & 1;
    if ( v13 )
    {
      if ( MiIsRetpolineEnabled() )
      {
        MiUnmapRetpolineStubs(BugCheckParameter2, 0);
        if ( (unsigned int)MiIsImageFullyRetpolined(BugCheckParameter2) )
          KeFlushRsb();
        _mm_lfence();
      }
      SessionVm = MiGetSessionVm();
      MiDeleteSystemPagableVm(SessionVm, v54, v67, v52, 3, v60);
    }
    MiReleaseSessionDriverCharges((__int64)v11);
    if ( v13 )
    {
      if ( ((unsigned int)dword_140C4F478 >> 12) + ((dword_140C4F478 & 0xFFF) != 0) )
        MiUnmapPatchTable(v67 + 8 * v52);
      if ( (*(_DWORD *)(v54 + 56) & 0x8000000) != 0 )
      {
        SessionId = MmGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
        MiDereferencePerSessionProtos((__int64 *)v54, SessionId);
      }
      MiGetPdeAddress(v4);
      if ( (_QWORD)v58 && (_QWORD)v58 != -1LL )
        MiGetPdeAddress(v58 + 1);
      PdeAddress = MiGetPdeAddress(v4 + (unsigned int)(*(_DWORD *)(BugCheckParameter2 + 64) - 1));
      if ( *((_QWORD *)&v58 + 1) )
      {
        v17 = MiGetPdeAddress(*((unsigned __int64 *)&v58 + 1));
        if ( v17 == PdeAddress )
          PdeAddress -= 8LL;
      }
      if ( PdeAddress >= v16 )
        MiDeleteSessionPdes();
    }
    v18 = v59;
    if ( v59 )
    {
      v19 = MiPartitionIdToPointer(*(_WORD *)(v12 + 366));
      MiReturnCommit(v19, v18 - *((_QWORD *)&v60[0] + 1));
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v12 + 40), -v18);
    }
    if ( (a2 & 0x10) != 0 )
      v9 = v11[11];
    ExFreePoolWithTag(v11, 0);
    v8 = (__int64 *)v54;
  }
  else
  {
    v64 = 1;
  }
  if ( (*(_WORD *)(BugCheckParameter2 + 108))-- != 1 )
  {
    if ( v9 )
    {
      v40 = (__int128 *)v9;
      v54 = 0LL;
      if ( v9 != -2LL && v9 != 1 )
      {
        if ( (v9 & 1) != 0 )
        {
          *(_QWORD *)&v54 = 1LL;
          v40 = &v54;
          *((_QWORD *)&v54 + 1) = v9 & 0xFFFFFFFFFFFFFFFEuLL;
        }
        v41 = 0;
        if ( *(_QWORD *)v40 )
        {
          v42 = 0LL;
          do
          {
            v43 = *((_QWORD *)v40 + v42 + 1);
            if ( !v43 )
              break;
            if ( !(unsigned int)MiDereferenceSingleImport(v43) )
              break;
            v42 = ++v41;
          }
          while ( (unsigned __int64)v41 < *(_QWORD *)v40 );
        }
      }
      MiFreeLoadedImportList((void *)v9);
    }
    if ( !v64 && (a2 & 2) != 0 )
      VfDriverUnloadImage(BugCheckParameter2);
    return;
  }
  KeCleanupImageTracepoints(BugCheckParameter2);
  if ( (int)MiMarkKernelImageCfgBits(BugCheckParameter2, 0LL) < 0 )
    KeBugCheckEx(0x1Au, 0x1015uLL, v4, BugCheckParameter2, 0LL);
  if ( v9 )
  {
    v44 = (__int128 *)v9;
    v56 = 0LL;
    if ( v9 != -2LL && v9 != 1 )
    {
      if ( (v9 & 1) != 0 )
      {
        *(_QWORD *)&v56 = 1LL;
        v44 = &v56;
        *((_QWORD *)&v56 + 1) = v9 & 0xFFFFFFFFFFFFFFFEuLL;
      }
      v45 = 0;
      if ( *(_QWORD *)v44 )
      {
        v46 = 0LL;
        do
        {
          v47 = *((_QWORD *)v44 + v46 + 1);
          if ( !v47 )
            break;
          if ( !(unsigned int)MiDereferenceSingleImport(v47) )
            break;
          v46 = ++v45;
        }
        while ( (unsigned __int64)v45 < *(_QWORD *)v44 );
      }
    }
    MiFreeLoadedImportList((void *)v9);
  }
  if ( !v64 )
    MiDeleteSessionDriverProtos(v8);
  if ( dword_140C4F478 )
    MiClearDriverHotPatchPtes(BugCheckParameter2);
  if ( MmHasImageBeenImportOptimized() )
    MiFreeRetpolineImportInfo();
  if ( MiIsRetpolineEnabled() )
  {
    if ( v64 && !(unsigned int)MI_IS_PHYSICAL_ADDRESS(*(_QWORD *)(BugCheckParameter2 + 48)) )
      MiUnmapRetpolineStubs(BugCheckParameter2, v64);
    MiMarkKernelImageRetpolineBits(BugCheckParameter2, 0LL);
    if ( (unsigned int)MiIsImageFullyRetpolined(BugCheckParameter2) )
      KeFlushRsb();
    _mm_lfence();
  }
  if ( v5 )
  {
    v20 = *(void **)(v5 + 160);
    if ( v20 )
    {
      MiFreeRetpolineRelocationInformation(v20);
      *(_QWORD *)(v5 + 160) = 0LL;
    }
  }
  v21 = a2;
  if ( (a2 & 2) != 0 )
  {
    VfDriverUnloadImage(BugCheckParameter2);
    KseDriverUnloadImage(BugCheckParameter2);
  }
  if ( v64 )
  {
    v22 = v52;
  }
  else
  {
    MiReleasePrivilegedPtes();
    v22 = 0LL;
    v52 = 0LL;
  }
  if ( (a2 & 0x10) != 0 )
  {
    v23 = *(_QWORD *)(BugCheckParameter2 + 136);
    v57 = 0LL;
    if ( v23 != -2LL && v23 != 1 )
    {
      if ( (v23 & 1) != 0 )
      {
        *(_QWORD *)&v57 = 1LL;
        *((_QWORD *)&v57 + 1) = v23 & 0xFFFFFFFFFFFFFFFEuLL;
        v23 = (unsigned __int64)&v57;
      }
      v24 = 0;
      if ( *(_QWORD *)v23 )
      {
        v25 = 0LL;
        do
        {
          v26 = *(_QWORD *)(v23 + 8 * v25 + 8);
          if ( !v26 )
            break;
          if ( !(unsigned int)MiDereferenceSingleImport(v26) )
            break;
          v25 = ++v24;
        }
        while ( (unsigned __int64)v24 < *(_QWORD *)v23 );
      }
    }
  }
  MiFreeLoadedImportList(*(void **)(BugCheckParameter2 + 136));
  *(_QWORD *)(BugCheckParameter2 + 136) = 1LL;
  LdrUnloadAlternateResourceModule();
  if ( (*(_DWORD *)(BugCheckParameter2 + 104) & 0x100000) != 0 )
    DbgUnLoadImageSymbolsUnicode((PCUNICODE_STRING)(BugCheckParameter2 + 88), v4, 0xFFFFFFFFLL);
  if ( *(_QWORD *)BugCheckParameter2 && v22 )
  {
    ExCovReadjustUnloadedModuleEntry(BugCheckParameter2, 0);
  }
  else
  {
    v27 = 0;
    v28 = 0;
    if ( !v22 )
      goto LABEL_119;
  }
  v27 = 0;
  v28 = 0;
  if ( (a2 & 1) == 0 )
  {
LABEL_119:
    v34 = Object;
    goto LABEL_74;
  }
  MiRememberUnloadedDriver(BugCheckParameter2 + 88, v4, v53 << 12);
  v29 = 0LL;
  if ( Object )
  {
    v30 = MiSectionControlArea((__int64)Object);
    v29 = v30;
    if ( *(_QWORD *)BugCheckParameter2 )
    {
      v63[0] = v30;
      MiManageSubsectionView(v63, (_QWORD *)v5, 4);
    }
  }
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS(v4) )
  {
    if ( (BYTE4(PerfGlobalGroupMask[0]) & 1) != 0 )
    {
      inited = MiInitPerfMemoryFlags(0, 6);
      MiLogPerfMemoryRangeEvent(v4, 0LL, inited, (v22 + 511) & 0xFFFFFFFFFFFFFE00uLL);
    }
    MiUnmapLargeDriver(v4, v22);
    v28 = 0;
    v27 = 1;
    goto LABEL_118;
  }
  if ( v5 )
    MiUnlockDriverCode(BugCheckParameter2);
  qword_140C4F4D8 = BugCheckParameter2;
  MiDeleteSystemPagableVm((__int64)AnyMultiplexedVm, v29, v67, v22, 5, v60);
  v32 = v61;
  v33 = v60[0];
  if ( v29 )
    MiWalkEntireImage(v29, (unsigned __int64)&v55, 4u, 0xFFFFFFFF);
  qword_140C4F4D8 = 0LL;
  _InterlockedExchangeAdd((_DWORD *)&xmmword_140C4F4F8 + 3, v33 - v32);
  v34 = Object;
  v27 = 0;
  v28 = 0;
  if ( !Object )
  {
    MiReleasePrivilegedPtes();
    if ( !(unsigned int)MmGetMinWsPagePriority() )
    {
      v50 = (void *)MiVaToSoftwareWsle((__int64)AnyMultiplexedVm, (__int64)((v52 << 28) + (v67 << 25)) >> 16);
      if ( v53 != v52 )
      {
        LOBYTE(v51) = 10;
        memset(v50, v51, v53 - v52);
      }
    }
    v28 = 1;
    v27 = 0;
LABEL_118:
    v21 = a2;
    goto LABEL_119;
  }
  v21 = a2;
LABEL_74:
  if ( v64 == 1 )
  {
    if ( v34 )
      MiReleasePrivilegedPtes();
    if ( (v21 & 1) != 0 )
      MiReturnSystemImageCommitment(BugCheckParameter2, v60);
  }
  if ( *(_QWORD *)BugCheckParameter2 )
  {
    MiProcessLoaderEntry((unsigned __int64 *)BugCheckParameter2, 0);
    if ( (PerfGlobalGroupMask[0] & 4) != 0 )
      PerfLogImageUnload(
        BugCheckParameter2 + 72,
        0LL,
        0LL,
        v4,
        *(unsigned int *)(BugCheckParameter2 + 64),
        *(_DWORD *)(BugCheckParameter2 + 120),
        *(_WORD *)(BugCheckParameter2 + 110) & 0xF,
        (*(unsigned __int16 *)(BugCheckParameter2 + 110) >> 4) & 7,
        0);
  }
  if ( v28 )
    MiReleaseDriverPtes(0LL, v67, (unsigned int)v53);
  v35 = *(void **)(BugCheckParameter2 + 80);
  if ( v35 )
    ExFreePoolWithTag(v35, 0);
  if ( v5 )
  {
    v36 = *(void **)(v5 + 128);
    if ( v36 )
      MiFreePatchTableProtos(v36);
  }
  if ( Object )
  {
    if ( v5 )
    {
      v37 = *(_QWORD *)(v5 + 56);
      if ( v37 )
        MiReturnResident((__int64)&MiSystemPartition, v37);
    }
    v38 = MiSectionControlArea((__int64)Object);
    v39 = v38;
    if ( !v27 && v4 != *(_QWORD *)(*(_QWORD *)v38 + 32LL) )
    {
      MiFreePrivateFixupEntryForSystemImage(v4, 1);
      MiReturnSystemImageAddress(v4, *(unsigned int *)(BugCheckParameter2 + 64));
    }
    if ( v5 && v64 && (*(_DWORD *)(v5 + 36) & 0x80u) != 0 )
      MiReturnCrossPartitionControlAreaCharges(v39);
    MiDereferenceControlArea(v39);
    ObDereferenceObjectDeferDelete(Object);
  }
  ExFreePoolWithTag((PVOID)BugCheckParameter2, 0);
}
