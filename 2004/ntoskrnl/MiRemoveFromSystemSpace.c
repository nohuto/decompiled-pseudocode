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
  unsigned int v22; // edx
  bool v23; // zf
  __int64 v24; // rcx
  __int64 v25; // rsi
  __int64 v26; // rdx
  __int64 v27; // rdx
  unsigned __int64 v28; // rdx
  void *v29; // rcx
  volatile LONG *v30; // rdi
  KIRQL v31; // al
  unsigned __int64 v32; // rbp
  unsigned __int64 v33; // r8
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v37; // eax
  int v38; // [rsp+30h] [rbp-F8h] BYREF
  char *AnyMultiplexedVm; // [rsp+38h] [rbp-F0h]
  unsigned __int64 v40; // [rsp+40h] [rbp-E8h]
  struct _KTHREAD *v41; // [rsp+48h] [rbp-E0h]
  _QWORD v42[27]; // [rsp+50h] [rbp-D8h] BYREF
  unsigned __int8 v44; // [rsp+138h] [rbp+10h]

  v4 = a1;
  memset(v42, 0, 0x90uLL);
  CurrentThread = KeGetCurrentThread();
  v41 = CurrentThread;
  v8 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( v4 == (_QWORD *)&unk_140C4CB68 )
  {
    v40 = 0LL;
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  }
  else
  {
    AnyMultiplexedVm = (char *)MiGetSessionVm(v5, &unk_140C4CB68, v6);
    v40 = CurrentThread->ApcState.Process[1].AffinityPadding[5];
  }
  SessionId = -1;
  if ( (a2 & 0x3FFFFFFF) == 0 && v4 == v9 )
  {
    v30 = (volatile LONG *)((char *)&unk_140C4CBB0 + 16 * (unsigned __int8)(a2 >> 30));
    v31 = ExAcquireSpinLockExclusive(v30 + 3);
    i = *(_QWORD *)v30;
    v32 = v31;
    while ( i )
    {
      v33 = *(_QWORD *)(i + 88) & 0xFFFFFFFFFFFFF000uLL;
      if ( a2 >= v33 + *(_QWORD *)(i + 32) )
      {
        i = *(_QWORD *)(i + 8);
      }
      else
      {
        if ( a2 >= v33 )
        {
          RtlAvlRemoveNode((unsigned __int64 *)v30, (unsigned __int64 *)i);
          --*((_DWORD *)v30 + 2);
          break;
        }
        i = *(_QWORD *)i;
      }
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(v30 + 3);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v32 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v37 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v32 + 1));
          v23 = (v37 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v37;
          if ( v23 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v32);
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
  v42[0] = v19;
  MiManageSubsectionView(v42, i + 72, 4LL);
  v20 = v4[1];
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v20, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v20);
  v38 = 0;
  v21 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(v20) == 1 )
    SessionId = MmGetSessionIdEx((__int64)v21->ApcState.Process);
  --v21->SpecialApcDisable;
  v44 = ++v21->AbAllocationRegionCount;
  v22 = ((char)v21->AbEntrySummary | (char)v21->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v23 = !_BitScanReverse((unsigned int *)&v24, v22);
    if ( v23 )
      break;
    v25 = (__int64)&v21->LockEntries[v24];
    v22 &= ~(1 << v24);
    if ( (*(_BYTE *)(v25 + 26) & 1) != 0
      && (*(_DWORD *)(v25 + 32) & 1) == 0
      && (*(_QWORD *)(v25 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v20 & 0x7FFFFFFFFFFFFFFCLL)
      && *(_DWORD *)(v25 + 40) == SessionId )
    {
      *(_BYTE *)(v25 + 26) &= ~1u;
      if ( *(_QWORD *)(v25 + 32) )
      {
        if ( v25 )
        {
          *(_BYTE *)(v25 + 32) |= 2u;
          if ( *(__int64 *)(v25 + 32) < 0 )
            KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v25);
          v38 = *(_DWORD *)(v25 + 88) & 0x1FFFF;
          *(_DWORD *)(v25 + 88) &= 0xFFFE0000;
          *(_BYTE *)(v25 + 25) &= ~1u;
          *(_QWORD *)(v25 + 32) = 0LL;
          v26 = (signed __int64)(v25 - (unsigned __int64)v21->LockEntries) / 96;
          if ( v44 == 1 )
            v21->AbEntrySummary |= 1 << v26;
          else
            _InterlockedOr8((volatile signed __int8 *)&v21->AbOrphanedEntrySummary, 1 << v26);
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
  KiAbThreadRemoveBoosts((ULONG_PTR)v21, v20, &v38);
  v23 = v21->SpecialApcDisable++ == -1;
  if ( v23 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v21->ApcState.ApcListHead[0].Flink != &v21->152 )
    KiCheckForKernelApcDelivery();
  KiLeaveGuardedRegionUnsafe((__int64)v41);
LABEL_28:
  if ( v18 )
    HalPutDmaAdapter(v18);
  if ( (*(_DWORD *)(i + 56) & 1) != 0 )
    _InterlockedAdd((volatile signed __int32 *)(v19 + 92), 0xFFFFFFFF);
  if ( a3 == 1 )
    MiRemoveMappedPtes(i, AnyMultiplexedVm);
  v27 = *(unsigned int *)(i + 100);
  if ( (_DWORD)v27 != 0x7FFFF )
    MiDereferencePerSessionProtos(v19, v27);
  v28 = ((*(_QWORD *)(i + 32) >> 12) + 15LL) & 0xFFFFFFFFFFFFFFF0uLL;
  if ( (*(_BYTE *)(i + 56) & 0x18) == 0x18 )
  {
    if ( a1 == (_QWORD *)&unk_140C4CB68 )
      v29 = &unk_140C4E8F8;
    else
      v29 = (void *)(v40 + 880);
    MiReleasePtes(v29, v8, (unsigned int)v28);
  }
  else
  {
    MiUnmapLargePages(*(_QWORD *)(i + 88) & 0xFFFFFFFFFFFFF000uLL, v28 << 12, 9LL);
  }
  ExFreePoolWithTag((PVOID)i, 0);
}
