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
  unsigned int v55; // edx
  bool v56; // zf
  __int64 v57; // rcx
  __int64 v58; // rbx
  __int64 v59; // rdx
  ULONG_PTR v60; // r13
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
  unsigned int v93; // r13d
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
  char *AnyMultiplexedVm; // [rsp+90h] [rbp-E8h]
  char *v111; // [rsp+98h] [rbp-E0h]
  unsigned __int64 v112; // [rsp+A0h] [rbp-D8h] BYREF
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
  v102 = &unk_140C4E8F8;
  v98 = 3;
  v104 = MiSectionControlArea(a3);
  v18 = (a2 >> 16) + ((_WORD)a2 != 0);
  if ( v18 >= 0x10000 )
  {
    v28 = -1073741793;
    v37 = 0LL;
LABEL_93:
    v73 = 0;
    goto LABEL_94;
  }
  v106 = MiOffsetToProtos(v104, *a4, &v112);
  if ( !v106 )
  {
    v28 = -1073741801;
    v15 = &unk_140C4E8F8;
    v37 = 0LL;
    v16 = 0LL;
LABEL_92:
    v17 = v101;
    v14 = v98;
    goto LABEL_93;
  }
  if ( (_UNKNOWN *)a1 == &unk_140C4CB68 )
  {
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
    v24 = 0;
    v111 = 0LL;
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
    v111 = AnyMultiplexedVm - 256;
    v102 = AnyMultiplexedVm + 624;
    SessionId = MmGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
  }
  v13 = (a2 >> 12) + ((a2 & 0xFFF) != 0);
  v26 = *((unsigned __int16 *)AnyMultiplexedVm + 87);
  v27 = 16 * v18;
  v101 = v27;
  v100 = *(_QWORD *)(qword_140C4E448 + 8 * v26);
  if ( (*(_DWORD *)(v104 + 56) & 0x420) != 0 )
  {
    v29 = v98;
    goto LABEL_10;
  }
  v28 = MiReferenceDataSubsections(v104, (_DWORD)a4, v13, v9 != 2, (__int64)&v98);
  if ( v28 < 0 )
  {
LABEL_83:
    v37 = 0LL;
    goto LABEL_90;
  }
  v29 = v98;
  v115 = 1;
  if ( v98 >= 3 )
  {
LABEL_10:
    v30 = MiReservePtes((__int64)v102, v27, v22, v23);
    v12 = v30;
    if ( v30 )
    {
      v105 = (__int64)(v30 << 25) >> 16;
      goto LABEL_12;
    }
    v28 = -1073741670;
    v37 = 0LL;
LABEL_90:
    v10 = v99;
    goto LABEL_91;
  }
  PageTablesForLargeMap = MiGetPageTablesForLargeMap(v27, 9LL, v98);
  v105 = PageTablesForLargeMap;
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
    v37 = v103;
    v28 = -1073741670;
    goto LABEL_90;
  }
  v32 = (_DWORD *)v104;
  v33 = v104;
  Pool[14] ^= (Pool[14] ^ (8 * v29)) & 0x18;
  v34 = MiControlAreaRequiresCharge(v33);
  v35 = v34;
  if ( !v34 )
  {
    v37 = v103;
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
    v37 = v103;
LABEL_22:
    v38 = v106;
LABEL_23:
    *((_QWORD *)v11 + 6) = v38;
    *((_QWORD *)v11 + 4) = v13 << 12;
    *((_QWORD *)v11 + 3) = *a4 >> 12;
    v39 = v105 | 2;
    *((_QWORD *)v11 + 5) = v37;
    *((_QWORD *)v11 + 11) = v39;
    v11[25] = v99;
    if ( (_UNKNOWN *)a1 == &unk_140C4CB68 )
      v40 = -1;
    else
      v40 = *((_DWORD *)v111 + 2);
    v11[24] = v40;
    *((_QWORD *)v11 + 8) = MiReferenceFileObjectForMap(a3);
    CurrentThread = KeGetCurrentThread();
    if ( v98 || (*(_DWORD *)(v104 + 56) & 0x400) != 0 )
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
          if ( v105 < v49 + v48[4] && v105 < v49 )
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
      if ( (*(_DWORD *)(v104 + 56) & 0x400) == 0 )
      {
        v113[0] = v104;
        MiManageSubsectionView(v113, v11 + 18, 3LL);
      }
      v51 = *(_QWORD *)(a1 + 8);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v51, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v51);
      v108 = 0;
      v52 = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(v51) == 1 )
        v53 = (unsigned int)MmGetSessionIdEx((__int64)v52->ApcState.Process);
      else
        v53 = 0xFFFFFFFFLL;
      --v52->SpecialApcDisable;
      v54 = ++v52->AbAllocationRegionCount;
      v55 = ((char)v52->AbEntrySummary | (char)v52->AbOrphanedEntrySummary) ^ 0x3F;
      v56 = !_BitScanReverse((unsigned int *)&v57, v55);
      v107 = v57;
      if ( v56 )
        goto LABEL_75;
      while ( 1 )
      {
        v58 = (__int64)&v52->LockEntries[v57];
        v55 &= ~(1 << v57);
        if ( (*(_BYTE *)(v58 + 26) & 1) != 0
          && (*(_DWORD *)(v58 + 32) & 1) == 0
          && (*(_QWORD *)(v58 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v51 & 0x7FFFFFFFFFFFFFFCLL)
          && *(_DWORD *)(v58 + 40) == (_DWORD)v53 )
        {
          *(_BYTE *)(v58 + 26) &= ~1u;
          if ( *(_QWORD *)(v58 + 32) )
            break;
        }
        v56 = !_BitScanReverse((unsigned int *)&v57, v55);
        v107 = v57;
        if ( v56 )
          goto LABEL_75;
      }
      if ( !v58 )
      {
LABEL_75:
        if ( (*((_DWORD *)&v52->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)v52, v51, v53, 0LL);
      }
      else
      {
        *(_BYTE *)(v58 + 32) |= 2u;
        if ( *(__int64 *)(v58 + 32) < 0 )
          KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v58);
        v108 = *(_DWORD *)(v58 + 88) & 0x1FFFF;
        *(_DWORD *)(v58 + 88) &= 0xFFFE0000;
        *(_BYTE *)(v58 + 25) &= ~1u;
        *(_QWORD *)(v58 + 32) = 0LL;
        v59 = (signed __int64)(v58 - (unsigned __int64)v52->LockEntries) / 96;
        if ( v54 == 1 )
          v52->AbEntrySummary |= 1 << v59;
        else
          _InterlockedOr8((volatile signed __int8 *)&v52->AbOrphanedEntrySummary, 1 << v59);
      }
      --v52->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)v52, v51, &v108);
      v56 = v52->SpecialApcDisable++ == -1;
      if ( v56 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v52->ApcState.ApcListHead[0].Flink != &v52->152 )
        KiCheckForKernelApcDelivery();
      KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
      v38 = v106;
      v60 = v105;
    }
    else
    {
      v60 = v105;
      v77 = (volatile LONG *)((char *)&unk_140C4CBB0 + 16 * (unsigned __int8)(v105 >> 30));
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
            v56 = (v87 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v87;
            if ( v56 )
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
      v88 = *(_QWORD *)(v38 + 8);
      v89 = v60;
      v90 = MiLargePageSizes[v98];
      v91 = v88 + 8 * v112;
      v92 = v88 + 8LL * *(unsigned int *)(v38 + 44);
      if ( v101 )
      {
        v93 = (unsigned int)MiGetAnyMultiplexedVm(3);
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
              if ( !HIBYTE(word_140C4DE08) && (ZeroPte & 1) != 0 )
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
        MiRemoveFromSystemSpace((_QWORD *)a1, v60, 0);
        return (unsigned int)v70;
      }
    }
    *a7 = v60;
    return (unsigned int)v70;
  }
  if ( (v36 & 0x4000000) != 0 )
  {
    v99 = -1;
    if ( (int)MiCreatePerSessionProtos(v32, 0xFFFFFFFFLL) < 0 )
    {
      v37 = v103;
      v28 = -1073741801;
      v10 = 0x7FFFF;
LABEL_91:
      v15 = v102;
      v16 = v100;
      goto LABEL_92;
    }
  }
  v37 = *(_QWORD *)(*(_QWORD *)v32 + 48LL);
  if ( !v37 || (unsigned int)MiChargeCommit(v100, v37, 0LL) )
  {
    if ( v35 != 2 )
      goto LABEL_22;
    v74 = v25 | 8;
    v106 = v104 + 128;
    v38 = v104 + 128;
    active = MiReferenceActiveSubsection((__int64 *)(v104 + 128), v74, 0x11u);
    v28 = active;
    if ( active >= 0 )
      goto LABEL_23;
    goto LABEL_90;
  }
  v14 = v98;
  v73 = 0;
  v15 = v102;
  v37 = 0LL;
  v10 = v99;
  v28 = -1073741523;
  v16 = v100;
  v17 = v101;
LABEL_94:
  ++*(_DWORD *)(a1 + 28);
  if ( v12 )
  {
    if ( v14 >= 3 )
      MiReleasePtes(v15, v12, (unsigned int)v17);
    else
      MiUnmapLargePages(v105, v17 << 12, 9LL);
    v16 = v100;
    v73 = 0;
    v14 = v98;
  }
  if ( v115 == 1 )
  {
    v56 = v9 == 2;
    v76 = v104;
    LOBYTE(v73) = v14 < 3;
    MiDereferenceDataSubsections(v104, (_DWORD)a4, v13, v73, !v56);
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
  if ( v37 )
    MiReturnCommit(v16, v37);
  if ( v11 )
    ExFreePoolWithTag(v11, 0);
  return (unsigned int)v28;
}
