/*
 * XREFs of MiInsertInSystemSpace @ 0x14024C1E0
 * Callers:
 *     MiMapViewInSystemSpace @ 0x140657AF4 (MiMapViewInSystemSpace.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     MiGetSystemRegionType @ 0x140220A00 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140220DB0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140220E40 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140220F10 (MmGetSessionIdEx.c)
 *     MiSectionControlArea @ 0x14022C010 (MiSectionControlArea.c)
 *     MiReferenceActiveSubsection @ 0x14022CE60 (MiReferenceActiveSubsection.c)
 *     MiAllocatePool @ 0x14022D320 (MiAllocatePool.c)
 *     RtlAvlInsertNodeEx @ 0x14022E170 (RtlAvlInsertNodeEx.c)
 *     MiReturnCommit @ 0x140230300 (MiReturnCommit.c)
 *     MiControlAreaRequiresCharge @ 0x140232D6C (MiControlAreaRequiresCharge.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     MiReferenceDataSubsections @ 0x14024C080 (MiReferenceDataSubsections.c)
 *     MiGetAnyMultiplexedVm @ 0x14024EF1C (MiGetAnyMultiplexedVm.c)
 *     MiRemoveFromSystemSpace @ 0x14024EF4C (MiRemoveFromSystemSpace.c)
 *     MiChargeCommit @ 0x14027C2B0 (MiChargeCommit.c)
 *     MiGetSharedVm @ 0x14027C730 (MiGetSharedVm.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14027E490 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiUnlockWorkingSetExclusive @ 0x14027F090 (MiUnlockWorkingSetExclusive.c)
 *     MiReservePtes @ 0x140285DC0 (MiReservePtes.c)
 *     MiReleasePtes @ 0x140294430 (MiReleasePtes.c)
 *     MiManageSubsectionView @ 0x1402986E0 (MiManageSubsectionView.c)
 *     MiGetSessionVm @ 0x14029977C (MiGetSessionVm.c)
 *     MiOffsetToProtos @ 0x1402A42A0 (MiOffsetToProtos.c)
 *     ExAcquireSpinLockExclusive @ 0x1402D4460 (ExAcquireSpinLockExclusive.c)
 *     KiCheckForKernelApcDelivery @ 0x1402DDA40 (KiCheckForKernelApcDelivery.c)
 *     KiAbEntryRemoveFromTree @ 0x1402F05E0 (KiAbEntryRemoveFromTree.c)
 *     MiWritePteShadow @ 0x140313F2C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140313F8C (MiPteHasShadow.c)
 *     MiUnmapLargePages @ 0x140394E74 (MiUnmapLargePages.c)
 *     MiMapWithLargePages @ 0x1403B80EC (MiMapWithLargePages.c)
 *     MiGetPageTablesForLargeMap @ 0x1403B83C4 (MiGetPageTablesForLargeMap.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     memset @ 0x140411300 (memset.c)
 *     MiDereferenceDataSubsections @ 0x140553358 (MiDereferenceDataSubsections.c)
 *     MiReferenceFileObjectForMap @ 0x140623854 (MiReferenceFileObjectForMap.c)
 *     MiAddMappedPtes @ 0x140658B60 (MiAddMappedPtes.c)
 *     MiDereferencePerSessionProtos @ 0x1406DC9FC (MiDereferencePerSessionProtos.c)
 *     MiCreatePerSessionProtos @ 0x1406DCB14 (MiCreatePerSessionProtos.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiInsertInSystemSpace(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 *a4,
        char a5,
        __int64 a6,
        unsigned __int64 *a7)
{
  int v9; // edi
  unsigned int v10; // r12d
  _DWORD *v11; // rsi
  __int64 v12; // r14
  unsigned __int64 v13; // rbp
  unsigned int v14; // r8d
  void *v15; // r9
  __int64 v16; // r10
  unsigned __int64 v17; // r11
  unsigned int v18; // ebx
  int v19; // edi
  int v20; // r12d
  __int64 v21; // rcx
  unsigned __int64 v22; // r15
  int v23; // ebx
  unsigned int v24; // ebx
  __int64 v25; // rax
  _DWORD *Pool; // rax
  _DWORD *v27; // r15
  __int64 v28; // rcx
  int v29; // eax
  int v30; // ebx
  int v31; // eax
  __int64 v32; // r15
  __int64 v33; // r12
  __int64 v34; // rax
  int v35; // eax
  struct _KTHREAD *CurrentThread; // r13
  __int64 v37; // r15
  __int64 v38; // rdx
  __int64 SharedVm; // rbx
  KIRQL v40; // al
  bool v41; // r8
  KIRQL v42; // di
  _QWORD *v43; // r10
  unsigned __int64 v44; // rdx
  _QWORD *v45; // rax
  unsigned __int64 v46; // r15
  struct _KTHREAD *v47; // rdi
  ULONG_PTR v48; // r9
  unsigned __int8 v49; // r12
  __int64 v50; // rdx
  __int64 v51; // r8
  bool v52; // zf
  __int64 v53; // rcx
  __int64 v54; // rbx
  __int64 v55; // rdx
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  unsigned __int64 v60; // r13
  unsigned __int64 v61; // r15
  unsigned int v62; // edi
  __int64 v63; // rax
  unsigned __int64 v64; // rbx
  unsigned __int64 *v65; // rsi
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // r9
  int v70; // edi
  unsigned __int64 PageTablesForLargeMap; // rax
  int v73; // ecx
  int v74; // edx
  int active; // eax
  unsigned __int64 v76; // rdi
  volatile LONG *v77; // rbx
  KIRQL v78; // al
  bool v79; // r8
  _QWORD *v80; // rdx
  unsigned __int64 v81; // rdi
  unsigned __int64 v82; // r8
  _QWORD *v83; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v87; // edx
  __int64 v88; // rdx
  int v89; // r14d
  __int64 v90; // rsi
  unsigned __int64 v91; // rdi
  unsigned __int64 v92; // r12
  int v93; // r13d
  unsigned __int64 v94; // rbx
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v96; // rax
  __int64 v97; // rdx
  unsigned int v98; // [rsp+40h] [rbp-138h] BYREF
  int v99; // [rsp+44h] [rbp-134h]
  __int64 v100; // [rsp+48h] [rbp-130h]
  unsigned __int64 v101; // [rsp+50h] [rbp-128h]
  void *v102; // [rsp+58h] [rbp-120h]
  __int64 v103; // [rsp+60h] [rbp-118h]
  unsigned __int64 v104; // [rsp+68h] [rbp-110h]
  unsigned __int64 v105; // [rsp+70h] [rbp-108h]
  __int64 v106; // [rsp+78h] [rbp-100h]
  int v107; // [rsp+80h] [rbp-F8h]
  int v108; // [rsp+84h] [rbp-F4h] BYREF
  int SessionId; // [rsp+88h] [rbp-F0h]
  __int64 AnyMultiplexedVm; // [rsp+90h] [rbp-E8h]
  __int64 v111; // [rsp+98h] [rbp-E0h]
  __int64 v112; // [rsp+A0h] [rbp-D8h] BYREF
  _QWORD v113[25]; // [rsp+B0h] [rbp-C8h] BYREF
  char v115; // [rsp+188h] [rbp+10h]

  v112 = 0LL;
  memset(v113, 0, 0x90uLL);
  v9 = 3;
  v105 = 0LL;
  v10 = 0x7FFFF;
  v103 = 0LL;
  v99 = 0x7FFFF;
  *a7 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  v115 = 0;
  v101 = 0LL;
  LODWORD(v13) = 0;
  v100 = 0LL;
  v102 = &unk_140C4E978;
  v98 = 3;
  v104 = MiSectionControlArea(a3);
  v18 = (a2 >> 16) + ((_WORD)a2 != 0);
  if ( v18 >= 0x10000 )
  {
    v23 = -1073741793;
    v32 = 0LL;
LABEL_93:
    v73 = 0;
    goto LABEL_94;
  }
  v106 = MiOffsetToProtos(v104, *a4, &v112);
  if ( !v106 )
  {
    v23 = -1073741801;
    v15 = &unk_140C4E978;
    v32 = 0LL;
    v16 = 0LL;
LABEL_92:
    v17 = v101;
    v14 = v98;
    goto LABEL_93;
  }
  if ( (_UNKNOWN *)a1 == &unk_140C4CBE8 )
  {
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(1LL);
    v19 = 0;
    v111 = 0LL;
    SessionId = -1;
    v20 = 640;
    if ( (a6 & 8) == 0 )
      v20 = 128;
    LOBYTE(v19) = (a6 & 8) != 0;
    v9 = v19 + 3;
  }
  else
  {
    v20 = 256;
    AnyMultiplexedVm = MiGetSessionVm();
    v9 = 2;
    v111 = AnyMultiplexedVm - 256;
    v102 = (void *)(AnyMultiplexedVm - 256 + 880);
    SessionId = MmGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
  }
  v13 = (a2 >> 12) + ((a2 & 0xFFF) != 0);
  v21 = *(unsigned __int16 *)(AnyMultiplexedVm + 174);
  v22 = 16 * v18;
  v101 = v22;
  v100 = *(_QWORD *)(qword_140C4E4C8 + 8 * v21);
  if ( (*(_DWORD *)(v104 + 56) & 0x420) != 0 )
  {
    v24 = v98;
    goto LABEL_10;
  }
  v23 = MiReferenceDataSubsections(v104, a4, v13, v9 != 2, &v98);
  if ( v23 < 0 )
  {
LABEL_83:
    v32 = 0LL;
    goto LABEL_90;
  }
  v24 = v98;
  v115 = 1;
  if ( v98 >= 3 )
  {
LABEL_10:
    v25 = MiReservePtes(v102, (unsigned int)v22);
    v12 = v25;
    if ( v25 )
    {
      v105 = v25 << 25 >> 16;
      goto LABEL_12;
    }
    v23 = -1073741670;
    v32 = 0LL;
LABEL_90:
    v10 = v99;
    goto LABEL_91;
  }
  PageTablesForLargeMap = MiGetPageTablesForLargeMap(v22, 9LL, v98);
  v105 = PageTablesForLargeMap;
  if ( !PageTablesForLargeMap )
  {
    v23 = -1073741670;
    goto LABEL_83;
  }
  v12 = ((PageTablesForLargeMap >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
LABEL_12:
  Pool = MiAllocatePool(64, 0x68uLL, 0x7756694Du);
  v11 = Pool;
  if ( !Pool )
  {
    v32 = v103;
    v23 = -1073741670;
    goto LABEL_90;
  }
  v27 = (_DWORD *)v104;
  v28 = v104;
  Pool[14] ^= (Pool[14] ^ (8 * v24)) & 0x18;
  v29 = MiControlAreaRequiresCharge(v28);
  v30 = v29;
  if ( !v29 )
  {
    v32 = v103;
    v23 = -1073740277;
    goto LABEL_90;
  }
  if ( v29 == 2 )
    v11[14] |= 4u;
  if ( (*(_DWORD *)(a3 + 56) & 0x8000000) != 0 )
    v11[14] |= 1u;
  if ( (a5 & 1) != 0 )
    v11[14] |= 2u;
  v31 = v27[14];
  if ( (v31 & 0x20) == 0 )
  {
    v32 = v103;
LABEL_22:
    v33 = v106;
LABEL_23:
    *((_QWORD *)v11 + 6) = v33;
    *((_QWORD *)v11 + 4) = v13 << 12;
    *((_QWORD *)v11 + 3) = (unsigned __int64)*a4 >> 12;
    v34 = v105 | 2;
    *((_QWORD *)v11 + 5) = v32;
    *((_QWORD *)v11 + 11) = v34;
    v11[25] = v99;
    if ( (_UNKNOWN *)a1 == &unk_140C4CBE8 )
      v35 = -1;
    else
      v35 = *(_DWORD *)(v111 + 8);
    v11[24] = v35;
    *((_QWORD *)v11 + 8) = MiReferenceFileObjectForMap(a3);
    CurrentThread = KeGetCurrentThread();
    if ( v98 || (*(_DWORD *)(v104 + 56) & 0x400) != 0 )
    {
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockExclusiveEx(*(_QWORD *)(a1 + 8), 0LL);
      v37 = AnyMultiplexedVm;
      SharedVm = MiGetSharedVm(AnyMultiplexedVm, v38);
      v40 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
      *(_DWORD *)(SharedVm + 4) = 0;
      v41 = 0;
      ++*(_DWORD *)(a1 + 24);
      v42 = v40;
      v43 = *(_QWORD **)(a1 + 16);
      if ( v43 )
      {
        while ( 1 )
        {
          v44 = v43[11] & 0xFFFFFFFFFFFFF000uLL;
          if ( v105 < v44 + v43[4] && v105 < v44 )
          {
            v45 = (_QWORD *)*v43;
            if ( !*v43 )
              break;
          }
          else
          {
            v45 = (_QWORD *)v43[1];
            if ( !v45 )
            {
              v41 = 1;
              break;
            }
          }
          v43 = v45;
        }
      }
      RtlAvlInsertNodeEx((unsigned __int64 *)(a1 + 16), (unsigned __int64)v43, v41, v11);
      MiUnlockWorkingSetExclusive(v37, v42);
      if ( (*(_DWORD *)(v104 + 56) & 0x400) == 0 )
      {
        v113[0] = v104;
        MiManageSubsectionView(v113, v11 + 18, 3LL);
      }
      v46 = *(_QWORD *)(a1 + 8);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v46, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v46);
      v108 = 0;
      v47 = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(v46) == 1 )
        v48 = (unsigned int)MmGetSessionIdEx((__int64)v47->ApcState.Process);
      else
        v48 = 0xFFFFFFFFLL;
      --v47->SpecialApcDisable;
      v49 = ++v47->AbAllocationRegionCount;
      LODWORD(v50) = ((char)v47->AbEntrySummary | (char)v47->AbOrphanedEntrySummary) ^ 0x3F;
      v51 = v46 & 0x7FFFFFFFFFFFFFFCLL;
      v52 = !_BitScanReverse((unsigned int *)&v53, v50);
      v107 = v53;
      if ( v52 )
        goto LABEL_75;
      while ( 1 )
      {
        v54 = (__int64)&v47->LockEntries[v53];
        v50 = ~(1 << v53) & (unsigned int)v50;
        if ( (*(_BYTE *)(v54 + 26) & 1) != 0
          && (*(_DWORD *)(v54 + 32) & 1) == 0
          && (*(_QWORD *)(v54 + 32) & 0x7FFFFFFFFFFFFFFCLL) == v51
          && *(_DWORD *)(v54 + 40) == (_DWORD)v48 )
        {
          *(_BYTE *)(v54 + 26) &= ~1u;
          if ( *(_QWORD *)(v54 + 32) )
            break;
        }
        v52 = !_BitScanReverse((unsigned int *)&v53, v50);
        v107 = v53;
        if ( v52 )
          goto LABEL_75;
      }
      if ( !v54 )
      {
LABEL_75:
        if ( (*((_DWORD *)&v47->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)v47, v46, v48, 0LL);
      }
      else
      {
        *(_BYTE *)(v54 + 32) |= 2u;
        if ( *(__int64 *)(v54 + 32) < 0 )
          KiAbEntryRemoveFromTree(v54, v50, v51);
        v108 = *(_DWORD *)(v54 + 88) & 0x1FFFF;
        *(_DWORD *)(v54 + 88) &= 0xFFFE0000;
        *(_BYTE *)(v54 + 25) &= ~1u;
        *(_QWORD *)(v54 + 32) = 0LL;
        v55 = (signed __int64)(v54 - (unsigned __int64)v47->LockEntries) / 96;
        if ( v49 == 1 )
          v47->AbEntrySummary |= 1 << v55;
        else
          _InterlockedOr8((volatile signed __int8 *)&v47->AbOrphanedEntrySummary, 1 << v55);
      }
      --v47->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)v47, v46, &v108);
      v52 = v47->SpecialApcDisable++ == -1;
      if ( v52 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v47->ApcState.ApcListHead[0].Flink != &v47->152 )
        KiCheckForKernelApcDelivery(v57, v56, v58, v59);
      KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
      v33 = v106;
      v60 = v105;
    }
    else
    {
      v60 = v105;
      v77 = (volatile LONG *)((char *)&unk_140C4CC30 + 16 * (unsigned __int8)(v105 >> 30));
      v78 = ExAcquireSpinLockExclusive(v77 + 3);
      ++*((_DWORD *)v77 + 2);
      v79 = 0;
      v80 = *(_QWORD **)v77;
      v81 = v78;
      if ( *(_QWORD *)v77 )
      {
        while ( 1 )
        {
          v82 = v80[11] & 0xFFFFFFFFFFFFF000uLL;
          if ( v60 >= v82 + v80[4] || v60 >= v82 )
          {
            v83 = (_QWORD *)v80[1];
            if ( !v83 )
            {
              v79 = 1;
              break;
            }
          }
          else
          {
            v83 = (_QWORD *)*v80;
            if ( !*v80 )
            {
              v79 = 0;
              break;
            }
          }
          v80 = v83;
        }
      }
      RtlAvlInsertNodeEx((unsigned __int64 *)v77, (unsigned __int64)v80, v79, v11);
      ExReleaseSpinLockExclusiveFromDpcLevel(v77 + 3);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v81 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v87 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v81 + 1));
            v52 = (v87 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v87;
            if ( v52 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(v81);
    }
    if ( (v11[14] & 1) != 0 )
      _InterlockedIncrement((volatile signed __int32 *)(v104 + 92));
    v61 = 0LL;
    if ( v98 < 3 )
    {
      v88 = *(_QWORD *)(v33 + 8);
      v89 = v60;
      v90 = MiLargePageSizes[v98];
      v91 = v88 + 8 * v112;
      v92 = v88 + 8LL * *(unsigned int *)(v33 + 44);
      if ( v101 )
      {
        v93 = MiGetAnyMultiplexedVm(3LL);
        do
        {
          if ( v91 == v92 )
          {
            v106 = *(_QWORD *)(v106 + 16);
            v91 = *(_QWORD *)(v106 + 8);
            v92 = v91 + 8LL * *(unsigned int *)(v106 + 44);
          }
          v94 = *(_QWORD *)v91;
          if ( MiPteInShadowRange(v91)
            && (MiFlags & 0xC00000) != 0
            && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
            && (v94 & 1) != 0
            && ((v94 & 0x20) == 0 || (v94 & 0x42) == 0) )
          {
            Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( Flink )
            {
              v96 = *((_QWORD *)&Flink->Flink + ((v91 >> 3) & 0x1FF));
              v97 = v94 | 0x20;
              if ( (v96 & 0x20) == 0 )
                v97 = v94;
              v94 = v97;
              if ( (v96 & 0x42) != 0 )
                v94 = v97 | 0x42;
            }
          }
          MiMapWithLargePages(v93, v89, v94 >> 12, v90, v98, 4, 1);
          v89 += (_DWORD)v90 << 12;
          v91 += 8 * v90;
          v61 += v90;
        }
        while ( v61 < v101 );
        v60 = v105;
      }
      v70 = 0;
    }
    else
    {
      v62 = 0;
      if ( v13 )
      {
        v63 = 0LL;
        do
        {
          v64 = ZeroPte;
          v65 = (unsigned __int64 *)(v12 + 8 * v63);
          if ( MiPteInShadowRange((unsigned __int64)v65) )
          {
            if ( (unsigned int)MiPteHasShadow(v67, v66, v68, v69) )
            {
              if ( !HIBYTE(word_140C4DE88) && (ZeroPte & 1) != 0 )
                v64 = ZeroPte | 0x8000000000000000uLL;
              *v65 = v64;
              MiWritePteShadow(v65, v64);
              goto LABEL_59;
            }
            if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
              && (ZeroPte & 1) != 0 )
            {
              v64 = ZeroPte | 0x8000000000000000uLL;
            }
          }
          *v65 = v64;
LABEL_59:
          v63 = ++v62;
        }
        while ( v62 < v13 );
      }
      v70 = MiAddMappedPtes(v12, v13, v104, (_DWORD)a4, SessionId, 0);
      if ( v70 < 0 )
      {
        ++*(_DWORD *)(a1 + 28);
        MiRemoveFromSystemSpace(a1, v60, 0LL);
        return (unsigned int)v70;
      }
    }
    *a7 = v60;
    return (unsigned int)v70;
  }
  if ( (v31 & 0x4000000) != 0 )
  {
    v99 = -1;
    if ( (int)MiCreatePerSessionProtos(v27, 0xFFFFFFFFLL) < 0 )
    {
      v32 = v103;
      v23 = -1073741801;
      v10 = 0x7FFFF;
LABEL_91:
      v15 = v102;
      v16 = v100;
      goto LABEL_92;
    }
  }
  v32 = *(_QWORD *)(*(_QWORD *)v27 + 48LL);
  if ( !v32 || (unsigned int)MiChargeCommit(v100, v32, 0LL) )
  {
    if ( v30 != 2 )
      goto LABEL_22;
    v74 = v20 | 8;
    v106 = v104 + 128;
    v33 = v104 + 128;
    active = MiReferenceActiveSubsection((__int64 *)(v104 + 128), v74, 0x11u);
    v23 = active;
    if ( active >= 0 )
      goto LABEL_23;
    goto LABEL_90;
  }
  v14 = v98;
  v73 = 0;
  v15 = v102;
  v32 = 0LL;
  v10 = v99;
  v23 = -1073741523;
  v16 = v100;
  v17 = v101;
LABEL_94:
  ++*(_DWORD *)(a1 + 28);
  if ( v12 )
  {
    if ( v14 >= 3 )
      MiReleasePtes(v15, v12, (unsigned int)v17);
    else
      MiUnmapLargePages(v105, v17 << 12, 9LL, v15);
    v16 = v100;
    v73 = 0;
    v14 = v98;
  }
  if ( v115 == 1 )
  {
    v52 = v9 == 2;
    v76 = v104;
    LOBYTE(v73) = v14 < 3;
    MiDereferenceDataSubsections(v104, (_DWORD)a4, v13, v73, !v52);
    v16 = v100;
  }
  else
  {
    v76 = v104;
  }
  if ( v10 != 0x7FFFF )
  {
    MiDereferencePerSessionProtos(v76, v10);
    v16 = v100;
  }
  if ( v32 )
    MiReturnCommit(v16, v32);
  if ( v11 )
    ExFreePoolWithTag(v11, 0);
  return (unsigned int)v23;
}
