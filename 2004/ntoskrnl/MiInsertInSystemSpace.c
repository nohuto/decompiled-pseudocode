/*
 * XREFs of MiInsertInSystemSpace @ 0x140264130
 * Callers:
 *     MiMapViewInSystemSpace @ 0x14060B094 (MiMapViewInSystemSpace.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x140207A80 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140207E30 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140207EC0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140207F90 (MmGetSessionIdEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140212700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiUnlockWorkingSetExclusive @ 0x140213300 (MiUnlockWorkingSetExclusive.c)
 *     MiReservePtes @ 0x14021B350 (MiReservePtes.c)
 *     MiReturnCommit @ 0x140224390 (MiReturnCommit.c)
 *     MiOffsetToProtos @ 0x14022EFF0 (MiOffsetToProtos.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiAllocatePool @ 0x140247F80 (MiAllocatePool.c)
 *     MiSectionControlArea @ 0x140248900 (MiSectionControlArea.c)
 *     MiReferenceActiveSubsection @ 0x1402493A0 (MiReferenceActiveSubsection.c)
 *     RtlAvlInsertNodeEx @ 0x140249BF0 (RtlAvlInsertNodeEx.c)
 *     MiControlAreaRequiresCharge @ 0x14024B1C8 (MiControlAreaRequiresCharge.c)
 *     MiGetAnyMultiplexedVm @ 0x140250128 (MiGetAnyMultiplexedVm.c)
 *     MiRemoveFromSystemSpace @ 0x140251150 (MiRemoveFromSystemSpace.c)
 *     MiReferenceDataSubsections @ 0x1402648D8 (MiReferenceDataSubsections.c)
 *     KiAbEntryRemoveFromTree @ 0x140272F70 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x140273D40 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 *     MiReleasePtes @ 0x140284720 (MiReleasePtes.c)
 *     MiChargeCommit @ 0x1402ACF70 (MiChargeCommit.c)
 *     MiGetSharedVm @ 0x1402AD3F0 (MiGetSharedVm.c)
 *     MiManageSubsectionView @ 0x1402BD190 (MiManageSubsectionView.c)
 *     MiGetSessionVm @ 0x1402BE22C (MiGetSessionVm.c)
 *     ExAcquireSpinLockExclusive @ 0x1402CF510 (ExAcquireSpinLockExclusive.c)
 *     MiWritePteShadow @ 0x14032ECC0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 *     MiUnmapLargePages @ 0x1403929B4 (MiUnmapLargePages.c)
 *     MiMapWithLargePages @ 0x1403B51CC (MiMapWithLargePages.c)
 *     MiGetPageTablesForLargeMap @ 0x1403B54A4 (MiGetPageTablesForLargeMap.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     memset @ 0x14040A280 (memset.c)
 *     MiDereferenceDataSubsections @ 0x14054F988 (MiDereferenceDataSubsections.c)
 *     MiReferenceFileObjectForMap @ 0x1405FE028 (MiReferenceFileObjectForMap.c)
 *     MiAddMappedPtes @ 0x14060AA90 (MiAddMappedPtes.c)
 *     MiDereferencePerSessionProtos @ 0x14070A60C (MiDereferencePerSessionProtos.c)
 *     MiCreatePerSessionProtos @ 0x14070A724 (MiCreatePerSessionProtos.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiInsertInSystemSpace(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned __int64 *a4,
        char a5,
        __int64 a6,
        ULONG_PTR *a7)
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
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r8
  unsigned __int64 v23; // r9
  int v24; // edi
  int v25; // r12d
  __int64 v26; // rcx
  unsigned __int64 v27; // r15
  int v28; // ebx
  unsigned int v29; // ebx
  ULONG_PTR v30; // rax
  _DWORD *Pool; // rax
  _DWORD *v32; // r15
  __int64 v33; // rcx
  int v34; // eax
  int v35; // ebx
  int v36; // eax
  __int64 v37; // r15
  __int64 v38; // r12
  __int64 v39; // rax
  int v40; // eax
  struct _KTHREAD *CurrentThread; // r13
  __int64 v42; // r15
  __int64 v43; // rdx
  __int64 SharedVm; // rbx
  KIRQL v45; // al
  bool v46; // r8
  unsigned __int8 v47; // di
  _QWORD *v48; // r10
  unsigned __int64 v49; // rdx
  _QWORD *v50; // rax
  unsigned __int64 v51; // r15
  struct _KTHREAD *v52; // rdi
  ULONG_PTR v53; // r9
  unsigned __int8 v54; // r12
  __int64 v55; // rdx
  __int64 v56; // r8
  bool v57; // zf
  __int64 v58; // rcx
  __int64 v59; // rbx
  __int64 v60; // rdx
  ULONG_PTR v61; // r13
  unsigned __int64 v62; // r15
  unsigned int v63; // edi
  __int64 v64; // rax
  unsigned __int64 v65; // rbx
  unsigned __int64 *v66; // rsi
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // r8
  __int64 v70; // r9
  int v71; // edi
  unsigned __int64 PageTablesForLargeMap; // rax
  int v74; // ecx
  int v75; // edx
  int active; // eax
  unsigned __int64 v77; // rdi
  volatile LONG *v78; // rbx
  KIRQL v79; // al
  bool v80; // r8
  _QWORD *v81; // rdx
  unsigned __int64 v82; // rdi
  unsigned __int64 v83; // r8
  _QWORD *v84; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v88; // edx
  __int64 v89; // rdx
  int v90; // r14d
  __int64 v91; // rsi
  unsigned __int64 v92; // rdi
  unsigned __int64 v93; // r12
  unsigned int v94; // r13d
  unsigned __int64 v95; // rbx
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v97; // rax
  __int64 v98; // rdx
  unsigned int v99; // [rsp+40h] [rbp-138h] BYREF
  int v100; // [rsp+44h] [rbp-134h]
  __int64 v101; // [rsp+48h] [rbp-130h]
  unsigned __int64 v102; // [rsp+50h] [rbp-128h]
  void *v103; // [rsp+58h] [rbp-120h]
  __int64 v104; // [rsp+60h] [rbp-118h]
  unsigned __int64 v105; // [rsp+68h] [rbp-110h]
  unsigned __int64 v106; // [rsp+70h] [rbp-108h]
  __int64 v107; // [rsp+78h] [rbp-100h]
  int v108; // [rsp+80h] [rbp-F8h]
  int v109; // [rsp+84h] [rbp-F4h] BYREF
  int SessionId; // [rsp+88h] [rbp-F0h]
  char *AnyMultiplexedVm; // [rsp+90h] [rbp-E8h]
  char *v112; // [rsp+98h] [rbp-E0h]
  unsigned __int64 v113; // [rsp+A0h] [rbp-D8h] BYREF
  _QWORD v114[25]; // [rsp+B0h] [rbp-C8h] BYREF
  char v116; // [rsp+188h] [rbp+10h]

  v113 = 0LL;
  memset(v114, 0, 0x90uLL);
  v9 = 3;
  v106 = 0LL;
  v10 = 0x7FFFF;
  v104 = 0LL;
  v100 = 0x7FFFF;
  *a7 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  v116 = 0;
  v102 = 0LL;
  LODWORD(v13) = 0;
  v101 = 0LL;
  v103 = &unk_140C4E8F8;
  v99 = 3;
  v105 = MiSectionControlArea(a3);
  v18 = (a2 >> 16) + ((_WORD)a2 != 0);
  if ( v18 >= 0x10000 )
  {
    v28 = -1073741793;
    v37 = 0LL;
LABEL_93:
    v74 = 0;
    goto LABEL_94;
  }
  v107 = MiOffsetToProtos(v105, *a4, &v113);
  if ( !v107 )
  {
    v28 = -1073741801;
    v15 = &unk_140C4E8F8;
    v37 = 0LL;
    v16 = 0LL;
LABEL_92:
    v17 = v102;
    v14 = v99;
    goto LABEL_93;
  }
  if ( (_UNKNOWN *)a1 == &unk_140C4CB68 )
  {
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
    v24 = 0;
    v112 = 0LL;
    SessionId = -1;
    v25 = 640;
    if ( (a6 & 8) == 0 )
      v25 = 128;
    LOBYTE(v24) = (a6 & 8) != 0;
    v9 = v24 + 3;
  }
  else
  {
    v25 = 256;
    AnyMultiplexedVm = (char *)MiGetSessionVm(v20, v19, v21);
    v9 = 2;
    v112 = AnyMultiplexedVm - 256;
    v103 = AnyMultiplexedVm + 624;
    SessionId = MmGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
  }
  v13 = (a2 >> 12) + ((a2 & 0xFFF) != 0);
  v26 = *((unsigned __int16 *)AnyMultiplexedVm + 87);
  v27 = 16 * v18;
  v102 = v27;
  v101 = *(_QWORD *)(qword_140C4E448 + 8 * v26);
  if ( (*(_DWORD *)(v105 + 56) & 0x420) != 0 )
  {
    v29 = v99;
    goto LABEL_10;
  }
  v28 = MiReferenceDataSubsections(v105, (_DWORD)a4, v13, v9 != 2, (__int64)&v99);
  if ( v28 < 0 )
  {
LABEL_83:
    v37 = 0LL;
    goto LABEL_90;
  }
  v29 = v99;
  v116 = 1;
  if ( v99 >= 3 )
  {
LABEL_10:
    v30 = MiReservePtes((__int64)v103, v27, v22, v23);
    v12 = v30;
    if ( v30 )
    {
      v106 = (__int64)(v30 << 25) >> 16;
      goto LABEL_12;
    }
    v28 = -1073741670;
    v37 = 0LL;
LABEL_90:
    v10 = v100;
    goto LABEL_91;
  }
  PageTablesForLargeMap = MiGetPageTablesForLargeMap(v27, 9LL, v99);
  v106 = PageTablesForLargeMap;
  if ( !PageTablesForLargeMap )
  {
    v28 = -1073741670;
    goto LABEL_83;
  }
  v12 = ((PageTablesForLargeMap >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
LABEL_12:
  Pool = MiAllocatePool(64, 0x68uLL, 0x7756694Du);
  v11 = Pool;
  if ( !Pool )
  {
    v37 = v104;
    v28 = -1073741670;
    goto LABEL_90;
  }
  v32 = (_DWORD *)v105;
  v33 = v105;
  Pool[14] ^= (Pool[14] ^ (8 * v29)) & 0x18;
  v34 = MiControlAreaRequiresCharge(v33);
  v35 = v34;
  if ( !v34 )
  {
    v37 = v104;
    v28 = -1073740277;
    goto LABEL_90;
  }
  if ( v34 == 2 )
    v11[14] |= 4u;
  if ( (*(_DWORD *)(a3 + 56) & 0x8000000) != 0 )
    v11[14] |= 1u;
  if ( (a5 & 1) != 0 )
    v11[14] |= 2u;
  v36 = v32[14];
  if ( (v36 & 0x20) == 0 )
  {
    v37 = v104;
LABEL_22:
    v38 = v107;
LABEL_23:
    *((_QWORD *)v11 + 6) = v38;
    *((_QWORD *)v11 + 4) = v13 << 12;
    *((_QWORD *)v11 + 3) = *a4 >> 12;
    v39 = v106 | 2;
    *((_QWORD *)v11 + 5) = v37;
    *((_QWORD *)v11 + 11) = v39;
    v11[25] = v100;
    if ( (_UNKNOWN *)a1 == &unk_140C4CB68 )
      v40 = -1;
    else
      v40 = *((_DWORD *)v112 + 2);
    v11[24] = v40;
    *((_QWORD *)v11 + 8) = MiReferenceFileObjectForMap(a3);
    CurrentThread = KeGetCurrentThread();
    if ( v99 || (*(_DWORD *)(v105 + 56) & 0x400) != 0 )
    {
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockExclusiveEx(*(_QWORD *)(a1 + 8), 0LL);
      v42 = (__int64)AnyMultiplexedVm;
      SharedVm = MiGetSharedVm(AnyMultiplexedVm, v43);
      v45 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
      *(_DWORD *)(SharedVm + 4) = 0;
      v46 = 0;
      ++*(_DWORD *)(a1 + 24);
      v47 = v45;
      v48 = *(_QWORD **)(a1 + 16);
      if ( v48 )
      {
        while ( 1 )
        {
          v49 = v48[11] & 0xFFFFFFFFFFFFF000uLL;
          if ( v106 < v49 + v48[4] && v106 < v49 )
          {
            v50 = (_QWORD *)*v48;
            if ( !*v48 )
              break;
          }
          else
          {
            v50 = (_QWORD *)v48[1];
            if ( !v50 )
            {
              v46 = 1;
              break;
            }
          }
          v48 = v50;
        }
      }
      RtlAvlInsertNodeEx((unsigned __int64 *)(a1 + 16), (unsigned __int64)v48, v46, v11);
      MiUnlockWorkingSetExclusive(v42, v47);
      if ( (*(_DWORD *)(v105 + 56) & 0x400) == 0 )
      {
        v114[0] = v105;
        MiManageSubsectionView(v114, v11 + 18, 3LL);
      }
      v51 = *(_QWORD *)(a1 + 8);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v51, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v51);
      v109 = 0;
      v52 = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(v51) == 1 )
        v53 = (unsigned int)MmGetSessionIdEx((__int64)v52->ApcState.Process);
      else
        v53 = 0xFFFFFFFFLL;
      --v52->SpecialApcDisable;
      v54 = ++v52->AbAllocationRegionCount;
      LODWORD(v55) = ((char)v52->AbEntrySummary | (char)v52->AbOrphanedEntrySummary) ^ 0x3F;
      v56 = v51 & 0x7FFFFFFFFFFFFFFCLL;
      v57 = !_BitScanReverse((unsigned int *)&v58, v55);
      v108 = v58;
      if ( v57 )
        goto LABEL_75;
      while ( 1 )
      {
        v59 = (__int64)&v52->LockEntries[v58];
        v55 = ~(1 << v58) & (unsigned int)v55;
        if ( (*(_BYTE *)(v59 + 26) & 1) != 0
          && (*(_DWORD *)(v59 + 32) & 1) == 0
          && (*(_QWORD *)(v59 + 32) & 0x7FFFFFFFFFFFFFFCLL) == v56
          && *(_DWORD *)(v59 + 40) == (_DWORD)v53 )
        {
          *(_BYTE *)(v59 + 26) &= ~1u;
          if ( *(_QWORD *)(v59 + 32) )
            break;
        }
        v57 = !_BitScanReverse((unsigned int *)&v58, v55);
        v108 = v58;
        if ( v57 )
          goto LABEL_75;
      }
      if ( !v59 )
      {
LABEL_75:
        if ( (*((_DWORD *)&v52->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)v52, v51, v53, 0LL);
      }
      else
      {
        *(_BYTE *)(v59 + 32) |= 2u;
        if ( *(__int64 *)(v59 + 32) < 0 )
          KiAbEntryRemoveFromTree(v59, v55, v56);
        v109 = *(_DWORD *)(v59 + 88) & 0x1FFFF;
        *(_DWORD *)(v59 + 88) &= 0xFFFE0000;
        *(_BYTE *)(v59 + 25) &= ~1u;
        *(_QWORD *)(v59 + 32) = 0LL;
        v60 = (signed __int64)(v59 - (unsigned __int64)v52->LockEntries) / 96;
        if ( v54 == 1 )
          v52->AbEntrySummary |= 1 << v60;
        else
          _InterlockedOr8((volatile signed __int8 *)&v52->AbOrphanedEntrySummary, 1 << v60);
      }
      --v52->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)v52, v51, &v109);
      v57 = v52->SpecialApcDisable++ == -1;
      if ( v57 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v52->ApcState.ApcListHead[0].Flink != &v52->152 )
        KiCheckForKernelApcDelivery();
      KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
      v38 = v107;
      v61 = v106;
    }
    else
    {
      v61 = v106;
      v78 = (volatile LONG *)((char *)&unk_140C4CBB0 + 16 * (unsigned __int8)(v106 >> 30));
      v79 = ExAcquireSpinLockExclusive(v78 + 3);
      ++*((_DWORD *)v78 + 2);
      v80 = 0;
      v81 = *(_QWORD **)v78;
      v82 = v79;
      if ( *(_QWORD *)v78 )
      {
        while ( 1 )
        {
          v83 = v81[11] & 0xFFFFFFFFFFFFF000uLL;
          if ( v61 >= v83 + v81[4] || v61 >= v83 )
          {
            v84 = (_QWORD *)v81[1];
            if ( !v84 )
            {
              v80 = 1;
              break;
            }
          }
          else
          {
            v84 = (_QWORD *)*v81;
            if ( !*v81 )
            {
              v80 = 0;
              break;
            }
          }
          v81 = v84;
        }
      }
      RtlAvlInsertNodeEx((unsigned __int64 *)v78, (unsigned __int64)v81, v80, v11);
      ExReleaseSpinLockExclusiveFromDpcLevel(v78 + 3);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v82 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v88 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v82 + 1));
            v57 = (v88 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v88;
            if ( v57 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(v82);
    }
    if ( (v11[14] & 1) != 0 )
      _InterlockedIncrement((volatile signed __int32 *)(v105 + 92));
    v62 = 0LL;
    if ( v99 < 3 )
    {
      v89 = *(_QWORD *)(v38 + 8);
      v90 = v61;
      v91 = MiLargePageSizes[v99];
      v92 = v89 + 8 * v113;
      v93 = v89 + 8LL * *(unsigned int *)(v38 + 44);
      if ( v102 )
      {
        v94 = (unsigned int)MiGetAnyMultiplexedVm(3);
        do
        {
          if ( v92 == v93 )
          {
            v107 = *(_QWORD *)(v107 + 16);
            v92 = *(_QWORD *)(v107 + 8);
            v93 = v92 + 8LL * *(unsigned int *)(v107 + 44);
          }
          v95 = *(_QWORD *)v92;
          if ( MiPteInShadowRange(v92)
            && (MiFlags & 0xC00000) != 0
            && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
            && (v95 & 1) != 0
            && ((v95 & 0x20) == 0 || (v95 & 0x42) == 0) )
          {
            Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( Flink )
            {
              v97 = *((_QWORD *)&Flink->Flink + ((v92 >> 3) & 0x1FF));
              v98 = v95 | 0x20;
              if ( (v97 & 0x20) == 0 )
                v98 = v95;
              v95 = v98;
              if ( (v97 & 0x42) != 0 )
                v95 = v98 | 0x42;
            }
          }
          MiMapWithLargePages(v94, v90, v95 >> 12, v91, v99, 4, 1);
          v90 += (_DWORD)v91 << 12;
          v92 += 8 * v91;
          v62 += v91;
        }
        while ( v62 < v102 );
        v61 = v106;
      }
      v71 = 0;
    }
    else
    {
      v63 = 0;
      if ( v13 )
      {
        v64 = 0LL;
        do
        {
          v65 = ZeroPte;
          v66 = (unsigned __int64 *)(v12 + 8 * v64);
          if ( MiPteInShadowRange((unsigned __int64)v66) )
          {
            if ( (unsigned int)MiPteHasShadow(v68, v67, v69, v70) )
            {
              if ( !HIBYTE(word_140C4DE08) && (ZeroPte & 1) != 0 )
                v65 = ZeroPte | 0x8000000000000000uLL;
              *v66 = v65;
              MiWritePteShadow(v66, v65);
              goto LABEL_59;
            }
            if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
              && (ZeroPte & 1) != 0 )
            {
              v65 = ZeroPte | 0x8000000000000000uLL;
            }
          }
          *v66 = v65;
LABEL_59:
          v64 = ++v63;
        }
        while ( v63 < v13 );
      }
      v71 = MiAddMappedPtes(v12, v13, v105, (_DWORD)a4, SessionId, 0);
      if ( v71 < 0 )
      {
        ++*(_DWORD *)(a1 + 28);
        MiRemoveFromSystemSpace((_QWORD *)a1, v61, 0);
        return (unsigned int)v71;
      }
    }
    *a7 = v61;
    return (unsigned int)v71;
  }
  if ( (v36 & 0x4000000) != 0 )
  {
    v100 = -1;
    if ( (int)MiCreatePerSessionProtos(v32, 0xFFFFFFFFLL) < 0 )
    {
      v37 = v104;
      v28 = -1073741801;
      v10 = 0x7FFFF;
LABEL_91:
      v15 = v103;
      v16 = v101;
      goto LABEL_92;
    }
  }
  v37 = *(_QWORD *)(*(_QWORD *)v32 + 48LL);
  if ( !v37 || (unsigned int)MiChargeCommit(v101, v37, 0LL) )
  {
    if ( v35 != 2 )
      goto LABEL_22;
    v75 = v25 | 8;
    v107 = v105 + 128;
    v38 = v105 + 128;
    active = MiReferenceActiveSubsection((__int64 *)(v105 + 128), v75, 0x11u);
    v28 = active;
    if ( active >= 0 )
      goto LABEL_23;
    goto LABEL_90;
  }
  v14 = v99;
  v74 = 0;
  v15 = v103;
  v37 = 0LL;
  v10 = v100;
  v28 = -1073741523;
  v16 = v101;
  v17 = v102;
LABEL_94:
  ++*(_DWORD *)(a1 + 28);
  if ( v12 )
  {
    if ( v14 >= 3 )
      MiReleasePtes(v15, v12, (unsigned int)v17);
    else
      MiUnmapLargePages(v106, v17 << 12, 9LL);
    v16 = v101;
    v74 = 0;
    v14 = v99;
  }
  if ( v116 == 1 )
  {
    v57 = v9 == 2;
    v77 = v105;
    LOBYTE(v74) = v14 < 3;
    MiDereferenceDataSubsections(v105, (_DWORD)a4, v13, v74, !v57);
    v16 = v101;
  }
  else
  {
    v77 = v105;
  }
  if ( v10 != 0x7FFFF )
  {
    MiDereferencePerSessionProtos(v77, v10);
    v16 = v101;
  }
  if ( v37 )
    MiReturnCommit(v16, v37);
  if ( v11 )
    ExFreePoolWithTag(v11, 0);
  return (unsigned int)v28;
}
