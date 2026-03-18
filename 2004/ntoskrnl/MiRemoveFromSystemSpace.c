/*
 * XREFs of MiRemoveFromSystemSpace @ 0x140251150
 * Callers:
 *     MiInsertInSystemSpace @ 0x140264130 (MiInsertInSystemSpace.c)
 *     MmUnmapViewInSystemSpace @ 0x140605CC0 (MmUnmapViewInSystemSpace.c)
 *     MiUnmapImageInSystemSpace @ 0x1406EB634 (MiUnmapImageInSystemSpace.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x140207A80 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140207E30 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140207EC0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140207F90 (MmGetSessionIdEx.c)
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140212700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiUnlockWorkingSetExclusive @ 0x140213300 (MiUnlockWorkingSetExclusive.c)
 *     RtlAvlRemoveNode @ 0x14023DC90 (RtlAvlRemoveNode.c)
 *     MiGetAnyMultiplexedVm @ 0x140250128 (MiGetAnyMultiplexedVm.c)
 *     MiRemoveMappedPtes @ 0x14025A8C0 (MiRemoveMappedPtes.c)
 *     KiAbEntryRemoveFromTree @ 0x140272F70 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x140273D40 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 *     MiReleasePtes @ 0x140284720 (MiReleasePtes.c)
 *     MiGetSharedVm @ 0x1402AD3F0 (MiGetSharedVm.c)
 *     MiManageSubsectionView @ 0x1402BD190 (MiManageSubsectionView.c)
 *     MiGetSessionVm @ 0x1402BE22C (MiGetSessionVm.c)
 *     ExAcquireSpinLockExclusive @ 0x1402CF510 (ExAcquireSpinLockExclusive.c)
 *     MiUnmapLargePages @ 0x1403929B4 (MiUnmapLargePages.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     memset @ 0x14040A280 (memset.c)
 *     MiDereferencePerSessionProtos @ 0x14070A60C (MiDereferencePerSessionProtos.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

void __fastcall MiRemoveFromSystemSpace(_QWORD *a1, ULONG_PTR a2, int a3)
{
  _QWORD *v4; // rbp
  __int64 v5; // rcx
  __int64 v6; // r8
  struct _KTHREAD *CurrentThread; // r12
  __int64 v8; // r14
  _QWORD *v9; // rdx
  unsigned int SessionId; // r13d
  __int64 v11; // r15
  __int64 v12; // rdx
  __int64 SharedVm; // rbx
  KIRQL v14; // al
  unsigned __int8 v15; // di
  unsigned __int64 i; // rbx
  unsigned __int64 v17; // r8
  struct _DMA_ADAPTER *v18; // r12
  __int64 v19; // r15
  unsigned __int64 v20; // rbp
  struct _KTHREAD *v21; // rdi
  __int64 v22; // r8
  __int64 v23; // rdx
  bool v24; // zf
  __int64 v25; // rcx
  __int64 v26; // rsi
  __int64 v27; // rdx
  __int64 v28; // rdx
  unsigned __int64 v29; // rdx
  void *v30; // rcx
  volatile LONG *v31; // rdi
  KIRQL v32; // al
  unsigned __int64 v33; // rbp
  unsigned __int64 v34; // r8
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v38; // eax
  int v39; // [rsp+30h] [rbp-F8h] BYREF
  char *AnyMultiplexedVm; // [rsp+38h] [rbp-F0h]
  unsigned __int64 v41; // [rsp+40h] [rbp-E8h]
  struct _KTHREAD *v42; // [rsp+48h] [rbp-E0h]
  _QWORD v43[27]; // [rsp+50h] [rbp-D8h] BYREF
  unsigned __int8 AbAllocationRegionCount; // [rsp+138h] [rbp+10h]

  v4 = a1;
  memset(v43, 0, 0x90uLL);
  CurrentThread = KeGetCurrentThread();
  v42 = CurrentThread;
  v8 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( v4 == (_QWORD *)&unk_140C4CB68 )
  {
    v41 = 0LL;
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  }
  else
  {
    AnyMultiplexedVm = (char *)MiGetSessionVm(v5, &unk_140C4CB68, v6);
    v41 = CurrentThread->ApcState.Process[1].AffinityPadding[5];
  }
  SessionId = -1;
  if ( (a2 & 0x3FFFFFFF) == 0 && v4 == v9 )
  {
    v31 = (volatile LONG *)((char *)&unk_140C4CBB0 + 16 * (unsigned __int8)(a2 >> 30));
    v32 = ExAcquireSpinLockExclusive(v31 + 3);
    i = *(_QWORD *)v31;
    v33 = v32;
    while ( i )
    {
      v34 = *(_QWORD *)(i + 88) & 0xFFFFFFFFFFFFF000uLL;
      if ( a2 >= v34 + *(_QWORD *)(i + 32) )
      {
        i = *(_QWORD *)(i + 8);
      }
      else
      {
        if ( a2 >= v34 )
        {
          RtlAvlRemoveNode((unsigned __int64 *)v31, (unsigned __int64 *)i);
          --*((_DWORD *)v31 + 2);
          break;
        }
        i = *(_QWORD *)i;
      }
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(v31 + 3);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v33 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v38 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v33 + 1));
          v24 = (v38 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v38;
          if ( v24 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v33);
    if ( i )
    {
      v18 = *(struct _DMA_ADAPTER **)(i + 64);
      v19 = **(_QWORD **)(i + 48);
      goto LABEL_28;
    }
    v4 = a1;
  }
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx(v4[1], 0LL);
  v11 = (__int64)AnyMultiplexedVm;
  SharedVm = MiGetSharedVm(AnyMultiplexedVm, v12);
  v14 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
  *(_DWORD *)(SharedVm + 4) = 0;
  v15 = v14;
  for ( i = v4[2]; ; i = *(_QWORD *)i )
  {
    while ( 1 )
    {
      if ( !i )
        KeBugCheckEx(0xD7u, a2, 1uLL, 0LL, 0LL);
      v17 = *(_QWORD *)(i + 88) & 0xFFFFFFFFFFFFF000uLL;
      if ( a2 < v17 + *(_QWORD *)(i + 32) )
        break;
      i = *(_QWORD *)(i + 8);
    }
    if ( a2 >= v17 )
      break;
  }
  --*((_DWORD *)v4 + 6);
  RtlAvlRemoveNode(v4 + 2, (unsigned __int64 *)i);
  MiUnlockWorkingSetExclusive(v11, v15);
  v18 = *(struct _DMA_ADAPTER **)(i + 64);
  v19 = **(_QWORD **)(i + 48);
  v43[0] = v19;
  MiManageSubsectionView(v43, i + 72, 4LL);
  v20 = v4[1];
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v20, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v20);
  v39 = 0;
  v21 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(v20) == 1 )
    SessionId = MmGetSessionIdEx((__int64)v21->ApcState.Process);
  --v21->SpecialApcDisable;
  ++v21->AbAllocationRegionCount;
  v22 = v20 & 0x7FFFFFFFFFFFFFFCLL;
  AbAllocationRegionCount = v21->AbAllocationRegionCount;
  LODWORD(v23) = ((char)v21->AbEntrySummary | (char)v21->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v24 = !_BitScanReverse((unsigned int *)&v25, v23);
    if ( v24 )
      break;
    v26 = (__int64)&v21->LockEntries[v25];
    v23 = ~(1 << v25) & (unsigned int)v23;
    if ( (*(_BYTE *)(v26 + 26) & 1) != 0
      && (*(_DWORD *)(v26 + 32) & 1) == 0
      && (*(_QWORD *)(v26 + 32) & 0x7FFFFFFFFFFFFFFCLL) == v22
      && *(_DWORD *)(v26 + 40) == SessionId )
    {
      *(_BYTE *)(v26 + 26) &= ~1u;
      if ( *(_QWORD *)(v26 + 32) )
      {
        if ( v26 )
        {
          *(_BYTE *)(v26 + 32) |= 2u;
          if ( *(__int64 *)(v26 + 32) < 0 )
            KiAbEntryRemoveFromTree(v26, v23, v22);
          v39 = *(_DWORD *)(v26 + 88) & 0x1FFFF;
          *(_DWORD *)(v26 + 88) &= 0xFFFE0000;
          *(_BYTE *)(v26 + 25) &= ~1u;
          *(_QWORD *)(v26 + 32) = 0LL;
          v27 = (signed __int64)(v26 - (unsigned __int64)v21->LockEntries) / 96;
          if ( AbAllocationRegionCount == 1 )
            v21->AbEntrySummary |= 1 << v27;
          else
            _InterlockedOr8((volatile signed __int8 *)&v21->AbOrphanedEntrySummary, 1 << v27);
          goto LABEL_24;
        }
        break;
      }
    }
  }
  if ( (*((_DWORD *)&v21->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v21, v20, SessionId, 0LL);
LABEL_24:
  --v21->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v21, v20, &v39);
  v24 = v21->SpecialApcDisable++ == -1;
  if ( v24 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v21->ApcState.ApcListHead[0].Flink != &v21->152 )
    KiCheckForKernelApcDelivery();
  KiLeaveGuardedRegionUnsafe((__int64)v42);
LABEL_28:
  if ( v18 )
    HalPutDmaAdapter(v18);
  if ( (*(_DWORD *)(i + 56) & 1) != 0 )
    _InterlockedAdd((volatile signed __int32 *)(v19 + 92), 0xFFFFFFFF);
  if ( a3 == 1 )
    MiRemoveMappedPtes(i, AnyMultiplexedVm);
  v28 = *(unsigned int *)(i + 100);
  if ( (_DWORD)v28 != 0x7FFFF )
    MiDereferencePerSessionProtos(v19, v28);
  v29 = ((*(_QWORD *)(i + 32) >> 12) + 15LL) & 0xFFFFFFFFFFFFFFF0uLL;
  if ( (*(_BYTE *)(i + 56) & 0x18) == 0x18 )
  {
    if ( a1 == (_QWORD *)&unk_140C4CB68 )
      v30 = &unk_140C4E8F8;
    else
      v30 = (void *)(v41 + 880);
    MiReleasePtes(v30, v8, (unsigned int)v29);
  }
  else
  {
    MiUnmapLargePages(*(_QWORD *)(i + 88) & 0xFFFFFFFFFFFFF000uLL, v29 << 12, 9LL);
  }
  ExFreePoolWithTag((PVOID)i, 0);
}
