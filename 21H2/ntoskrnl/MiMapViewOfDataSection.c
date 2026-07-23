/*
 * XREFs of MiMapViewOfDataSection @ 0x1407034E0
 * Callers:
 *     MiMapViewOfSection @ 0x140702E10 (MiMapViewOfSection.c)
 * Callees:
 *     MmGetCurrentProcessorColor @ 0x140214350 (MmGetCurrentProcessorColor.c)
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     MiDereferenceExtendInfo @ 0x14024DEB4 (MiDereferenceExtendInfo.c)
 *     MiDereferenceControlArea @ 0x140251BB8 (MiDereferenceControlArea.c)
 *     MiAllocatePool @ 0x14027C2E0 (MiAllocatePool.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x14027C398 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     MiIsProcessCfgEnabled @ 0x14027C590 (MiIsProcessCfgEnabled.c)
 *     MiReferenceVad @ 0x14027C900 (MiReferenceVad.c)
 *     MiUnlockAndDereferenceVad @ 0x1402BF880 (MiUnlockAndDereferenceVad.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     MiRemoveViewsFromSectionWithPfn @ 0x14030772C (MiRemoveViewsFromSectionWithPfn.c)
 *     MiUnlockVad @ 0x14031F3A8 (MiUnlockVad.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x14031F5B0 (UNLOCK_ADDRESS_SPACE.c)
 *     LOCK_ADDRESS_SPACE @ 0x14031FFDC (LOCK_ADDRESS_SPACE.c)
 *     MiAddViewsForSection @ 0x140320340 (MiAddViewsForSection.c)
 *     MiGetControlAreaPtes @ 0x140320C4C (MiGetControlAreaPtes.c)
 *     MiCheckPurgeAndUpMapCount @ 0x140320D00 (MiCheckPurgeAndUpMapCount.c)
 *     MiAweControlArea @ 0x140320D98 (MiAweControlArea.c)
 *     MiGetWsAndInsertVad @ 0x140320DD0 (MiGetWsAndInsertVad.c)
 *     MiLockVad @ 0x1403214A8 (MiLockVad.c)
 *     MiComputeContiguousSubsectionPte @ 0x140321800 (MiComputeContiguousSubsectionPte.c)
 *     MiLocateSubsectionNode @ 0x140321830 (MiLocateSubsectionNode.c)
 *     MiGetCommittedPages @ 0x140321A20 (MiGetCommittedPages.c)
 *     MiLocatePagefileSubsection @ 0x140321A4C (MiLocatePagefileSubsection.c)
 *     ExAllocatePoolMm @ 0x140346100 (ExAllocatePoolMm.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiDecrementLargeSubsections @ 0x140540650 (MiDecrementLargeSubsections.c)
 *     MiIncrementLargeSubsections @ 0x1405416C0 (MiIncrementLargeSubsections.c)
 *     MiFindPlaceholderVadToReplace @ 0x140555434 (MiFindPlaceholderVadToReplace.c)
 *     MiUnlockAndDereferenceNestedVad @ 0x14055C010 (MiUnlockAndDereferenceNestedVad.c)
 *     MiFreePlaceholderStorage @ 0x1406229E8 (MiFreePlaceholderStorage.c)
 *     MiCommitVadCfgBits @ 0x14068592C (MiCommitVadCfgBits.c)
 *     MiIsVaRangeAvailable @ 0x140687848 (MiIsVaRangeAvailable.c)
 *     MiUnmapVad @ 0x140688090 (MiUnmapVad.c)
 *     MiSecureVad @ 0x140689320 (MiSecureVad.c)
 *     MiAddSecureEntry @ 0x140689430 (MiAddSecureEntry.c)
 *     MiChargeSegmentCommit @ 0x140689B40 (MiChargeSegmentCommit.c)
 *     MiSelectUserAddress @ 0x1406EA100 (MiSelectUserAddress.c)
 *     MiRemoveSharedCommitNode @ 0x1407028C0 (MiRemoveSharedCommitNode.c)
 *     MiInsertSharedCommitNode @ 0x140702B30 (MiInsertSharedCommitNode.c)
 *     MiReferenceFileObjectForMap @ 0x140704020 (MiReferenceFileObjectForMap.c)
 *     MiInsertVadCharges @ 0x140704050 (MiInsertVadCharges.c)
 *     MiAdvanceVadHint @ 0x140704340 (MiAdvanceVadHint.c)
 *     MiLogMapFileEvent @ 0x1408C48A8 (MiLogMapFileEvent.c)
 *     MiCreatePlaceholderStorage @ 0x1408D8438 (MiCreatePlaceholderStorage.c)
 *     MiFinishPlaceholderVadReplacement @ 0x1408D84E8 (MiFinishPlaceholderVadReplacement.c)
 *     MiPreparePlaceholderVadReplacement @ 0x1408D8610 (MiPreparePlaceholderVadReplacement.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
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
        char *a9)
{
  int v9; // eax
  __int64 v13; // rdx
  __int64 *v14; // rcx
  void *v15; // r9
  __int64 v16; // r8
  unsigned __int64 v17; // r13
  int v18; // edx
  int v19; // eax
  bool v20; // zf
  unsigned __int64 v22; // rax
  __int64 v23; // rdi
  struct _KTHREAD *CurrentThread; // r12
  __int64 v25; // rax
  unsigned __int64 v26; // rbx
  unsigned __int64 v27; // rax
  int inserted; // esi
  __int64 v29; // rdx
  __int64 v30; // r8
  _DWORD *v31; // r9
  struct _DMA_ADAPTER *v32; // rcx
  unsigned __int64 v33; // rbx
  bool v34; // si
  __int64 *SubsectionNode; // r9
  unsigned __int64 v36; // rcx
  unsigned __int64 v37; // rax
  __int64 v38; // rax
  unsigned __int64 v39; // rsi
  int v40; // eax
  _DWORD *PoolMm; // rax
  int v42; // ebx
  unsigned int v43; // ecx
  int v44; // eax
  int v45; // ecx
  int v46; // eax
  unsigned int v47; // edx
  int v48; // ecx
  unsigned int v49; // eax
  int v50; // ecx
  unsigned __int64 v51; // r12
  unsigned __int64 v52; // r10
  __int64 v53; // r10
  __int64 v54; // r10
  unsigned __int64 v55; // rdx
  unsigned __int64 v56; // r9
  _DWORD *v57; // rsi
  _DWORD *Pool; // rax
  __int64 v59; // rcx
  unsigned __int64 v60; // rax
  unsigned __int64 v61; // r8
  __int64 *v62; // rsi
  __int64 v63; // r10
  __int64 *v64; // rax
  __int64 v65; // rcx
  int v66; // r14d
  int v67; // r9d
  int v68; // eax
  PVOID v69; // rbx
  PVOID v70; // r14
  PVOID v71; // r14
  ULONG_PTR v72; // rdi
  unsigned __int64 v73; // r12
  __int64 v74; // [rsp+50h] [rbp-A1h]
  __int64 *BugCheckParameter2; // [rsp+58h] [rbp-99h]
  unsigned __int64 v76; // [rsp+60h] [rbp-91h] BYREF
  PVOID PlaceholderVadToReplace; // [rsp+68h] [rbp-89h]
  unsigned __int64 ControlAreaPtes; // [rsp+70h] [rbp-81h]
  int v79; // [rsp+78h] [rbp-79h]
  int v80; // [rsp+7Ch] [rbp-75h]
  unsigned __int64 v81; // [rsp+80h] [rbp-71h]
  __int64 v82; // [rsp+88h] [rbp-69h]
  unsigned __int64 v83; // [rsp+90h] [rbp-61h]
  unsigned __int64 v84; // [rsp+98h] [rbp-59h]
  __int64 v85; // [rsp+A0h] [rbp-51h]
  unsigned __int64 v86; // [rsp+A8h] [rbp-49h] BYREF
  signed __int64 v87; // [rsp+B0h] [rbp-41h]
  __int64 *v88; // [rsp+B8h] [rbp-39h]
  __int64 v89; // [rsp+C0h] [rbp-31h] BYREF
  unsigned __int64 v90; // [rsp+C8h] [rbp-29h]
  __int64 v91; // [rsp+D0h] [rbp-21h] BYREF
  PVOID P; // [rsp+D8h] [rbp-19h]
  ULONG_PTR v93; // [rsp+E0h] [rbp-11h]
  int PlaceholderStorage; // [rsp+138h] [rbp+47h] BYREF
  unsigned __int64 *v95; // [rsp+140h] [rbp+4Fh]
  unsigned __int64 *v96; // [rsp+148h] [rbp+57h]

  v96 = a4;
  v95 = a3;
  v9 = *(_DWORD *)(a2 + 60);
  v76 = 0LL;
  v86 = 0LL;
  v91 = 0LL;
  v80 = 0;
  if ( (v9 & 2) != 0 )
    return 3221225485LL;
  if ( MiAweControlArea(a1) )
    return 3221225485LL;
  v16 = *v14;
  v17 = *(_QWORD *)(v13 + 88);
  v18 = *(_DWORD *)(v13 + 40);
  v87 = (signed __int64)v15;
  v85 = v16;
  if ( (v18 & 0x2000) != 0 && *(void **)(a1 + 64) == v15 )
    return 3221225485LL;
  v19 = v18 & 0x40000000;
  if ( (v18 & 0x20000000) == 0 )
  {
    if ( !v19 || (v18 & 0x2000) == 0 && (*(void **)(v17 + 2240) != v15 || (*(_DWORD *)(a2 + 72) & 1) != 0) )
      goto LABEL_20;
    return 3221225485LL;
  }
  if ( v19 || (v18 & 0x2000) != 0 || a7 == 24 || (a7 & 0xFFFFFFF8) == 0x10 || (a7 & 5) == 5 )
    return 3221225485LL;
  v20 = *(void **)(a1 + 64) == v15 ? (*(_WORD *)(v16 + 12) & 0x1000) == 0 : (*(_DWORD *)(a1 + 56) & 0x40000000) == 0;
  if ( v20 )
    return 3221225485LL;
LABEL_20:
  v22 = *(_QWORD *)(a2 + 16);
  if ( v22 >= 0x200000 && ((v22 - 1) & *(_QWORD *)(a2 + 32)) != 0 || (v18 & 0x2000) != 0 && *a4 >= 0x10000000000LL )
    return 3221225503LL;
  v23 = (__int64)v15;
  CurrentThread = KeGetCurrentThread();
  v25 = *(_QWORD *)(v17 + 1680) + 48LL;
  PlaceholderVadToReplace = v15;
  v82 = v25;
  P = v15;
  v79 = (int)v15;
  v74 = (__int64)CurrentThread;
  MiCheckPurgeAndUpMapCount(a1);
  v26 = *a4;
  v27 = v26 + *(_QWORD *)(a2 + 24);
  v81 = v26 >> 12;
  v83 = v27 >> 12;
  ControlAreaPtes = MiGetControlAreaPtes(a1);
  if ( v26 >> 12 >= ControlAreaPtes )
  {
    inserted = -1073741793;
LABEL_27:
    MiDereferenceControlArea(a1);
    if ( v23 )
    {
      if ( *(__int64 *)(v23 + 120) < 0 )
        MiDereferenceExtendInfo(v23, a1);
      v32 = *(struct _DMA_ADAPTER **)(v23 + 128);
      if ( v32 )
        HalPutDmaAdapter(v32);
      MiFreePlaceholderStorage(v23, v29, v30, v31);
      ExFreePoolWithTag((PVOID)v23, 0);
    }
    if ( P )
      ExFreePoolWithTag(P, 0);
    return (unsigned int)inserted;
  }
  v33 = a8;
  v34 = 0;
  if ( *(_QWORD *)(a1 + 64) == v23 )
  {
    v86 = v81;
    BugCheckParameter2 = (__int64 *)MiLocatePagefileSubsection((unsigned int *)(a1 + 128), &v86);
    SubsectionNode = BugCheckParameter2;
    if ( !v33 && a7 == 24 )
      v34 = (*(_DWORD *)(a1 + 56) & 0x1000) != 0;
  }
  else
  {
    SubsectionNode = MiLocateSubsectionNode(a1, *v96, 0);
    BugCheckParameter2 = SubsectionNode;
  }
  v36 = *((unsigned int *)SubsectionNode + 9) | ((unsigned __int64)((_WORD)SubsectionNode[4] & 0xFFC0) << 26);
  v81 -= v36;
  v37 = v83 - v36;
  if ( v34 )
    v37 = 1LL;
  v83 = v37;
  PlaceholderStorage = MiAddViewsForSection(SubsectionNode, v37, (_DWORD *)8, (__int64)SubsectionNode);
  inserted = PlaceholderStorage;
  if ( PlaceholderStorage < 0 )
    goto LABEL_27;
  v88 = (__int64 *)(BugCheckParameter2[1] + 8 * v81);
  if ( *(_QWORD *)(a1 + 64) == v23 && v33 && MiGetCommittedPages((_QWORD *)a1) < ControlAreaPtes )
  {
    v38 = v23;
    LOBYTE(v38) = (v33 & 0xFFF) != 0;
    v87 = (v33 >> 12) + v38;
  }
  v89 = v23;
  v39 = *(_QWORD *)(a5 + 24) << 12;
  ControlAreaPtes = v39;
  LOWORD(v40) = MmGetCurrentProcessorColor();
  PoolMm = ExAllocatePoolMm(64, 0x88uLL, 0x20646156u, v40 | 0x80000000);
  v23 = (__int64)PoolMm;
  if ( !PoolMm )
  {
    inserted = -1073741670;
LABEL_117:
    MiRemoveViewsFromSectionWithPfn(BugCheckParameter2);
    goto LABEL_27;
  }
  v42 = a7;
  v43 = PoolMm[16] & 0xFBFFFFFF;
  *((_QWORD *)PoolMm + 2) = -2LL;
  *((_QWORD *)PoolMm + 10) = v88;
  *((_QWORD *)PoolMm + 9) = BugCheckParameter2;
  v44 = 0;
  if ( a6 == 1 )
    v44 = 0x4000000;
  v45 = v44 | v43;
  v46 = (*(_DWORD *)(v23 + 48) ^ (v42 << 7)) & 0xF80;
  *(_DWORD *)(v23 + 64) = v45;
  *(_DWORD *)(v23 + 48) ^= v46;
  *(_DWORD *)(v23 + 48) ^= (*(_DWORD *)(v23 + 48) ^ (*(_DWORD *)(a2 + 52) << 12)) & 0x3F000;
  if ( *(_DWORD *)(a2 + 52) )
    *(_BYTE *)(*(_QWORD *)(v17 + 1680) + 352LL) = 1;
  if ( *(_QWORD *)(a1 + 64) && (*(_DWORD *)(a2 + 40) & 0x20002000) == 0 )
    *(_DWORD *)(v23 + 64) |= 0x2000000u;
  *(_QWORD *)(v23 + 40) = 0LL;
  v93 = v23 + 40;
  *(_DWORD *)(v23 + 64) = ((__int64)*v96 >> 16) & 0xFFFFFF | *(_DWORD *)(v23 + 64) & 0xFF000000;
  if ( (*(_DWORD *)(a2 + 60) & 0x4000000) != 0 )
  {
    PlaceholderStorage = MiCreatePlaceholderStorage(v23);
    inserted = PlaceholderStorage;
    if ( PlaceholderStorage < 0 )
      goto LABEL_117;
    v39 = ControlAreaPtes;
  }
  *(_QWORD *)(v23 + 128) = MiReferenceFileObjectForMap(a5);
  if ( (*(_DWORD *)(a2 + 40) & 0x20000000) != 0 )
  {
    if ( *(_QWORD *)(a1 + 64) )
    {
      v47 = MiIncrementLargeSubsections(BugCheckParameter2, v83);
      if ( v47 > 1 )
      {
        inserted = -1073741280;
        goto LABEL_117;
      }
      v48 = *(_DWORD *)(v23 + 48);
      v80 = 1;
      v49 = v48 & 0xFFF3FFFF | 0x80000;
      v50 = v48 | 0xC0000;
      if ( v47 == 1 )
        v50 = v49;
      *(_DWORD *)(v23 + 48) = v50;
    }
    else
    {
      *(_DWORD *)(v23 + 48) = *(_DWORD *)(v23 + 48) & 0xFFF3FFFF | 0x80000;
    }
  }
  LOCK_ADDRESS_SPACE((__int64)CurrentThread, v17);
  if ( (*(_DWORD *)(v17 + 1124) & 0x20) != 0 )
  {
    inserted = -1073741558;
LABEL_113:
    UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, v17);
    if ( v79 == 1 )
      MiRemoveSharedCommitNode((_QWORD *)a1, v17, 0);
    if ( v80 )
    {
      v64 = MiLocateSubsectionNode(a1, *(_QWORD *)(a2 + 32) + *v96 - 1, 0);
      MiDecrementLargeSubsections(BugCheckParameter2, v64);
    }
    goto LABEL_117;
  }
  if ( (*(_DWORD *)(a2 + 72) & 1) != 0 )
  {
    v51 = *v95;
LABEL_76:
    v53 = *(_QWORD *)(a2 + 24) - 1LL;
    v76 = v51;
    v54 = v51 + v53;
    v20 = (*(_DWORD *)(a2 + 60) & 0x4000000) == 0;
    v84 = v54;
    if ( v20 )
    {
      if ( !MiIsVaRangeAvailable(v17, v51, v54 - v51 + 1, *(_QWORD *)a2, *(_QWORD *)(a2 + 8)) )
      {
        CurrentThread = (struct _KTHREAD *)v74;
        inserted = -1073741800;
        goto LABEL_113;
      }
    }
    else
    {
      PlaceholderVadToReplace = (PVOID)MiFindPlaceholderVadToReplace(
                                         v51,
                                         v54,
                                         *(_BYTE *)(a2 + 104),
                                         &PlaceholderStorage);
      if ( !PlaceholderVadToReplace )
      {
        inserted = PlaceholderStorage;
        CurrentThread = (struct _KTHREAD *)v74;
        goto LABEL_113;
      }
      v52 = v84;
    }
    goto LABEL_82;
  }
  if ( v39 )
  {
    v51 = v39 + *v96;
    goto LABEL_76;
  }
  PlaceholderStorage = MiSelectUserAddress(
                         *(_DWORD *)(a2 + 40),
                         *(_QWORD *)a2,
                         *(_QWORD *)(a2 + 8),
                         *(_QWORD *)(a2 + 24),
                         *(_QWORD *)(a2 + 16),
                         0LL,
                         v42,
                         0,
                         &v89,
                         &v76);
  inserted = PlaceholderStorage;
  if ( PlaceholderStorage < 0 )
    goto LABEL_113;
  v51 = v76;
  v52 = *(_QWORD *)(a2 + 24) + v76 - 1;
  v84 = v52;
LABEL_82:
  v55 = v51 >> 12;
  v56 = v52 >> 12;
  *(_BYTE *)(v23 + 32) = v51 >> 44;
  *(_BYTE *)(v23 + 33) = v52 >> 44;
  *(_DWORD *)(v23 + 24) = v51 >> 12;
  *(_DWORD *)(v23 + 28) = v52 >> 12;
  v20 = (*(_DWORD *)(a2 + 40) & 0x2000) == 0;
  ControlAreaPtes = v51 >> 12;
  v90 = v52 >> 12;
  if ( !v20 )
  {
    CurrentThread = (struct _KTHREAD *)v74;
    --*(_WORD *)(v74 + 486);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C4C9D0, 0LL);
    v57 = *(_DWORD **)(v85 + 32);
    if ( v57 )
    {
      ++v57[2];
    }
    else
    {
      Pool = MiAllocatePool(64, 0x10uLL, 0x78436D4Du);
      v57 = Pool;
      if ( !Pool )
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4C9D0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(&qword_140C4C9D0);
        KeAbPostRelease((ULONG_PTR)&qword_140C4C9D0);
        KiLeaveGuardedRegionUnsafe(v74);
        inserted = -1073741670;
        goto LABEL_111;
      }
      v59 = v85;
      Pool[2] = 1;
      *(_QWORD *)Pool = _InterlockedCompareExchange64((volatile signed __int64 *)(v59 + 24), -1LL, -1LL);
      *(_QWORD *)(v59 + 32) = Pool;
    }
    v60 = *(_QWORD *)(a5 + 48);
    if ( *(_QWORD *)v57 < v60 )
      *(_QWORD *)v57 = v60;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4C9D0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&qword_140C4C9D0);
    KeAbPostRelease((ULONG_PTR)&qword_140C4C9D0);
    KiLeaveGuardedRegionUnsafe(v74);
    v55 = ControlAreaPtes;
    v56 = v90;
    v51 = v76;
    *(_QWORD *)(v23 + 120) = v57;
  }
  if ( (a7 & 5) == 5 )
  {
    v61 = (*(unsigned int *)(v23 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v23 + 33) << 32))
        - (*(unsigned int *)(v23 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v23 + 32) << 32))
        + 1;
    *(_DWORD *)(v23 + 52) ^= (*(_DWORD *)(v23 + 52) ^ (*(_DWORD *)(v23 + 28) - *(_DWORD *)(v23 + 24) + 1)) & 0x7FFFFFFF;
    *(_BYTE *)(v23 + 34) = v61 >> 31;
  }
  v62 = BugCheckParameter2;
  *(_QWORD *)(v23 + 88) = MiComputeContiguousSubsectionPte((__int64)BugCheckParameter2, v56 + v81 - v55);
  if ( (*(_DWORD *)(a2 + 40) & 0x400000) != 0 || (*(_DWORD *)(a5 + 56) & 0x4000) != 0 )
  {
    P = MiAddSecureEntry(v23, v51, v63, 0x80000000, 0);
    if ( !P )
    {
      inserted = -1073741670;
LABEL_110:
      CurrentThread = (struct _KTHREAD *)v74;
LABEL_111:
      if ( PlaceholderVadToReplace )
        MiUnlockVad((__int64)CurrentThread, (__int64)PlaceholderVadToReplace);
      goto LABEL_113;
    }
  }
  if ( (*(_DWORD *)(a2 + 40) & 0x20000000) != 0 )
  {
    *(_DWORD *)(v23 + 48) = *(_DWORD *)(v23 + 48) & 0xFFFFFF8F | 0x50;
    v51 = v76;
    *(_DWORD *)(v23 + 64) |= 0x1000000u;
  }
  if ( !*(_QWORD *)(a1 + 64) )
  {
    inserted = MiInsertSharedCommitNode((_QWORD *)a1, v17, 0);
    if ( inserted < 0 )
      goto LABEL_110;
    v62 = BugCheckParameter2;
    v79 = 1;
  }
  if ( v87 && !(unsigned int)MiChargeSegmentCommit(v62, v88, v87) )
  {
    inserted = -1073741523;
    goto LABEL_110;
  }
  PlaceholderStorage = MiInsertVadCharges(v23, v17);
  inserted = PlaceholderStorage;
  if ( PlaceholderStorage < 0 )
    goto LABEL_110;
  v65 = v82;
  if ( !*(_QWORD *)(a1 + 64) && *(int *)(a1 + 56) < 0 )
  {
    *(_DWORD *)(v23 + 48) = *(_DWORD *)(v23 + 48) & 0xFFF3FFFF | 0x40000;
    ++*(_QWORD *)(v65 + 384);
  }
  if ( PlaceholderVadToReplace )
  {
    MiPreparePlaceholderVadReplacement(PlaceholderVadToReplace, v17, v65);
    ExAcquirePushLockExclusiveEx(v23 + 40, 0LL);
  }
  else
  {
    MiLockVad(v74, v23);
  }
  MiGetWsAndInsertVad(v23);
  if ( !*(_QWORD *)(a1 + 64) && !*(_QWORD *)(v85 + 56) )
    *(_QWORD *)(v85 + 56) = v51;
  if ( v89 )
    MiAdvanceVadHint(ControlAreaPtes, v90);
  if ( ((a7 - 4) & 0xFFFFFFFD) == 0 && *(_QWORD *)(a1 + 64) )
  {
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 92));
    v51 = v76;
  }
  if ( (PerfGlobalGroupMask & 0x8000) != 0 )
    MiLogMapFileEvent(v23, 1061LL);
  inserted = 0;
  PlaceholderStorage = 0;
  v66 = a7 & 2;
  if ( ((a7 & 2) == 0 || !MiIsProcessCfgEnabled()) && !*(_QWORD *)(a2 + 80) )
  {
    v71 = PlaceholderVadToReplace;
    if ( PlaceholderVadToReplace )
    {
      v72 = v93;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v93, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v72);
      KeAbPostRelease(v72);
      UNLOCK_ADDRESS_SPACE_UNORDERED(v74, v17);
      v73 = v76;
      inserted = PlaceholderStorage;
      MiFinishPlaceholderVadReplacement(v71);
      *v95 = v73;
    }
    else
    {
      MiUnlockVad(v74, v23);
      UNLOCK_ADDRESS_SPACE(v74, v17);
      *v95 = v51;
    }
    return (unsigned int)inserted;
  }
  UNLOCK_ADDRESS_SPACE_UNORDERED(v74, v17);
  MiReferenceVad(v23);
  if ( v66 )
  {
    if ( MiIsProcessCfgEnabled() )
    {
      inserted = MiCommitVadCfgBits(v23, 0LL, a9);
      if ( inserted < 0 )
      {
LABEL_147:
        v69 = PlaceholderVadToReplace;
        MiUnmapVad(v23, (__int64)PlaceholderVadToReplace, 0);
        if ( v69 )
          MiFinishPlaceholderVadReplacement(v69);
        return (unsigned int)inserted;
      }
    }
  }
  if ( *(_QWORD *)(a2 + 80) )
  {
    v67 = *(_DWORD *)(a2 + 76);
    if ( (unsigned int)(v67 - 1) > 1 && v67 != -2147483647 && v67 != 4 )
    {
      v68 = -1073741755;
LABEL_146:
      inserted = v68;
      goto LABEL_147;
    }
    v68 = MiSecureVad(v23, v51, *(_QWORD *)(a2 + 24), v67, 0, &v91);
    if ( v68 < 0 )
      goto LABEL_146;
    **(_QWORD **)(a2 + 80) = qword_140C4DE90 ^ v91 ^ v17;
  }
  v70 = PlaceholderVadToReplace;
  if ( PlaceholderVadToReplace )
  {
    MiUnlockAndDereferenceNestedVad((PVOID)v23);
    MiFinishPlaceholderVadReplacement(v70);
  }
  else
  {
    MiUnlockAndDereferenceVad((char *)v23);
  }
  *v95 = v51;
  return (unsigned int)inserted;
}
