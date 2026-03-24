/*
 * XREFs of MiInsertInSystemSpace @ 0x1402FADE0
 * Callers:
 *     MiMapViewInSystemSpace @ 0x1406E887C (MiMapViewInSystemSpace.c)
 * Callees:
 *     MiChargeCommit @ 0x14021AAD0 (MiChargeCommit.c)
 *     MiGetSharedVm @ 0x14021AF50 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x14021CAE0 (MiUnlockWorkingSetExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14021D060 (ExAcquireSpinLockExclusive.c)
 *     MiReservePtes @ 0x1402265B0 (MiReservePtes.c)
 *     MiReleasePtes @ 0x140245800 (MiReleasePtes.c)
 *     KiCheckForKernelApcDelivery @ 0x14024A6E0 (KiCheckForKernelApcDelivery.c)
 *     MiControlAreaRequiresCharge @ 0x14025ACBC (MiControlAreaRequiresCharge.c)
 *     MiAllocatePool @ 0x14025AD70 (MiAllocatePool.c)
 *     KiAbEntryRemoveFromTree @ 0x14028F490 (KiAbEntryRemoveFromTree.c)
 *     MiWritePteShadow @ 0x1402B69BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402B6A1C (MiPteHasShadow.c)
 *     ExfTryToWakePushLock @ 0x1402F1570 (ExfTryToWakePushLock.c)
 *     MiGetAnyMultiplexedVm @ 0x1402FD0FC (MiGetAnyMultiplexedVm.c)
 *     MiReferenceDataSubsections @ 0x1402FD12C (MiReferenceDataSubsections.c)
 *     MiRemoveFromSystemSpace @ 0x140304E4C (MiRemoveFromSystemSpace.c)
 *     MiManageSubsectionView @ 0x140311100 (MiManageSubsectionView.c)
 *     MiGetSessionVm @ 0x14031219C (MiGetSessionVm.c)
 *     MiSectionControlArea @ 0x140315260 (MiSectionControlArea.c)
 *     MiReferenceActiveSubsection @ 0x140315D00 (MiReferenceActiveSubsection.c)
 *     RtlAvlInsertNodeEx @ 0x140316550 (RtlAvlInsertNodeEx.c)
 *     MiReturnCommit @ 0x1403182A0 (MiReturnCommit.c)
 *     MiOffsetToProtos @ 0x140320B50 (MiOffsetToProtos.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14033BD80 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 *     MiGetSystemRegionType @ 0x14034A950 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14034AD00 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14034AD90 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x14034AE60 (MmGetSessionIdEx.c)
 *     MiUnmapLargePages @ 0x1403952E4 (MiUnmapLargePages.c)
 *     MiMapWithLargePages @ 0x1403B8AEC (MiMapWithLargePages.c)
 *     MiGetPageTablesForLargeMap @ 0x1403B8DC4 (MiGetPageTablesForLargeMap.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     memset @ 0x140414200 (memset.c)
 *     MiDereferenceDataSubsections @ 0x140554E28 (MiDereferenceDataSubsections.c)
 *     MiDereferencePerSessionProtos @ 0x1406BC7FC (MiDereferencePerSessionProtos.c)
 *     MiCreatePerSessionProtos @ 0x1406BC914 (MiCreatePerSessionProtos.c)
 *     MiAddMappedPtes @ 0x1406E9250 (MiAddMappedPtes.c)
 *     MiReferenceFileObjectForMap @ 0x1406ECC40 (MiReferenceFileObjectForMap.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
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
  __int64 v57; // rcx
  __int64 v58; // rdx
  unsigned __int64 v59; // r13
  unsigned __int64 v60; // r15
  unsigned int v61; // edi
  __int64 v62; // rax
  unsigned __int64 v63; // rbx
  unsigned __int64 *v64; // rsi
  int v65; // edi
  unsigned __int64 PageTablesForLargeMap; // rax
  int v68; // ecx
  int active; // eax
  __int64 v70; // rdi
  volatile LONG *v71; // rbx
  KIRQL v72; // al
  unsigned __int64 v73; // r8
  _QWORD *v74; // rdx
  unsigned __int64 v75; // rdi
  _QWORD *v76; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  __int64 v80; // rdx
  int v81; // r14d
  __int64 v82; // rsi
  unsigned __int64 *v83; // rdi
  unsigned __int64 *v84; // r12
  __int64 v85; // rdx
  int v86; // r13d
  unsigned __int64 v87; // rbx
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v89; // rax
  __int64 v90; // rdx
  __int64 v91; // r8
  unsigned int v92; // [rsp+40h] [rbp-138h] BYREF
  int v93; // [rsp+44h] [rbp-134h]
  __int64 v94; // [rsp+48h] [rbp-130h]
  unsigned __int64 v95; // [rsp+50h] [rbp-128h]
  void *v96; // [rsp+58h] [rbp-120h]
  unsigned __int64 v97; // [rsp+60h] [rbp-118h]
  __int64 v98; // [rsp+68h] [rbp-110h]
  unsigned __int64 v99; // [rsp+70h] [rbp-108h]
  __int64 v100; // [rsp+78h] [rbp-100h]
  int v101; // [rsp+80h] [rbp-F8h]
  int v102; // [rsp+84h] [rbp-F4h]
  int SessionId; // [rsp+88h] [rbp-F0h]
  __int64 AnyMultiplexedVm; // [rsp+90h] [rbp-E8h]
  __int64 v105; // [rsp+98h] [rbp-E0h]
  __int64 v106; // [rsp+A0h] [rbp-D8h] BYREF
  _QWORD v107[25]; // [rsp+B0h] [rbp-C8h] BYREF
  char v109; // [rsp+188h] [rbp+10h]

  v106 = 0LL;
  memset(v107, 0, 0x90uLL);
  v9 = 3;
  v99 = 0LL;
  v10 = 0x7FFFF;
  v97 = 0LL;
  v93 = 0x7FFFF;
  *a7 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  v109 = 0;
  v95 = 0LL;
  LODWORD(v13) = 0;
  v94 = 0LL;
  v96 = &unk_140C4EAF8;
  v92 = 3;
  v98 = MiSectionControlArea(a3);
  v18 = (a2 >> 16) + ((_WORD)a2 != 0);
  if ( v18 >= 0x10000 )
  {
    v26 = -1073741793;
    v35 = 0LL;
LABEL_91:
    v68 = 0;
    goto LABEL_92;
  }
  v100 = MiOffsetToProtos(v98, *a4, &v106);
  if ( !v100 )
  {
    v26 = -1073741801;
    v15 = &unk_140C4EAF8;
    v35 = 0LL;
    v16 = 0LL;
LABEL_90:
    v17 = v95;
    v14 = v92;
    goto LABEL_91;
  }
  if ( (_UNKNOWN *)a1 == &unk_140C4CD68 )
  {
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(1LL);
    v105 = 0LL;
    SessionId = -1;
    v9 = ((a6 & 8) != 0) + 3;
  }
  else
  {
    AnyMultiplexedVm = MiGetSessionVm(v20, v19, v21);
    v9 = 2;
    v105 = AnyMultiplexedVm - 256;
    v96 = (void *)(AnyMultiplexedVm - 256 + 880);
    SessionId = MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
  }
  v13 = (a2 >> 12) + ((a2 & 0xFFF) != 0);
  v24 = *(unsigned __int16 *)(AnyMultiplexedVm + 174);
  v25 = 16 * v18;
  v95 = v25;
  v94 = *(_QWORD *)(qword_140C4E648 + 8 * v24);
  if ( (*(_DWORD *)(v98 + 56) & 0x420) != 0 )
  {
    v27 = v92;
    goto LABEL_8;
  }
  v26 = MiReferenceDataSubsections(v98, (_DWORD)a4, v13, v9 != 2, (__int64)&v92);
  if ( v26 < 0 )
  {
LABEL_81:
    v35 = 0LL;
    goto LABEL_88;
  }
  v27 = v92;
  v109 = 1;
  if ( v92 >= 3 )
  {
LABEL_8:
    v28 = MiReservePtes((__int64)v96, v25, v22, v23);
    v12 = (_QWORD *)v28;
    if ( v28 )
    {
      v99 = (__int64)(v28 << 25) >> 16;
      goto LABEL_10;
    }
    v26 = -1073741670;
    v35 = 0LL;
LABEL_88:
    v10 = v93;
    goto LABEL_89;
  }
  PageTablesForLargeMap = MiGetPageTablesForLargeMap(v25, 9LL, v92);
  v99 = PageTablesForLargeMap;
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
    v35 = v97;
    v26 = -1073741670;
    goto LABEL_88;
  }
  v30 = (_DWORD *)v98;
  v31 = v98;
  Pool[14] ^= (Pool[14] ^ (8 * v27)) & 0x18;
  v32 = MiControlAreaRequiresCharge(v31, v9);
  v33 = v32;
  if ( !v32 )
  {
    v35 = v97;
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
    v35 = v97;
LABEL_20:
    v36 = v100;
LABEL_21:
    *((_QWORD *)v11 + 6) = v36;
    *((_QWORD *)v11 + 4) = v13 << 12;
    *((_QWORD *)v11 + 3) = *a4 >> 12;
    v37 = v99 | 2;
    *((_QWORD *)v11 + 5) = v35;
    *((_QWORD *)v11 + 11) = v37;
    v11[25] = v93;
    if ( (_UNKNOWN *)a1 == &unk_140C4CD68 )
      v38 = -1;
    else
      v38 = *(_DWORD *)(v105 + 8);
    v11[24] = v38;
    *((_QWORD *)v11 + 8) = MiReferenceFileObjectForMap(a3);
    CurrentThread = KeGetCurrentThread();
    if ( v92 || (*(_DWORD *)(v98 + 56) & 0x400) != 0 )
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
          if ( v99 < v46 + v45[4] && v99 < v46 )
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
      if ( (*(_DWORD *)(v98 + 56) & 0x400) == 0 )
      {
        v107[0] = v98;
        MiManageSubsectionView(v107, v11 + 18, 3LL);
      }
      v48 = *(_QWORD *)(a1 + 8);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v48, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v48);
      v102 = 0;
      v49 = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(v48) == 1 )
        v50 = (unsigned int)MmGetSessionIdEx(v49->ApcState.Process);
      else
        v50 = 0xFFFFFFFFLL;
      --v49->SpecialApcDisable;
      v51 = ++v49->AbAllocationRegionCount;
      v52 = ((char)v49->AbEntrySummary | (char)v49->AbOrphanedEntrySummary) ^ 0x3F;
      v53 = !_BitScanReverse((unsigned int *)&v54, v52);
      v101 = v54;
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
        v101 = v54;
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
          KiAbEntryRemoveFromTree(v55);
        v102 = *(_DWORD *)(v55 + 88) & 0x1FFFF;
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
        KiCheckForKernelApcDelivery(v57);
      KiLeaveGuardedRegionUnsafe(CurrentThread);
      v36 = v100;
      v59 = v99;
    }
    else
    {
      v59 = v99;
      v71 = (volatile LONG *)((char *)&unk_140C4CDB0 + 16 * (unsigned __int8)(v99 >> 30));
      v72 = ExAcquireSpinLockExclusive(v71 + 3);
      ++*((_DWORD *)v71 + 2);
      LOBYTE(v73) = 0;
      v74 = *(_QWORD **)v71;
      v75 = v72;
      if ( *(_QWORD *)v71 )
      {
        while ( 1 )
        {
          v73 = v74[11] & 0xFFFFFFFFFFFFF000uLL;
          if ( v59 >= v73 + v74[4] || v59 >= v73 )
          {
            v76 = (_QWORD *)v74[1];
            if ( !v76 )
            {
              LOBYTE(v73) = 1;
              break;
            }
          }
          else
          {
            v76 = (_QWORD *)*v74;
            if ( !*v74 )
            {
              LOBYTE(v73) = 0;
              break;
            }
          }
          v74 = v76;
        }
      }
      RtlAvlInsertNodeEx(v71, v74, v73, v11);
      ExReleaseSpinLockExclusiveFromDpcLevel(v71 + 3);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v75 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v58 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v75 + 1));
            v53 = ((unsigned int)v58 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v58;
            if ( v53 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(v75);
    }
    if ( (v11[14] & 1) != 0 )
      _InterlockedIncrement((volatile signed __int32 *)(v98 + 92));
    v60 = 0LL;
    if ( v92 < 3 )
    {
      v80 = *(_QWORD *)(v36 + 8);
      v81 = v59;
      v82 = MiLargePageSizes[v92];
      v83 = (unsigned __int64 *)(v80 + 8 * v106);
      v84 = (unsigned __int64 *)(v80 + 8LL * *(unsigned int *)(v36 + 44));
      if ( v95 )
      {
        v86 = MiGetAnyMultiplexedVm(3LL);
        do
        {
          if ( v83 == v84 )
          {
            v100 = *(_QWORD *)(v100 + 16);
            v83 = *(unsigned __int64 **)(v100 + 8);
            v84 = &v83[*(unsigned int *)(v100 + 44)];
          }
          v87 = *v83;
          if ( (unsigned int)MiPteInShadowRange(v83, v85)
            && (MiFlags & 0xC00000) != 0
            && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
            && (v87 & 1) != 0
            && ((v87 & 0x20) == 0 || (v87 & 0x42) == 0) )
          {
            Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( Flink )
            {
              v89 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)v83 >> 3) & 0x1FF));
              v90 = v87 | 0x20;
              if ( (v89 & 0x20) == 0 )
                v90 = v87;
              v87 = v90;
              if ( (v89 & 0x42) != 0 )
                v87 = v90 | 0x42;
            }
          }
          MiMapWithLargePages(v86, v81, v87 >> 12, v82, v92, 4, 1);
          v81 += (_DWORD)v82 << 12;
          v83 += v82;
          v60 += v82;
        }
        while ( v60 < v95 );
        v59 = v99;
      }
      v65 = 0;
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
          v64 = &v12[v62];
          if ( (unsigned int)MiPteInShadowRange(v64, v58) )
          {
            if ( (unsigned int)MiPteHasShadow() )
            {
              if ( !HIBYTE(word_140C4E008) && (ZeroPte & 1) != 0 )
                v63 = ZeroPte | 0x8000000000000000uLL;
              *v64 = v63;
              MiWritePteShadow((__int64)v64, v63, v91);
              goto LABEL_57;
            }
            if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
              && (ZeroPte & 1) != 0 )
            {
              v63 = ZeroPte | 0x8000000000000000uLL;
            }
          }
          *v64 = v63;
LABEL_57:
          v62 = ++v61;
        }
        while ( v61 < v13 );
      }
      v65 = MiAddMappedPtes((_DWORD)v12, v13, v98, (_DWORD)a4, SessionId, 0);
      if ( v65 < 0 )
      {
        ++*(_DWORD *)(a1 + 28);
        MiRemoveFromSystemSpace(a1, v59, 0LL);
        return (unsigned int)v65;
      }
    }
    *a7 = v59;
    return (unsigned int)v65;
  }
  if ( (v34 & 0x4000000) != 0 )
  {
    v93 = -1;
    if ( (int)MiCreatePerSessionProtos(v30, 0xFFFFFFFFLL) < 0 )
    {
      v35 = v97;
      v26 = -1073741801;
      v10 = 0x7FFFF;
LABEL_89:
      v15 = v96;
      v16 = v94;
      goto LABEL_90;
    }
  }
  v35 = *(_QWORD *)(*(_QWORD *)v30 + 48LL);
  if ( !v35 || (unsigned int)MiChargeCommit(v94, v35, 0) )
  {
    if ( v33 != 2 )
      goto LABEL_20;
    v100 = v98 + 128;
    v36 = v98 + 128;
    active = MiReferenceActiveSubsection(v98 + 128);
    v26 = active;
    if ( active >= 0 )
      goto LABEL_21;
    goto LABEL_88;
  }
  v14 = v92;
  v68 = 0;
  v15 = v96;
  v35 = 0LL;
  v10 = v93;
  v26 = -1073741523;
  v16 = v94;
  v17 = v95;
LABEL_92:
  ++*(_DWORD *)(a1 + 28);
  if ( v12 )
  {
    if ( v14 >= 3 )
      MiReleasePtes((__int64)v15, v12, v17);
    else
      MiUnmapLargePages(v99, v17 << 12, 9LL);
    v16 = v94;
    v68 = 0;
    v14 = v92;
  }
  if ( v109 == 1 )
  {
    v53 = v9 == 2;
    v70 = v98;
    LOBYTE(v68) = v14 < 3;
    MiDereferenceDataSubsections(v98, (_DWORD)a4, v13, v68, !v53);
    v16 = v94;
  }
  else
  {
    v70 = v98;
  }
  if ( v10 != 0x7FFFF )
  {
    MiDereferencePerSessionProtos(v70, v10);
    v16 = v94;
  }
  if ( v35 )
    MiReturnCommit(v16, v35);
  if ( v11 )
    ExFreePoolWithTag(v11, 0);
  return (unsigned int)v26;
}
