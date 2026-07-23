/*
 * XREFs of MiRemoveFromSystemSpace @ 0x14030FB9C
 * Callers:
 *     MiInsertInSystemSpace @ 0x140305B30 (MiInsertInSystemSpace.c)
 *     MmUnmapViewInSystemSpace @ 0x14060ACA0 (MmUnmapViewInSystemSpace.c)
 *     MiUnmapImageInSystemSpace @ 0x1406C3BF4 (MiUnmapImageInSystemSpace.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x14020C630 (KiAbEntryRemoveFromTree.c)
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     MiGetSharedVm @ 0x1402BF850 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1402C13E0 (MiUnlockWorkingSetExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x1402C1960 (ExAcquireSpinLockExclusive.c)
 *     RtlAvlRemoveNode @ 0x1402D9370 (RtlAvlRemoveNode.c)
 *     MiReleasePtes @ 0x1402EA050 (MiReleasePtes.c)
 *     KiCheckForKernelApcDelivery @ 0x1402EEF30 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     MiGetAnyMultiplexedVm @ 0x140307E4C (MiGetAnyMultiplexedVm.c)
 *     MiRemoveMappedPtes @ 0x140313250 (MiRemoveMappedPtes.c)
 *     MiManageSubsectionView @ 0x14031BE50 (MiManageSubsectionView.c)
 *     MiGetSessionVm @ 0x14031CEEC (MiGetSessionVm.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiGetSystemRegionType @ 0x1403556A0 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140355A50 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140355BB0 (MmGetSessionIdEx.c)
 *     MiUnmapLargePages @ 0x140395434 (MiUnmapLargePages.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     memset @ 0x140414300 (memset.c)
 *     MiDereferencePerSessionProtos @ 0x14061B9CC (MiDereferencePerSessionProtos.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall MiRemoveFromSystemSpace(_QWORD *a1, ULONG_PTR a2, int a3)
{
  _QWORD *v4; // rbp
  __int64 v5; // rcx
  __int64 v6; // r8
  struct _KTHREAD *CurrentThread; // r12
  _QWORD *v8; // r14
  _QWORD *v9; // rdx
  unsigned int SessionId; // r13d
  LONG *SharedVm; // rbx
  KIRQL v12; // al
  unsigned __int8 v13; // di
  unsigned __int64 i; // rbx
  unsigned __int64 v15; // r8
  struct _DMA_ADAPTER *v16; // r12
  __int64 v17; // r15
  ULONG_PTR v18; // rbp
  struct _KTHREAD *v19; // rdi
  unsigned int v20; // edx
  bool v21; // zf
  __int64 v22; // rcx
  __int64 v23; // rsi
  __int64 v24; // rdx
  __int64 v25; // rdx
  unsigned __int64 v26; // rdx
  void *v27; // rcx
  volatile LONG *v28; // rdi
  KIRQL v29; // al
  unsigned __int64 v30; // rbp
  unsigned __int64 v31; // r8
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v35; // eax
  char *AnyMultiplexedVm; // [rsp+38h] [rbp-F0h]
  unsigned __int64 v37; // [rsp+40h] [rbp-E8h]
  struct _KTHREAD *v38; // [rsp+48h] [rbp-E0h]
  _QWORD v39[27]; // [rsp+50h] [rbp-D8h] BYREF
  unsigned __int8 v41; // [rsp+138h] [rbp+10h]

  v4 = a1;
  memset(v39, 0, 0x90uLL);
  CurrentThread = KeGetCurrentThread();
  v38 = CurrentThread;
  v8 = (_QWORD *)(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  if ( v4 == (_QWORD *)&unk_140C4CDA8 )
  {
    v37 = 0LL;
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  }
  else
  {
    AnyMultiplexedVm = (char *)MiGetSessionVm(v5, &unk_140C4CDA8, v6);
    v37 = CurrentThread->ApcState.Process[1].AffinityPadding[5];
  }
  SessionId = -1;
  if ( (a2 & 0x3FFFFFFF) == 0 && v4 == v9 )
  {
    v28 = (volatile LONG *)((char *)&unk_140C4CDF0 + 16 * (unsigned __int8)(a2 >> 30));
    v29 = ExAcquireSpinLockExclusive(v28 + 3);
    i = *(_QWORD *)v28;
    v30 = v29;
    while ( i )
    {
      v31 = *(_QWORD *)(i + 88) & 0xFFFFFFFFFFFFF000uLL;
      if ( a2 >= v31 + *(_QWORD *)(i + 32) )
      {
        i = *(_QWORD *)(i + 8);
      }
      else
      {
        if ( a2 >= v31 )
        {
          RtlAvlRemoveNode((unsigned __int64 *)v28, (unsigned __int64 *)i);
          --*((_DWORD *)v28 + 2);
          break;
        }
        i = *(_QWORD *)i;
      }
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(v28 + 3);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v30 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v35 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v30 + 1));
          v21 = (v35 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v35;
          if ( v21 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v30);
    if ( i )
    {
      v16 = *(struct _DMA_ADAPTER **)(i + 64);
      v17 = **(_QWORD **)(i + 48);
      goto LABEL_28;
    }
    v4 = a1;
  }
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx(v4[1], 0LL);
  SharedVm = MiGetSharedVm((__int64)AnyMultiplexedVm);
  v12 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  v13 = v12;
  for ( i = v4[2]; ; i = *(_QWORD *)i )
  {
    while ( 1 )
    {
      if ( !i )
        KeBugCheckEx(0xD7u, a2, 1uLL, 0LL, 0LL);
      v15 = *(_QWORD *)(i + 88) & 0xFFFFFFFFFFFFF000uLL;
      if ( a2 < v15 + *(_QWORD *)(i + 32) )
        break;
      i = *(_QWORD *)(i + 8);
    }
    if ( a2 >= v15 )
      break;
  }
  --*((_DWORD *)v4 + 6);
  RtlAvlRemoveNode(v4 + 2, (unsigned __int64 *)i);
  MiUnlockWorkingSetExclusive((__int64)AnyMultiplexedVm, v13);
  v16 = *(struct _DMA_ADAPTER **)(i + 64);
  v17 = **(_QWORD **)(i + 48);
  v39[0] = v17;
  MiManageSubsectionView(v39, i + 72, 4LL);
  v18 = v4[1];
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v18, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v18);
  v19 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(v18) == 1 )
    SessionId = MmGetSessionIdEx(v19->ApcState.Process);
  --v19->SpecialApcDisable;
  v41 = ++v19->AbAllocationRegionCount;
  v20 = ((char)v19->AbEntrySummary | (char)v19->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v21 = !_BitScanReverse((unsigned int *)&v22, v20);
    if ( v21 )
      break;
    v23 = (__int64)&v19->LockEntries[v22];
    v20 &= ~(1 << v22);
    if ( (*(_BYTE *)(v23 + 26) & 1) != 0
      && (*(_DWORD *)(v23 + 32) & 1) == 0
      && (*(_QWORD *)(v23 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v18 & 0x7FFFFFFFFFFFFFFCLL)
      && *(_DWORD *)(v23 + 40) == SessionId )
    {
      *(_BYTE *)(v23 + 26) &= ~1u;
      if ( *(_QWORD *)(v23 + 32) )
      {
        if ( v23 )
        {
          *(_BYTE *)(v23 + 32) |= 2u;
          if ( *(__int64 *)(v23 + 32) < 0 )
            KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v23);
          *(_DWORD *)(v23 + 88) &= 0xFFFE0000;
          *(_BYTE *)(v23 + 25) &= ~1u;
          *(_QWORD *)(v23 + 32) = 0LL;
          v24 = (signed __int64)(v23 - (unsigned __int64)v19->LockEntries) / 96;
          if ( v41 == 1 )
            v19->AbEntrySummary |= 1 << v24;
          else
            _InterlockedOr8((volatile signed __int8 *)&v19->AbOrphanedEntrySummary, 1 << v24);
          goto LABEL_24;
        }
        break;
      }
    }
  }
  if ( (*((_DWORD *)&v19->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v19, v18, SessionId, 0LL);
LABEL_24:
  --v19->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v19);
  v21 = v19->SpecialApcDisable++ == -1;
  if ( v21 && ($C459BD0D405E8E46662177FB3D0A143F *)v19->ApcState.ApcListHead[0].Flink != &v19->152 )
    KiCheckForKernelApcDelivery();
  KiLeaveGuardedRegionUnsafe(v38);
LABEL_28:
  if ( v16 )
    HalPutDmaAdapter(v16);
  if ( (*(_DWORD *)(i + 56) & 1) != 0 )
    _InterlockedAdd((volatile signed __int32 *)(v17 + 92), 0xFFFFFFFF);
  if ( a3 == 1 )
    MiRemoveMappedPtes(i, AnyMultiplexedVm);
  v25 = *(unsigned int *)(i + 100);
  if ( (_DWORD)v25 != 0x7FFFF )
    MiDereferencePerSessionProtos(v17, v25);
  v26 = ((*(_QWORD *)(i + 32) >> 12) + 15LL) & 0xFFFFFFFFFFFFFFF0uLL;
  if ( (*(_BYTE *)(i + 56) & 0x18) == 0x18 )
  {
    if ( a1 == (_QWORD *)&unk_140C4CDA8 )
      v27 = &unk_140C4EB38;
    else
      v27 = (void *)(v37 + 880);
    MiReleasePtes((__int64)v27, v8, v26);
  }
  else
  {
    MiUnmapLargePages(*(_QWORD *)(i + 88) & 0xFFFFFFFFFFFFF000uLL, v26 << 12, 9LL);
  }
  ExFreePoolWithTag((PVOID)i, 0);
}
