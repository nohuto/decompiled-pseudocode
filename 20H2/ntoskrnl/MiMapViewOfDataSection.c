/*
 * XREFs of MiMapViewOfDataSection @ 0x140622CE0
 * Callers:
 *     MiMapViewOfSection @ 0x140621850 (MiMapViewOfSection.c)
 * Callees:
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140220E40 (KiLeaveGuardedRegionUnsafe.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     MiReferenceVad @ 0x14022C1B0 (MiReferenceVad.c)
 *     LOCK_ADDRESS_SPACE @ 0x14022C3E0 (LOCK_ADDRESS_SPACE.c)
 *     MiAddViewsForSection @ 0x14022C750 (MiAddViewsForSection.c)
 *     MiGetControlAreaPtes @ 0x14022D05C (MiGetControlAreaPtes.c)
 *     MiCheckPurgeAndUpMapCount @ 0x14022D110 (MiCheckPurgeAndUpMapCount.c)
 *     MiAweControlArea @ 0x14022D1A8 (MiAweControlArea.c)
 *     MiAllocatePool @ 0x14022D320 (MiAllocatePool.c)
 *     ExAllocatePoolMm @ 0x14022D3E0 (ExAllocatePoolMm.c)
 *     MiGetWsAndInsertVad @ 0x14022DCA0 (MiGetWsAndInsertVad.c)
 *     MiLockVad @ 0x14022E378 (MiLockVad.c)
 *     MiComputeContiguousSubsectionPte @ 0x14022E6D0 (MiComputeContiguousSubsectionPte.c)
 *     MiLocateSubsectionNode @ 0x14022E700 (MiLocateSubsectionNode.c)
 *     MiGetCommittedPages @ 0x14022E938 (MiGetCommittedPages.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x1402304A4 (UNLOCK_ADDRESS_SPACE.c)
 *     MiUnlockVad @ 0x1402306B0 (MiUnlockVad.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x140232E14 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     MiIsProcessCfgEnabled @ 0x14023300C (MiIsProcessCfgEnabled.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     MiRemoveViewsFromSectionWithPfn @ 0x14024E10C (MiRemoveViewsFromSectionWithPfn.c)
 *     MiUnlockAndDereferenceVad @ 0x14027C760 (MiUnlockAndDereferenceVad.c)
 *     MmGetCurrentProcessorColor @ 0x1403001F0 (MmGetCurrentProcessorColor.c)
 *     MiLocatePagefileSubsection @ 0x140303D24 (MiLocatePagefileSubsection.c)
 *     MiDereferenceControlArea @ 0x14031EF2C (MiDereferenceControlArea.c)
 *     MiDereferenceExtendInfo @ 0x14032DE10 (MiDereferenceExtendInfo.c)
 *     Feature_Servicing_SetVadPageSize__private_IsEnabled @ 0x1403F2038 (Feature_Servicing_SetVadPageSize__private_IsEnabled.c)
 *     MiDecrementLargeSubsections @ 0x14053E910 (MiDecrementLargeSubsections.c)
 *     MiIncrementLargeSubsections @ 0x14053F980 (MiIncrementLargeSubsections.c)
 *     MiFindPlaceholderVadToReplace @ 0x140553724 (MiFindPlaceholderVadToReplace.c)
 *     MiUnlockAndDereferenceNestedVad @ 0x14055A300 (MiUnlockAndDereferenceNestedVad.c)
 *     MiReferenceFileObjectForMap @ 0x140623854 (MiReferenceFileObjectForMap.c)
 *     MiAddSecureEntry @ 0x140623880 (MiAddSecureEntry.c)
 *     MiInsertVadCharges @ 0x1406239C0 (MiInsertVadCharges.c)
 *     MiAdvanceVadHint @ 0x140623CB0 (MiAdvanceVadHint.c)
 *     MiRemoveSharedCommitNode @ 0x140623DA0 (MiRemoveSharedCommitNode.c)
 *     MiInsertSharedCommitNode @ 0x140624010 (MiInsertSharedCommitNode.c)
 *     MiIsVaRangeAvailable @ 0x140627A08 (MiIsVaRangeAvailable.c)
 *     MiCommitVadCfgBits @ 0x140627A50 (MiCommitVadCfgBits.c)
 *     MiSelectUserAddress @ 0x14067D5F0 (MiSelectUserAddress.c)
 *     MiUnmapVad @ 0x140685B60 (MiUnmapVad.c)
 *     MiChargeSegmentCommit @ 0x1406B2AF0 (MiChargeSegmentCommit.c)
 *     MiSecureVad @ 0x1406B3FA8 (MiSecureVad.c)
 *     MiFreePlaceholderStorage @ 0x1406E4134 (MiFreePlaceholderStorage.c)
 *     MiLogMapFileEvent @ 0x1408C6F88 (MiLogMapFileEvent.c)
 *     MiCreatePlaceholderStorage @ 0x1408DAB18 (MiCreatePlaceholderStorage.c)
 *     MiFinishPlaceholderVadReplacement @ 0x1408DABC8 (MiFinishPlaceholderVadReplacement.c)
 *     MiPreparePlaceholderVadReplacement @ 0x1408DACF0 (MiPreparePlaceholderVadReplacement.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
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
  __int64 v17; // r13
  int v18; // edx
  int v19; // eax
  bool v20; // zf
  unsigned __int64 v22; // rax
  __int64 v23; // rsi
  struct _KTHREAD *CurrentThread; // r12
  __int64 v25; // rax
  unsigned __int64 v26; // rbx
  unsigned __int64 v27; // rax
  int inserted; // edi
  struct _DMA_ADAPTER *v29; // rcx
  unsigned __int64 v30; // rbx
  bool v31; // di
  __int64 *SubsectionNode; // r9
  unsigned __int64 v33; // rcx
  unsigned __int64 v34; // rax
  __int64 *v35; // rdi
  __int64 v36; // rax
  int v37; // eax
  _DWORD *PoolMm; // rax
  int v39; // ebx
  unsigned int v40; // ecx
  int v41; // eax
  int v42; // ecx
  int v43; // eax
  BOOL v44; // ecx
  unsigned int v45; // edx
  unsigned int v46; // ecx
  unsigned __int64 v47; // r12
  unsigned __int64 v48; // r10
  __int64 v49; // r10
  __int64 v50; // r10
  unsigned __int64 v51; // rdx
  unsigned __int64 v52; // r9
  _DWORD *v53; // rdi
  _DWORD *Pool; // rax
  __int64 v55; // rcx
  unsigned __int64 v56; // rax
  unsigned __int64 v57; // r8
  __int64 *v58; // rdi
  int v59; // r10d
  __int64 *v60; // rax
  __int64 *v61; // rbx
  __int64 v62; // rcx
  int v63; // r14d
  int v64; // r9d
  int v65; // eax
  PVOID v66; // rbx
  PVOID v67; // r14
  PVOID v68; // r14
  volatile signed __int64 *v69; // rdi
  unsigned __int64 v70; // r12
  __int64 *BugCheckParameter2; // [rsp+50h] [rbp-A1h]
  __int64 v72; // [rsp+58h] [rbp-99h]
  int v73; // [rsp+60h] [rbp-91h]
  unsigned __int64 v74; // [rsp+68h] [rbp-89h] BYREF
  PVOID PlaceholderVadToReplace; // [rsp+70h] [rbp-81h]
  unsigned __int64 ControlAreaPtes; // [rsp+78h] [rbp-79h]
  int v77; // [rsp+80h] [rbp-71h]
  unsigned __int64 v78; // [rsp+88h] [rbp-69h]
  unsigned __int64 v79; // [rsp+90h] [rbp-61h]
  __int64 v80; // [rsp+98h] [rbp-59h]
  unsigned __int64 v81; // [rsp+A0h] [rbp-51h]
  __int64 v82; // [rsp+A8h] [rbp-49h]
  unsigned __int64 v83; // [rsp+B0h] [rbp-41h] BYREF
  unsigned __int64 v84; // [rsp+B8h] [rbp-39h]
  __int64 v85; // [rsp+C0h] [rbp-31h]
  __int64 v86; // [rsp+C8h] [rbp-29h] BYREF
  unsigned __int64 v87; // [rsp+D0h] [rbp-21h]
  __int64 v88; // [rsp+D8h] [rbp-19h] BYREF
  PVOID P; // [rsp+E0h] [rbp-11h]
  ULONG_PTR v90; // [rsp+E8h] [rbp-9h]
  int PlaceholderStorage; // [rsp+138h] [rbp+47h] BYREF
  unsigned __int64 *v92; // [rsp+140h] [rbp+4Fh]
  unsigned __int64 *v93; // [rsp+148h] [rbp+57h]

  v93 = a4;
  v92 = a3;
  v9 = *(_DWORD *)(a2 + 60);
  v74 = 0LL;
  v83 = 0LL;
  v88 = 0LL;
  v73 = 0;
  if ( (v9 & 2) != 0 )
    return 3221225485LL;
  if ( MiAweControlArea(a1) )
    return 3221225485LL;
  v16 = *v14;
  v17 = *(_QWORD *)(v13 + 88);
  v18 = *(_DWORD *)(v13 + 40);
  v84 = (unsigned __int64)v15;
  v82 = v16;
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
  v80 = v25;
  P = v15;
  v77 = (int)v15;
  v72 = (__int64)CurrentThread;
  MiCheckPurgeAndUpMapCount(a1);
  v26 = *a4;
  v27 = v26 + *(_QWORD *)(a2 + 24);
  v78 = v26 >> 12;
  v79 = v27 >> 12;
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
      v29 = *(struct _DMA_ADAPTER **)(v23 + 128);
      if ( v29 )
        HalPutDmaAdapter(v29);
      MiFreePlaceholderStorage(v23);
      ExFreePoolWithTag((PVOID)v23, 0);
    }
    if ( P )
      ExFreePoolWithTag(P, 0);
    return (unsigned int)inserted;
  }
  v30 = a8;
  v31 = 0;
  if ( *(_QWORD *)(a1 + 64) == v23 )
  {
    v83 = v78;
    BugCheckParameter2 = (__int64 *)MiLocatePagefileSubsection((unsigned int *)(a1 + 128), &v83);
    SubsectionNode = BugCheckParameter2;
    if ( !v30 && a7 == 24 )
      v31 = (*(_DWORD *)(a1 + 56) & 0x1000) != 0;
  }
  else
  {
    SubsectionNode = MiLocateSubsectionNode(a1, *v93, 0);
    BugCheckParameter2 = SubsectionNode;
  }
  v33 = *((unsigned int *)SubsectionNode + 9) | ((unsigned __int64)((_WORD)SubsectionNode[4] & 0xFFC0) << 26);
  v78 -= v33;
  v34 = v79 - v33;
  if ( v31 )
    v34 = 1LL;
  v79 = v34;
  PlaceholderStorage = MiAddViewsForSection((__int64 **)SubsectionNode, v34, (_DWORD *)8);
  inserted = PlaceholderStorage;
  if ( PlaceholderStorage < 0 )
    goto LABEL_27;
  v35 = BugCheckParameter2;
  v85 = BugCheckParameter2[1] + 8 * v78;
  if ( *(_QWORD *)(a1 + 64) == v23 && v30 && MiGetCommittedPages((_QWORD *)a1) < ControlAreaPtes )
  {
    v36 = v23;
    LOBYTE(v36) = (v30 & 0xFFF) != 0;
    v84 = (v30 >> 12) + v36;
  }
  v86 = v23;
  ControlAreaPtes = *(_QWORD *)(a5 + 24) << 12;
  LOWORD(v37) = MmGetCurrentProcessorColor();
  PoolMm = ExAllocatePoolMm(64, 0x88uLL, 0x20646156u, v37 | 0x80000000);
  v23 = (__int64)PoolMm;
  if ( !PoolMm )
  {
    inserted = -1073741670;
    goto LABEL_121;
  }
  v39 = a7;
  v40 = PoolMm[16] & 0xFBFFFFFF;
  *((_QWORD *)PoolMm + 2) = -2LL;
  *((_QWORD *)PoolMm + 10) = v85;
  v41 = 0;
  v20 = a6 == 1;
  *(_QWORD *)(v23 + 72) = BugCheckParameter2;
  if ( v20 )
    v41 = 0x4000000;
  v42 = v41 | v40;
  v43 = (*(_DWORD *)(v23 + 48) ^ (v39 << 7)) & 0xF80;
  *(_DWORD *)(v23 + 64) = v42;
  *(_DWORD *)(v23 + 48) ^= v43;
  *(_DWORD *)(v23 + 48) ^= (*(_DWORD *)(v23 + 48) ^ (*(_DWORD *)(a2 + 52) << 12)) & 0x3F000;
  if ( *(_DWORD *)(a2 + 52) )
    *(_BYTE *)(*(_QWORD *)(v17 + 1680) + 352LL) = 1;
  if ( *(_QWORD *)(a1 + 64) && (*(_DWORD *)(a2 + 40) & 0x20002000) == 0 )
    *(_DWORD *)(v23 + 64) |= 0x2000000u;
  *(_QWORD *)(v23 + 40) = 0LL;
  v90 = v23 + 40;
  *(_DWORD *)(v23 + 64) = ((__int64)*v93 >> 16) & 0xFFFFFF | *(_DWORD *)(v23 + 64) & 0xFF000000;
  if ( (*(_DWORD *)(a2 + 60) & 0x4000000) != 0 )
  {
    PlaceholderStorage = MiCreatePlaceholderStorage(v23);
    inserted = PlaceholderStorage;
    if ( PlaceholderStorage < 0 )
      goto LABEL_121;
    v35 = BugCheckParameter2;
  }
  *(_QWORD *)(v23 + 128) = MiReferenceFileObjectForMap(a5);
  v44 = Feature_Servicing_SetVadPageSize__private_IsEnabled() != 0;
  if ( (*(_DWORD *)(a2 + 40) & 0x20000000) != 0 )
  {
    if ( v44 )
    {
      if ( !*(_QWORD *)(a1 + 64) )
      {
        *(_DWORD *)(v23 + 48) = *(_DWORD *)(v23 + 48) & 0xFFF3FFFF | 0x80000;
        goto LABEL_71;
      }
      v45 = MiIncrementLargeSubsections(v35, v79);
      if ( v45 <= 1 )
      {
        v46 = *(_DWORD *)(v23 + 48) | 0xC0000;
        if ( v45 == 1 )
          v46 = *(_DWORD *)(v23 + 48) & 0xFFF3FFFF | 0x80000;
        *(_DWORD *)(v23 + 48) = v46;
LABEL_70:
        v73 = 1;
        goto LABEL_71;
      }
    }
    else
    {
      if ( !*(_QWORD *)(a1 + 64) )
        goto LABEL_71;
      if ( (unsigned int)MiIncrementLargeSubsections(v35, v79) <= 1 )
        goto LABEL_70;
    }
    inserted = -1073741280;
    goto LABEL_121;
  }
LABEL_71:
  LOCK_ADDRESS_SPACE((__int64)CurrentThread, v17);
  if ( (*(_DWORD *)(v17 + 1124) & 0x20) != 0 )
  {
    inserted = -1073741558;
    goto LABEL_116;
  }
  if ( (*(_DWORD *)(a2 + 72) & 1) != 0 )
  {
    v47 = *v92;
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
                             v39,
                             0,
                             (__int64)&v86,
                             (__int64)&v74);
      inserted = PlaceholderStorage;
      if ( PlaceholderStorage < 0 )
        goto LABEL_116;
      v47 = v74;
      v48 = *(_QWORD *)(a2 + 24) + v74 - 1;
      v81 = v48;
      goto LABEL_85;
    }
    v47 = ControlAreaPtes + *v93;
  }
  v49 = *(_QWORD *)(a2 + 24) - 1LL;
  v74 = v47;
  v50 = v47 + v49;
  v20 = (*(_DWORD *)(a2 + 60) & 0x4000000) == 0;
  v81 = v50;
  if ( v20 )
  {
    if ( !(unsigned int)MiIsVaRangeAvailable(v17, v47, (int)v50 - (int)v47 + 1, *(_QWORD *)a2, *(_QWORD *)(a2 + 8)) )
    {
      CurrentThread = (struct _KTHREAD *)v72;
      inserted = -1073741800;
      goto LABEL_116;
    }
  }
  else
  {
    PlaceholderVadToReplace = (PVOID)MiFindPlaceholderVadToReplace(v47, v50, *(_BYTE *)(a2 + 104), &PlaceholderStorage);
    if ( !PlaceholderVadToReplace )
    {
      inserted = PlaceholderStorage;
      CurrentThread = (struct _KTHREAD *)v72;
      goto LABEL_116;
    }
    v48 = v81;
  }
LABEL_85:
  v51 = v47 >> 12;
  v52 = v48 >> 12;
  *(_BYTE *)(v23 + 32) = v47 >> 44;
  *(_BYTE *)(v23 + 33) = v48 >> 44;
  *(_DWORD *)(v23 + 24) = v47 >> 12;
  *(_DWORD *)(v23 + 28) = v48 >> 12;
  v20 = (*(_DWORD *)(a2 + 40) & 0x2000) == 0;
  ControlAreaPtes = v47 >> 12;
  v87 = v48 >> 12;
  if ( !v20 )
  {
    CurrentThread = (struct _KTHREAD *)v72;
    --*(_WORD *)(v72 + 486);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C4C810, 0LL);
    v53 = *(_DWORD **)(v82 + 32);
    if ( v53 )
    {
      ++v53[2];
    }
    else
    {
      Pool = MiAllocatePool(64, 0x10uLL, 0x78436D4Du);
      v53 = Pool;
      if ( !Pool )
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4C810, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C4C810);
        KeAbPostRelease((ULONG_PTR)&qword_140C4C810);
        KiLeaveGuardedRegionUnsafe(v72);
        inserted = -1073741670;
        goto LABEL_114;
      }
      v55 = v82;
      Pool[2] = 1;
      *(_QWORD *)Pool = _InterlockedCompareExchange64((volatile signed __int64 *)(v55 + 24), -1LL, -1LL);
      *(_QWORD *)(v55 + 32) = Pool;
    }
    v56 = *(_QWORD *)(a5 + 48);
    if ( *(_QWORD *)v53 < v56 )
      *(_QWORD *)v53 = v56;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4C810, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C4C810);
    KeAbPostRelease((ULONG_PTR)&qword_140C4C810);
    KiLeaveGuardedRegionUnsafe(v72);
    v51 = ControlAreaPtes;
    v52 = v87;
    v47 = v74;
    *(_QWORD *)(v23 + 120) = v53;
  }
  if ( (a7 & 5) == 5 )
  {
    v57 = (*(unsigned int *)(v23 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v23 + 33) << 32))
        - (*(unsigned int *)(v23 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v23 + 32) << 32))
        + 1;
    *(_DWORD *)(v23 + 52) ^= ((*(_DWORD *)(v23 + 28) - *(_DWORD *)(v23 + 24) + 1) ^ *(_DWORD *)(v23 + 52)) & 0x7FFFFFFF;
    *(_BYTE *)(v23 + 34) = v57 >> 31;
  }
  v58 = BugCheckParameter2;
  *(_QWORD *)(v23 + 88) = MiComputeContiguousSubsectionPte((__int64)BugCheckParameter2, v52 + v78 - v51);
  if ( (*(_DWORD *)(a2 + 40) & 0x400000) != 0 || (*(_DWORD *)(a5 + 56) & 0x4000) != 0 )
  {
    P = (PVOID)MiAddSecureEntry(v23, v47, v59, 0x80000000, 0);
    if ( !P )
    {
      inserted = -1073741670;
LABEL_113:
      CurrentThread = (struct _KTHREAD *)v72;
LABEL_114:
      if ( PlaceholderVadToReplace )
        MiUnlockVad((__int64)CurrentThread, (__int64)PlaceholderVadToReplace);
LABEL_116:
      UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, v17);
      if ( v77 == 1 )
        MiRemoveSharedCommitNode(a1, v17, 0LL);
      if ( v73 )
      {
        v60 = MiLocateSubsectionNode(a1, *(_QWORD *)(a2 + 32) + *v93 - 1, 0);
        v61 = BugCheckParameter2;
        MiDecrementLargeSubsections(BugCheckParameter2, v60);
LABEL_122:
        MiRemoveViewsFromSectionWithPfn(v61, v79, 8u);
        goto LABEL_27;
      }
LABEL_121:
      v61 = BugCheckParameter2;
      goto LABEL_122;
    }
  }
  if ( (*(_DWORD *)(a2 + 40) & 0x20000000) != 0 )
  {
    *(_DWORD *)(v23 + 48) = *(_DWORD *)(v23 + 48) & 0xFFFFFF8F | 0x50;
    v47 = v74;
    *(_DWORD *)(v23 + 64) |= 0x1000000u;
  }
  if ( !*(_QWORD *)(a1 + 64) )
  {
    inserted = MiInsertSharedCommitNode(a1, v17, 0LL);
    if ( inserted < 0 )
      goto LABEL_113;
    v58 = BugCheckParameter2;
    v77 = 1;
  }
  if ( v84 && !(unsigned int)MiChargeSegmentCommit(v58, v85, v84) )
  {
    inserted = -1073741523;
    goto LABEL_113;
  }
  PlaceholderStorage = MiInsertVadCharges(v23, v17);
  inserted = PlaceholderStorage;
  if ( PlaceholderStorage < 0 )
    goto LABEL_113;
  v62 = v80;
  if ( !*(_QWORD *)(a1 + 64) && *(int *)(a1 + 56) < 0 )
  {
    *(_DWORD *)(v23 + 48) = *(_DWORD *)(v23 + 48) & 0xFFF3FFFF | 0x40000;
    ++*(_QWORD *)(v62 + 384);
  }
  if ( PlaceholderVadToReplace )
  {
    MiPreparePlaceholderVadReplacement(PlaceholderVadToReplace, v17, v62);
    ExAcquirePushLockExclusiveEx(v23 + 40, 0LL);
  }
  else
  {
    MiLockVad(v72, v23);
  }
  MiGetWsAndInsertVad(v23);
  if ( !*(_QWORD *)(a1 + 64) && !*(_QWORD *)(v82 + 56) )
    *(_QWORD *)(v82 + 56) = v47;
  if ( v86 )
    MiAdvanceVadHint(ControlAreaPtes, v87);
  if ( ((a7 - 4) & 0xFFFFFFFD) == 0 && *(_QWORD *)(a1 + 64) )
  {
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 92));
    v47 = v74;
  }
  if ( (PerfGlobalGroupMask & 0x8000) != 0 )
    MiLogMapFileEvent(v23, 1061LL);
  inserted = 0;
  PlaceholderStorage = 0;
  v63 = a7 & 2;
  if ( ((a7 & 2) == 0 || !MiIsProcessCfgEnabled()) && !*(_QWORD *)(a2 + 80) )
  {
    v68 = PlaceholderVadToReplace;
    if ( PlaceholderVadToReplace )
    {
      v69 = (volatile signed __int64 *)v90;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v90, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v69);
      KeAbPostRelease((ULONG_PTR)v69);
      UNLOCK_ADDRESS_SPACE_UNORDERED(v72, v17);
      v70 = v74;
      inserted = PlaceholderStorage;
      MiFinishPlaceholderVadReplacement(v68);
      *v92 = v70;
    }
    else
    {
      MiUnlockVad(v72, v23);
      UNLOCK_ADDRESS_SPACE(v72, v17);
      *v92 = v47;
    }
    return (unsigned int)inserted;
  }
  UNLOCK_ADDRESS_SPACE_UNORDERED(v72, v17);
  MiReferenceVad(v23);
  if ( v63 )
  {
    if ( MiIsProcessCfgEnabled() )
    {
      inserted = MiCommitVadCfgBits(v23, 0LL, a9);
      if ( inserted < 0 )
      {
LABEL_152:
        v66 = PlaceholderVadToReplace;
        MiUnmapVad((PVOID)v23);
        if ( v66 )
          MiFinishPlaceholderVadReplacement(v66);
        return (unsigned int)inserted;
      }
    }
  }
  if ( *(_QWORD *)(a2 + 80) )
  {
    v64 = *(_DWORD *)(a2 + 76);
    if ( (unsigned int)(v64 - 1) > 1 && v64 != -2147483647 && v64 != 4 )
    {
      v65 = -1073741755;
LABEL_151:
      inserted = v65;
      goto LABEL_152;
    }
    v65 = MiSecureVad(v23, v47, *(_QWORD *)(a2 + 24), v64, 0, (__int64)&v88);
    if ( v65 < 0 )
      goto LABEL_151;
    **(_QWORD **)(a2 + 80) = qword_140C4DCD0 ^ v88 ^ v17;
  }
  v67 = PlaceholderVadToReplace;
  if ( PlaceholderVadToReplace )
  {
    MiUnlockAndDereferenceNestedVad((PVOID)v23);
    MiFinishPlaceholderVadReplacement(v67);
  }
  else
  {
    MiUnlockAndDereferenceVad((PVOID)v23);
  }
  *v92 = v47;
  return (unsigned int)inserted;
}
