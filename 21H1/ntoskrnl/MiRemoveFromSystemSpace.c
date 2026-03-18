/*
 * XREFs of MiRemoveFromSystemSpace @ 0x1402AA180
 * Callers:
 *     MiInsertInSystemSpace @ 0x1402BD160 (MiInsertInSystemSpace.c)
 *     MmUnmapViewInSystemSpace @ 0x14063AD00 (MmUnmapViewInSystemSpace.c)
 *     MiUnmapImageInSystemSpace @ 0x1406CA3B4 (MiUnmapImageInSystemSpace.c)
 * Callees:
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
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14026B750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiUnlockWorkingSetExclusive @ 0x14026C350 (MiUnlockWorkingSetExclusive.c)
 *     RtlAvlRemoveNode @ 0x140296CC0 (RtlAvlRemoveNode.c)
 *     MiGetAnyMultiplexedVm @ 0x1402A9158 (MiGetAnyMultiplexedVm.c)
 *     MiRemoveMappedPtes @ 0x1402B38F0 (MiRemoveMappedPtes.c)
 *     KiAbEntryRemoveFromTree @ 0x1403410E0 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x1403599E0 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     MiUnmapLargePages @ 0x140391E04 (MiUnmapLargePages.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     memset @ 0x140408F80 (memset.c)
 *     MiDereferencePerSessionProtos @ 0x1406E678C (MiDereferencePerSessionProtos.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void __fastcall MiRemoveFromSystemSpace(_QWORD *a1, ULONG_PTR a2, int a3)
{
  _QWORD *v4; // rbp
  struct _KTHREAD *CurrentThread; // r12
  _QWORD *v6; // r14
  _QWORD *v7; // rdx
  unsigned int SessionId; // r13d
  __int64 v9; // r15
  LONG *SharedVm; // rbx
  KIRQL v11; // al
  unsigned __int8 v12; // di
  unsigned __int64 i; // rbx
  unsigned __int64 v14; // r8
  struct _DMA_ADAPTER *v15; // r12
  __int64 v16; // r15
  unsigned __int64 v17; // rbp
  struct _KTHREAD *v18; // rdi
  __int64 v19; // r8
  __int64 v20; // rdx
  bool v21; // zf
  __int64 v22; // rcx
  __int64 v23; // rsi
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdx
  unsigned __int64 v30; // rdx
  void *v31; // rcx
  volatile LONG *v32; // rdi
  KIRQL v33; // al
  unsigned __int64 v34; // rbp
  unsigned __int64 v35; // r8
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v39; // eax
  int v40; // [rsp+30h] [rbp-F8h] BYREF
  __int64 AnyMultiplexedVm; // [rsp+38h] [rbp-F0h]
  unsigned __int64 v42; // [rsp+40h] [rbp-E8h]
  struct _KTHREAD *v43; // [rsp+48h] [rbp-E0h]
  __int64 v44[27]; // [rsp+50h] [rbp-D8h] BYREF
  unsigned __int8 AbAllocationRegionCount; // [rsp+138h] [rbp+10h]

  v4 = a1;
  memset(v44, 0, 0x90uLL);
  CurrentThread = KeGetCurrentThread();
  v43 = CurrentThread;
  v6 = (_QWORD *)(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  if ( v4 == (_QWORD *)&unk_140C4CCA8 )
  {
    v42 = 0LL;
    AnyMultiplexedVm = (__int64)MiGetAnyMultiplexedVm(1);
  }
  else
  {
    AnyMultiplexedVm = MiGetSessionVm();
    v42 = CurrentThread->ApcState.Process[1].AffinityPadding[5];
  }
  SessionId = -1;
  if ( (a2 & 0x3FFFFFFF) == 0 && v4 == v7 )
  {
    v32 = (volatile LONG *)((char *)&unk_140C4CCF0 + 16 * (unsigned __int8)(a2 >> 30));
    v33 = ExAcquireSpinLockExclusive(v32 + 3);
    i = *(_QWORD *)v32;
    v34 = v33;
    while ( i )
    {
      v35 = *(_QWORD *)(i + 88) & 0xFFFFFFFFFFFFF000uLL;
      if ( a2 >= v35 + *(_QWORD *)(i + 32) )
      {
        i = *(_QWORD *)(i + 8);
      }
      else
      {
        if ( a2 >= v35 )
        {
          RtlAvlRemoveNode((unsigned __int64 *)v32, (unsigned __int64 *)i);
          --*((_DWORD *)v32 + 2);
          break;
        }
        i = *(_QWORD *)i;
      }
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(v32 + 3);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v34 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v39 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v34 + 1));
          v21 = (v39 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v39;
          if ( v21 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v34);
    if ( i )
    {
      v15 = *(struct _DMA_ADAPTER **)(i + 64);
      v16 = **(_QWORD **)(i + 48);
      goto LABEL_28;
    }
    v4 = a1;
  }
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx(v4[1], 0LL);
  v9 = AnyMultiplexedVm;
  SharedVm = MiGetSharedVm(AnyMultiplexedVm);
  v11 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  v12 = v11;
  for ( i = v4[2]; ; i = *(_QWORD *)i )
  {
    while ( 1 )
    {
      if ( !i )
        KeBugCheckEx(0xD7u, a2, 1uLL, 0LL, 0LL);
      v14 = *(_QWORD *)(i + 88) & 0xFFFFFFFFFFFFF000uLL;
      if ( a2 < v14 + *(_QWORD *)(i + 32) )
        break;
      i = *(_QWORD *)(i + 8);
    }
    if ( a2 >= v14 )
      break;
  }
  --*((_DWORD *)v4 + 6);
  RtlAvlRemoveNode(v4 + 2, (unsigned __int64 *)i);
  MiUnlockWorkingSetExclusive(v9, v12);
  v15 = *(struct _DMA_ADAPTER **)(i + 64);
  v16 = **(_QWORD **)(i + 48);
  v44[0] = v16;
  MiManageSubsectionView(v44, (_QWORD *)(i + 72), 4);
  v17 = v4[1];
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v17, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v17);
  v40 = 0;
  v18 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(v17) == 1 )
    SessionId = MmGetSessionIdEx((__int64)v18->ApcState.Process);
  --v18->SpecialApcDisable;
  ++v18->AbAllocationRegionCount;
  v19 = v17 & 0x7FFFFFFFFFFFFFFCLL;
  AbAllocationRegionCount = v18->AbAllocationRegionCount;
  LODWORD(v20) = ((char)v18->AbEntrySummary | (char)v18->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v21 = !_BitScanReverse((unsigned int *)&v22, v20);
    if ( v21 )
      break;
    v23 = (__int64)&v18->LockEntries[v22];
    v20 = ~(1 << v22) & (unsigned int)v20;
    if ( (*(_BYTE *)(v23 + 26) & 1) != 0
      && (*(_DWORD *)(v23 + 32) & 1) == 0
      && (*(_QWORD *)(v23 + 32) & 0x7FFFFFFFFFFFFFFCLL) == v19
      && *(_DWORD *)(v23 + 40) == SessionId )
    {
      *(_BYTE *)(v23 + 26) &= ~1u;
      if ( *(_QWORD *)(v23 + 32) )
      {
        if ( v23 )
        {
          *(_BYTE *)(v23 + 32) |= 2u;
          if ( *(__int64 *)(v23 + 32) < 0 )
            KiAbEntryRemoveFromTree(v23, v20, v19);
          v40 = *(_DWORD *)(v23 + 88) & 0x1FFFF;
          *(_DWORD *)(v23 + 88) &= 0xFFFE0000;
          *(_BYTE *)(v23 + 25) &= ~1u;
          *(_QWORD *)(v23 + 32) = 0LL;
          v24 = (signed __int64)(v23 - (unsigned __int64)v18->LockEntries) / 96;
          if ( AbAllocationRegionCount == 1 )
            v18->AbEntrySummary |= 1 << v24;
          else
            _InterlockedOr8((volatile signed __int8 *)&v18->AbOrphanedEntrySummary, 1 << v24);
          goto LABEL_24;
        }
        break;
      }
    }
  }
  if ( (*((_DWORD *)&v18->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v18, v17, SessionId, 0LL);
LABEL_24:
  --v18->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v18, v17, &v40);
  v21 = v18->SpecialApcDisable++ == -1;
  if ( v21 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v18->ApcState.ApcListHead[0].Flink != &v18->152 )
    KiCheckForKernelApcDelivery(v26);
  KiLeaveGuardedRegionUnsafe((__int64)v43, v25, v27, v28);
LABEL_28:
  if ( v15 )
    HalPutDmaAdapter(v15);
  if ( (*(_DWORD *)(i + 56) & 1) != 0 )
    _InterlockedAdd((volatile signed __int32 *)(v16 + 92), 0xFFFFFFFF);
  if ( a3 == 1 )
    MiRemoveMappedPtes(i, AnyMultiplexedVm);
  v29 = *(unsigned int *)(i + 100);
  if ( (_DWORD)v29 != 0x7FFFF )
    MiDereferencePerSessionProtos(v16, v29);
  v30 = ((*(_QWORD *)(i + 32) >> 12) + 15LL) & 0xFFFFFFFFFFFFFFF0uLL;
  if ( (*(_BYTE *)(i + 56) & 0x18) == 0x18 )
  {
    if ( a1 == (_QWORD *)&unk_140C4CCA8 )
      v31 = &unk_140C4EA38;
    else
      v31 = (void *)(v42 + 880);
    MiReleasePtes((__int64)v31, v6, v30);
  }
  else
  {
    MiUnmapLargePages(*(_QWORD *)(i + 88) & 0xFFFFFFFFFFFFF000uLL, v30 << 12, 9LL);
  }
  ExFreePoolWithTag((PVOID)i, 0);
}
