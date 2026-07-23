/*
 * XREFs of MiInsertInSystemSpace @ 0x1402BD160
 * Callers:
 *     MiMapViewInSystemSpace @ 0x1406401E4 (MiMapViewInSystemSpace.c)
 * Callees:
 *     MiChargeCommit @ 0x14021A460 (MiChargeCommit.c)
 *     MiGetSharedVm @ 0x14021A770 (MiGetSharedVm.c)
 *     MiManageSubsectionView @ 0x14022A510 (MiManageSubsectionView.c)
 *     MiGetSessionVm @ 0x14022B5AC (MiGetSessionVm.c)
 *     ExAcquireSpinLockExclusive @ 0x14023C6E0 (ExAcquireSpinLockExclusive.c)
 *     MiReleasePtes @ 0x140247F40 (MiReleasePtes.c)
 *     MiGetSystemRegionType @ 0x1402609A0 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140260D50 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140260EB0 (MmGetSessionIdEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14026B750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiUnlockWorkingSetExclusive @ 0x14026C350 (MiUnlockWorkingSetExclusive.c)
 *     MiReservePtes @ 0x1402743A0 (MiReservePtes.c)
 *     MiReturnCommit @ 0x14027D3E0 (MiReturnCommit.c)
 *     MiOffsetToProtos @ 0x140288040 (MiOffsetToProtos.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiAllocatePool @ 0x1402A0FB0 (MiAllocatePool.c)
 *     MiSectionControlArea @ 0x1402A1930 (MiSectionControlArea.c)
 *     MiReferenceActiveSubsection @ 0x1402A23D0 (MiReferenceActiveSubsection.c)
 *     RtlAvlInsertNodeEx @ 0x1402A2C20 (RtlAvlInsertNodeEx.c)
 *     MiControlAreaRequiresCharge @ 0x1402A41F8 (MiControlAreaRequiresCharge.c)
 *     MiGetAnyMultiplexedVm @ 0x1402A9158 (MiGetAnyMultiplexedVm.c)
 *     MiRemoveFromSystemSpace @ 0x1402AA180 (MiRemoveFromSystemSpace.c)
 *     MiReferenceDataSubsections @ 0x1402BD908 (MiReferenceDataSubsections.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     KiAbEntryRemoveFromTree @ 0x1403410E0 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x1403599E0 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     MiUnmapLargePages @ 0x140391E04 (MiUnmapLargePages.c)
 *     MiMapWithLargePages @ 0x1403B48CC (MiMapWithLargePages.c)
 *     MiGetPageTablesForLargeMap @ 0x1403B4BA4 (MiGetPageTablesForLargeMap.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     memset @ 0x140408F80 (memset.c)
 *     MiDereferenceDataSubsections @ 0x14054F338 (MiDereferenceDataSubsections.c)
 *     MiReferenceFileObjectForMap @ 0x140633068 (MiReferenceFileObjectForMap.c)
 *     MiAddMappedPtes @ 0x14063FBE0 (MiAddMappedPtes.c)
 *     MiDereferencePerSessionProtos @ 0x1406E678C (MiDereferencePerSessionProtos.c)
 *     MiCreatePerSessionProtos @ 0x1406E68A4 (MiCreatePerSessionProtos.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
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
  _QWORD *v12; // r14
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
  ULONG_PTR v25; // rax
  _DWORD *Pool; // rax
  _DWORD *v27; // r15
  __int64 v28; // rcx
  int v29; // eax
  int v30; // ebx
  int v31; // eax
  unsigned __int64 v32; // r15
  __int64 v33; // r12
  __int64 v34; // rax
  int v35; // eax
  struct _KTHREAD *CurrentThread; // r13
  __int64 v37; // r15
  LONG *SharedVm; // rbx
  KIRQL v39; // al
  bool v40; // r8
  unsigned __int8 v41; // di
  _QWORD *v42; // r10
  unsigned __int64 v43; // rdx
  _QWORD *v44; // rax
  unsigned __int64 v45; // r15
  struct _KTHREAD *v46; // rdi
  ULONG_PTR v47; // r9
  unsigned __int8 v48; // r12
  unsigned int v49; // edx
  bool v50; // zf
  __int64 v51; // rcx
  __int64 v52; // rbx
  __int64 v53; // rdx
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  ULONG_PTR v58; // r13
  unsigned __int64 v59; // r15
  unsigned int v60; // edi
  __int64 v61; // rax
  unsigned __int64 v62; // rbx
  unsigned __int64 *v63; // rsi
  __int64 v64; // rdx
  __int64 v65; // rcx
  int v66; // edi
  unsigned __int64 PageTablesForLargeMap; // rax
  int v69; // ecx
  int v70; // edx
  int active; // eax
  unsigned __int64 v72; // rdi
  volatile LONG *v73; // rbx
  KIRQL v74; // al
  bool v75; // r8
  _QWORD *v76; // rdx
  unsigned __int64 v77; // rdi
  unsigned __int64 v78; // r8
  _QWORD *v79; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v83; // edx
  __int64 v84; // rdx
  int v85; // r14d
  __int64 v86; // rsi
  unsigned __int64 v87; // rdi
  unsigned __int64 v88; // r12
  unsigned int v89; // r13d
  unsigned __int64 v90; // rbx
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v92; // rax
  __int64 v93; // rdx
  unsigned int v94; // [rsp+40h] [rbp-138h] BYREF
  int v95; // [rsp+44h] [rbp-134h]
  __int64 v96; // [rsp+48h] [rbp-130h]
  unsigned __int64 v97; // [rsp+50h] [rbp-128h]
  void *v98; // [rsp+58h] [rbp-120h]
  unsigned __int64 v99; // [rsp+60h] [rbp-118h]
  unsigned __int64 v100; // [rsp+68h] [rbp-110h]
  unsigned __int64 v101; // [rsp+70h] [rbp-108h]
  __int64 v102; // [rsp+78h] [rbp-100h]
  int v103; // [rsp+80h] [rbp-F8h]
  int v104; // [rsp+84h] [rbp-F4h] BYREF
  int SessionId; // [rsp+88h] [rbp-F0h]
  __int64 AnyMultiplexedVm; // [rsp+90h] [rbp-E8h]
  __int64 v107; // [rsp+98h] [rbp-E0h]
  unsigned __int64 v108; // [rsp+A0h] [rbp-D8h] BYREF
  __int64 v109[25]; // [rsp+B0h] [rbp-C8h] BYREF
  char v111; // [rsp+188h] [rbp+10h]

  v108 = 0LL;
  memset(v109, 0, 0x90uLL);
  v9 = 3;
  v101 = 0LL;
  v10 = 0x7FFFF;
  v99 = 0LL;
  v95 = 0x7FFFF;
  *a7 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  v111 = 0;
  v97 = 0LL;
  LODWORD(v13) = 0;
  v96 = 0LL;
  v98 = &unk_140C4EA38;
  v94 = 3;
  v100 = MiSectionControlArea(a3);
  v18 = (a2 >> 16) + ((_WORD)a2 != 0);
  if ( v18 >= 0x10000 )
  {
    v23 = -1073741793;
    v32 = 0LL;
LABEL_93:
    v69 = 0;
    goto LABEL_94;
  }
  v102 = MiOffsetToProtos(v100, *a4, &v108);
  if ( !v102 )
  {
    v23 = -1073741801;
    v15 = &unk_140C4EA38;
    v32 = 0LL;
    v16 = 0LL;
LABEL_92:
    v17 = v97;
    v14 = v94;
    goto LABEL_93;
  }
  if ( (_UNKNOWN *)a1 == &unk_140C4CCA8 )
  {
    AnyMultiplexedVm = (__int64)MiGetAnyMultiplexedVm(1);
    v19 = 0;
    v107 = 0LL;
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
    v107 = AnyMultiplexedVm - 256;
    v98 = (void *)(AnyMultiplexedVm - 256 + 880);
    SessionId = MmGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
  }
  v13 = (a2 >> 12) + ((a2 & 0xFFF) != 0);
  v21 = *(unsigned __int16 *)(AnyMultiplexedVm + 174);
  v22 = 16 * v18;
  v97 = v22;
  v96 = *(_QWORD *)(qword_140C4E588 + 8 * v21);
  if ( (*(_DWORD *)(v100 + 56) & 0x420) != 0 )
  {
    v24 = v94;
    goto LABEL_10;
  }
  v23 = MiReferenceDataSubsections(v100, (_DWORD)a4, v13, v9 != 2, (__int64)&v94);
  if ( v23 < 0 )
  {
LABEL_83:
    v32 = 0LL;
    goto LABEL_90;
  }
  v24 = v94;
  v111 = 1;
  if ( v94 >= 3 )
  {
LABEL_10:
    v25 = MiReservePtes((__int64)v98, (unsigned int)v22);
    v12 = (_QWORD *)v25;
    if ( v25 )
    {
      v101 = (__int64)(v25 << 25) >> 16;
      goto LABEL_12;
    }
    v23 = -1073741670;
    v32 = 0LL;
LABEL_90:
    v10 = v95;
    goto LABEL_91;
  }
  PageTablesForLargeMap = MiGetPageTablesForLargeMap(v22, 9LL, v94);
  v101 = PageTablesForLargeMap;
  if ( !PageTablesForLargeMap )
  {
    v23 = -1073741670;
    goto LABEL_83;
  }
  v12 = (_QWORD *)(((PageTablesForLargeMap >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
LABEL_12:
  Pool = MiAllocatePool(64, 0x68uLL, 0x7756694Du);
  v11 = Pool;
  if ( !Pool )
  {
    v32 = v99;
    v23 = -1073741670;
    goto LABEL_90;
  }
  v27 = (_DWORD *)v100;
  v28 = v100;
  Pool[14] ^= (Pool[14] ^ (8 * v24)) & 0x18;
  v29 = MiControlAreaRequiresCharge(v28);
  v30 = v29;
  if ( !v29 )
  {
    v32 = v99;
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
    v32 = v99;
LABEL_22:
    v33 = v102;
LABEL_23:
    *((_QWORD *)v11 + 6) = v33;
    *((_QWORD *)v11 + 4) = v13 << 12;
    *((_QWORD *)v11 + 3) = *a4 >> 12;
    v34 = v101 | 2;
    *((_QWORD *)v11 + 5) = v32;
    *((_QWORD *)v11 + 11) = v34;
    v11[25] = v95;
    if ( (_UNKNOWN *)a1 == &unk_140C4CCA8 )
      v35 = -1;
    else
      v35 = *(_DWORD *)(v107 + 8);
    v11[24] = v35;
    *((_QWORD *)v11 + 8) = MiReferenceFileObjectForMap(a3);
    CurrentThread = KeGetCurrentThread();
    if ( v94 || (*(_DWORD *)(v100 + 56) & 0x400) != 0 )
    {
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockExclusiveEx(*(_QWORD *)(a1 + 8), 0LL);
      v37 = AnyMultiplexedVm;
      SharedVm = MiGetSharedVm(AnyMultiplexedVm);
      v39 = ExAcquireSpinLockExclusive(SharedVm);
      SharedVm[1] = 0;
      v40 = 0;
      ++*(_DWORD *)(a1 + 24);
      v41 = v39;
      v42 = *(_QWORD **)(a1 + 16);
      if ( v42 )
      {
        while ( 1 )
        {
          v43 = v42[11] & 0xFFFFFFFFFFFFF000uLL;
          if ( v101 < v43 + v42[4] && v101 < v43 )
          {
            v44 = (_QWORD *)*v42;
            if ( !*v42 )
              break;
          }
          else
          {
            v44 = (_QWORD *)v42[1];
            if ( !v44 )
            {
              v40 = 1;
              break;
            }
          }
          v42 = v44;
        }
      }
      RtlAvlInsertNodeEx((unsigned __int64 *)(a1 + 16), (unsigned __int64)v42, v40, v11);
      MiUnlockWorkingSetExclusive(v37, v41);
      if ( (*(_DWORD *)(v100 + 56) & 0x400) == 0 )
      {
        v109[0] = v100;
        MiManageSubsectionView(v109, (_QWORD *)v11 + 9, 3);
      }
      v45 = *(_QWORD *)(a1 + 8);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v45, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v45);
      v104 = 0;
      v46 = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(v45) == 1 )
        v47 = (unsigned int)MmGetSessionIdEx((__int64)v46->ApcState.Process);
      else
        v47 = 0xFFFFFFFFLL;
      --v46->SpecialApcDisable;
      v48 = ++v46->AbAllocationRegionCount;
      v49 = ((char)v46->AbEntrySummary | (char)v46->AbOrphanedEntrySummary) ^ 0x3F;
      v50 = !_BitScanReverse((unsigned int *)&v51, v49);
      v103 = v51;
      if ( v50 )
        goto LABEL_75;
      while ( 1 )
      {
        v52 = (__int64)&v46->LockEntries[v51];
        v49 &= ~(1 << v51);
        if ( (*(_BYTE *)(v52 + 26) & 1) != 0
          && (*(_DWORD *)(v52 + 32) & 1) == 0
          && (*(_QWORD *)(v52 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v45 & 0x7FFFFFFFFFFFFFFCLL)
          && *(_DWORD *)(v52 + 40) == (_DWORD)v47 )
        {
          *(_BYTE *)(v52 + 26) &= ~1u;
          if ( *(_QWORD *)(v52 + 32) )
            break;
        }
        v50 = !_BitScanReverse((unsigned int *)&v51, v49);
        v103 = v51;
        if ( v50 )
          goto LABEL_75;
      }
      if ( !v52 )
      {
LABEL_75:
        if ( (*((_DWORD *)&v46->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)v46, v45, v47, 0LL);
      }
      else
      {
        *(_BYTE *)(v52 + 32) |= 2u;
        if ( *(__int64 *)(v52 + 32) < 0 )
          KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v52);
        v104 = *(_DWORD *)(v52 + 88) & 0x1FFFF;
        *(_DWORD *)(v52 + 88) &= 0xFFFE0000;
        *(_BYTE *)(v52 + 25) &= ~1u;
        *(_QWORD *)(v52 + 32) = 0LL;
        v53 = (signed __int64)(v52 - (unsigned __int64)v46->LockEntries) / 96;
        if ( v48 == 1 )
          v46->AbEntrySummary |= 1 << v53;
        else
          _InterlockedOr8((volatile signed __int8 *)&v46->AbOrphanedEntrySummary, 1 << v53);
      }
      --v46->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)v46, v45, &v104);
      v50 = v46->SpecialApcDisable++ == -1;
      if ( v50 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v46->ApcState.ApcListHead[0].Flink != &v46->152 )
        KiCheckForKernelApcDelivery(v55);
      KiLeaveGuardedRegionUnsafe((__int64)CurrentThread, v54, v56, v57);
      v33 = v102;
      v58 = v101;
    }
    else
    {
      v58 = v101;
      v73 = (volatile LONG *)((char *)&unk_140C4CCF0 + 16 * (unsigned __int8)(v101 >> 30));
      v74 = ExAcquireSpinLockExclusive(v73 + 3);
      ++*((_DWORD *)v73 + 2);
      v75 = 0;
      v76 = *(_QWORD **)v73;
      v77 = v74;
      if ( *(_QWORD *)v73 )
      {
        while ( 1 )
        {
          v78 = v76[11] & 0xFFFFFFFFFFFFF000uLL;
          if ( v58 >= v78 + v76[4] || v58 >= v78 )
          {
            v79 = (_QWORD *)v76[1];
            if ( !v79 )
            {
              v75 = 1;
              break;
            }
          }
          else
          {
            v79 = (_QWORD *)*v76;
            if ( !*v76 )
            {
              v75 = 0;
              break;
            }
          }
          v76 = v79;
        }
      }
      RtlAvlInsertNodeEx((unsigned __int64 *)v73, (unsigned __int64)v76, v75, v11);
      ExReleaseSpinLockExclusiveFromDpcLevel(v73 + 3);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v77 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v83 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v77 + 1));
            v50 = (v83 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v83;
            if ( v50 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(v77);
    }
    if ( (v11[14] & 1) != 0 )
      _InterlockedIncrement((volatile signed __int32 *)(v100 + 92));
    v59 = 0LL;
    if ( v94 < 3 )
    {
      v84 = *(_QWORD *)(v33 + 8);
      v85 = v58;
      v86 = MiLargePageSizes[v94];
      v87 = v84 + 8 * v108;
      v88 = v84 + 8LL * *(unsigned int *)(v33 + 44);
      if ( v97 )
      {
        v89 = (unsigned int)MiGetAnyMultiplexedVm(3);
        do
        {
          if ( v87 == v88 )
          {
            v102 = *(_QWORD *)(v102 + 16);
            v87 = *(_QWORD *)(v102 + 8);
            v88 = v87 + 8LL * *(unsigned int *)(v102 + 44);
          }
          v90 = *(_QWORD *)v87;
          if ( MiPteInShadowRange(v87)
            && (MiFlags & 0xC00000) != 0
            && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
            && (v90 & 1) != 0
            && ((v90 & 0x20) == 0 || (v90 & 0x42) == 0) )
          {
            Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( Flink )
            {
              v92 = *((_QWORD *)&Flink->Flink + ((v87 >> 3) & 0x1FF));
              v93 = v90 | 0x20;
              if ( (v92 & 0x20) == 0 )
                v93 = v90;
              v90 = v93;
              if ( (v92 & 0x42) != 0 )
                v90 = v93 | 0x42;
            }
          }
          MiMapWithLargePages(v89, v85, v90 >> 12, v86, v94, 4, 1);
          v85 += (_DWORD)v86 << 12;
          v87 += 8 * v86;
          v59 += v86;
        }
        while ( v59 < v97 );
        v58 = v101;
      }
      v66 = 0;
    }
    else
    {
      v60 = 0;
      if ( v13 )
      {
        v61 = 0LL;
        do
        {
          v62 = ZeroPte;
          v63 = &v12[v61];
          if ( MiPteInShadowRange((unsigned __int64)v63) )
          {
            if ( (unsigned int)MiPteHasShadow(v65, v64) )
            {
              if ( !HIBYTE(word_140C4DF48) && (ZeroPte & 1) != 0 )
                v62 = ZeroPte | 0x8000000000000000uLL;
              *v63 = v62;
              MiWritePteShadow(v63, v62);
              goto LABEL_59;
            }
            if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
              && (ZeroPte & 1) != 0 )
            {
              v62 = ZeroPte | 0x8000000000000000uLL;
            }
          }
          *v63 = v62;
LABEL_59:
          v61 = ++v60;
        }
        while ( v60 < v13 );
      }
      v66 = MiAddMappedPtes((_DWORD)v12, v13, v100, (_DWORD)a4, SessionId, 0);
      if ( v66 < 0 )
      {
        ++*(_DWORD *)(a1 + 28);
        MiRemoveFromSystemSpace((_QWORD *)a1, v58, 0);
        return (unsigned int)v66;
      }
    }
    *a7 = v58;
    return (unsigned int)v66;
  }
  if ( (v31 & 0x4000000) != 0 )
  {
    v95 = -1;
    if ( (int)MiCreatePerSessionProtos(v27, 0xFFFFFFFFLL) < 0 )
    {
      v32 = v99;
      v23 = -1073741801;
      v10 = 0x7FFFF;
LABEL_91:
      v15 = v98;
      v16 = v96;
      goto LABEL_92;
    }
  }
  v32 = *(_QWORD *)(*(_QWORD *)v27 + 48LL);
  if ( !v32 || (unsigned int)MiChargeCommit(v96, v32, 0) )
  {
    if ( v30 != 2 )
      goto LABEL_22;
    v70 = v20 | 8;
    v102 = v100 + 128;
    v33 = v100 + 128;
    active = MiReferenceActiveSubsection((__int64 *)(v100 + 128), v70, 0x11u);
    v23 = active;
    if ( active >= 0 )
      goto LABEL_23;
    goto LABEL_90;
  }
  v14 = v94;
  v69 = 0;
  v15 = v98;
  v32 = 0LL;
  v10 = v95;
  v23 = -1073741523;
  v16 = v96;
  v17 = v97;
LABEL_94:
  ++*(_DWORD *)(a1 + 28);
  if ( v12 )
  {
    if ( v14 >= 3 )
      MiReleasePtes((__int64)v15, v12, v17);
    else
      MiUnmapLargePages(v101, v17 << 12, 9LL);
    v16 = v96;
    v69 = 0;
    v14 = v94;
  }
  if ( v111 == 1 )
  {
    v50 = v9 == 2;
    v72 = v100;
    LOBYTE(v69) = v14 < 3;
    MiDereferenceDataSubsections(v100, (_DWORD)a4, v13, v69, !v50);
    v16 = v96;
  }
  else
  {
    v72 = v100;
  }
  if ( v10 != 0x7FFFF )
  {
    MiDereferencePerSessionProtos(v72, v10);
    v16 = v96;
  }
  if ( v32 )
    MiReturnCommit(v16, v32);
  if ( v11 )
    ExFreePoolWithTag(v11, 0);
  return (unsigned int)v23;
}
