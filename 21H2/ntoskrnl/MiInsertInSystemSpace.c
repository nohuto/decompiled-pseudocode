/*
 * XREFs of MiInsertInSystemSpace @ 0x140305B30
 * Callers:
 *     MiMapViewInSystemSpace @ 0x1406FFC5C (MiMapViewInSystemSpace.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x14020C630 (KiAbEntryRemoveFromTree.c)
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiControlAreaRequiresCharge @ 0x14027C22C (MiControlAreaRequiresCharge.c)
 *     MiAllocatePool @ 0x14027C2E0 (MiAllocatePool.c)
 *     MiChargeCommit @ 0x1402BF3D0 (MiChargeCommit.c)
 *     MiGetSharedVm @ 0x1402BF850 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1402C13E0 (MiUnlockWorkingSetExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x1402C1960 (ExAcquireSpinLockExclusive.c)
 *     MiReservePtes @ 0x1402CAEB0 (MiReservePtes.c)
 *     MiReleasePtes @ 0x1402EA050 (MiReleasePtes.c)
 *     KiCheckForKernelApcDelivery @ 0x1402EEF30 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     MiGetAnyMultiplexedVm @ 0x140307E4C (MiGetAnyMultiplexedVm.c)
 *     MiReferenceDataSubsections @ 0x140307E7C (MiReferenceDataSubsections.c)
 *     MiRemoveFromSystemSpace @ 0x14030FB9C (MiRemoveFromSystemSpace.c)
 *     MiManageSubsectionView @ 0x14031BE50 (MiManageSubsectionView.c)
 *     MiGetSessionVm @ 0x14031CEEC (MiGetSessionVm.c)
 *     MiSectionControlArea @ 0x14031FFB0 (MiSectionControlArea.c)
 *     MiReferenceActiveSubsection @ 0x140320A50 (MiReferenceActiveSubsection.c)
 *     RtlAvlInsertNodeEx @ 0x1403212A0 (RtlAvlInsertNodeEx.c)
 *     MiReturnCommit @ 0x140322FF0 (MiReturnCommit.c)
 *     MiOffsetToProtos @ 0x14032B8A0 (MiOffsetToProtos.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     MiGetSystemRegionType @ 0x1403556A0 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140355A50 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140355BB0 (MmGetSessionIdEx.c)
 *     MiUnmapLargePages @ 0x140395434 (MiUnmapLargePages.c)
 *     MiMapWithLargePages @ 0x1403B8C5C (MiMapWithLargePages.c)
 *     MiGetPageTablesForLargeMap @ 0x1403B8F34 (MiGetPageTablesForLargeMap.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     memset @ 0x140414300 (memset.c)
 *     MiDereferenceDataSubsections @ 0x140555068 (MiDereferenceDataSubsections.c)
 *     MiDereferencePerSessionProtos @ 0x14061B9CC (MiDereferencePerSessionProtos.c)
 *     MiCreatePerSessionProtos @ 0x14061BAE4 (MiCreatePerSessionProtos.c)
 *     MiAddMappedPtes @ 0x140700630 (MiAddMappedPtes.c)
 *     MiReferenceFileObjectForMap @ 0x140704020 (MiReferenceFileObjectForMap.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiInsertInSystemSpace(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        _QWORD *a4,
        char a5,
        __int64 a6,
        unsigned __int64 *a7)
{
  unsigned int v9; // edi
  unsigned int v10; // r12d
  _DWORD *v11; // rsi
  _QWORD *v12; // r14
  unsigned __int64 v13; // rbp
  __int64 v14; // r8
  void *v15; // r9
  __int64 v16; // r10
  unsigned __int64 v17; // r11
  unsigned int v18; // ebx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r8
  unsigned __int64 v23; // r9
  __int64 v24; // rcx
  unsigned __int64 v25; // r15
  int v26; // ebx
  unsigned int v27; // ebx
  ULONG_PTR v28; // rax
  _DWORD *Pool; // rax
  _DWORD *v30; // r15
  __int64 v31; // rcx
  int v32; // eax
  int v33; // ebx
  int v34; // eax
  unsigned __int64 v35; // r15
  __int64 v36; // r12
  __int64 v37; // rax
  int v38; // eax
  struct _KTHREAD *CurrentThread; // r13
  __int64 v40; // r15
  LONG *SharedVm; // rbx
  KIRQL v42; // al
  __int64 v43; // r8
  unsigned __int8 v44; // di
  _QWORD *v45; // r10
  unsigned __int64 v46; // rdx
  _QWORD *v47; // rax
  ULONG_PTR v48; // r15
  struct _KTHREAD *v49; // rdi
  ULONG_PTR v50; // r9
  unsigned __int8 v51; // r12
  unsigned int v52; // edx
  bool v53; // zf
  __int64 v54; // rcx
  __int64 v55; // rbx
  __int64 v56; // rdx
  unsigned __int64 v57; // r13
  unsigned __int64 v58; // r15
  unsigned int v59; // edi
  __int64 v60; // rax
  unsigned __int64 v61; // rbx
  unsigned __int64 *v62; // rsi
  int v63; // edi
  unsigned __int64 PageTablesForLargeMap; // rax
  int v66; // ecx
  int active; // eax
  __int64 v68; // rdi
  volatile LONG *v69; // rbx
  KIRQL v70; // al
  unsigned __int64 v71; // r8
  _QWORD *v72; // rdx
  unsigned __int64 v73; // rdi
  _QWORD *v74; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v78; // edx
  __int64 v79; // rdx
  int v80; // r14d
  __int64 v81; // rsi
  unsigned __int64 *v82; // rdi
  unsigned __int64 *v83; // r12
  int v84; // r13d
  unsigned __int64 v85; // rbx
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v87; // rax
  __int64 v88; // rdx
  unsigned int v89; // [rsp+40h] [rbp-138h] BYREF
  int v90; // [rsp+44h] [rbp-134h]
  __int64 v91; // [rsp+48h] [rbp-130h]
  unsigned __int64 v92; // [rsp+50h] [rbp-128h]
  void *v93; // [rsp+58h] [rbp-120h]
  unsigned __int64 v94; // [rsp+60h] [rbp-118h]
  __int64 v95; // [rsp+68h] [rbp-110h]
  unsigned __int64 v96; // [rsp+70h] [rbp-108h]
  __int64 v97; // [rsp+78h] [rbp-100h]
  int v98; // [rsp+80h] [rbp-F8h]
  int v99; // [rsp+84h] [rbp-F4h]
  int SessionId; // [rsp+88h] [rbp-F0h]
  __int64 AnyMultiplexedVm; // [rsp+90h] [rbp-E8h]
  __int64 v102; // [rsp+98h] [rbp-E0h]
  __int64 v103; // [rsp+A0h] [rbp-D8h] BYREF
  _QWORD v104[25]; // [rsp+B0h] [rbp-C8h] BYREF
  char v106; // [rsp+188h] [rbp+10h]

  v103 = 0LL;
  memset(v104, 0, 0x90uLL);
  v9 = 3;
  v96 = 0LL;
  v10 = 0x7FFFF;
  v94 = 0LL;
  v90 = 0x7FFFF;
  *a7 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  v106 = 0;
  v92 = 0LL;
  LODWORD(v13) = 0;
  v91 = 0LL;
  v93 = &unk_140C4EB38;
  v89 = 3;
  v95 = MiSectionControlArea(a3);
  v18 = (a2 >> 16) + ((_WORD)a2 != 0);
  if ( v18 >= 0x10000 )
  {
    v26 = -1073741793;
    v35 = 0LL;
LABEL_91:
    v66 = 0;
    goto LABEL_92;
  }
  v97 = MiOffsetToProtos(v95, *a4, &v103);
  if ( !v97 )
  {
    v26 = -1073741801;
    v15 = &unk_140C4EB38;
    v35 = 0LL;
    v16 = 0LL;
LABEL_90:
    v17 = v92;
    v14 = v89;
    goto LABEL_91;
  }
  if ( (_UNKNOWN *)a1 == &unk_140C4CDA8 )
  {
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(1LL);
    v102 = 0LL;
    SessionId = -1;
    v9 = ((a6 & 8) != 0) + 3;
  }
  else
  {
    AnyMultiplexedVm = MiGetSessionVm(v20, v19, v21);
    v9 = 2;
    v102 = AnyMultiplexedVm - 256;
    v93 = (void *)(AnyMultiplexedVm - 256 + 880);
    SessionId = MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
  }
  v13 = (a2 >> 12) + ((a2 & 0xFFF) != 0);
  v24 = *(unsigned __int16 *)(AnyMultiplexedVm + 174);
  v25 = 16 * v18;
  v92 = v25;
  v91 = *(_QWORD *)(qword_140C4E688 + 8 * v24);
  if ( (*(_DWORD *)(v95 + 56) & 0x420) != 0 )
  {
    v27 = v89;
    goto LABEL_8;
  }
  v26 = MiReferenceDataSubsections(v95, (_DWORD)a4, v13, v9 != 2, (__int64)&v89);
  if ( v26 < 0 )
  {
LABEL_81:
    v35 = 0LL;
    goto LABEL_88;
  }
  v27 = v89;
  v106 = 1;
  if ( v89 >= 3 )
  {
LABEL_8:
    v28 = MiReservePtes((__int64)v93, v25, v22, v23);
    v12 = (_QWORD *)v28;
    if ( v28 )
    {
      v96 = (__int64)(v28 << 25) >> 16;
      goto LABEL_10;
    }
    v26 = -1073741670;
    v35 = 0LL;
LABEL_88:
    v10 = v90;
    goto LABEL_89;
  }
  PageTablesForLargeMap = MiGetPageTablesForLargeMap(v25, 9LL, v89);
  v96 = PageTablesForLargeMap;
  if ( !PageTablesForLargeMap )
  {
    v26 = -1073741670;
    goto LABEL_81;
  }
  v12 = (_QWORD *)(((PageTablesForLargeMap >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
LABEL_10:
  Pool = MiAllocatePool(64, 0x68uLL, 0x7756694Du);
  v11 = Pool;
  if ( !Pool )
  {
    v35 = v94;
    v26 = -1073741670;
    goto LABEL_88;
  }
  v30 = (_DWORD *)v95;
  v31 = v95;
  Pool[14] ^= (Pool[14] ^ (8 * v27)) & 0x18;
  v32 = MiControlAreaRequiresCharge(v31, v9);
  v33 = v32;
  if ( !v32 )
  {
    v35 = v94;
    v26 = -1073740277;
    goto LABEL_88;
  }
  if ( v32 == 2 )
    v11[14] |= 4u;
  if ( (*(_DWORD *)(a3 + 56) & 0x8000000) != 0 )
    v11[14] |= 1u;
  if ( (a5 & 1) != 0 )
    v11[14] |= 2u;
  v34 = v30[14];
  if ( (v34 & 0x20) == 0 )
  {
    v35 = v94;
LABEL_20:
    v36 = v97;
LABEL_21:
    *((_QWORD *)v11 + 6) = v36;
    *((_QWORD *)v11 + 4) = v13 << 12;
    *((_QWORD *)v11 + 3) = *a4 >> 12;
    v37 = v96 | 2;
    *((_QWORD *)v11 + 5) = v35;
    *((_QWORD *)v11 + 11) = v37;
    v11[25] = v90;
    if ( (_UNKNOWN *)a1 == &unk_140C4CDA8 )
      v38 = -1;
    else
      v38 = *(_DWORD *)(v102 + 8);
    v11[24] = v38;
    *((_QWORD *)v11 + 8) = MiReferenceFileObjectForMap(a3);
    CurrentThread = KeGetCurrentThread();
    if ( v89 || (*(_DWORD *)(v95 + 56) & 0x400) != 0 )
    {
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockExclusiveEx(*(_QWORD *)(a1 + 8), 0LL);
      v40 = AnyMultiplexedVm;
      SharedVm = MiGetSharedVm(AnyMultiplexedVm);
      v42 = ExAcquireSpinLockExclusive(SharedVm);
      SharedVm[1] = 0;
      LOBYTE(v43) = 0;
      ++*(_DWORD *)(a1 + 24);
      v44 = v42;
      v45 = *(_QWORD **)(a1 + 16);
      if ( v45 )
      {
        while ( 1 )
        {
          v46 = v45[11] & 0xFFFFFFFFFFFFF000uLL;
          if ( v96 < v46 + v45[4] && v96 < v46 )
          {
            v47 = (_QWORD *)*v45;
            if ( !*v45 )
              break;
          }
          else
          {
            v47 = (_QWORD *)v45[1];
            if ( !v47 )
            {
              LOBYTE(v43) = 1;
              break;
            }
          }
          v45 = v47;
        }
      }
      RtlAvlInsertNodeEx(a1 + 16, v45, v43, v11);
      MiUnlockWorkingSetExclusive(v40, v44);
      if ( (*(_DWORD *)(v95 + 56) & 0x400) == 0 )
      {
        v104[0] = v95;
        MiManageSubsectionView(v104, v11 + 18, 3LL);
      }
      v48 = *(_QWORD *)(a1 + 8);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v48, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v48);
      v99 = 0;
      v49 = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(v48) == 1 )
        v50 = (unsigned int)MmGetSessionIdEx(v49->ApcState.Process);
      else
        v50 = 0xFFFFFFFFLL;
      --v49->SpecialApcDisable;
      v51 = ++v49->AbAllocationRegionCount;
      v52 = ((char)v49->AbEntrySummary | (char)v49->AbOrphanedEntrySummary) ^ 0x3F;
      v53 = !_BitScanReverse((unsigned int *)&v54, v52);
      v98 = v54;
      if ( v53 )
        goto LABEL_73;
      while ( 1 )
      {
        v55 = (__int64)&v49->LockEntries[v54];
        v52 &= ~(1 << v54);
        if ( (*(_BYTE *)(v55 + 26) & 1) != 0
          && (*(_DWORD *)(v55 + 32) & 1) == 0
          && (*(_QWORD *)(v55 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v48 & 0x7FFFFFFFFFFFFFFCLL)
          && *(_DWORD *)(v55 + 40) == (_DWORD)v50 )
        {
          *(_BYTE *)(v55 + 26) &= ~1u;
          if ( *(_QWORD *)(v55 + 32) )
            break;
        }
        v53 = !_BitScanReverse((unsigned int *)&v54, v52);
        v98 = v54;
        if ( v53 )
          goto LABEL_73;
      }
      if ( !v55 )
      {
LABEL_73:
        if ( (*((_DWORD *)&v49->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)v49, v48, v50, 0LL);
      }
      else
      {
        *(_BYTE *)(v55 + 32) |= 2u;
        if ( *(__int64 *)(v55 + 32) < 0 )
          KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v55);
        v99 = *(_DWORD *)(v55 + 88) & 0x1FFFF;
        *(_DWORD *)(v55 + 88) &= 0xFFFE0000;
        *(_BYTE *)(v55 + 25) &= ~1u;
        *(_QWORD *)(v55 + 32) = 0LL;
        v56 = (signed __int64)(v55 - (unsigned __int64)v49->LockEntries) / 96;
        if ( v51 == 1 )
          v49->AbEntrySummary |= 1 << v56;
        else
          _InterlockedOr8((volatile signed __int8 *)&v49->AbOrphanedEntrySummary, 1 << v56);
      }
      --v49->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)v49);
      v53 = v49->SpecialApcDisable++ == -1;
      if ( v53 && ($C459BD0D405E8E46662177FB3D0A143F *)v49->ApcState.ApcListHead[0].Flink != &v49->152 )
        KiCheckForKernelApcDelivery();
      KiLeaveGuardedRegionUnsafe(CurrentThread);
      v36 = v97;
      v57 = v96;
    }
    else
    {
      v57 = v96;
      v69 = (volatile LONG *)((char *)&unk_140C4CDF0 + 16 * (unsigned __int8)(v96 >> 30));
      v70 = ExAcquireSpinLockExclusive(v69 + 3);
      ++*((_DWORD *)v69 + 2);
      LOBYTE(v71) = 0;
      v72 = *(_QWORD **)v69;
      v73 = v70;
      if ( *(_QWORD *)v69 )
      {
        while ( 1 )
        {
          v71 = v72[11] & 0xFFFFFFFFFFFFF000uLL;
          if ( v57 >= v71 + v72[4] || v57 >= v71 )
          {
            v74 = (_QWORD *)v72[1];
            if ( !v74 )
            {
              LOBYTE(v71) = 1;
              break;
            }
          }
          else
          {
            v74 = (_QWORD *)*v72;
            if ( !*v72 )
            {
              LOBYTE(v71) = 0;
              break;
            }
          }
          v72 = v74;
        }
      }
      RtlAvlInsertNodeEx(v69, v72, v71, v11);
      ExReleaseSpinLockExclusiveFromDpcLevel(v69 + 3);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v73 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v78 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v73 + 1));
            v53 = (v78 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v78;
            if ( v53 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(v73);
    }
    if ( (v11[14] & 1) != 0 )
      _InterlockedIncrement((volatile signed __int32 *)(v95 + 92));
    v58 = 0LL;
    if ( v89 < 3 )
    {
      v79 = *(_QWORD *)(v36 + 8);
      v80 = v57;
      v81 = MiLargePageSizes[v89];
      v82 = (unsigned __int64 *)(v79 + 8 * v103);
      v83 = (unsigned __int64 *)(v79 + 8LL * *(unsigned int *)(v36 + 44));
      if ( v92 )
      {
        v84 = MiGetAnyMultiplexedVm(3LL);
        do
        {
          if ( v82 == v83 )
          {
            v97 = *(_QWORD *)(v97 + 16);
            v82 = *(unsigned __int64 **)(v97 + 8);
            v83 = &v82[*(unsigned int *)(v97 + 44)];
          }
          v85 = *v82;
          if ( (unsigned int)MiPteInShadowRange(v82)
            && (MiFlags & 0xC00000) != 0
            && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
            && (v85 & 1) != 0
            && ((v85 & 0x20) == 0 || (v85 & 0x42) == 0) )
          {
            Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( Flink )
            {
              v87 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)v82 >> 3) & 0x1FF));
              v88 = v85 | 0x20;
              if ( (v87 & 0x20) == 0 )
                v88 = v85;
              v85 = v88;
              if ( (v87 & 0x42) != 0 )
                v85 = v88 | 0x42;
            }
          }
          MiMapWithLargePages(v84, v80, v85 >> 12, v81, v89, 4, 1);
          v80 += (_DWORD)v81 << 12;
          v82 += v81;
          v58 += v81;
        }
        while ( v58 < v92 );
        v57 = v96;
      }
      v63 = 0;
    }
    else
    {
      v59 = 0;
      if ( v13 )
      {
        v60 = 0LL;
        do
        {
          v61 = ZeroPte;
          v62 = &v12[v60];
          if ( (unsigned int)MiPteInShadowRange(v62) )
          {
            if ( (unsigned int)MiPteHasShadow() )
            {
              if ( !HIBYTE(word_140C4E048) && (ZeroPte & 1) != 0 )
                v61 = ZeroPte | 0x8000000000000000uLL;
              *v62 = v61;
              MiWritePteShadow((__int64)v62, v61);
              goto LABEL_57;
            }
            if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
              && (ZeroPte & 1) != 0 )
            {
              v61 = ZeroPte | 0x8000000000000000uLL;
            }
          }
          *v62 = v61;
LABEL_57:
          v60 = ++v59;
        }
        while ( v59 < v13 );
      }
      v63 = MiAddMappedPtes((_DWORD)v12, v13, v95, (_DWORD)a4, SessionId, 0);
      if ( v63 < 0 )
      {
        ++*(_DWORD *)(a1 + 28);
        MiRemoveFromSystemSpace(a1, v57, 0LL);
        return (unsigned int)v63;
      }
    }
    *a7 = v57;
    return (unsigned int)v63;
  }
  if ( (v34 & 0x4000000) != 0 )
  {
    v90 = -1;
    if ( (int)MiCreatePerSessionProtos(v30, 0xFFFFFFFFLL) < 0 )
    {
      v35 = v94;
      v26 = -1073741801;
      v10 = 0x7FFFF;
LABEL_89:
      v15 = v93;
      v16 = v91;
      goto LABEL_90;
    }
  }
  v35 = *(_QWORD *)(*(_QWORD *)v30 + 48LL);
  if ( !v35 || (unsigned int)MiChargeCommit(v91, v35, 0) )
  {
    if ( v33 != 2 )
      goto LABEL_20;
    v97 = v95 + 128;
    v36 = v95 + 128;
    active = MiReferenceActiveSubsection(v95 + 128);
    v26 = active;
    if ( active >= 0 )
      goto LABEL_21;
    goto LABEL_88;
  }
  v14 = v89;
  v66 = 0;
  v15 = v93;
  v35 = 0LL;
  v10 = v90;
  v26 = -1073741523;
  v16 = v91;
  v17 = v92;
LABEL_92:
  ++*(_DWORD *)(a1 + 28);
  if ( v12 )
  {
    if ( (unsigned int)v14 >= 3 )
      MiReleasePtes((__int64)v15, v12, v17);
    else
      MiUnmapLargePages(v96, v17 << 12, 9LL);
    v16 = v91;
    v66 = 0;
    v14 = v89;
  }
  if ( v106 == 1 )
  {
    v53 = v9 == 2;
    v68 = v95;
    LOBYTE(v66) = (unsigned int)v14 < 3;
    MiDereferenceDataSubsections(v95, (_DWORD)a4, v13, v66, !v53);
    v16 = v91;
  }
  else
  {
    v68 = v95;
  }
  if ( v10 != 0x7FFFF )
  {
    MiDereferencePerSessionProtos(v68, v10);
    v16 = v91;
  }
  if ( v35 )
    MiReturnCommit(v16, v35, v14, v15);
  if ( v11 )
    ExFreePoolWithTag(v11, 0);
  return (unsigned int)v26;
}
