/*
 * XREFs of MiMapViewOfDataSection @ 0x1405FD6E0
 * Callers:
 *     MiMapViewOfSection @ 0x1405FD010 (MiMapViewOfSection.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140207EC0 (KiLeaveGuardedRegionUnsafe.c)
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     MiAllocatePool @ 0x140247F80 (MiAllocatePool.c)
 *     ExAllocatePoolMm @ 0x140248040 (ExAllocatePoolMm.c)
 *     LOCK_ADDRESS_SPACE @ 0x14024892C (LOCK_ADDRESS_SPACE.c)
 *     MiAddViewsForSection @ 0x140248C90 (MiAddViewsForSection.c)
 *     MiGetControlAreaPtes @ 0x14024959C (MiGetControlAreaPtes.c)
 *     MiCheckPurgeAndUpMapCount @ 0x140249650 (MiCheckPurgeAndUpMapCount.c)
 *     MiAweControlArea @ 0x1402496E8 (MiAweControlArea.c)
 *     MiGetWsAndInsertVad @ 0x140249720 (MiGetWsAndInsertVad.c)
 *     MiLockVad @ 0x140249DF8 (MiLockVad.c)
 *     MiComputeContiguousSubsectionPte @ 0x14024A150 (MiComputeContiguousSubsectionPte.c)
 *     MiLocateSubsectionNode @ 0x14024A460 (MiLocateSubsectionNode.c)
 *     MiGetCommittedPages @ 0x14024A698 (MiGetCommittedPages.c)
 *     MiLocatePagefileSubsection @ 0x14024AB7C (MiLocatePagefileSubsection.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x14024ADB4 (UNLOCK_ADDRESS_SPACE.c)
 *     MiUnlockVad @ 0x14024AFC0 (MiUnlockVad.c)
 *     MiReferenceVad @ 0x14024B6B0 (MiReferenceVad.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x14024C6F8 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     MiIsProcessCfgEnabled @ 0x14024C8F0 (MiIsProcessCfgEnabled.c)
 *     MiRemoveViewsFromSectionWithPfn @ 0x14026246C (MiRemoveViewsFromSectionWithPfn.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 *     MiUnlockAndDereferenceVad @ 0x1402AD420 (MiUnlockAndDereferenceVad.c)
 *     MmGetCurrentProcessorColor @ 0x140329BA0 (MmGetCurrentProcessorColor.c)
 *     MiDereferenceExtendInfo @ 0x14035D3B8 (MiDereferenceExtendInfo.c)
 *     MiDereferenceControlArea @ 0x140360978 (MiDereferenceControlArea.c)
 *     MiDecrementLargeSubsections @ 0x14053AF40 (MiDecrementLargeSubsections.c)
 *     MiIncrementLargeSubsections @ 0x14053BFB0 (MiIncrementLargeSubsections.c)
 *     MiFindPlaceholderVadToReplace @ 0x14054FD54 (MiFindPlaceholderVadToReplace.c)
 *     MiUnlockAndDereferenceNestedVad @ 0x140556930 (MiUnlockAndDereferenceNestedVad.c)
 *     MiSelectUserAddress @ 0x1405F8620 (MiSelectUserAddress.c)
 *     MiAddSecureEntry @ 0x1405FCED0 (MiAddSecureEntry.c)
 *     MiReferenceFileObjectForMap @ 0x1405FE028 (MiReferenceFileObjectForMap.c)
 *     MiInsertVadCharges @ 0x1405FE050 (MiInsertVadCharges.c)
 *     MiAdvanceVadHint @ 0x1405FE340 (MiAdvanceVadHint.c)
 *     MiRemoveSharedCommitNode @ 0x1405FE430 (MiRemoveSharedCommitNode.c)
 *     MiInsertSharedCommitNode @ 0x1405FE6A0 (MiInsertSharedCommitNode.c)
 *     MiUnmapVad @ 0x140601100 (MiUnmapVad.c)
 *     MiIsVaRangeAvailable @ 0x140601F98 (MiIsVaRangeAvailable.c)
 *     MiCommitVadCfgBits @ 0x140601FE0 (MiCommitVadCfgBits.c)
 *     MiChargeSegmentCommit @ 0x14060BEA0 (MiChargeSegmentCommit.c)
 *     MiSecureVad @ 0x1406DBDD8 (MiSecureVad.c)
 *     MiFreePlaceholderStorage @ 0x140711628 (MiFreePlaceholderStorage.c)
 *     MiLogMapFileEvent @ 0x1408C1148 (MiLogMapFileEvent.c)
 *     MiCreatePlaceholderStorage @ 0x1408D4CD8 (MiCreatePlaceholderStorage.c)
 *     MiFinishPlaceholderVadReplacement @ 0x1408D4D88 (MiFinishPlaceholderVadReplacement.c)
 *     MiPreparePlaceholderVadReplacement @ 0x1408D4EB0 (MiPreparePlaceholderVadReplacement.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiMapViewOfDataSection(
        __int64 a1,
        __int64 a2,
        unsigned __int64 *a3,
        unsigned __int64 *a4,
        __int64 a5,
        int a6,
        int a7,
        unsigned __int64 a8,
        __int64 a9)
{
  int v9; // eax
  __int64 v13; // rdx
  __int64 *v14; // rcx
  void *v15; // r9
  __int64 v16; // r8
  int v17; // eax
  __int64 v18; // rbx
  int v19; // ecx
  int v20; // r13d
  int v21; // edx
  unsigned __int64 v22; // rax
  __int64 v23; // rsi
  unsigned __int64 v24; // r12
  bool v25; // r15
  __int64 *SubsectionNode; // r9
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // r12
  int inserted; // r15d
  __int64 *v31; // r15
  int v32; // eax
  _DWORD *PoolMm; // rax
  int v34; // ecx
  unsigned int v35; // ecx
  int v36; // eax
  int v37; // ecx
  int v38; // eax
  unsigned __int64 v39; // r15
  unsigned __int64 v40; // rdx
  unsigned __int64 v41; // r9
  __int64 v42; // r10
  __int64 v43; // r12
  __int64 v44; // rcx
  unsigned __int64 v45; // r15
  int v46; // r14d
  int v47; // r13d
  PVOID v48; // r13
  int v50; // r9d
  int v51; // eax
  __int64 v52; // rcx
  struct _DMA_ADAPTER *v53; // rcx
  unsigned __int64 v54; // r8
  _DWORD *v55; // r15
  _DWORD *Pool; // rax
  __int64 v57; // rcx
  unsigned __int64 v58; // rcx
  bool v59; // zf
  __int64 v60; // rbx
  unsigned __int64 v61; // r15
  __int64 *v62; // rax
  PVOID v63; // rbx
  volatile signed __int64 *v64; // rdi
  struct _KTHREAD *CurrentThread; // [rsp+50h] [rbp-A1h]
  __int64 *BugCheckParameter2; // [rsp+58h] [rbp-99h]
  unsigned __int64 v67; // [rsp+60h] [rbp-91h]
  unsigned __int64 v68; // [rsp+68h] [rbp-89h] BYREF
  PVOID PlaceholderVadToReplace; // [rsp+70h] [rbp-81h]
  unsigned __int64 ControlAreaPtes; // [rsp+78h] [rbp-79h]
  int v71; // [rsp+80h] [rbp-71h]
  int v72; // [rsp+84h] [rbp-6Dh]
  unsigned __int64 v73; // [rsp+88h] [rbp-69h]
  __int64 v74; // [rsp+90h] [rbp-61h]
  __int64 v75; // [rsp+98h] [rbp-59h]
  unsigned __int64 v76; // [rsp+A0h] [rbp-51h]
  __int64 v77; // [rsp+A8h] [rbp-49h]
  unsigned __int64 v78; // [rsp+B0h] [rbp-41h] BYREF
  unsigned __int64 v79; // [rsp+B8h] [rbp-39h]
  __int64 v80; // [rsp+C0h] [rbp-31h]
  __int64 v81; // [rsp+C8h] [rbp-29h] BYREF
  unsigned __int64 v82; // [rsp+D0h] [rbp-21h]
  __int64 v83; // [rsp+D8h] [rbp-19h] BYREF
  PVOID P; // [rsp+E0h] [rbp-11h]
  ULONG_PTR v85; // [rsp+E8h] [rbp-9h]
  int PlaceholderStorage; // [rsp+138h] [rbp+47h] BYREF
  unsigned __int64 *v87; // [rsp+140h] [rbp+4Fh]
  unsigned __int64 *v88; // [rsp+148h] [rbp+57h]

  v88 = a4;
  v87 = a3;
  v9 = *(_DWORD *)(a2 + 60);
  v68 = 0LL;
  v78 = 0LL;
  v83 = 0LL;
  v72 = 0;
  if ( (v9 & 2) != 0 )
    return 3221225485LL;
  if ( MiAweControlArea(a1) )
    return 3221225485LL;
  v16 = *v14;
  v17 = *(_DWORD *)(v13 + 40);
  v18 = *(_QWORD *)(v13 + 88);
  v75 = v18;
  v79 = (unsigned __int64)v15;
  v77 = v16;
  v19 = v17 & 0x2000;
  if ( (v17 & 0x2000) != 0 && *(void **)(a1 + 64) == v15 )
    return 3221225485LL;
  v20 = a7;
  v21 = v17 & 0x40000000;
  if ( (v17 & 0x20000000) != 0 )
  {
    if ( v21 || (v17 & 0x2000) != 0 || a7 == 24 || (a7 & 0xFFFFFFF8) == 0x10 || (a7 & 5) == 5 )
      return 3221225485LL;
    v59 = *(void **)(a1 + 64) == v15 ? (*(_WORD *)(v16 + 12) & 0x1000) == 0 : (*(_DWORD *)(a1 + 56) & 0x40000000) == 0;
    if ( v59 )
      return 3221225485LL;
  }
  else if ( v21 && ((v17 & 0x2000) != 0 || *(void **)(v18 + 2240) == v15 && (*(_DWORD *)(a2 + 72) & 1) == 0) )
  {
    return 3221225485LL;
  }
  v22 = *(_QWORD *)(a2 + 16);
  if ( v22 >= 0x200000 && ((v22 - 1) & *(_QWORD *)(a2 + 32)) != 0 || v19 && *a4 >= 0x10000000000LL )
    return 3221225503LL;
  CurrentThread = KeGetCurrentThread();
  v74 = *(_QWORD *)(v18 + 1680) + 48LL;
  v23 = (__int64)v15;
  PlaceholderVadToReplace = v15;
  P = v15;
  v71 = (int)v15;
  MiCheckPurgeAndUpMapCount(a1);
  v24 = *a4 >> 12;
  v73 = (*a4 + *(_QWORD *)(a2 + 24)) >> 12;
  ControlAreaPtes = MiGetControlAreaPtes(a1);
  if ( v24 >= ControlAreaPtes )
  {
    inserted = -1073741793;
    goto LABEL_90;
  }
  v25 = 0;
  if ( *(_QWORD *)(a1 + 64) == v23 )
  {
    v78 = v24;
    BugCheckParameter2 = (__int64 *)MiLocatePagefileSubsection((unsigned int *)(a1 + 128), &v78);
    SubsectionNode = BugCheckParameter2;
    if ( v20 == 24 && a8 == v23 )
      v25 = (*(_DWORD *)(a1 + 56) & 0x1000) != 0;
  }
  else
  {
    SubsectionNode = MiLocateSubsectionNode(a1, *v88, 0);
    BugCheckParameter2 = SubsectionNode;
  }
  v27 = *((unsigned int *)SubsectionNode + 9) | ((unsigned __int64)((_WORD)SubsectionNode[4] & 0xFFC0) << 26);
  v28 = v73 - v27;
  v29 = v24 - v27;
  v73 -= v27;
  if ( v25 )
  {
    v28 = 1LL;
    v73 = 1LL;
  }
  PlaceholderStorage = MiAddViewsForSection((__int64 **)SubsectionNode, v28, (_DWORD *)8, (__int64)SubsectionNode);
  inserted = PlaceholderStorage;
  if ( PlaceholderStorage < 0 )
    goto LABEL_90;
  v31 = BugCheckParameter2;
  v80 = BugCheckParameter2[1] + 8 * v29;
  if ( a8 != v23 && *(_QWORD *)(a1 + 64) == v23 && MiGetCommittedPages((_QWORD *)a1) < ControlAreaPtes )
    v79 = ((a8 & 0xFFF) != 0) + (a8 >> 12);
  v81 = v23;
  ControlAreaPtes = *(_QWORD *)(a5 + 24) << 12;
  LOWORD(v32) = MmGetCurrentProcessorColor();
  PoolMm = ExAllocatePoolMm(64, 0x88uLL, 0x20646156u, v32 | 0x80000000);
  v23 = (__int64)PoolMm;
  if ( PoolMm )
  {
    v34 = PoolMm[16];
    *((_QWORD *)PoolMm + 2) = -2LL;
    v35 = v34 & 0xFBFFFFFF;
    *((_QWORD *)PoolMm + 10) = v80;
    v36 = 0;
    v59 = a6 == 1;
    *(_QWORD *)(v23 + 72) = BugCheckParameter2;
    if ( v59 )
      v36 = 0x4000000;
    v37 = v36 | v35;
    v38 = (*(_DWORD *)(v23 + 48) ^ (v20 << 7)) & 0xF80;
    *(_DWORD *)(v23 + 64) = v37;
    *(_DWORD *)(v23 + 48) ^= v38;
    *(_DWORD *)(v23 + 48) ^= (*(_DWORD *)(v23 + 48) ^ (*(_DWORD *)(a2 + 52) << 12)) & 0x3F000;
    if ( *(_DWORD *)(a2 + 52) )
      *(_BYTE *)(*(_QWORD *)(v18 + 1680) + 352LL) = 1;
    if ( *(_QWORD *)(a1 + 64) && (*(_DWORD *)(a2 + 40) & 0x20002000) == 0 )
      *(_DWORD *)(v23 + 64) |= 0x2000000u;
    *(_QWORD *)(v23 + 40) = 0LL;
    v85 = v23 + 40;
    *(_DWORD *)(v23 + 64) = ((__int64)*v88 >> 16) & 0xFFFFFF | *(_DWORD *)(v23 + 64) & 0xFF000000;
    if ( (*(_DWORD *)(a2 + 60) & 0x4000000) == 0 )
    {
LABEL_22:
      *(_QWORD *)(v23 + 128) = MiReferenceFileObjectForMap(a5);
      if ( (*(_DWORD *)(a2 + 40) & 0x20000000) != 0 && *(_QWORD *)(a1 + 64) )
      {
        if ( (unsigned int)MiIncrementLargeSubsections(v31, v73) > 1 )
        {
          inserted = -1073741280;
          goto LABEL_89;
        }
        v72 = 1;
      }
      LOCK_ADDRESS_SPACE((__int64)CurrentThread, v18);
      if ( (*(_DWORD *)(v18 + 1124) & 0x20) != 0 )
      {
        inserted = -1073741558;
        goto LABEL_85;
      }
      if ( (*(_DWORD *)(a2 + 72) & 1) != 0 )
      {
        v39 = *v87;
      }
      else
      {
        if ( !ControlAreaPtes )
        {
          PlaceholderStorage = MiSelectUserAddress(
                                 *(_DWORD *)(a2 + 40),
                                 *(_QWORD *)a2,
                                 *(_QWORD *)(a2 + 8),
                                 *(_QWORD *)(a2 + 24),
                                 *(_QWORD *)(a2 + 16),
                                 0LL,
                                 v20,
                                 0,
                                 &v81,
                                 &v68);
          inserted = PlaceholderStorage;
          if ( PlaceholderStorage >= 0 )
          {
            v39 = v68;
            v67 = v68;
            v76 = v68 + *(_QWORD *)(a2 + 24) - 1LL;
            goto LABEL_28;
          }
LABEL_85:
          UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, v18);
          if ( v71 == 1 )
            MiRemoveSharedCommitNode(a1, v18, 0LL);
          if ( v72 )
          {
            v62 = MiLocateSubsectionNode(a1, *(_QWORD *)(a2 + 32) + *v88 - 1, 0);
            MiDecrementLargeSubsections(BugCheckParameter2, v62);
          }
          goto LABEL_89;
        }
        v39 = ControlAreaPtes + *v88;
      }
      v67 = v39;
      v52 = v39 + *(_QWORD *)(a2 + 24) - 1LL;
      v68 = v39;
      v59 = (*(_DWORD *)(a2 + 60) & 0x4000000) == 0;
      v76 = v52;
      if ( v59 )
      {
        if ( !(unsigned int)MiIsVaRangeAvailable(v18, v39, (int)v52 - (int)v39 + 1, *(_QWORD *)a2, *(_QWORD *)(a2 + 8)) )
        {
          inserted = -1073741800;
          goto LABEL_85;
        }
      }
      else
      {
        PlaceholderVadToReplace = (PVOID)MiFindPlaceholderVadToReplace(
                                           v39,
                                           v52,
                                           *(_BYTE *)(a2 + 104),
                                           &PlaceholderStorage);
        if ( !PlaceholderVadToReplace )
        {
          inserted = PlaceholderStorage;
          goto LABEL_85;
        }
      }
LABEL_28:
      v40 = v39 >> 12;
      v41 = v76 >> 12;
      *(_BYTE *)(v23 + 32) = v39 >> 44;
      *(_BYTE *)(v23 + 33) = BYTE4(v41);
      *(_DWORD *)(v23 + 24) = v39 >> 12;
      *(_DWORD *)(v23 + 28) = v41;
      v59 = (*(_DWORD *)(a2 + 40) & 0x2000) == 0;
      ControlAreaPtes = v39 >> 12;
      v82 = v41;
      if ( !v59 )
      {
        --CurrentThread->SpecialApcDisable;
        ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C4C790, 0LL);
        v55 = *(_DWORD **)(v77 + 32);
        if ( v55 )
        {
          ++v55[2];
        }
        else
        {
          Pool = MiAllocatePool(64, 0x10uLL, 0x78436D4Du);
          v55 = Pool;
          if ( !Pool )
          {
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4C790, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C4C790);
            KeAbPostRelease((ULONG_PTR)&qword_140C4C790);
            v60 = (__int64)CurrentThread;
            KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
            inserted = -1073741670;
            goto LABEL_149;
          }
          v57 = v77;
          Pool[2] = 1;
          *(_QWORD *)Pool = _InterlockedCompareExchange64((volatile signed __int64 *)(v57 + 24), -1LL, -1LL);
          *(_QWORD *)(v57 + 32) = Pool;
        }
        v58 = *(_QWORD *)(a5 + 48);
        if ( *(_QWORD *)v55 < v58 )
          *(_QWORD *)v55 = v58;
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4C790, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C4C790);
        KeAbPostRelease((ULONG_PTR)&qword_140C4C790);
        KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
        v40 = ControlAreaPtes;
        v41 = v82;
        *(_QWORD *)(v23 + 120) = v55;
        v39 = v68;
        v67 = v68;
      }
      if ( (v20 & 5) == 5 )
      {
        v54 = (*(unsigned int *)(v23 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v23 + 33) << 32))
            - (*(unsigned int *)(v23 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v23 + 32) << 32))
            + 1;
        *(_DWORD *)(v23 + 52) ^= ((*(_DWORD *)(v23 + 28) - *(_DWORD *)(v23 + 24) + 1) ^ *(_DWORD *)(v23 + 52)) & 0x7FFFFFFF;
        *(_BYTE *)(v23 + 34) = v54 >> 31;
      }
      *(_QWORD *)(v23 + 88) = MiComputeContiguousSubsectionPte((__int64)BugCheckParameter2, v41 + v29 - v40);
      if ( (*(_DWORD *)(a2 + 40) & 0x400000) != 0 || (*(_DWORD *)(a5 + 56) & 0x4000) != 0 )
      {
        P = MiAddSecureEntry(v23, v39, v42, 0x80000000, 0);
        if ( !P )
        {
          inserted = -1073741670;
          goto LABEL_148;
        }
      }
      if ( (*(_DWORD *)(a2 + 40) & 0x20000000) != 0 )
      {
        *(_DWORD *)(v23 + 48) = *(_DWORD *)(v23 + 48) & 0xFFFFFF8F | 0x50;
        v61 = v68;
        *(_DWORD *)(v23 + 64) |= 0x1000000u;
        v67 = v61;
      }
      v43 = v75;
      if ( !*(_QWORD *)(a1 + 64) )
      {
        inserted = MiInsertSharedCommitNode(a1, v75, 0LL);
        if ( inserted < 0 )
          goto LABEL_148;
        v71 = 1;
      }
      if ( v79 && !(unsigned int)MiChargeSegmentCommit(BugCheckParameter2, v80) )
      {
        inserted = -1073741523;
        goto LABEL_148;
      }
      PlaceholderStorage = MiInsertVadCharges(v23, v43);
      inserted = PlaceholderStorage;
      if ( PlaceholderStorage >= 0 )
      {
        v44 = v74;
        if ( !*(_QWORD *)(a1 + 64) && *(int *)(a1 + 56) < 0 )
        {
          *(_DWORD *)(v23 + 48) = *(_DWORD *)(v23 + 48) & 0xFFF3FFFF | 0x40000;
          ++*(_QWORD *)(v44 + 384);
        }
        if ( PlaceholderVadToReplace )
        {
          MiPreparePlaceholderVadReplacement(PlaceholderVadToReplace, v43, v44);
          ExAcquirePushLockExclusiveEx(v23 + 40, 0LL);
        }
        else
        {
          MiLockVad((__int64)CurrentThread, v23);
        }
        MiGetWsAndInsertVad(v23);
        v45 = v67;
        if ( !*(_QWORD *)(a1 + 64) && !*(_QWORD *)(v77 + 56) )
          *(_QWORD *)(v77 + 56) = v67;
        if ( v81 )
          MiAdvanceVadHint(ControlAreaPtes, v82);
        if ( ((v20 - 4) & 0xFFFFFFFD) == 0 && *(_QWORD *)(a1 + 64) )
        {
          _InterlockedIncrement((volatile signed __int32 *)(a1 + 92));
          v45 = v68;
        }
        if ( (PerfGlobalGroupMask & 0x8000) != 0 )
          MiLogMapFileEvent(v23, 1061LL);
        v46 = 0;
        PlaceholderStorage = 0;
        v47 = v20 & 2;
        if ( (!v47 || !MiIsProcessCfgEnabled()) && !*(_QWORD *)(a2 + 80) )
        {
          v48 = PlaceholderVadToReplace;
          if ( !PlaceholderVadToReplace )
          {
            MiUnlockVad((__int64)CurrentThread, v23);
            UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, v43);
LABEL_59:
            *v87 = v45;
            return (unsigned int)v46;
          }
          v64 = (volatile signed __int64 *)v85;
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v85, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v64);
          KeAbPostRelease((ULONG_PTR)v64);
          UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, v43);
          v45 = v68;
          v46 = PlaceholderStorage;
          goto LABEL_162;
        }
        UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, v43);
        MiReferenceVad(v23);
        if ( v47 )
        {
          if ( MiIsProcessCfgEnabled() )
          {
            v46 = MiCommitVadCfgBits(v23, 0LL, a9);
            if ( v46 < 0 )
            {
LABEL_156:
              v63 = PlaceholderVadToReplace;
              MiUnmapVad(v23, PlaceholderVadToReplace, 0LL);
              if ( v63 )
                MiFinishPlaceholderVadReplacement(v63);
              return (unsigned int)v46;
            }
          }
        }
        if ( *(_QWORD *)(a2 + 80) )
        {
          v50 = *(_DWORD *)(a2 + 76);
          if ( (unsigned int)(v50 - 1) > 1 && v50 != -2147483647 && v50 != 4 )
          {
            v51 = -1073741755;
            goto LABEL_155;
          }
          v51 = MiSecureVad(v23, v45, *(_QWORD *)(a2 + 24), v50, 0, (__int64)&v83);
          if ( v51 < 0 )
          {
LABEL_155:
            v46 = v51;
            goto LABEL_156;
          }
          **(_QWORD **)(a2 + 80) = qword_140C4DC50 ^ v83 ^ v43;
        }
        v48 = PlaceholderVadToReplace;
        if ( !PlaceholderVadToReplace )
        {
          MiUnlockAndDereferenceVad((PVOID)v23);
          goto LABEL_59;
        }
        MiUnlockAndDereferenceNestedVad((PVOID)v23);
LABEL_162:
        MiFinishPlaceholderVadReplacement(v48);
        goto LABEL_59;
      }
LABEL_148:
      v60 = (__int64)CurrentThread;
LABEL_149:
      if ( PlaceholderVadToReplace )
        MiUnlockVad(v60, (__int64)PlaceholderVadToReplace);
      v18 = v75;
      goto LABEL_85;
    }
    PlaceholderStorage = MiCreatePlaceholderStorage(v23);
    inserted = PlaceholderStorage;
    if ( PlaceholderStorage >= 0 )
    {
      v31 = BugCheckParameter2;
      goto LABEL_22;
    }
  }
  else
  {
    inserted = -1073741670;
  }
LABEL_89:
  MiRemoveViewsFromSectionWithPfn(BugCheckParameter2, v73, 8u);
LABEL_90:
  MiDereferenceControlArea(a1);
  if ( v23 )
  {
    if ( *(__int64 *)(v23 + 120) < 0 )
      MiDereferenceExtendInfo(v23, a1);
    v53 = *(struct _DMA_ADAPTER **)(v23 + 128);
    if ( v53 )
      HalPutDmaAdapter(v53);
    MiFreePlaceholderStorage(v23);
    ExFreePoolWithTag((PVOID)v23, 0);
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)inserted;
}
