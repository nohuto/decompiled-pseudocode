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
  __int64 v49; // rdx
  __int64 v50; // r8
  bool v51; // zf
  __int64 v52; // rcx
  __int64 v53; // rbx
  __int64 v54; // rdx
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  ULONG_PTR v59; // r13
  unsigned __int64 v60; // r15
  unsigned int v61; // edi
  __int64 v62; // rax
  unsigned __int64 v63; // rbx
  unsigned __int64 *v64; // rsi
  __int64 v65; // rdx
  __int64 v66; // rcx
  int v67; // edi
  unsigned __int64 PageTablesForLargeMap; // rax
  int v70; // ecx
  int v71; // edx
  int active; // eax
  unsigned __int64 v73; // rdi
  volatile LONG *v74; // rbx
  KIRQL v75; // al
  bool v76; // r8
  _QWORD *v77; // rdx
  unsigned __int64 v78; // rdi
  unsigned __int64 v79; // r8
  _QWORD *v80; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v84; // edx
  __int64 v85; // rdx
  int v86; // r14d
  __int64 v87; // rsi
  unsigned __int64 v88; // rdi
  unsigned __int64 v89; // r12
  unsigned int v90; // r13d
  unsigned __int64 v91; // rbx
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v93; // rax
  __int64 v94; // rdx
  unsigned int v95; // [rsp+40h] [rbp-138h] BYREF
  int v96; // [rsp+44h] [rbp-134h]
  __int64 v97; // [rsp+48h] [rbp-130h]
  unsigned __int64 v98; // [rsp+50h] [rbp-128h]
  void *v99; // [rsp+58h] [rbp-120h]
  unsigned __int64 v100; // [rsp+60h] [rbp-118h]
  unsigned __int64 v101; // [rsp+68h] [rbp-110h]
  unsigned __int64 v102; // [rsp+70h] [rbp-108h]
  __int64 v103; // [rsp+78h] [rbp-100h]
  int v104; // [rsp+80h] [rbp-F8h]
  int v105; // [rsp+84h] [rbp-F4h] BYREF
  int SessionId; // [rsp+88h] [rbp-F0h]
  __int64 AnyMultiplexedVm; // [rsp+90h] [rbp-E8h]
  __int64 v108; // [rsp+98h] [rbp-E0h]
  unsigned __int64 v109; // [rsp+A0h] [rbp-D8h] BYREF
  __int64 v110[25]; // [rsp+B0h] [rbp-C8h] BYREF
  char v112; // [rsp+188h] [rbp+10h]

  v109 = 0LL;
  memset(v110, 0, 0x90uLL);
  v9 = 3;
  v102 = 0LL;
  v10 = 0x7FFFF;
  v100 = 0LL;
  v96 = 0x7FFFF;
  *a7 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  v112 = 0;
  v98 = 0LL;
  LODWORD(v13) = 0;
  v97 = 0LL;
  v99 = &unk_140C4EA38;
  v95 = 3;
  v101 = MiSectionControlArea(a3);
  v18 = (a2 >> 16) + ((_WORD)a2 != 0);
  if ( v18 >= 0x10000 )
  {
    v23 = -1073741793;
    v32 = 0LL;
LABEL_93:
    v70 = 0;
    goto LABEL_94;
  }
  v103 = MiOffsetToProtos(v101, *a4, &v109);
  if ( !v103 )
  {
    v23 = -1073741801;
    v15 = &unk_140C4EA38;
    v32 = 0LL;
    v16 = 0LL;
LABEL_92:
    v17 = v98;
    v14 = v95;
    goto LABEL_93;
  }
  if ( (_UNKNOWN *)a1 == &unk_140C4CCA8 )
  {
    AnyMultiplexedVm = (__int64)MiGetAnyMultiplexedVm(1);
    v19 = 0;
    v108 = 0LL;
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
    v108 = AnyMultiplexedVm - 256;
    v99 = (void *)(AnyMultiplexedVm - 256 + 880);
    SessionId = MmGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
  }
  v13 = (a2 >> 12) + ((a2 & 0xFFF) != 0);
  v21 = *(unsigned __int16 *)(AnyMultiplexedVm + 174);
  v22 = 16 * v18;
  v98 = v22;
  v97 = *(_QWORD *)(qword_140C4E588 + 8 * v21);
  if ( (*(_DWORD *)(v101 + 56) & 0x420) != 0 )
  {
    v24 = v95;
    goto LABEL_10;
  }
  v23 = MiReferenceDataSubsections(v101, (_DWORD)a4, v13, v9 != 2, (__int64)&v95);
  if ( v23 < 0 )
  {
LABEL_83:
    v32 = 0LL;
    goto LABEL_90;
  }
  v24 = v95;
  v112 = 1;
  if ( v95 >= 3 )
  {
LABEL_10:
    v25 = MiReservePtes((__int64)v99, (unsigned int)v22);
    v12 = (_QWORD *)v25;
    if ( v25 )
    {
      v102 = (__int64)(v25 << 25) >> 16;
      goto LABEL_12;
    }
    v23 = -1073741670;
    v32 = 0LL;
LABEL_90:
    v10 = v96;
    goto LABEL_91;
  }
  PageTablesForLargeMap = MiGetPageTablesForLargeMap(v22, 9LL, v95);
  v102 = PageTablesForLargeMap;
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
    v32 = v100;
    v23 = -1073741670;
    goto LABEL_90;
  }
  v27 = (_DWORD *)v101;
  v28 = v101;
  Pool[14] ^= (Pool[14] ^ (8 * v24)) & 0x18;
  v29 = MiControlAreaRequiresCharge(v28);
  v30 = v29;
  if ( !v29 )
  {
    v32 = v100;
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
    v32 = v100;
LABEL_22:
    v33 = v103;
LABEL_23:
    *((_QWORD *)v11 + 6) = v33;
    *((_QWORD *)v11 + 4) = v13 << 12;
    *((_QWORD *)v11 + 3) = *a4 >> 12;
    v34 = v102 | 2;
    *((_QWORD *)v11 + 5) = v32;
    *((_QWORD *)v11 + 11) = v34;
    v11[25] = v96;
    if ( (_UNKNOWN *)a1 == &unk_140C4CCA8 )
      v35 = -1;
    else
      v35 = *(_DWORD *)(v108 + 8);
    v11[24] = v35;
    *((_QWORD *)v11 + 8) = MiReferenceFileObjectForMap(a3);
    CurrentThread = KeGetCurrentThread();
    if ( v95 || (*(_DWORD *)(v101 + 56) & 0x400) != 0 )
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
          if ( v102 < v43 + v42[4] && v102 < v43 )
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
      if ( (*(_DWORD *)(v101 + 56) & 0x400) == 0 )
      {
        v110[0] = v101;
        MiManageSubsectionView(v110, (_QWORD *)v11 + 9, 3);
      }
      v45 = *(_QWORD *)(a1 + 8);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v45, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v45);
      v105 = 0;
      v46 = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(v45) == 1 )
        v47 = (unsigned int)MmGetSessionIdEx((__int64)v46->ApcState.Process);
      else
        v47 = 0xFFFFFFFFLL;
      --v46->SpecialApcDisable;
      v48 = ++v46->AbAllocationRegionCount;
      LODWORD(v49) = ((char)v46->AbEntrySummary | (char)v46->AbOrphanedEntrySummary) ^ 0x3F;
      v50 = v45 & 0x7FFFFFFFFFFFFFFCLL;
      v51 = !_BitScanReverse((unsigned int *)&v52, v49);
      v104 = v52;
      if ( v51 )
        goto LABEL_75;
      while ( 1 )
      {
        v53 = (__int64)&v46->LockEntries[v52];
        v49 = ~(1 << v52) & (unsigned int)v49;
        if ( (*(_BYTE *)(v53 + 26) & 1) != 0
          && (*(_DWORD *)(v53 + 32) & 1) == 0
          && (*(_QWORD *)(v53 + 32) & 0x7FFFFFFFFFFFFFFCLL) == v50
          && *(_DWORD *)(v53 + 40) == (_DWORD)v47 )
        {
          *(_BYTE *)(v53 + 26) &= ~1u;
          if ( *(_QWORD *)(v53 + 32) )
            break;
        }
        v51 = !_BitScanReverse((unsigned int *)&v52, v49);
        v104 = v52;
        if ( v51 )
          goto LABEL_75;
      }
      if ( !v53 )
      {
LABEL_75:
        if ( (*((_DWORD *)&v46->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)v46, v45, v47, 0LL);
      }
      else
      {
        *(_BYTE *)(v53 + 32) |= 2u;
        if ( *(__int64 *)(v53 + 32) < 0 )
          KiAbEntryRemoveFromTree(v53, v49, v50);
        v105 = *(_DWORD *)(v53 + 88) & 0x1FFFF;
        *(_DWORD *)(v53 + 88) &= 0xFFFE0000;
        *(_BYTE *)(v53 + 25) &= ~1u;
        *(_QWORD *)(v53 + 32) = 0LL;
        v54 = (signed __int64)(v53 - (unsigned __int64)v46->LockEntries) / 96;
        if ( v48 == 1 )
          v46->AbEntrySummary |= 1 << v54;
        else
          _InterlockedOr8((volatile signed __int8 *)&v46->AbOrphanedEntrySummary, 1 << v54);
      }
      --v46->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)v46, v45, &v105);
      v51 = v46->SpecialApcDisable++ == -1;
      if ( v51 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v46->ApcState.ApcListHead[0].Flink != &v46->152 )
        KiCheckForKernelApcDelivery(v56);
      KiLeaveGuardedRegionUnsafe((__int64)CurrentThread, v55, v57, v58);
      v33 = v103;
      v59 = v102;
    }
    else
    {
      v59 = v102;
      v74 = (volatile LONG *)((char *)&unk_140C4CCF0 + 16 * (unsigned __int8)(v102 >> 30));
      v75 = ExAcquireSpinLockExclusive(v74 + 3);
      ++*((_DWORD *)v74 + 2);
      v76 = 0;
      v77 = *(_QWORD **)v74;
      v78 = v75;
      if ( *(_QWORD *)v74 )
      {
        while ( 1 )
        {
          v79 = v77[11] & 0xFFFFFFFFFFFFF000uLL;
          if ( v59 >= v79 + v77[4] || v59 >= v79 )
          {
            v80 = (_QWORD *)v77[1];
            if ( !v80 )
            {
              v76 = 1;
              break;
            }
          }
          else
          {
            v80 = (_QWORD *)*v77;
            if ( !*v77 )
            {
              v76 = 0;
              break;
            }
          }
          v77 = v80;
        }
      }
      RtlAvlInsertNodeEx((unsigned __int64 *)v74, (unsigned __int64)v77, v76, v11);
      ExReleaseSpinLockExclusiveFromDpcLevel(v74 + 3);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v78 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v84 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v78 + 1));
            v51 = (v84 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v84;
            if ( v51 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(v78);
    }
    if ( (v11[14] & 1) != 0 )
      _InterlockedIncrement((volatile signed __int32 *)(v101 + 92));
    v60 = 0LL;
    if ( v95 < 3 )
    {
      v85 = *(_QWORD *)(v33 + 8);
      v86 = v59;
      v87 = MiLargePageSizes[v95];
      v88 = v85 + 8 * v109;
      v89 = v85 + 8LL * *(unsigned int *)(v33 + 44);
      if ( v98 )
      {
        v90 = (unsigned int)MiGetAnyMultiplexedVm(3);
        do
        {
          if ( v88 == v89 )
          {
            v103 = *(_QWORD *)(v103 + 16);
            v88 = *(_QWORD *)(v103 + 8);
            v89 = v88 + 8LL * *(unsigned int *)(v103 + 44);
          }
          v91 = *(_QWORD *)v88;
          if ( MiPteInShadowRange(v88)
            && (MiFlags & 0xC00000) != 0
            && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
            && (v91 & 1) != 0
            && ((v91 & 0x20) == 0 || (v91 & 0x42) == 0) )
          {
            Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( Flink )
            {
              v93 = *((_QWORD *)&Flink->Flink + ((v88 >> 3) & 0x1FF));
              v94 = v91 | 0x20;
              if ( (v93 & 0x20) == 0 )
                v94 = v91;
              v91 = v94;
              if ( (v93 & 0x42) != 0 )
                v91 = v94 | 0x42;
            }
          }
          MiMapWithLargePages(v90, v86, v91 >> 12, v87, v95, 4, 1);
          v86 += (_DWORD)v87 << 12;
          v88 += 8 * v87;
          v60 += v87;
        }
        while ( v60 < v98 );
        v59 = v102;
      }
      v67 = 0;
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
          if ( MiPteInShadowRange((unsigned __int64)v64) )
          {
            if ( (unsigned int)MiPteHasShadow(v66, v65) )
            {
              if ( !HIBYTE(word_140C4DF48) && (ZeroPte & 1) != 0 )
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
      v67 = MiAddMappedPtes((_DWORD)v12, v13, v101, (_DWORD)a4, SessionId, 0);
      if ( v67 < 0 )
      {
        ++*(_DWORD *)(a1 + 28);
        MiRemoveFromSystemSpace((_QWORD *)a1, v59, 0);
        return (unsigned int)v67;
      }
    }
    *a7 = v59;
    return (unsigned int)v67;
  }
  if ( (v31 & 0x4000000) != 0 )
  {
    v96 = -1;
    if ( (int)MiCreatePerSessionProtos(v27, 0xFFFFFFFFLL) < 0 )
    {
      v32 = v100;
      v23 = -1073741801;
      v10 = 0x7FFFF;
LABEL_91:
      v15 = v99;
      v16 = v97;
      goto LABEL_92;
    }
  }
  v32 = *(_QWORD *)(*(_QWORD *)v27 + 48LL);
  if ( !v32 || (unsigned int)MiChargeCommit(v97, v32, 0) )
  {
    if ( v30 != 2 )
      goto LABEL_22;
    v71 = v20 | 8;
    v103 = v101 + 128;
    v33 = v101 + 128;
    active = MiReferenceActiveSubsection((__int64 *)(v101 + 128), v71, 0x11u);
    v23 = active;
    if ( active >= 0 )
      goto LABEL_23;
    goto LABEL_90;
  }
  v14 = v95;
  v70 = 0;
  v15 = v99;
  v32 = 0LL;
  v10 = v96;
  v23 = -1073741523;
  v16 = v97;
  v17 = v98;
LABEL_94:
  ++*(_DWORD *)(a1 + 28);
  if ( v12 )
  {
    if ( v14 >= 3 )
      MiReleasePtes((__int64)v15, v12, v17);
    else
      MiUnmapLargePages(v102, v17 << 12, 9LL);
    v16 = v97;
    v70 = 0;
    v14 = v95;
  }
  if ( v112 == 1 )
  {
    v51 = v9 == 2;
    v73 = v101;
    LOBYTE(v70) = v14 < 3;
    MiDereferenceDataSubsections(v101, (_DWORD)a4, v13, v70, !v51);
    v16 = v97;
  }
  else
  {
    v73 = v101;
  }
  if ( v10 != 0x7FFFF )
  {
    MiDereferencePerSessionProtos(v73, v10);
    v16 = v97;
  }
  if ( v32 )
    MiReturnCommit(v16, v32);
  if ( v11 )
    ExFreePoolWithTag(v11, 0);
  return (unsigned int)v23;
}
