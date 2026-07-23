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
  unsigned int v50; // edx
  bool v51; // zf
  __int64 v52; // rcx
  __int64 v53; // rbx
  __int64 v54; // rdx
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  unsigned __int64 v59; // r13
  unsigned __int64 v60; // r15
  unsigned int v61; // edi
  __int64 v62; // rax
  unsigned __int64 v63; // rbx
  unsigned __int64 *v64; // rsi
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // r9
  int v69; // edi
  unsigned __int64 PageTablesForLargeMap; // rax
  int v72; // ecx
  int v73; // edx
  int active; // eax
  unsigned __int64 v75; // rdi
  volatile LONG *v76; // rbx
  KIRQL v77; // al
  bool v78; // r8
  _QWORD *v79; // rdx
  unsigned __int64 v80; // rdi
  unsigned __int64 v81; // r8
  _QWORD *v82; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v86; // edx
  __int64 v87; // rdx
  int v88; // r14d
  __int64 v89; // rsi
  unsigned __int64 v90; // rdi
  unsigned __int64 v91; // r12
  int v92; // r13d
  unsigned __int64 v93; // rbx
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v95; // rax
  __int64 v96; // rdx
  unsigned int v97; // [rsp+40h] [rbp-138h] BYREF
  int v98; // [rsp+44h] [rbp-134h]
  __int64 v99; // [rsp+48h] [rbp-130h]
  unsigned __int64 v100; // [rsp+50h] [rbp-128h]
  void *v101; // [rsp+58h] [rbp-120h]
  __int64 v102; // [rsp+60h] [rbp-118h]
  unsigned __int64 v103; // [rsp+68h] [rbp-110h]
  unsigned __int64 v104; // [rsp+70h] [rbp-108h]
  __int64 v105; // [rsp+78h] [rbp-100h]
  int v106; // [rsp+80h] [rbp-F8h]
  int v107; // [rsp+84h] [rbp-F4h] BYREF
  int SessionId; // [rsp+88h] [rbp-F0h]
  __int64 AnyMultiplexedVm; // [rsp+90h] [rbp-E8h]
  __int64 v110; // [rsp+98h] [rbp-E0h]
  __int64 v111; // [rsp+A0h] [rbp-D8h] BYREF
  _QWORD v112[25]; // [rsp+B0h] [rbp-C8h] BYREF
  char v114; // [rsp+188h] [rbp+10h]

  v111 = 0LL;
  memset(v112, 0, 0x90uLL);
  v9 = 3;
  v104 = 0LL;
  v10 = 0x7FFFF;
  v102 = 0LL;
  v98 = 0x7FFFF;
  *a7 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  v114 = 0;
  v100 = 0LL;
  LODWORD(v13) = 0;
  v99 = 0LL;
  v101 = &unk_140C4E978;
  v97 = 3;
  v103 = MiSectionControlArea(a3);
  v18 = (a2 >> 16) + ((_WORD)a2 != 0);
  if ( v18 >= 0x10000 )
  {
    v23 = -1073741793;
    v32 = 0LL;
LABEL_93:
    v72 = 0;
    goto LABEL_94;
  }
  v105 = MiOffsetToProtos(v103, *a4, &v111);
  if ( !v105 )
  {
    v23 = -1073741801;
    v15 = &unk_140C4E978;
    v32 = 0LL;
    v16 = 0LL;
LABEL_92:
    v17 = v100;
    v14 = v97;
    goto LABEL_93;
  }
  if ( (_UNKNOWN *)a1 == &unk_140C4CBE8 )
  {
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(1LL);
    v19 = 0;
    v110 = 0LL;
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
    v110 = AnyMultiplexedVm - 256;
    v101 = (void *)(AnyMultiplexedVm - 256 + 880);
    SessionId = MmGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
  }
  v13 = (a2 >> 12) + ((a2 & 0xFFF) != 0);
  v21 = *(unsigned __int16 *)(AnyMultiplexedVm + 174);
  v22 = 16 * v18;
  v100 = v22;
  v99 = *(_QWORD *)(qword_140C4E4C8 + 8 * v21);
  if ( (*(_DWORD *)(v103 + 56) & 0x420) != 0 )
  {
    v24 = v97;
    goto LABEL_10;
  }
  v23 = MiReferenceDataSubsections(v103, a4, v13, v9 != 2, &v97);
  if ( v23 < 0 )
  {
LABEL_83:
    v32 = 0LL;
    goto LABEL_90;
  }
  v24 = v97;
  v114 = 1;
  if ( v97 >= 3 )
  {
LABEL_10:
    v25 = MiReservePtes(v101, (unsigned int)v22);
    v12 = v25;
    if ( v25 )
    {
      v104 = v25 << 25 >> 16;
      goto LABEL_12;
    }
    v23 = -1073741670;
    v32 = 0LL;
LABEL_90:
    v10 = v98;
    goto LABEL_91;
  }
  PageTablesForLargeMap = MiGetPageTablesForLargeMap(v22, 9LL, v97);
  v104 = PageTablesForLargeMap;
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
    v32 = v102;
    v23 = -1073741670;
    goto LABEL_90;
  }
  v27 = (_DWORD *)v103;
  v28 = v103;
  Pool[14] ^= (Pool[14] ^ (8 * v24)) & 0x18;
  v29 = MiControlAreaRequiresCharge(v28);
  v30 = v29;
  if ( !v29 )
  {
    v32 = v102;
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
    v32 = v102;
LABEL_22:
    v33 = v105;
LABEL_23:
    *((_QWORD *)v11 + 6) = v33;
    *((_QWORD *)v11 + 4) = v13 << 12;
    *((_QWORD *)v11 + 3) = (unsigned __int64)*a4 >> 12;
    v34 = v104 | 2;
    *((_QWORD *)v11 + 5) = v32;
    *((_QWORD *)v11 + 11) = v34;
    v11[25] = v98;
    if ( (_UNKNOWN *)a1 == &unk_140C4CBE8 )
      v35 = -1;
    else
      v35 = *(_DWORD *)(v110 + 8);
    v11[24] = v35;
    *((_QWORD *)v11 + 8) = MiReferenceFileObjectForMap(a3);
    CurrentThread = KeGetCurrentThread();
    if ( v97 || (*(_DWORD *)(v103 + 56) & 0x400) != 0 )
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
          if ( v104 < v44 + v43[4] && v104 < v44 )
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
      if ( (*(_DWORD *)(v103 + 56) & 0x400) == 0 )
      {
        v112[0] = v103;
        MiManageSubsectionView(v112, v11 + 18, 3LL);
      }
      v46 = *(_QWORD *)(a1 + 8);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v46, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v46);
      v107 = 0;
      v47 = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(v46) == 1 )
        v48 = (unsigned int)MmGetSessionIdEx((__int64)v47->ApcState.Process);
      else
        v48 = 0xFFFFFFFFLL;
      --v47->SpecialApcDisable;
      v49 = ++v47->AbAllocationRegionCount;
      v50 = ((char)v47->AbEntrySummary | (char)v47->AbOrphanedEntrySummary) ^ 0x3F;
      v51 = !_BitScanReverse((unsigned int *)&v52, v50);
      v106 = v52;
      if ( v51 )
        goto LABEL_75;
      while ( 1 )
      {
        v53 = (__int64)&v47->LockEntries[v52];
        v50 &= ~(1 << v52);
        if ( (*(_BYTE *)(v53 + 26) & 1) != 0
          && (*(_DWORD *)(v53 + 32) & 1) == 0
          && (*(_QWORD *)(v53 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v46 & 0x7FFFFFFFFFFFFFFCLL)
          && *(_DWORD *)(v53 + 40) == (_DWORD)v48 )
        {
          *(_BYTE *)(v53 + 26) &= ~1u;
          if ( *(_QWORD *)(v53 + 32) )
            break;
        }
        v51 = !_BitScanReverse((unsigned int *)&v52, v50);
        v106 = v52;
        if ( v51 )
          goto LABEL_75;
      }
      if ( !v53 )
      {
LABEL_75:
        if ( (*((_DWORD *)&v47->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)v47, v46, v48, 0LL);
      }
      else
      {
        *(_BYTE *)(v53 + 32) |= 2u;
        if ( *(__int64 *)(v53 + 32) < 0 )
          KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v53);
        v107 = *(_DWORD *)(v53 + 88) & 0x1FFFF;
        *(_DWORD *)(v53 + 88) &= 0xFFFE0000;
        *(_BYTE *)(v53 + 25) &= ~1u;
        *(_QWORD *)(v53 + 32) = 0LL;
        v54 = (signed __int64)(v53 - (unsigned __int64)v47->LockEntries) / 96;
        if ( v49 == 1 )
          v47->AbEntrySummary |= 1 << v54;
        else
          _InterlockedOr8((volatile signed __int8 *)&v47->AbOrphanedEntrySummary, 1 << v54);
      }
      --v47->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)v47, v46, &v107);
      v51 = v47->SpecialApcDisable++ == -1;
      if ( v51 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v47->ApcState.ApcListHead[0].Flink != &v47->152 )
        KiCheckForKernelApcDelivery(v56, v55, v57, v58);
      KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
      v33 = v105;
      v59 = v104;
    }
    else
    {
      v59 = v104;
      v76 = (volatile LONG *)((char *)&unk_140C4CC30 + 16 * (unsigned __int8)(v104 >> 30));
      v77 = ExAcquireSpinLockExclusive(v76 + 3);
      ++*((_DWORD *)v76 + 2);
      v78 = 0;
      v79 = *(_QWORD **)v76;
      v80 = v77;
      if ( *(_QWORD *)v76 )
      {
        while ( 1 )
        {
          v81 = v79[11] & 0xFFFFFFFFFFFFF000uLL;
          if ( v59 >= v81 + v79[4] || v59 >= v81 )
          {
            v82 = (_QWORD *)v79[1];
            if ( !v82 )
            {
              v78 = 1;
              break;
            }
          }
          else
          {
            v82 = (_QWORD *)*v79;
            if ( !*v79 )
            {
              v78 = 0;
              break;
            }
          }
          v79 = v82;
        }
      }
      RtlAvlInsertNodeEx((unsigned __int64 *)v76, (unsigned __int64)v79, v78, v11);
      ExReleaseSpinLockExclusiveFromDpcLevel(v76 + 3);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v80 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v86 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v80 + 1));
            v51 = (v86 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v86;
            if ( v51 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(v80);
    }
    if ( (v11[14] & 1) != 0 )
      _InterlockedIncrement((volatile signed __int32 *)(v103 + 92));
    v60 = 0LL;
    if ( v97 < 3 )
    {
      v87 = *(_QWORD *)(v33 + 8);
      v88 = v59;
      v89 = MiLargePageSizes[v97];
      v90 = v87 + 8 * v111;
      v91 = v87 + 8LL * *(unsigned int *)(v33 + 44);
      if ( v100 )
      {
        v92 = MiGetAnyMultiplexedVm(3LL);
        do
        {
          if ( v90 == v91 )
          {
            v105 = *(_QWORD *)(v105 + 16);
            v90 = *(_QWORD *)(v105 + 8);
            v91 = v90 + 8LL * *(unsigned int *)(v105 + 44);
          }
          v93 = *(_QWORD *)v90;
          if ( MiPteInShadowRange(v90)
            && (MiFlags & 0xC00000) != 0
            && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
            && (v93 & 1) != 0
            && ((v93 & 0x20) == 0 || (v93 & 0x42) == 0) )
          {
            Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( Flink )
            {
              v95 = *((_QWORD *)&Flink->Flink + ((v90 >> 3) & 0x1FF));
              v96 = v93 | 0x20;
              if ( (v95 & 0x20) == 0 )
                v96 = v93;
              v93 = v96;
              if ( (v95 & 0x42) != 0 )
                v93 = v96 | 0x42;
            }
          }
          MiMapWithLargePages(v92, v88, v93 >> 12, v89, v97, 4, 1);
          v88 += (_DWORD)v89 << 12;
          v90 += 8 * v89;
          v60 += v89;
        }
        while ( v60 < v100 );
        v59 = v104;
      }
      v69 = 0;
    }
    else
    {
      v61 = 0;
      if ( v13 )
      {
        v62 = 0LL;
        do
        {
          v63 = ZeroPte;
          v64 = (unsigned __int64 *)(v12 + 8 * v62);
          if ( MiPteInShadowRange((unsigned __int64)v64) )
          {
            if ( (unsigned int)MiPteHasShadow(v66, v65, v67, v68) )
            {
              if ( !HIBYTE(word_140C4DE88) && (ZeroPte & 1) != 0 )
                v63 = ZeroPte | 0x8000000000000000uLL;
              *v64 = v63;
              MiWritePteShadow(v64, v63);
              goto LABEL_59;
            }
            if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
              && (ZeroPte & 1) != 0 )
            {
              v63 = ZeroPte | 0x8000000000000000uLL;
            }
          }
          *v64 = v63;
LABEL_59:
          v62 = ++v61;
        }
        while ( v61 < v13 );
      }
      v69 = MiAddMappedPtes(v12, v13, v103, (_DWORD)a4, SessionId, 0);
      if ( v69 < 0 )
      {
        ++*(_DWORD *)(a1 + 28);
        MiRemoveFromSystemSpace(a1, v59, 0LL);
        return (unsigned int)v69;
      }
    }
    *a7 = v59;
    return (unsigned int)v69;
  }
  if ( (v31 & 0x4000000) != 0 )
  {
    v98 = -1;
    if ( (int)MiCreatePerSessionProtos(v27, 0xFFFFFFFFLL) < 0 )
    {
      v32 = v102;
      v23 = -1073741801;
      v10 = 0x7FFFF;
LABEL_91:
      v15 = v101;
      v16 = v99;
      goto LABEL_92;
    }
  }
  v32 = *(_QWORD *)(*(_QWORD *)v27 + 48LL);
  if ( !v32 || (unsigned int)MiChargeCommit(v99, v32, 0LL) )
  {
    if ( v30 != 2 )
      goto LABEL_22;
    v73 = v20 | 8;
    v105 = v103 + 128;
    v33 = v103 + 128;
    active = MiReferenceActiveSubsection((__int64 *)(v103 + 128), v73, 0x11u);
    v23 = active;
    if ( active >= 0 )
      goto LABEL_23;
    goto LABEL_90;
  }
  v14 = v97;
  v72 = 0;
  v15 = v101;
  v32 = 0LL;
  v10 = v98;
  v23 = -1073741523;
  v16 = v99;
  v17 = v100;
LABEL_94:
  ++*(_DWORD *)(a1 + 28);
  if ( v12 )
  {
    if ( v14 >= 3 )
      MiReleasePtes(v15, v12, (unsigned int)v17);
    else
      MiUnmapLargePages(v104, v17 << 12, 9LL, v15);
    v16 = v99;
    v72 = 0;
    v14 = v97;
  }
  if ( v114 == 1 )
  {
    v51 = v9 == 2;
    v75 = v103;
    LOBYTE(v72) = v14 < 3;
    MiDereferenceDataSubsections(v103, (_DWORD)a4, v13, v72, !v51);
    v16 = v99;
  }
  else
  {
    v75 = v103;
  }
  if ( v10 != 0x7FFFF )
  {
    MiDereferencePerSessionProtos(v75, v10);
    v16 = v99;
  }
  if ( v32 )
    MiReturnCommit(v16, v32);
  if ( v11 )
    ExFreePoolWithTag(v11, 0);
  return (unsigned int)v23;
}
